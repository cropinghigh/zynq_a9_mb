// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Mon Dec 29 15:04:23 2025
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
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_c_counter_binary_v12_0_14 U0
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
MqI9lNC3J6bkEfj4SHtRbxNpYhq5Y2dc/NHdjzTdPCYyGuUaXdZ2cGtNr7pEozP7Z1x9J2+UlkdK
XGo7ZjN6mVg42hGaek13qKiNITPsUTCBA/zzs06T+GC63zBLGuKU56Jl6mAjdCpxqLrOHTOSkeSl
Cbpa/ah8DuUzgXqf4PC0gJwKomCuvOZIE9uzGVJaBXrR/GJk/cav1OkgAEf05rlrjCX5GNArfT0e
Kk0M4TOpalEYCkYxrbY0ucr/3sbdikdJrYYP3nZVfBf7iU1Wa0/xTGYp0BcS4zcZcxXLGsv606RM
DfS7I0h9MNQFvCWfPW/o0PFzq4Q1sQMbj8HjyA==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
q8s/eWtrLwg+aw9Ks9W1MlkJBjoVJmp6WPNNCRZ7Zy4FhsyfKkrpkg0JjwC6NSzbuf5wtRxJb5cv
lKgXGTwI1uFpdv8lOKFs9zo6/raTelkTcy8H2b1uFIJk7iioq2pM8sd1PmnV4uUkywKOFGG6JPBy
6klwYHRn/c5i1O99w1lx6XvadRBw+tTF7NIUY/oOO2qEbmzcPsGh2EzXAdeNVCXeB5lO1++crz/5
kTQ+iRr/3j/cyUAgO3erTzG3aN6vUSytw7QRfxV6jLoIBMZhWDUHdjo9nLbfLgRxWNBsuCV7uLSe
PHvijJ2Aw0PozwCE9bnkA3I/Gh/THSUYqJU0vg==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 14496)
`pragma protect data_block
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
eJZB2JBcoTHJToMXGdgi2+Jk
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
