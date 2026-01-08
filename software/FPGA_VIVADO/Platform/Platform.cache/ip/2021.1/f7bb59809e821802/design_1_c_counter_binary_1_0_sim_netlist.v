// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Fri Dec 26 02:22:05 2025
// Host        : indir-homePc running 64-bit Manjaro Linux
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_c_counter_binary_1_0_sim_netlist.v
// Design      : design_1_c_counter_binary_1_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z010clg400-3
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "design_1_c_counter_binary_1_0,c_counter_binary_v12_0_14,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "c_counter_binary_v12_0_14,Vivado 2021.1" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (CLK,
    Q);
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:thresh0_intf:l_intf:load_intf:up_intf:sinit_intf:sset_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 10000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN design_1_clkin, INSERT_VIP 0" *) input CLK;
  (* x_interface_info = "xilinx.com:signal:data:1.0 q_intf DATA" *) (* x_interface_parameter = "XIL_INTERFACENAME q_intf, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value data} bitwidth {attribs {resolve_type generated dependency bitwidth format long minimum {} maximum {}} value 24} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value false}}}} DATA_WIDTH 24}" *) output [23:0]Q;

  wire CLK;
  wire [23:0]Q;
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
  (* C_WIDTH = "24" *) 
  (* C_XDEVICEFAMILY = "zynq" *) 
  (* c_count_by = "1" *) 
  (* c_count_mode = "0" *) 
  (* c_count_to = "100110001001011001111110" *) 
  (* c_has_load = "0" *) 
  (* c_has_thresh0 = "0" *) 
  (* c_latency = "1" *) 
  (* c_load_low = "0" *) 
  (* c_restrict_count = "0" *) 
  (* c_thresh0_value = "10011000100101100111111" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_c_counter_binary_v12_0_14 U0
       (.CE(1'b1),
        .CLK(CLK),
        .L({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
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
qtTMqVHLqMD6yJ0b7EiBkHmyhSOCY41qDph+Cs4gRUV+ybjrdZiOpYTQD8pLNC93bO8wXaostKcl
VqjgAvD19de1LiJj7Lrfla5JSxMNXGfMItGOXENUUq2h0XS+b434oRvpdYNhJy+bjIEoTlEMJPx/
E/A/ewBAMlpyU5i50OsTM4ZYozS5sIJXgaV0nFoYZf8OW8N6/J0vRmjAHC2Jb/OvsugpSFTuNzPV
L+7gQG8NVpmhCCsrJLB7oe/L3MWkpF+BrCDzLhHym3H8Af/zxvQsKE3ZnOiYNx+amhj0DAbUB6zK
9bM5QqNlnkMk/6xgdOlpLp+psL3TCSJVTcz21w==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
bZTzUIM6BZpHGoqkaonlqAgsDcUzlkklD+hZfENvT3oAEM4jfPUfitsLRC46RpZWB29Li1kDbtw6
fnppBa5my/WmHv93BOMQ/HAFEYylM6VtWdxnKlI7XrTvyL8mFCIdemgbAyBA6/JghYph4ISXmyb5
gxrEv2ZFf2BkfBiKL4pqzgd8tNYdZ6rIS6HlKu9lbhIhClwcGxTbNq248SjEM44zS37oS+o1oOag
6NXNlTJ/DWpZQgKXW8BUa0Mw2X/jXmRGuxD7Nyh+iPIlrKnZQj4cvFy9b0Mestqq+SXL4csOh6ui
MELiYfgBts/7fbI/uyFAs1byq7n/LlwFV89ZEQ==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 16416)
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
