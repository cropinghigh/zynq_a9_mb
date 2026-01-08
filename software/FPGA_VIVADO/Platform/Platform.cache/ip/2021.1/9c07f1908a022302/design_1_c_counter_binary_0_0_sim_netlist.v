// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Fri Dec 26 02:20:35 2025
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
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:thresh0_intf:l_intf:load_intf:up_intf:sinit_intf:sset_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 74074074, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0" *) input CLK;
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
YDU9yl6zIGw7MTE1d95mif5PNgemvwVoJfbBUqepinx9EjlwmpRJNeTm/u9A4RKZJqx2bpExBsns
Do7ocfaSkg7R8d4NOfmPBjp5G1ZEjRCB8VRBio4fBcE3FrcolB4lk7qf4ai6wgjpCkzID0C2auDK
bwb/9lptpycCHFA4njHTglapXYObhPRh0n2wjU4gzWVJbc5AoLreAIScoYuQ7pArBrgj5oBN3EWw
ETeNRVy0i2umsWPrGJumd17Xakmz4dlUM3y96hM0Bf9ryqWj1mPO0j7DT2xo3FvgkSSqVdm4K0Uf
nbwtkIpVp4/RQw6vOrLrelnMIW1GflSbkFT7bA==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
wXzTAq00IxVFCnSX7+LQnUn3Mh+N+3dNkjw3KFUiif/9lVY6JVQeAa2K8BaxHehdvYweihW4IEtO
b73PNWJsE33rw2NC335uULLxhZvpzaJnilzCYei5X1Jnf/7nlBMYHCgaDZ3FS5Y5SvGgx2T22rRe
c7RkqVseXilXYE618LpzC6HHHuh8vQQCSoQXTB6iOqTRUjOELo34EKWQPQfOPgBr/zBVDsew/Kc8
aA8lUtnt0JjqC7/aGNNijzoHaXKoxlUCI+xXhkiOCjEiXJwoIiuqOKdX3bc+WhoFsZQ+QZkWnUKk
OIE/DDj1P4Qs7sXSwC5v4yXxXQtoJx+USNEnCQ==

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
