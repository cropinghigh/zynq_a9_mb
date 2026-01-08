// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Tue Dec 16 15:24:16 2025
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
    THRESH0,
    Q);
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:thresh0_intf:l_intf:load_intf:up_intf:sinit_intf:sset_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN /clk_wiz_0_clk_out1, INSERT_VIP 0" *) input CLK;
  (* x_interface_info = "xilinx.com:signal:data:1.0 thresh0_intf DATA" *) (* x_interface_parameter = "XIL_INTERFACENAME thresh0_intf, LAYERED_METADATA undef" *) output THRESH0;
  (* x_interface_info = "xilinx.com:signal:data:1.0 q_intf DATA" *) (* x_interface_parameter = "XIL_INTERFACENAME q_intf, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value data} bitwidth {attribs {resolve_type generated dependency bitwidth format long minimum {} maximum {}} value 24} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value false}}}} DATA_WIDTH 24}" *) output [23:0]Q;

  wire CLK;
  wire [23:0]Q;
  wire THRESH0;

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
  (* c_has_thresh0 = "1" *) 
  (* c_latency = "1" *) 
  (* c_load_low = "0" *) 
  (* c_restrict_count = "1" *) 
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
        .THRESH0(THRESH0),
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
b9Vo0x3de9cDKDr+MUGy2hKQks8pVcDvPPrXZIiuYjCoqm5URxTrfYgY/o8ELcps70d4CfqYRcXV
zmHp9C7PSoxZzB7Sli6ZKyu4ItsVsDfFO2mMgjJ9QnKs/SK4ht4/pv4OtnHBQk2jzXfjrljTn9tR
AiOILA9h9XMxTkpAMC5KF9To0XNkw6xTuKJIS9+kZ5AqOyWVkSTqkU6FkurXjejJN5ggYIVoOhIJ
nWry98Syhzq0dqqcNvj9nBsJpU5kdVKFsFRoY1E+euULhHe396Ig7tptFxPLGL9syEfkvOYqsXGT
aq+czs20+E3jWzPhz1NnSM3mbBI9Tk0SAJKv0A==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
KnD+XA6z2ycb6YwUfcyjOLcEmDY6q0duwReFHSSGxNped1yHnHhewv+1Cmv8oJ/xfk3K089rHpGb
KbO0y8BFoVTwAcfwkio4EjzimBMSlrptGd2WLVOF341dpLBNcsGSgYJpaNcUZ4KYRjB6MsC0rKd4
yHRpg5722WF7seBs7WhSHkjpUXRN6Xlmas57ARfEwMJ++0rBq/Dcww41Jv58H/FzUXXZmqdy+lRH
fAd5slEqV0J9CqMsRJQDVqLr1s+H5bdnWEhBhM57acvzBHNO4EL49zDaTeVcB/FeNLX3BNz4vpZa
iYYlqeS+QP6V1JKwdFH4GuWniL4mSjeqAiolQw==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 15232)
`pragma protect data_block
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
j5/dsXxUNPA4CIXRNA==
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
