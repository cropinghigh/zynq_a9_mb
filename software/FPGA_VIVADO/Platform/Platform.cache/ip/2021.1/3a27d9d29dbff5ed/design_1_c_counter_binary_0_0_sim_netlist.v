// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Tue Dec 16 14:56:46 2025
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
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:thresh0_intf:l_intf:load_intf:up_intf:sinit_intf:sset_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 5e+07, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0" *) input CLK;
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
ptdY5Gkzvo7IIKMz4ROxDFdZEk3KdZjqdlTEG2D9hE3soLRyKXlfDZtTxsUs3Xoj+YBl2MX+DwlO
eRWjX15F0NBktYs3eNV5mM10heEYNVSxLFWEQORcnDhB23EVqASliPDFSzeyAgAOMnsgWl6nY5cX
z3x4MBBfdEXPVZlTZm70NP+6w24wMrND9V5M0A9DArRth4rid+8jRLWq1T1Rp9TeQYH5jjvHeqDW
MPJ4Mpn/iVgCTVp/YIJeVURrYQBgZpQIgsJ/lKwaruGeCsw5jB5x2JRjYF2OFogjRFUtjj4ke9Vy
+E1va3rzV0l7XJZ3vN4Th6NhG5kdBwB7tj+ZNA==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
y7eC+0p8uit2dEZiXsQevnWIPl+uf57wOXqXUm0LStCx0w61fsPDkucG5RWhiM4rj02+dd9fyJNf
WXNJ0Qro/p7yc1xUBwEmVwJIoT5Uxj9MtDFwt+2BPfh+ExeIURMevpvCp2EdgjxfE3Z5sCMTmkgp
gHAAYlFkDMZOHOrTdtJSfmRDFW4V2KHNgeWtBbLWTRUZzWYdS55KB489uhU4cHvjNw58u69oA1fs
mJzrGx8YdO/yAkmtjMs69s7xWmVqtc7K7EmisGXJ0gk5J3XC3msxG+tELKU3EBUris1cM58kjzea
fcBjHOIOB7qA6FKPVBrUwvP+E9O6verYrydPfQ==

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
