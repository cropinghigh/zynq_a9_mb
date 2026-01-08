// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Mon Sep  8 15:57:57 2025
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
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:thresh0_intf:l_intf:load_intf:up_intf:sinit_intf:sset_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 25173966, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN /clk_wiz_0_clk_out1, INSERT_VIP 0" *) input CLK;
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
  (* c_count_to = "1" *) 
  (* c_has_load = "0" *) 
  (* c_has_thresh0 = "0" *) 
  (* c_latency = "1" *) 
  (* c_load_low = "0" *) 
  (* c_restrict_count = "0" *) 
  (* c_thresh0_value = "1" *) 
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
JUnDwABvFGJ1FX/+PVQt5dR718PCdCbSQY8CFMISfrLhCld5RxPTxKQWmKrSjAUZD+MiY6pJhz7n
TUxhq5C0fK2LhtQMhXLJmnS35U4bNMwRvLuJEfBe/ghSx9gR5wL3C6TotV0ulC3jktDMTiowF03s
BQWu71F5WGLgFzYp2gDEKXm4DmoI48roovSxuSrErDOMZHhsqlIurG8WqhCu5SN+A8l3JqKgfLw+
RQWgaBVrdxUvL2NGBsBji7X08RC6i6lLk11IwOYncYIouERH8gJ5S4w0XsU8iVS67yMMFS4BRvbQ
xL5HjxeTJkuZy8UR952U19xNZvqs8AR7tncBPw==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
6MOARQw9/7eIVZuOfAjxTK3X0MMReJ5dlj+Ast1C4+E0QliVxGh0DBMq3zhX55oDTpNCnNfytfyu
wIJ8A532HxvNj3AMccCNFffaSXi9LGnsG5LixFh4lpWJUhufuGRXZ3cOwqyec2Pt3nDsZ5ogtOQB
A3jCaePgwVuQBFEPSwcd4SxoNq4CqLQpK0KJOshZdnv5JHSVjdiLoZxCYM3RfDudut3jCVwkgA+R
/5InEwbIGAtawY9UP1lNgaHmI5ACMsa6dikIBDxJWgbTUAKMSqr/1v/0jECYjbIJqIP1l8tK0TXJ
jY44JMuCiHrHoKYixrQlKZZpF6yQJbaB3dKo/Q==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 16272)
`pragma protect data_block
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
/uJKe6ZO0D0mgQ2XUgCBb+Ru0b0T/GTv7I3/
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
