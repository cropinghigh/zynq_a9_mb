// SPDX-License-Identifier: GPL-2.0
/*
* Dummy display encoder with fixed resolutions
*
* Based on xlnx_sdi.c, digilent encoder module and Alinx LCD display driver
* 
*/

#include <linux/platform_device.h>
#include <drm/drm_atomic_helper.h>
#include <drm/drm_crtc_helper.h>
#include <drm/drm_probe_helper.h>
#include <linux/clk.h>
#include <linux/component.h>
#include <linux/device.h>
#include <linux/of_device.h>
#include <linux/of_graph.h>
#include <linux/phy/phy.h>
#include <video/videomode.h>
#include <drm/drm_edid.h>
#include <linux/i2c.h>

struct dumb_disp {
	struct drm_encoder encoder;
	struct drm_connector connector;
	struct device *dev;
	struct i2c_adapter *i2c_bus;
	bool i2c_present;
};

#define connector_to_dumb_disp(c) container_of(c, struct dumb_disp, connector)
#define encoder_to_dumb_disp(e) container_of(e, struct dumb_disp, encoder)

#define DISP_ENC_MAX_FREQ 150000  //KHz
#define DISP_ENC_MAX_H 1920
#define DISP_ENC_MAX_V 1080
#define DISP_ENC_PREF_H 1280
#define DISP_ENC_PREF_V 720

static enum drm_connector_status dumb_disp_connector_detect(struct drm_connector *connector, bool force) {
	struct dumb_disp* disp = connector_to_dumb_disp(connector);
	if (disp->i2c_present) {
		if (drm_probe_ddc(disp->i2c_bus))
			return connector_status_connected;
		return connector_status_disconnected;
	} else
		return connector_status_unknown;
	return connector_status_connected;
}

static void dumb_disp_connector_destroy(struct drm_connector *connector) {
	drm_connector_unregister(connector);
	drm_connector_cleanup(connector);
	connector->dev = NULL;
}

static const struct drm_connector_funcs dumb_disp_connector_funcs = {
	.detect = dumb_disp_connector_detect,
	.fill_modes = drm_helper_probe_single_connector_modes,
	.destroy = dumb_disp_connector_destroy,
	.atomic_duplicate_state	= drm_atomic_helper_connector_duplicate_state,
	.atomic_destroy_state = drm_atomic_helper_connector_destroy_state,
	.reset = drm_atomic_helper_connector_reset,
};

static struct drm_encoder *dumb_disp_connector_best_encoder(struct drm_connector *connector) {
	return &(connector_to_dumb_disp(connector)->encoder);
}

static int dumb_disp_connector_get_modes(struct drm_connector *connector) {
	struct dumb_disp* disp = connector_to_dumb_disp(connector);
	struct edid *edid;
	int num_modes = 0;
	
	if (disp->i2c_present) {
		edid = drm_get_edid(connector, disp->i2c_bus);
		/*
		*Other drivers tend to call update edid property after the call to 
		*drm_add_edid_modes. If problems with modesetting, this could be why.
		*/
		drm_connector_update_edid_property(connector, edid);
		if (edid) {
			num_modes = drm_add_edid_modes(connector, edid);
			kfree(edid);
		}
	} else {
		num_modes = drm_add_modes_noedid(connector, DISP_ENC_MAX_H, DISP_ENC_MAX_V);
		drm_set_preferred_mode(connector, DISP_ENC_PREF_H, DISP_ENC_PREF_V);
	}
	return num_modes;
}

static int dumb_disp_connector_mode_valid(struct drm_connector *connector, struct drm_display_mode *mode) {
	if (mode && 
		(mode->clock <= DISP_ENC_MAX_FREQ) &&
		(mode->hdisplay <= DISP_ENC_MAX_H) && 
		(mode->vdisplay <= DISP_ENC_MAX_V)) 
		return MODE_OK;
	return MODE_BAD;
}

static struct drm_connector_helper_funcs dumb_disp_connector_helper_funcs = {
	.get_modes = dumb_disp_connector_get_modes,
	.best_encoder = dumb_disp_connector_best_encoder,
	.mode_valid = dumb_disp_connector_mode_valid,
};

static int dumb_disp_create_connector(struct drm_encoder *encoder) {
	struct dumb_disp *disp = encoder_to_dumb_disp(encoder);
	struct drm_connector *connector = &disp->connector;
	int ret;

	connector->interlace_allowed = true;
	connector->doublescan_allowed = true;

	ret = drm_connector_init(encoder->dev, connector, &dumb_disp_connector_funcs, DRM_MODE_CONNECTOR_HDMIA);
	if (ret) {
		dev_err(disp->dev, "Failed to initialize dumb_disp connector\n");
		return ret;
	}

	drm_connector_helper_add(connector, &dumb_disp_connector_helper_funcs);
	drm_connector_register(connector);
	drm_connector_attach_encoder(connector, encoder);

	return 0;
}

static void dumb_disp_encoder_atomic_mode_set(struct drm_encoder *encoder, struct drm_crtc_state *crtc_state, struct drm_connector_state *connector_state) {
	struct dumb_disp *disp = encoder_to_dumb_disp(encoder);
	
	dev_info(disp->dev, "called dumb_disp_encoder_atomic_mode_set\n");
	
	//nothing is changed in dumb display encoder on mode set; actual timing is adjusted by pl-display driver via VTC config
}

static void dumb_disp_encoder_commit(struct drm_encoder *encoder) {
	struct dumb_disp *disp = encoder_to_dumb_disp(encoder);

	dev_info(disp->dev, "called dumb_disp_encoder_commit(aka enable)\n");
}

static void dumb_disp_encoder_disable(struct drm_encoder *encoder) {
	struct dumb_disp *disp = encoder_to_dumb_disp(encoder);

	dev_info(disp->dev, "called dumb_disp_encoder_disable\n");
}

static const struct drm_encoder_helper_funcs dumb_disp_encoder_helper_funcs = {
	.atomic_mode_set	= dumb_disp_encoder_atomic_mode_set,
	.enable			= dumb_disp_encoder_commit,
	.disable		= dumb_disp_encoder_disable,
};

static const struct drm_encoder_funcs dumb_disp_encoder_funcs = {
	.destroy = drm_encoder_cleanup,
};

static int dumb_disp_bind(struct device *dev, struct device *master, void *data) {
	struct dumb_disp *disp = dev_get_drvdata(dev);
	struct drm_encoder *encoder = &disp->encoder;
	struct drm_device *drm_dev = data;
	struct device_node *sub_node;
	int ret;
	
	/* get i2c adapter for edid */
	disp->i2c_present = false;

	sub_node = of_parse_phandle(dev->of_node, "disp,edid-i2c", 0);
	if (sub_node) {
		disp->i2c_bus = of_find_i2c_adapter_by_node(sub_node);
		if (!disp->i2c_bus) {
			dev_info(dev, "Deferring probe because i2c isn't ready yet\n");
			of_node_put(sub_node);
			return -EPROBE_DEFER;
			// dev_info(dev, "Failed to get the edid i2c adapter, using default modes\n");
		} else
			disp->i2c_present = true;
		of_node_put(sub_node);
	}

	encoder->possible_crtcs = 1;

	drm_encoder_init(drm_dev, encoder, &dumb_disp_encoder_funcs, DRM_MODE_ENCODER_TMDS, NULL);

	drm_encoder_helper_add(encoder, &dumb_disp_encoder_helper_funcs);

	ret = dumb_disp_create_connector(encoder);
	if (ret) {
		dev_err(disp->dev, "fail creating connector, ret = %d\n", ret);
		drm_encoder_cleanup(encoder);
	}
	return ret;
}

static void dumb_disp_unbind(struct device *dev, struct device *master, void *data) {
	struct dumb_disp *disp = dev_get_drvdata(dev);

	drm_encoder_cleanup(&disp->encoder);
	drm_connector_cleanup(&disp->connector);
}

static const struct component_ops dumb_disp_component_ops = {
	.bind	= dumb_disp_bind,
	.unbind	= dumb_disp_unbind,
};

static int dumb_disp_probe(struct platform_device *pdev) {
	struct device *dev = &pdev->dev;
	struct dumb_disp *disp;
	int ret;
	struct device_node *ports, *port;
	u32 nports = 0, portmask = 0;

	disp = devm_kzalloc(dev, sizeof(*disp), GFP_KERNEL);
	if (!disp)
		return -ENOMEM;

	disp->dev = dev;

	platform_set_drvdata(pdev, disp);

	/* in case all "port" nodes are grouped under a "ports" node */
	ports = of_get_child_by_name(disp->dev->of_node, "ports");
	if (!ports) {
		dev_dbg(dev, "Searching for port nodes in device node.\n");
		ports = disp->dev->of_node;
	}

	for_each_child_of_node(ports, port) {
		struct device_node *endpoint;
		u32 index;

		if (!port->name || of_node_cmp(port->name, "port")) {
			dev_dbg(dev, "port name is null or node name is not port!\n");
			continue;
		}

		endpoint = of_get_next_child(port, NULL);
		if (!endpoint) {
			dev_err(dev, "No remote port at %s\n", port->name);
			of_node_put(endpoint);
			ret = -EINVAL;
			goto _error;
		}

		of_node_put(endpoint);

		ret = of_property_read_u32(port, "reg", &index);
		if (ret) {
			dev_err(dev, "reg property not present - %d\n", ret);
			goto _error;
		}

		portmask |= (1 << index);

		nports++;
	}

	ret = component_add(dev, &dumb_disp_component_ops);
	if (ret < 0)
		goto _error;

	dev_info(disp->dev, "Dumb display encoder probed\n");

_error:
	return ret;
}

static void dumb_disp_remove(struct platform_device *pdev) {
	component_del(&pdev->dev, &dumb_disp_component_ops);
}

static const struct of_device_id dumb_disp_of_match[] = {
	{ .compatible = "dumb-disp-encoder"},
	{ }
};
MODULE_DEVICE_TABLE(of, dumb_disp_of_match);

static struct platform_driver dumb_disp_driver = {
	.probe = dumb_disp_probe,
	.remove = dumb_disp_remove,
	.driver = {
		.name = "dumb_display",
		.of_match_table = dumb_disp_of_match,
	},
};

module_platform_driver(dumb_disp_driver);

MODULE_AUTHOR("indir");
MODULE_DESCRIPTION("Dumb display encoder");
MODULE_LICENSE("GPL v2");



