// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Tue Dec 16 14:56:46 2025
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
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:thresh0_intf:l_intf:load_intf:up_intf:sinit_intf:sset_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 10000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN design_1_clkin, INSERT_VIP 0" *) input CLK;
  (* x_interface_info = "xilinx.com:signal:data:1.0 thresh0_intf DATA" *) (* x_interface_parameter = "XIL_INTERFACENAME thresh0_intf, LAYERED_METADATA undef" *) output THRESH0;
  (* x_interface_info = "xilinx.com:signal:data:1.0 q_intf DATA" *) (* x_interface_parameter = "XIL_INTERFACENAME q_intf, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value data} bitwidth {attribs {resolve_type generated dependency bitwidth format long minimum {} maximum {}} value 21} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value false}}}} DATA_WIDTH 21}" *) output [20:0]Q;

  wire CLK;
  wire [20:0]Q;
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
  (* C_WIDTH = "21" *) 
  (* C_XDEVICEFAMILY = "zynq" *) 
  (* c_count_by = "1" *) 
  (* c_count_mode = "0" *) 
  (* c_count_to = "111101000010001111101" *) 
  (* c_has_load = "0" *) 
  (* c_has_thresh0 = "1" *) 
  (* c_latency = "1" *) 
  (* c_load_low = "0" *) 
  (* c_restrict_count = "1" *) 
  (* c_thresh0_value = "11110100001000111111" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_c_counter_binary_v12_0_14 U0
       (.CE(1'b1),
        .CLK(CLK),
        .L({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
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
F/Woaya1Da4lc9YrJZdw24wMp/f/O3V6Vto6hooXICNUmBEDJjyYWrqPWf7OKSlaNy8JFUOvSyqV
AWyzISSOAys36Bh/Hsw58Cj1EYLBq/pMPd1RNt21KlfBH0TtF/CT7iWyCeO8xHI619XYPoQ/IjCM
c5j8PMfUAUbqyMSGxjo1mdXmrR95pw9iZ5THX6XUGBDOIoyBomm0IK4izs92RyHjl6sb2j5ZytIm
/Xte0H07ndGJsC2EU108v2ZEpt/qdcgV/V2ifH7Hj95bGVnW9MHIOJZHLrjDapX5rmmkXVucKPB5
1bZdJg+o67Rd2lTCl3ZBRsPK8rNPSuUtFBM8Kw==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
tqLEI4fBI8vqTcYID6X70zx4LJABqUAvRbFaxa6VwuWVUxemFffJnSgoW9srObRLRKcxDv9eqWw7
QPj5D9LYkVoIGprZ9eZN9CHjFK8fCAooDuIfl0JYaxISZxCFlU6tuyYQv0Iqeyjaweblo8tVR8Fg
/tDVoIA+ohomLAXheAaOovzT0vDJVE67IUe4/adsDB8yLXymwKcr6Tedn+v2hAqBLvFVfGqnp6NJ
q3ICgVyACmTgTVX7bAZYGoOVhKi7Y6bvhqB1WgXgBClxbtf2gllj5gST+qmtxaedQSLjiR4BUv4a
6T4eWnIGBhCSmMA6x6koSc7KX23GF4XiRXVHJw==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 14512)
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
