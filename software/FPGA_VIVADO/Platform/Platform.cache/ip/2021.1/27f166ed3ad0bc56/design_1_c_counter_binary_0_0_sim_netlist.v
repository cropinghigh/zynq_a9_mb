// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Mon Sep  8 16:12:51 2025
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
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:thresh0_intf:l_intf:load_intf:up_intf:sinit_intf:sset_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 74250000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN /clk_wiz_0_clk_out1, INSERT_VIP 0" *) input CLK;
  (* x_interface_info = "xilinx.com:signal:data:1.0 q_intf DATA" *) (* x_interface_parameter = "XIL_INTERFACENAME q_intf, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value data} bitwidth {attribs {resolve_type generated dependency bitwidth format long minimum {} maximum {}} value 25} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value false}}}} DATA_WIDTH 25}" *) output [24:0]Q;

  wire CLK;
  wire [24:0]Q;
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
  (* C_WIDTH = "25" *) 
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
        .L({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
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
g2DS8r6KZgHmhx189+DUYsMJc6WP8xfxtycN/WKtQG03A72ws4V7i/NqvNjH5fDL23v8+J6n5ZUR
iwyuP1cKTdxR+zX96NWJySEdQjg3UuMtX/Ad2nfXmJ0ZT9b3256A6bFckwqYrxkBvI86r5XtmYXk
So51hShh8Y0rLlQrS9bZ8secMIwouE92HjXhq1mUCVPZ5WlpVCeNh96m6+Zqndtexk+PCelBBgLI
CCgxnGQH+TH1ochLAKnV6pZvrakTlmFOma+CziRSW+1JdhQZr/wBlIgEgfcOgPicYye56qQjIv5K
/MvHstHm8nKaME3fAEcsnn81f/hfu4j43KkJeQ==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
eKUsKaxeVMlQmgiR+gL6PO5SGzKwC8f3AE6vmBreM93fJR7p+9/CgHN4MfH55E9KP1Phet5K/O6+
sgzycWNUD16Lxx7nFWmfQ53USq54Q7nmBi1C41PkKPuqSPcn3pAhoo8zyL2+334PKo2eHYJHwnFC
JhlPXfbB4+qSo8ISDjHsoXeRmEdzekf+i2rUnDV11Jv3a19bGYppSObD6bT6cq40jRn0msPSdjCa
nC3BLSnxll5n4inCH/zfMGSrruBjc2CkJJFRnWUXAHTOw4kv0135ldjT/pl3Nf6zx7HMhDKHPB3R
xX0IjgZyMKHOc70738YyfS4rz5Jd05+H+tm3oA==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 17152)
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
