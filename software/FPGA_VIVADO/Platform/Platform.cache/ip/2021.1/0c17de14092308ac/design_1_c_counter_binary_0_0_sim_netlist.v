// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Sun Nov 30 03:13:16 2025
// Host        : indir-homePc running 64-bit Manjaro Linux
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_c_counter_binary_0_0_sim_netlist.v
// Design      : design_1_c_counter_binary_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z010clg400-3
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "design_1_c_counter_binary_0_0,c_counter_binary_v12_0_14,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "c_counter_binary_v12_0_14,Vivado 2021.1" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (CLK,
    Q);
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:thresh0_intf:l_intf:load_intf:up_intf:sinit_intf:sset_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 50000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0" *) input CLK;
  (* x_interface_info = "xilinx.com:signal:data:1.0 q_intf DATA" *) (* x_interface_parameter = "XIL_INTERFACENAME q_intf, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value data} bitwidth {attribs {resolve_type generated dependency bitwidth format long minimum {} maximum {}} value 26} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value false}}}} DATA_WIDTH 26}" *) output [25:0]Q;

  wire CLK;
  wire [25:0]Q;
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
  (* C_WIDTH = "26" *) 
  (* C_XDEVICEFAMILY = "zynq" *) 
  (* c_count_by = "1" *) 
  (* c_count_mode = "0" *) 
  (* c_count_to = "1011111010111100001000000" *) 
  (* c_has_load = "0" *) 
  (* c_has_thresh0 = "0" *) 
  (* c_latency = "1" *) 
  (* c_load_low = "0" *) 
  (* c_restrict_count = "1" *) 
  (* c_thresh0_value = "1" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_c_counter_binary_v12_0_14 U0
       (.CE(1'b1),
        .CLK(CLK),
        .L({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
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
R3RnCTFUmg1dqE2MA88MQcBfQNw/oIwlQmOw3qF3uJ1qbT1OetvQqVCnQ7aJu6WOeASqdJDo+b7v
VSn88AAm2ec/4KqkxiEXvHG3pZVlaVY6pdli0pF+fMME37IqGUgymHIH1XdwlVYstbVo2r4fBDo0
+K15IGBbeJL24ZCHVObblYULo9ZLWjt56NGYTmz9al1SVt0dWqtENXpxbBeIG86klYrQG0a2d987
UXZY4VNCOp1GlqIfLmPHwFY9H/Dxqq3Jx+AulkK7vpJ2e5NGf9IA59LQs8LNCNSP81XYGpW2JK/g
WqTM0zCRlKm1e7EzQ78JrGPy4xzz+m+lSVCw0A==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
SR4XXBJcthvujy1L6V6GBRYVca24oDuvs7NsobYvG/eaUVXyQwMM2dQkUaIO04TqIxcQd/x+AXQM
+2g6X27VioQLCd2PcU/4LHZKouUGtPju87opwSEFUgQiuuFdUDaDUwRW/UjLeEd/scCBAQJG+cVu
GpzuQP/W4GaYkoKCy8JjqvgMV805hz9yGlSDMHi6tL1oZsYofthUMFZlY0lCUyCOSxetotMkvt/y
cxAeXUgqbsVkO8ziJ+6xDHXg0QXh2mDPi/YPKX1dOLh8gttmbcQFGlEu4ui6MKZcCRRDMzy5e8/7
VTuzrnq/hXnSqvYmgVhORygBqFyXuSQVEMYo6g==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 18800)
`pragma protect data_block
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
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
