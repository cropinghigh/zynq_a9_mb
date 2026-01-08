// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
// Date        : Tue Dec 16 14:56:45 2025
// Host        : indir-homePc running 64-bit Manjaro Linux
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_c_shift_ram_0_0_sim_netlist.v
// Design      : design_1_c_shift_ram_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z010clg400-3
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "design_1_c_shift_ram_0_0,c_shift_ram_v12_0_14,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "c_shift_ram_v12_0_14,Vivado 2021.1" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (D,
    CLK,
    Q);
  (* x_interface_info = "xilinx.com:signal:data:1.0 d_intf DATA" *) (* x_interface_parameter = "XIL_INTERFACENAME d_intf, LAYERED_METADATA undef" *) input [0:0]D;
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk_intf CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk_intf, ASSOCIATED_BUSIF q_intf:sinit_intf:sset_intf:d_intf:a_intf, ASSOCIATED_RESET SCLR, ASSOCIATED_CLKEN CE, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, INSERT_VIP 0" *) input CLK;
  (* x_interface_info = "xilinx.com:signal:data:1.0 q_intf DATA" *) (* x_interface_parameter = "XIL_INTERFACENAME q_intf, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value data} bitwidth {attribs {resolve_type generated dependency data_bitwidth format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}} DATA_WIDTH 1}" *) output [0:0]Q;

  wire CLK;
  wire [0:0]D;
  wire [0:0]Q;

  (* C_AINIT_VAL = "0" *) 
  (* C_HAS_CE = "0" *) 
  (* C_HAS_SCLR = "0" *) 
  (* C_HAS_SINIT = "0" *) 
  (* C_HAS_SSET = "0" *) 
  (* C_SINIT_VAL = "0" *) 
  (* C_SYNC_ENABLE = "0" *) 
  (* C_SYNC_PRIORITY = "1" *) 
  (* C_WIDTH = "1" *) 
  (* c_addr_width = "4" *) 
  (* c_default_data = "0" *) 
  (* c_depth = "1" *) 
  (* c_elaboration_dir = "./" *) 
  (* c_has_a = "0" *) 
  (* c_mem_init_file = "no_coe_file_loaded" *) 
  (* c_opt_goal = "0" *) 
  (* c_parser_type = "0" *) 
  (* c_read_mif = "0" *) 
  (* c_reg_last_bit = "1" *) 
  (* c_shift_type = "0" *) 
  (* c_verbosity = "0" *) 
  (* c_xdevicefamily = "zynq" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_c_shift_ram_v12_0_14 U0
       (.A({1'b0,1'b0,1'b0,1'b0}),
        .CE(1'b1),
        .CLK(CLK),
        .D(D),
        .Q(Q),
        .SCLR(1'b0),
        .SINIT(1'b0),
        .SSET(1'b0));
endmodule
`pragma protect begin_protected
`pragma protect version = 1
`pragma protect encrypt_agent = "XILINX"
`pragma protect encrypt_agent_info = "Xilinx Encryption Tool 2021.1"
`pragma protect key_keyowner="Synopsys", key_keyname="SNPS-VCS-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
AZTENX7kySJrf86kqJpwYTuOuSVcw8GQm6v0Ztbuten9iY6x9PVf9Ozxgl5qMvGQVoBfH4farOrW
euMmnE47cmUuQH3gCajwI5jAluAivvKMPRhLrXNVBoeiBqFJxQPot989sambwnPZ7lB3eM97biQM
GP1OaREX7FW26lZlgWo=

`pragma protect key_keyowner="Aldec", key_keyname="ALDEC15_001", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
LOvCwmyDiRIUlUbTjWGYoW8lo914ILidAKzaU03fvIKxdXzC3wiZArBRFyJcfs3ZR02OfzvyaaqE
GlHAipva4x4iIvksAemZoHyc9vWDTHXCkATC6ftsBnMRvmUYjYhn1Q5WLUxJTbVbSS4P0+pa8nrq
Yvb2hOVe8SdOY7gbwXbg1yMzGdiwRupvYFmBMePZ/gy6popv2bQmCr960xx6KSc8lgyjNh9K5OrX
sHDQ9IXc0Rby2iOl6lkdXDoUDQo48Fb51PhTZXSCCFaPo/SvIknLxknx420ANtGScesrldB9cLS+
vEKfSSA5ISNbMJecg8hbjBwEkDkOvKLmlMh9cw==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VELOCE-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
q78333cnwkPEuZvJdvVwWYYoxybKnTQ4dv8poFqLg0p2iZMq09og98h2brfK+2C4VfUU65ePa0I5
hTdIe2hauvb8Tsx4YzvRac7vxnWt1otEhjCSfjUmWwUJ1It65RzHOI7sVqD/K+FvtsNfY4YILDsA
zOyzEuFrk53ADCqiqoU=

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VERIF-SIM-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
PC8IAekL1l8xbaJo2br5RRxcWRVI5wG7IgVYMEtRoC5MAdgqC2q69Fd5VCVFJhB1tccTyCXgIFAM
Yexljtj8CotIaF4a/cXRx5zNkfQVHUHDlgBLJP2PliaiYT2OZw6SqDumYh62DMhhrggf0gNQQHVo
Nf5KgzZ+fj5lrclIvLik0mqz0hn8HxGYMkrIPy1I2S3N1z28iveVj6OKHFzCr+wYqpNMG5o0k4kS
l0UG63517fAQi0Jv/vTwJzVOoJIZwtWdKaVo2dJxPbSs/qrV3jVlFnRwt+aDvdNXGRyAjIZoaJnT
1I4N8LGH+yApnrEt0jAYUG13LtrpR7if1ohZYg==

`pragma protect key_keyowner="Real Intent", key_keyname="RI-RSA-KEY-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
ARVtwj16NB6Xnvu1SHt6Mhz1hOEWLP7du7Y1mmHR0s2rD6IJ2lrPSAMLJE32xyT0kNJWTyVr/rEQ
sCN4FrBXNgHsrNndmbAPGr3tv2eCsSVgjU/TUX3i1JviUINn64zrDhQbLPsdOpDziRNvAidUiwzL
3e5RpUthr9noClmlWVz3T5dbHQ4G6X3256B1o0emqvXgQN6g0chKorFNj1qt9+TCVy0xDbRn3uXC
aQFj1HRVtc/YG7I5hTfWnMuzgmSvI1Eg3oZ0kQX8FpULypHinDpzUa2Me8zOia+CoUmFLqi02Cie
wJyAmxQtrZk8FpExjWvC9XS+1qVP7aQYoY3UfQ==

`pragma protect key_keyowner="Xilinx", key_keyname="xilinxt_2021_01", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
bO0gM5w4ZjoWa5MlNKrFMioCJbTatcmj8FMq7/5yuBMpVC+DbW9KfTKCJ7Nh7IzLY9WrUi6HZNTx
O/OeQbO6L36O8kRfCGSY7NIlsRRu9pZ2EWzDoQIVUP6WbDsh53LDiDvVRjZtMJYZPTviIJmLVhTY
qnFTI1Lys0DUGocwUs1diyQACxjcKXOmzk9SisbMWgvI3L4Quf8uI7FqLIcCkEdJEGE4uUChyZ0L
/0KNhOST0YKFVcySyx/M/69tfC3qeWTIVZHMW5hPvhqAzn7+/awc9EQaSrribmpOu6bqMI2aJTiI
F818WcPWbmmtHn2ApBM3z2/guc73HHtyUyuoPw==

`pragma protect key_keyowner="Metrics Technologies Inc.", key_keyname="DSim", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
nM2r0q5O9dWNP6ASgMzgvRKpY4KWRu+AZ2fWagcuzDC7eP6TtlpvlWGgW4nSOjddOETNq0nmAP5f
1atppvtlKbHN/xFzBVSiimX7SXbvfAW9Y7yBmtLsYeyzAcaEL2DkPBUwzXCbKM0Iwq3DApaO9YCY
YLMpmnJe/cxVXlakDegDLxAIDpS8TNApNpyjiMmSanXMbdyha2XnTy3j2aNp5ep+BzK1GvclYFCE
Zd9lYqfLLJQAUn9ZkDNlaN77j6Lc2phcpyjKJPR7M7x1bRfNjmcA9AWl47ujbnOJNWUOZaw4FMNW
J+5TwyUEH45u9M7asI+ahi5IieAlWdKjbaNAGA==

`pragma protect key_keyowner="Atrenta", key_keyname="ATR-SG-RSA-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=384)
`pragma protect key_block
qTQTGePxQNCc7YeSAuKK6YquxJJfC0fjsjU5577tcJpR0Q8b9cY6vJRUksHJRBIY/BYJS2v4Qfii
+6Gpq4cIWHo/DVmm3ui9ErCuY2hm8mkYIHYgFar2pibYH+SOhHxXVIzjc0kpEBLfBtHlD8PeJKQ1
3aDicAdyG78NDtNLafCmeYxaJ5exJ+Viyogqt3ANmy2xMnsDv/3eUpwG7aLLsLSWaf5ewmaRW4eY
JJmXi7n/k9cqWUk79+g84adjeNrMFdTAfBg1BlqQoCXMXRAlT9HYfKvE6AJGA2fEDCptXfhR9D03
Lw2D2TfE9XCLIBAC4yjHjaX3z94oggHjWRNh6VOuqFbQF/4TFbwQcsjI5E//2ZZ2Drj3KBvpIdHx
ZWQiDwj3qZMfMERQZltipHH/ZD/7FHxKlXrIpwwChv5gwV00efSd05nyTqFS0NcESkoclFLoc1HC
5gSq5Y4vZxxuoxbXhx7jtPkqP+aeYu8R62s91yeWi0+IaPkqI/WSYKAc

`pragma protect key_keyowner="Cadence Design Systems.", key_keyname="CDS_RSA_KEY_VER_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
n/gp4cLvb80CyxL7udPSVx19dErBSFvTq7xRHFGTyfOxturjd3YE8FJiQ2f5OYr1tjtQgKZyL4GF
SLrL0JcowtQ5v+oJ1+zJhXwEKvPRfqbk4Jni5l5puJjLlLN7yklz0huVGYHvyvORAaAbqLWiBu8x
zJX9Mv5lioTTgEVRHF7DYsHfs/C/iIjzmotQKTeJFGm3Wwg95z4bQ1PQStWZeVT8PkEXhpFk0NiZ
2LSEUFRZCTcGlEphpePcwL+3f94R0XzpKiMIAPUhm4AySlNBmmbc/rhtO01oCguq6HgLECStahjS
1LTrV8am4R1hk0qH7qH0mAv/6+czc4Qr1jbpng==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-PREC-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
M54sp/KyK7UFoc8+Dm03LVsdYh007QV4FJHMxWORthsB0qPCpB5BbzPrphvIwLNAYiKxvEL+s8xm
BFIFpPjl7yyfTOQuZ1CNt9t+dXn10x3J98iCU1coiZ9J1e7C65Tz/u2DgD8FP8kwkXdiiDl9E8aW
NLBPWMBN6uV8uQAgKUNkNm7Lv0PcaPQhgFvvA2zmzeLnI6OPv5cV56mVQ9WS2HiGUwlyyLv8XBMW
ER+1yugL05rwBJyfzKDU4vTQti5RM8PeyTxDraSzjg1806GbYQGoNlBDan8/J5u3vBIonnsQwxk4
i7I2zd6WD/geNeClguX06ZAweXEN54gMKhWldA==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
mrIeeDghXYDW6G/CVGWp6l4gLCd5c3EUfQnu2a7w4jwUt8utHnyyLS5/2HDr+cAkShR3kcAUTCcL
8YBV1A5rjkvQJgNHUSNm2g/OdbU2cxbYYLFf9brsOo7WfCN6oGWB9Y4ui4DK9V4b6woOl6ApAzYk
Ky92Llo3Z/er1SklejjSL+h+9dNJilBIZWGbOD1g4xalNdaV24LDIE2AcSKDyR0avGpMOlEdaIGM
AR9RPzycW1/EYe7CHeAXmMZdOCqjued//+M5r+1RwOniEBh07tpA6E48gujeDAMMwWOiR53ZbbUw
rALVWz5jDukwMwV6+7PUOjziHxaHAVtJNByIsg==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 6432)
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
