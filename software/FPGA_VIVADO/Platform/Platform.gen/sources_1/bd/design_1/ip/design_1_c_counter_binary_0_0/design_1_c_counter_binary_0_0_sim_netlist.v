// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Mon Dec 29 15:04:24 2025
// Host        : indir-homePc running 64-bit Manjaro Linux
// Command     : write_verilog -force -mode funcsim
//               /home/indir/KiCad/zynq_a9_mb/software/FPGA_VIVADO/Platform/Platform.gen/sources_1/bd/design_1/ip/design_1_c_counter_binary_0_0/design_1_c_counter_binary_0_0_sim_netlist.v
// Design      : design_1_c_counter_binary_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z010clg400-3
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "design_1_c_counter_binary_0_0,c_counter_binary_v12_0_14,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "c_counter_binary_v12_0_14,Vivado 2021.1" *) 
(* NotValidForBitStream *)
module design_1_c_counter_binary_0_0
   (CLK,
    Q);
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:thresh0_intf:l_intf:load_intf:up_intf:sinit_intf:sset_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 1000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0" *) input CLK;
  (* x_interface_info = "xilinx.com:signal:data:1.0 q_intf DATA" *) (* x_interface_parameter = "XIL_INTERFACENAME q_intf, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value data} bitwidth {attribs {resolve_type generated dependency bitwidth format long minimum {} maximum {}} value 20} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value false}}}} DATA_WIDTH 20}" *) output [19:0]Q;

  wire CLK;
  wire [19:0]Q;
  wire NLW_U0_THRESH0_UNCONNECTED;

  (* C_AINIT_VAL = "0" *) 
  (* C_CE_OVERRIDES_SYNC = "0" *) 
  (* C_FB_LATENCY = "0" *) 
  (* C_HAS_CE = "0" *) 
  (* C_HAS_SCLR = "0" *) 
  (* C_HAS_SINIT = "0" *) 
  (* C_HAS_SSET = "0" *) 
  (* C_IMPLEMENTATION = "0" *) 
  (* C_SCLR_OVERRIDES_SSET = "1" *) 
  (* C_SINIT_VAL = "0" *) 
  (* C_VERBOSITY = "0" *) 
  (* C_WIDTH = "20" *) 
  (* C_XDEVICEFAMILY = "zynq" *) 
  (* c_count_by = "1" *) 
  (* c_count_mode = "0" *) 
  (* c_count_to = "11111111111111111110" *) 
  (* c_has_load = "0" *) 
  (* c_has_thresh0 = "0" *) 
  (* c_latency = "1" *) 
  (* c_load_low = "0" *) 
  (* c_restrict_count = "0" *) 
  (* c_thresh0_value = "1" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  design_1_c_counter_binary_0_0_c_counter_binary_v12_0_14 U0
       (.CE(1'b1),
        .CLK(CLK),
        .L({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .LOAD(1'b0),
        .Q(Q),
        .SCLR(1'b0),
        .SINIT(1'b0),
        .SSET(1'b0),
        .THRESH0(NLW_U0_THRESH0_UNCONNECTED),
        .UP(1'b1));
endmodule
`pragma protect begin_protected
`pragma protect version = 1
`pragma protect encrypt_agent = "XILINX"
`pragma protect encrypt_agent_info = "Xilinx Encryption Tool 2021.1"
`pragma protect key_keyowner="Synopsys", key_keyname="SNPS-VCS-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
GTqSEFfdw74AxDk1xtNQd2f6GHWzPN2yfLbDluzXTaZpl4W+sEd4lTW79qJytbO6Id+EKMIQA/Rd
JoOZOfWlzssuRG26ui4Pta5Y3JPgDAy22thMZez0bbLCexUp/MGwpsqeiAH6fB25CKwqaY0ZeWU5
zVSIuMCwrJjkXNKwtns=

`pragma protect key_keyowner="Aldec", key_keyname="ALDEC15_001", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
Zg7QdpS0h5qvdN8jDF6+Uy7LIqhoofwxBC4VSN6My9UgXglQ2uXgzJ3C3R8F1pgtGLa4D+ow2y/Y
AYpFHE8foILr6fC+wuHZ1AVOCIwn3jyrqkyC5GdfavPR782wRbs37sC/s2HdBL9KBYEYx/5Jns/o
UYIX6hvN50LZfVhiFW7hgfl90zqrt0dD0p5PPQIo+CjylU1iskxRQklRTt4e8CiQG4CDFV4P8lOl
A8j9h1MbVgW67VZNE2bmg8yVzCpLZWRMG/YJVq4c5A6ijn++/Skhq8nBHcw/pDZM2cPEt5tIjCsi
RX7+h5VqjxnJIDLE8NjzHmZqaYqo0f46F0d8yA==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VELOCE-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
sraMSTIusw2vW8x6E/6NjBaBni1BYS47l8DJ4rLdHpjUsGIjJyCpbYaL5fGuk9CxeqtrDOjYVAi7
90gKBWdO9PFhDW1ioDW5KOAL0Vn4jIu47pX4jDV4qeNvNk1diz69p4CFg1STDlAXZzrSuxsj72WP
87dmE4nl3SabfGRMBlo=

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VERIF-SIM-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
DR1bpsHn3evUQJqCy4fwFjV86IgidayNbMB9OsXIxw3etzwha87Cnp5nA00lGLG4fZ8pZJyrI6L/
fRkMyndVySdfcAKVuezHlGOupplByaJ1+yCRdSsxFWClOxzxu14UG4YKPeaiNLetLoWeelB5Tnqq
1hYi/BGV/rThTOY71pF8la+OJtDpWMFLfoXJoOTVCegrm5gqKtFY6w/8XsbGVdyg3iSIqj8qCkwB
BZ3YsrUv1TDfRwq1TYRCI1n8zXr53wvSW/5PP77E4inmNHCXCVXnOKsizHIZJAkA2UmS1vzkurzr
VEW+C/svU60NnxjcTMNcwEEDircH1H9DE6aBOA==

`pragma protect key_keyowner="Real Intent", key_keyname="RI-RSA-KEY-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
mOBk7oA7/Fcn9XTT8ZhbYFKmYzC49P630wnSr28owJKgc5uh27BumG9Lb7w3/r45RWv2mmSUb6eo
4mxciLVWSDIdLhjlTf7LOhgrJMOQXh5LGfsh9zwms2iOvCnCe0hfP9CL4UIgLUV2jp5cxrFr9uAh
yJgNcg2fWFX83mbc16nw5NIp0rSQlbrOKf65j+6+CDDgfV9oxBoALy3cgRDvV7+fgxQgopIKdFoK
b45HIQkxV/IjqDH03Avy68Ukar+0zNvwBgy+ehioNpAXVylHbDXnHQp4PrgZSO+OktFUy+3UBAwI
dJq7YaBh/R/fv/SlpxdK/xa4Qvtzq9l/9JB4GQ==

`pragma protect key_keyowner="Xilinx", key_keyname="xilinxt_2021_01", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
bCy2E+cIonplnhEbZmGvC1heHQ60MGwVmU2x15ENdnJuhBjqhnJc/OjcmXCnsQ0PVFLIlQ/0wpvC
IqfKU1GFE+M+qT4h4wnc/x1JQXagKtMY5JeKKAYfWs8npp6CsE1Cg65poSjyPQsgppvcKCQkY5IZ
90pVE9LqdAo5VyBUFrKhK+FCFJMU+3N2xsv05aL9/AGTNG+GXNZ7CkLFnRb50dABLQ4Ku2BMSRvn
+UuVYirvcztxNT1gNuOrcoLmom1iYxT/TCqIeQROkp5HGgunWatU6fYC+ht+UFU9ygjggNSGfAnd
nCf+NSTYx33GxKIYVtgmZXwyP5cI8Lk/NmSxwA==

`pragma protect key_keyowner="Metrics Technologies Inc.", key_keyname="DSim", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
TmV0I8CXrLN6NcEG9hNmTThTTkBIattb9yt7bm+0yRK6TSd3xiYqQWx5SXI3IMOAAqoYeCKDQiZi
cDQjcnh57glJKKvIBsctOLK/D2Kxyx3ml4Bjudc5vHfUEcBa5y/gEA0EWGBeWkllUdY84GtJEUsS
AuoWUgMw5h5ipQAj5iVYp95KGgk8eW8+W7GSh8cLYOV/kSvykcQxSrHFcgdJFnmCjN2aBEVI+6Rq
fnZfZDbZGAJB6fq14VDxtFeZczuf+wg4xmxBX+Eh2/eWWs22Kj7qYMcbKvAFaRq5iGeydCuQBnIu
ea3TVf+OoBqLQ94kHgaoWr2qD25EKHXRIXHKzQ==

`pragma protect key_keyowner="Atrenta", key_keyname="ATR-SG-RSA-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=384)
`pragma protect key_block
Qes+skSjlfcngFHqOonb/14mf4z1xOJPJsFQklrcQMwgfeYnzbXPyi+VjQno7oMepbwl3h4WW5qp
aNXYP/ZpN4wr42OVgYVRglpc1gbAeMcellSFa1b3aa0p0MTVbZLuSRBHvAHGATaSH+IryuDZhdQK
2ph4EVLTnZlFXUBQTpyMiG7KQBeQ0fae3hCn5gCL5DSdxeRA3jjvxvbhmrKdOJ62//GfreJsyaWw
nYXtlk7UFCVSSNpAlj6KeazG3ySpvsPARbSw7rVBZlwuxyyVaNShIrT4xyocuG+decy0RByiaxY3
VVhRV6XM/SqfxlhSmSAQ5c9iR+Z7Of4EW3OPW3xuRiFX3j2RMmv7RZJ+grM24tWBNfD7vubT/uYx
LHeqF03tFF/s6jlupPE6Ss6Jdt/rNxPq1rM10viJa0v0aNFc/a7FhHHO9CmpZ3V18zUmudbd6mIi
itL0+u9Q5BeihF1Yk/zHxWnMDZ9bzZzebHRLl4tGiWOJMHyTnvLtg/uj

`pragma protect key_keyowner="Cadence Design Systems.", key_keyname="CDS_RSA_KEY_VER_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
fT9P0busnHFhNtVhuf1ATqDeNMlqjQwbhvf0x34wZd35mjARDv55SXpRz+pBacoaxyo8g70Zt6by
jhGGO95tzsD9Cq8TIfsQ2B4hmI5lT4QzHGYby6xuklbwvPhpcpNgdDV9apT+gdvPWZnNk+R5awyV
uNxQNzyZblMxkJinicsdHysCQjzYlps9O1mEE9ZZTZ6WH4+e+k1mrmPmUBBazuWMZ2/cw7t9XbZT
/zm9meBtxtVaA35lu3qeM0Of8DV+54hnAG4sYgN9RRwmHgxE//V5fc/cyV6/fVWSrBIACq6lNplr
Gs0JTuAQrPaxxhx39ruQXEKIuc1vtVdzAuNhSw==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-PREC-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
DdaxeyEzLq+T4F06grfdo+0oXdC+6YIHuj9CY3bikFNUYSXUd2u2wPGikoyg0ZTnovayhNuy8I1g
ApvVw1aO9BwBRYeOeF8Yssz5+GCOMLGB2wZlPL1C7yspC/8UtM/ZoXo10PC/QxhKooPdbBEwjYvW
xOCLvQ7/ebrj+Nrgheq2QwKMPEIsOmWUwErupC1cdefG/3+71gzIyYOwvkrucktLqIADiz1D++rz
2eeDQMN3eKVUm5IH0QyaOlLfpbuwQtLSUuwhGi97n1ffLGc+XTU+qfV76Ca2MpjeCVg5aSpSPL2e
A95NzINh+/zZTzxS3pPazgdL+wBnWD0kROZ7Mg==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
WExLi3ZVW9nQYdJzF5cWYYClEAUGecJ0933GXQlyHMhwsocVFcxZF6xOAHjZDXIEbsyCMVosaUpS
MjvyvSyQfCMg0Rpwm3gq/7UZz7bOkD2ljGz3njiwZfi7tiofGNC2FWJlowtwEW4CYgkm3AWQCxMA
dVV1ssoMuw/7ksLKOQAZ/Fw8qjEPAkTNPPyACQVL1wFm9CT8sRnay1BPmn4MdqM9jVF4LEYB76Zy
deb42iir/1h1/Rt3+KP7e/nYtppnYBCTX0eaAk+R/3g+ar27sU8FdiLF2uW2fiFZrAIQXnhmO4NH
o9jkQBj2jVYZFfB5UhAVjiiLrrI9baLhX1+hQg==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 14704)
`pragma protect data_block
+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
`pragma protect end_protected
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
