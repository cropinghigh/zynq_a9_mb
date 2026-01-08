// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Mon Sep  8 19:46:55 2025
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
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:thresh0_intf:l_intf:load_intf:up_intf:sinit_intf:sset_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 148500000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN /clk_wiz_0_clk_out1, INSERT_VIP 0" *) input CLK;
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
IYIq1KXL671TmuYCgq5ok0laRclhbk+Cvqf0ENQXq3ke/nzx5XVYMbDuAtlIipltToDHaWdStT3U
GRZ/qR1W0ePsCqtjKGihsg+nSiGFPxC4eoKUYVwYVDoeJt7PZR2qRHTaEg5q8DFgjZbvI+y//LiE
ODMSAfUoF+U5ZbItIaB1VyCYkPTzGmBtpy2JrdLPbp0/8SQ3iHG12K43KzRIn/aCkN/1FHMLCmgO
0+WPNFe3T/4HiMr/LS5vUxGdBE3YTv5ohmr2klWC4QNy6HryJqB/YpqTr1zhHKiZZ1NTDV38v7lH
TpSFnr0XX5fjRvDEsUSaTe4REwbEQq6OpSv9Ow==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
yZqax4cdKlQgsOO2bh/Tk8ut9FY0syH7HQi4ZaBCU9pznmyngAn5HZN5+nY88XF8hwleBMCO/9xY
HYzKbij2MATt+6rblOKLHfORC68/VZaBRGZUXrFVRyyX2LfQK/4NsV57mzog/Z+5Hv3GpBqus+b5
EbQai69jNKwliOmUJlmPv+QOQg1cQasgcQlNZd3jwM6l/YAJtDbJtD1s46kHWkcprG4M8rmPow04
zFstTWPxzWHAqi7gD6yivN+DsrEVyMQ3l7soalQgXp8dJuAN3IsZ6RQID1jvXFbiwYzCpHahyIAv
k7+tD6nFclWfu1dwYGCMzFnEIOGonPMh4mRp7g==

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
