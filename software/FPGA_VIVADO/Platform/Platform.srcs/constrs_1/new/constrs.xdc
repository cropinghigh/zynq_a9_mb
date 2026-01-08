set_property BITSTREAM.GENERAL.COMPRESS True [current_design]

set_property PACKAGE_PIN U15 [get_ports clkin]
set_property IOSTANDARD LVCMOS33 [get_ports clkin]
set_property PACKAGE_PIN V18 [get_ports {ckout[0]}]

set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets clkin_IBUF]

set_property PACKAGE_PIN Y18 [get_ports {TMDS_data_p[2]}]
set_property IOSTANDARD TMDS_33 [get_ports {TMDS_data_p[2]}]
set_property PACKAGE_PIN Y16 [get_ports {TMDS_data_p[1]}]
set_property PACKAGE_PIN V15 [get_ports {TMDS_data_p[0]}]
set_property PACKAGE_PIN W14 [get_ports TMDS_clk_p]

set_property IOSTANDARD LVCMOS33 [get_ports {LED_D11[0]}]
set_property PACKAGE_PIN T11 [get_ports {LED_D11[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {LED_D9[0]}]
set_property PACKAGE_PIN R14 [get_ports {LED_D9[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {LED_D10[0]}]
set_property PACKAGE_PIN P14 [get_ports {LED_D10[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {LED_D12[0]}]
set_property PACKAGE_PIN T14 [get_ports {LED_D12[0]}]

create_clock -period 6.734 -name hdmi_pxlClk [get_nets design_1_i/axi_dynclk_0_PXL_CLK_O]
create_clock -period 1.347 -name hdmi_serClk [get_nets design_1_i/axi_dynclk_0_PXL_CLK_5X_O]
