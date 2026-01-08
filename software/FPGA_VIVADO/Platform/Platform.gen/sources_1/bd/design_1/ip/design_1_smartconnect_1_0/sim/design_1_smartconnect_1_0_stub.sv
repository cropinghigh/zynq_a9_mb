// (c) Copyright 1995-2025 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


//------------------------------------------------------------------------------------
// Filename:    design_1_smartconnect_1_0_stub.sv
// Description: This HDL file is intended to be used with following simulators only:
//
//   Vivado Simulator (XSim)
//   Cadence Xcelium Simulator
//   Aldec Riviera-PRO Simulator
//
//------------------------------------------------------------------------------------
`timescale 1ps/1ps

`ifdef XILINX_SIMULATOR

`ifndef XILINX_SIMULATOR_BITASBOOL
`define XILINX_SIMULATOR_BITASBOOL
typedef bit bit_as_bool;
`endif

(* SC_MODULE_EXPORT *)
module design_1_smartconnect_1_0 (
  input bit_as_bool aclk,
  input bit_as_bool aresetn,
  input bit [11 : 0] S00_AXI_awid,
  input bit [31 : 0] S00_AXI_awaddr,
  input bit [3 : 0] S00_AXI_awlen,
  input bit [2 : 0] S00_AXI_awsize,
  input bit [1 : 0] S00_AXI_awburst,
  input bit [1 : 0] S00_AXI_awlock,
  input bit [3 : 0] S00_AXI_awcache,
  input bit [2 : 0] S00_AXI_awprot,
  input bit [3 : 0] S00_AXI_awqos,
  input bit_as_bool S00_AXI_awvalid,
  output bit_as_bool S00_AXI_awready,
  input bit [11 : 0] S00_AXI_wid,
  input bit [31 : 0] S00_AXI_wdata,
  input bit [3 : 0] S00_AXI_wstrb,
  input bit_as_bool S00_AXI_wlast,
  input bit_as_bool S00_AXI_wvalid,
  output bit_as_bool S00_AXI_wready,
  output bit [11 : 0] S00_AXI_bid,
  output bit [1 : 0] S00_AXI_bresp,
  output bit_as_bool S00_AXI_bvalid,
  input bit_as_bool S00_AXI_bready,
  input bit [11 : 0] S00_AXI_arid,
  input bit [31 : 0] S00_AXI_araddr,
  input bit [3 : 0] S00_AXI_arlen,
  input bit [2 : 0] S00_AXI_arsize,
  input bit [1 : 0] S00_AXI_arburst,
  input bit [1 : 0] S00_AXI_arlock,
  input bit [3 : 0] S00_AXI_arcache,
  input bit [2 : 0] S00_AXI_arprot,
  input bit [3 : 0] S00_AXI_arqos,
  input bit_as_bool S00_AXI_arvalid,
  output bit_as_bool S00_AXI_arready,
  output bit [11 : 0] S00_AXI_rid,
  output bit [31 : 0] S00_AXI_rdata,
  output bit [1 : 0] S00_AXI_rresp,
  output bit_as_bool S00_AXI_rlast,
  output bit_as_bool S00_AXI_rvalid,
  input bit_as_bool S00_AXI_rready,
  output bit [8 : 0] M00_AXI_awaddr,
  output bit [2 : 0] M00_AXI_awprot,
  output bit_as_bool M00_AXI_awvalid,
  input bit_as_bool M00_AXI_awready,
  output bit [31 : 0] M00_AXI_wdata,
  output bit [3 : 0] M00_AXI_wstrb,
  output bit_as_bool M00_AXI_wvalid,
  input bit_as_bool M00_AXI_wready,
  input bit [1 : 0] M00_AXI_bresp,
  input bit_as_bool M00_AXI_bvalid,
  output bit_as_bool M00_AXI_bready,
  output bit [8 : 0] M00_AXI_araddr,
  output bit [2 : 0] M00_AXI_arprot,
  output bit_as_bool M00_AXI_arvalid,
  input bit_as_bool M00_AXI_arready,
  input bit [31 : 0] M00_AXI_rdata,
  input bit [1 : 0] M00_AXI_rresp,
  input bit_as_bool M00_AXI_rvalid,
  output bit_as_bool M00_AXI_rready,
  output bit [5 : 0] M01_AXI_awaddr,
  output bit [2 : 0] M01_AXI_awprot,
  output bit_as_bool M01_AXI_awvalid,
  input bit_as_bool M01_AXI_awready,
  output bit [31 : 0] M01_AXI_wdata,
  output bit [3 : 0] M01_AXI_wstrb,
  output bit_as_bool M01_AXI_wvalid,
  input bit_as_bool M01_AXI_wready,
  input bit [1 : 0] M01_AXI_bresp,
  input bit_as_bool M01_AXI_bvalid,
  output bit_as_bool M01_AXI_bready,
  output bit [5 : 0] M01_AXI_araddr,
  output bit [2 : 0] M01_AXI_arprot,
  output bit_as_bool M01_AXI_arvalid,
  input bit_as_bool M01_AXI_arready,
  input bit [31 : 0] M01_AXI_rdata,
  input bit [1 : 0] M01_AXI_rresp,
  input bit_as_bool M01_AXI_rvalid,
  output bit_as_bool M01_AXI_rready,
  output bit [8 : 0] M02_AXI_awaddr,
  output bit [2 : 0] M02_AXI_awprot,
  output bit_as_bool M02_AXI_awvalid,
  input bit_as_bool M02_AXI_awready,
  output bit [31 : 0] M02_AXI_wdata,
  output bit [3 : 0] M02_AXI_wstrb,
  output bit_as_bool M02_AXI_wvalid,
  input bit_as_bool M02_AXI_wready,
  input bit [1 : 0] M02_AXI_bresp,
  input bit_as_bool M02_AXI_bvalid,
  output bit_as_bool M02_AXI_bready,
  output bit [8 : 0] M02_AXI_araddr,
  output bit [2 : 0] M02_AXI_arprot,
  output bit_as_bool M02_AXI_arvalid,
  input bit_as_bool M02_AXI_arready,
  input bit [31 : 0] M02_AXI_rdata,
  input bit [1 : 0] M02_AXI_rresp,
  input bit_as_bool M02_AXI_rvalid,
  output bit_as_bool M02_AXI_rready,
  output bit [7 : 0] M03_AXI_awaddr,
  output bit [2 : 0] M03_AXI_awprot,
  output bit_as_bool M03_AXI_awvalid,
  input bit_as_bool M03_AXI_awready,
  output bit [31 : 0] M03_AXI_wdata,
  output bit [3 : 0] M03_AXI_wstrb,
  output bit_as_bool M03_AXI_wvalid,
  input bit_as_bool M03_AXI_wready,
  input bit [1 : 0] M03_AXI_bresp,
  input bit_as_bool M03_AXI_bvalid,
  output bit_as_bool M03_AXI_bready,
  output bit [7 : 0] M03_AXI_araddr,
  output bit [2 : 0] M03_AXI_arprot,
  output bit_as_bool M03_AXI_arvalid,
  input bit_as_bool M03_AXI_arready,
  input bit [31 : 0] M03_AXI_rdata,
  input bit [1 : 0] M03_AXI_rresp,
  input bit_as_bool M03_AXI_rvalid,
  output bit_as_bool M03_AXI_rready,
  output bit [6 : 0] M04_AXI_awaddr,
  output bit [2 : 0] M04_AXI_awprot,
  output bit_as_bool M04_AXI_awvalid,
  input bit_as_bool M04_AXI_awready,
  output bit [31 : 0] M04_AXI_wdata,
  output bit [3 : 0] M04_AXI_wstrb,
  output bit_as_bool M04_AXI_wvalid,
  input bit_as_bool M04_AXI_wready,
  input bit [1 : 0] M04_AXI_bresp,
  input bit_as_bool M04_AXI_bvalid,
  output bit_as_bool M04_AXI_bready,
  output bit [6 : 0] M04_AXI_araddr,
  output bit [2 : 0] M04_AXI_arprot,
  output bit_as_bool M04_AXI_arvalid,
  input bit_as_bool M04_AXI_arready,
  input bit [31 : 0] M04_AXI_rdata,
  input bit [1 : 0] M04_AXI_rresp,
  input bit_as_bool M04_AXI_rvalid,
  output bit_as_bool M04_AXI_rready,
  output bit_as_bool M05_AXI_awid,
  output bit_as_bool M05_AXI_awaddr,
  output bit_as_bool M05_AXI_awlen,
  output bit [2 : 0] M05_AXI_awsize,
  output bit [1 : 0] M05_AXI_awburst,
  output bit_as_bool M05_AXI_awlock,
  output bit [3 : 0] M05_AXI_awcache,
  output bit [2 : 0] M05_AXI_awprot,
  output bit [3 : 0] M05_AXI_awregion,
  output bit [3 : 0] M05_AXI_awqos,
  output bit_as_bool M05_AXI_awuser,
  output bit [0 : 0] M05_AXI_awvalid,
  input bit [0 : 0] M05_AXI_awready,
  output bit_as_bool M05_AXI_wid,
  output bit_as_bool M05_AXI_wdata,
  output bit_as_bool M05_AXI_wstrb,
  output bit [0 : 0] M05_AXI_wlast,
  output bit_as_bool M05_AXI_wuser,
  output bit [0 : 0] M05_AXI_wvalid,
  input bit [0 : 0] M05_AXI_wready,
  input bit_as_bool M05_AXI_bid,
  input bit [1 : 0] M05_AXI_bresp,
  input bit_as_bool M05_AXI_buser,
  input bit [0 : 0] M05_AXI_bvalid,
  output bit [0 : 0] M05_AXI_bready,
  output bit_as_bool M05_AXI_arid,
  output bit_as_bool M05_AXI_araddr,
  output bit_as_bool M05_AXI_arlen,
  output bit [2 : 0] M05_AXI_arsize,
  output bit [1 : 0] M05_AXI_arburst,
  output bit_as_bool M05_AXI_arlock,
  output bit [3 : 0] M05_AXI_arcache,
  output bit [2 : 0] M05_AXI_arprot,
  output bit [3 : 0] M05_AXI_arregion,
  output bit [3 : 0] M05_AXI_arqos,
  output bit_as_bool M05_AXI_aruser,
  output bit [0 : 0] M05_AXI_arvalid,
  input bit [0 : 0] M05_AXI_arready,
  input bit_as_bool M05_AXI_rid,
  input bit_as_bool M05_AXI_rdata,
  input bit [1 : 0] M05_AXI_rresp,
  input bit [0 : 0] M05_AXI_rlast,
  input bit_as_bool M05_AXI_ruser,
  input bit [0 : 0] M05_AXI_rvalid,
  output bit [0 : 0] M05_AXI_rready,
  output bit_as_bool M06_AXI_awid,
  output bit_as_bool M06_AXI_awaddr,
  output bit_as_bool M06_AXI_awlen,
  output bit [2 : 0] M06_AXI_awsize,
  output bit [1 : 0] M06_AXI_awburst,
  output bit_as_bool M06_AXI_awlock,
  output bit [3 : 0] M06_AXI_awcache,
  output bit [2 : 0] M06_AXI_awprot,
  output bit [3 : 0] M06_AXI_awregion,
  output bit [3 : 0] M06_AXI_awqos,
  output bit_as_bool M06_AXI_awuser,
  output bit [0 : 0] M06_AXI_awvalid,
  input bit [0 : 0] M06_AXI_awready,
  output bit_as_bool M06_AXI_wid,
  output bit_as_bool M06_AXI_wdata,
  output bit_as_bool M06_AXI_wstrb,
  output bit [0 : 0] M06_AXI_wlast,
  output bit_as_bool M06_AXI_wuser,
  output bit [0 : 0] M06_AXI_wvalid,
  input bit [0 : 0] M06_AXI_wready,
  input bit_as_bool M06_AXI_bid,
  input bit [1 : 0] M06_AXI_bresp,
  input bit_as_bool M06_AXI_buser,
  input bit [0 : 0] M06_AXI_bvalid,
  output bit [0 : 0] M06_AXI_bready,
  output bit_as_bool M06_AXI_arid,
  output bit_as_bool M06_AXI_araddr,
  output bit_as_bool M06_AXI_arlen,
  output bit [2 : 0] M06_AXI_arsize,
  output bit [1 : 0] M06_AXI_arburst,
  output bit_as_bool M06_AXI_arlock,
  output bit [3 : 0] M06_AXI_arcache,
  output bit [2 : 0] M06_AXI_arprot,
  output bit [3 : 0] M06_AXI_arregion,
  output bit [3 : 0] M06_AXI_arqos,
  output bit_as_bool M06_AXI_aruser,
  output bit [0 : 0] M06_AXI_arvalid,
  input bit [0 : 0] M06_AXI_arready,
  input bit_as_bool M06_AXI_rid,
  input bit_as_bool M06_AXI_rdata,
  input bit [1 : 0] M06_AXI_rresp,
  input bit [0 : 0] M06_AXI_rlast,
  input bit_as_bool M06_AXI_ruser,
  input bit [0 : 0] M06_AXI_rvalid,
  output bit [0 : 0] M06_AXI_rready,
  output bit_as_bool M07_AXI_awid,
  output bit_as_bool M07_AXI_awaddr,
  output bit_as_bool M07_AXI_awlen,
  output bit [2 : 0] M07_AXI_awsize,
  output bit [1 : 0] M07_AXI_awburst,
  output bit_as_bool M07_AXI_awlock,
  output bit [3 : 0] M07_AXI_awcache,
  output bit [2 : 0] M07_AXI_awprot,
  output bit [3 : 0] M07_AXI_awregion,
  output bit [3 : 0] M07_AXI_awqos,
  output bit_as_bool M07_AXI_awuser,
  output bit [0 : 0] M07_AXI_awvalid,
  input bit [0 : 0] M07_AXI_awready,
  output bit_as_bool M07_AXI_wid,
  output bit_as_bool M07_AXI_wdata,
  output bit_as_bool M07_AXI_wstrb,
  output bit [0 : 0] M07_AXI_wlast,
  output bit_as_bool M07_AXI_wuser,
  output bit [0 : 0] M07_AXI_wvalid,
  input bit [0 : 0] M07_AXI_wready,
  input bit_as_bool M07_AXI_bid,
  input bit [1 : 0] M07_AXI_bresp,
  input bit_as_bool M07_AXI_buser,
  input bit [0 : 0] M07_AXI_bvalid,
  output bit [0 : 0] M07_AXI_bready,
  output bit_as_bool M07_AXI_arid,
  output bit_as_bool M07_AXI_araddr,
  output bit_as_bool M07_AXI_arlen,
  output bit [2 : 0] M07_AXI_arsize,
  output bit [1 : 0] M07_AXI_arburst,
  output bit_as_bool M07_AXI_arlock,
  output bit [3 : 0] M07_AXI_arcache,
  output bit [2 : 0] M07_AXI_arprot,
  output bit [3 : 0] M07_AXI_arregion,
  output bit [3 : 0] M07_AXI_arqos,
  output bit_as_bool M07_AXI_aruser,
  output bit [0 : 0] M07_AXI_arvalid,
  input bit [0 : 0] M07_AXI_arready,
  input bit_as_bool M07_AXI_rid,
  input bit_as_bool M07_AXI_rdata,
  input bit [1 : 0] M07_AXI_rresp,
  input bit [0 : 0] M07_AXI_rlast,
  input bit_as_bool M07_AXI_ruser,
  input bit [0 : 0] M07_AXI_rvalid,
  output bit [0 : 0] M07_AXI_rready,
  output bit_as_bool M08_AXI_awid,
  output bit_as_bool M08_AXI_awaddr,
  output bit_as_bool M08_AXI_awlen,
  output bit [2 : 0] M08_AXI_awsize,
  output bit [1 : 0] M08_AXI_awburst,
  output bit_as_bool M08_AXI_awlock,
  output bit [3 : 0] M08_AXI_awcache,
  output bit [2 : 0] M08_AXI_awprot,
  output bit [3 : 0] M08_AXI_awregion,
  output bit [3 : 0] M08_AXI_awqos,
  output bit_as_bool M08_AXI_awuser,
  output bit [0 : 0] M08_AXI_awvalid,
  input bit [0 : 0] M08_AXI_awready,
  output bit_as_bool M08_AXI_wid,
  output bit_as_bool M08_AXI_wdata,
  output bit_as_bool M08_AXI_wstrb,
  output bit [0 : 0] M08_AXI_wlast,
  output bit_as_bool M08_AXI_wuser,
  output bit [0 : 0] M08_AXI_wvalid,
  input bit [0 : 0] M08_AXI_wready,
  input bit_as_bool M08_AXI_bid,
  input bit [1 : 0] M08_AXI_bresp,
  input bit_as_bool M08_AXI_buser,
  input bit [0 : 0] M08_AXI_bvalid,
  output bit [0 : 0] M08_AXI_bready,
  output bit_as_bool M08_AXI_arid,
  output bit_as_bool M08_AXI_araddr,
  output bit_as_bool M08_AXI_arlen,
  output bit [2 : 0] M08_AXI_arsize,
  output bit [1 : 0] M08_AXI_arburst,
  output bit_as_bool M08_AXI_arlock,
  output bit [3 : 0] M08_AXI_arcache,
  output bit [2 : 0] M08_AXI_arprot,
  output bit [3 : 0] M08_AXI_arregion,
  output bit [3 : 0] M08_AXI_arqos,
  output bit_as_bool M08_AXI_aruser,
  output bit [0 : 0] M08_AXI_arvalid,
  input bit [0 : 0] M08_AXI_arready,
  input bit_as_bool M08_AXI_rid,
  input bit_as_bool M08_AXI_rdata,
  input bit [1 : 0] M08_AXI_rresp,
  input bit [0 : 0] M08_AXI_rlast,
  input bit_as_bool M08_AXI_ruser,
  input bit [0 : 0] M08_AXI_rvalid,
  output bit [0 : 0] M08_AXI_rready
);
endmodule
`endif

`ifdef XCELIUM
(* XMSC_MODULE_EXPORT *)
module design_1_smartconnect_1_0 (aclk,aresetn,S00_AXI_awid,S00_AXI_awaddr,S00_AXI_awlen,S00_AXI_awsize,S00_AXI_awburst,S00_AXI_awlock,S00_AXI_awcache,S00_AXI_awprot,S00_AXI_awqos,S00_AXI_awvalid,S00_AXI_awready,S00_AXI_wid,S00_AXI_wdata,S00_AXI_wstrb,S00_AXI_wlast,S00_AXI_wvalid,S00_AXI_wready,S00_AXI_bid,S00_AXI_bresp,S00_AXI_bvalid,S00_AXI_bready,S00_AXI_arid,S00_AXI_araddr,S00_AXI_arlen,S00_AXI_arsize,S00_AXI_arburst,S00_AXI_arlock,S00_AXI_arcache,S00_AXI_arprot,S00_AXI_arqos,S00_AXI_arvalid,S00_AXI_arready,S00_AXI_rid,S00_AXI_rdata,S00_AXI_rresp,S00_AXI_rlast,S00_AXI_rvalid,S00_AXI_rready,M00_AXI_awaddr,M00_AXI_awprot,M00_AXI_awvalid,M00_AXI_awready,M00_AXI_wdata,M00_AXI_wstrb,M00_AXI_wvalid,M00_AXI_wready,M00_AXI_bresp,M00_AXI_bvalid,M00_AXI_bready,M00_AXI_araddr,M00_AXI_arprot,M00_AXI_arvalid,M00_AXI_arready,M00_AXI_rdata,M00_AXI_rresp,M00_AXI_rvalid,M00_AXI_rready,M01_AXI_awaddr,M01_AXI_awprot,M01_AXI_awvalid,M01_AXI_awready,M01_AXI_wdata,M01_AXI_wstrb,M01_AXI_wvalid,M01_AXI_wready,M01_AXI_bresp,M01_AXI_bvalid,M01_AXI_bready,M01_AXI_araddr,M01_AXI_arprot,M01_AXI_arvalid,M01_AXI_arready,M01_AXI_rdata,M01_AXI_rresp,M01_AXI_rvalid,M01_AXI_rready,M02_AXI_awaddr,M02_AXI_awprot,M02_AXI_awvalid,M02_AXI_awready,M02_AXI_wdata,M02_AXI_wstrb,M02_AXI_wvalid,M02_AXI_wready,M02_AXI_bresp,M02_AXI_bvalid,M02_AXI_bready,M02_AXI_araddr,M02_AXI_arprot,M02_AXI_arvalid,M02_AXI_arready,M02_AXI_rdata,M02_AXI_rresp,M02_AXI_rvalid,M02_AXI_rready,M03_AXI_awaddr,M03_AXI_awprot,M03_AXI_awvalid,M03_AXI_awready,M03_AXI_wdata,M03_AXI_wstrb,M03_AXI_wvalid,M03_AXI_wready,M03_AXI_bresp,M03_AXI_bvalid,M03_AXI_bready,M03_AXI_araddr,M03_AXI_arprot,M03_AXI_arvalid,M03_AXI_arready,M03_AXI_rdata,M03_AXI_rresp,M03_AXI_rvalid,M03_AXI_rready,M04_AXI_awaddr,M04_AXI_awprot,M04_AXI_awvalid,M04_AXI_awready,M04_AXI_wdata,M04_AXI_wstrb,M04_AXI_wvalid,M04_AXI_wready,M04_AXI_bresp,M04_AXI_bvalid,M04_AXI_bready,M04_AXI_araddr,M04_AXI_arprot,M04_AXI_arvalid,M04_AXI_arready,M04_AXI_rdata,M04_AXI_rresp,M04_AXI_rvalid,M04_AXI_rready,M05_AXI_awid,M05_AXI_awaddr,M05_AXI_awlen,M05_AXI_awsize,M05_AXI_awburst,M05_AXI_awlock,M05_AXI_awcache,M05_AXI_awprot,M05_AXI_awregion,M05_AXI_awqos,M05_AXI_awuser,M05_AXI_awvalid,M05_AXI_awready,M05_AXI_wid,M05_AXI_wdata,M05_AXI_wstrb,M05_AXI_wlast,M05_AXI_wuser,M05_AXI_wvalid,M05_AXI_wready,M05_AXI_bid,M05_AXI_bresp,M05_AXI_buser,M05_AXI_bvalid,M05_AXI_bready,M05_AXI_arid,M05_AXI_araddr,M05_AXI_arlen,M05_AXI_arsize,M05_AXI_arburst,M05_AXI_arlock,M05_AXI_arcache,M05_AXI_arprot,M05_AXI_arregion,M05_AXI_arqos,M05_AXI_aruser,M05_AXI_arvalid,M05_AXI_arready,M05_AXI_rid,M05_AXI_rdata,M05_AXI_rresp,M05_AXI_rlast,M05_AXI_ruser,M05_AXI_rvalid,M05_AXI_rready,M06_AXI_awid,M06_AXI_awaddr,M06_AXI_awlen,M06_AXI_awsize,M06_AXI_awburst,M06_AXI_awlock,M06_AXI_awcache,M06_AXI_awprot,M06_AXI_awregion,M06_AXI_awqos,M06_AXI_awuser,M06_AXI_awvalid,M06_AXI_awready,M06_AXI_wid,M06_AXI_wdata,M06_AXI_wstrb,M06_AXI_wlast,M06_AXI_wuser,M06_AXI_wvalid,M06_AXI_wready,M06_AXI_bid,M06_AXI_bresp,M06_AXI_buser,M06_AXI_bvalid,M06_AXI_bready,M06_AXI_arid,M06_AXI_araddr,M06_AXI_arlen,M06_AXI_arsize,M06_AXI_arburst,M06_AXI_arlock,M06_AXI_arcache,M06_AXI_arprot,M06_AXI_arregion,M06_AXI_arqos,M06_AXI_aruser,M06_AXI_arvalid,M06_AXI_arready,M06_AXI_rid,M06_AXI_rdata,M06_AXI_rresp,M06_AXI_rlast,M06_AXI_ruser,M06_AXI_rvalid,M06_AXI_rready,M07_AXI_awid,M07_AXI_awaddr,M07_AXI_awlen,M07_AXI_awsize,M07_AXI_awburst,M07_AXI_awlock,M07_AXI_awcache,M07_AXI_awprot,M07_AXI_awregion,M07_AXI_awqos,M07_AXI_awuser,M07_AXI_awvalid,M07_AXI_awready,M07_AXI_wid,M07_AXI_wdata,M07_AXI_wstrb,M07_AXI_wlast,M07_AXI_wuser,M07_AXI_wvalid,M07_AXI_wready,M07_AXI_bid,M07_AXI_bresp,M07_AXI_buser,M07_AXI_bvalid,M07_AXI_bready,M07_AXI_arid,M07_AXI_araddr,M07_AXI_arlen,M07_AXI_arsize,M07_AXI_arburst,M07_AXI_arlock,M07_AXI_arcache,M07_AXI_arprot,M07_AXI_arregion,M07_AXI_arqos,M07_AXI_aruser,M07_AXI_arvalid,M07_AXI_arready,M07_AXI_rid,M07_AXI_rdata,M07_AXI_rresp,M07_AXI_rlast,M07_AXI_ruser,M07_AXI_rvalid,M07_AXI_rready,M08_AXI_awid,M08_AXI_awaddr,M08_AXI_awlen,M08_AXI_awsize,M08_AXI_awburst,M08_AXI_awlock,M08_AXI_awcache,M08_AXI_awprot,M08_AXI_awregion,M08_AXI_awqos,M08_AXI_awuser,M08_AXI_awvalid,M08_AXI_awready,M08_AXI_wid,M08_AXI_wdata,M08_AXI_wstrb,M08_AXI_wlast,M08_AXI_wuser,M08_AXI_wvalid,M08_AXI_wready,M08_AXI_bid,M08_AXI_bresp,M08_AXI_buser,M08_AXI_bvalid,M08_AXI_bready,M08_AXI_arid,M08_AXI_araddr,M08_AXI_arlen,M08_AXI_arsize,M08_AXI_arburst,M08_AXI_arlock,M08_AXI_arcache,M08_AXI_arprot,M08_AXI_arregion,M08_AXI_arqos,M08_AXI_aruser,M08_AXI_arvalid,M08_AXI_arready,M08_AXI_rid,M08_AXI_rdata,M08_AXI_rresp,M08_AXI_rlast,M08_AXI_ruser,M08_AXI_rvalid,M08_AXI_rready)
(* integer foreign = "SystemC";
*);
  input bit aclk;
  input bit aresetn;
  input bit [11 : 0] S00_AXI_awid;
  input bit [31 : 0] S00_AXI_awaddr;
  input bit [3 : 0] S00_AXI_awlen;
  input bit [2 : 0] S00_AXI_awsize;
  input bit [1 : 0] S00_AXI_awburst;
  input bit [1 : 0] S00_AXI_awlock;
  input bit [3 : 0] S00_AXI_awcache;
  input bit [2 : 0] S00_AXI_awprot;
  input bit [3 : 0] S00_AXI_awqos;
  input bit S00_AXI_awvalid;
  output wire S00_AXI_awready;
  input bit [11 : 0] S00_AXI_wid;
  input bit [31 : 0] S00_AXI_wdata;
  input bit [3 : 0] S00_AXI_wstrb;
  input bit S00_AXI_wlast;
  input bit S00_AXI_wvalid;
  output wire S00_AXI_wready;
  output wire [11 : 0] S00_AXI_bid;
  output wire [1 : 0] S00_AXI_bresp;
  output wire S00_AXI_bvalid;
  input bit S00_AXI_bready;
  input bit [11 : 0] S00_AXI_arid;
  input bit [31 : 0] S00_AXI_araddr;
  input bit [3 : 0] S00_AXI_arlen;
  input bit [2 : 0] S00_AXI_arsize;
  input bit [1 : 0] S00_AXI_arburst;
  input bit [1 : 0] S00_AXI_arlock;
  input bit [3 : 0] S00_AXI_arcache;
  input bit [2 : 0] S00_AXI_arprot;
  input bit [3 : 0] S00_AXI_arqos;
  input bit S00_AXI_arvalid;
  output wire S00_AXI_arready;
  output wire [11 : 0] S00_AXI_rid;
  output wire [31 : 0] S00_AXI_rdata;
  output wire [1 : 0] S00_AXI_rresp;
  output wire S00_AXI_rlast;
  output wire S00_AXI_rvalid;
  input bit S00_AXI_rready;
  output wire [8 : 0] M00_AXI_awaddr;
  output wire [2 : 0] M00_AXI_awprot;
  output wire M00_AXI_awvalid;
  input bit M00_AXI_awready;
  output wire [31 : 0] M00_AXI_wdata;
  output wire [3 : 0] M00_AXI_wstrb;
  output wire M00_AXI_wvalid;
  input bit M00_AXI_wready;
  input bit [1 : 0] M00_AXI_bresp;
  input bit M00_AXI_bvalid;
  output wire M00_AXI_bready;
  output wire [8 : 0] M00_AXI_araddr;
  output wire [2 : 0] M00_AXI_arprot;
  output wire M00_AXI_arvalid;
  input bit M00_AXI_arready;
  input bit [31 : 0] M00_AXI_rdata;
  input bit [1 : 0] M00_AXI_rresp;
  input bit M00_AXI_rvalid;
  output wire M00_AXI_rready;
  output wire [5 : 0] M01_AXI_awaddr;
  output wire [2 : 0] M01_AXI_awprot;
  output wire M01_AXI_awvalid;
  input bit M01_AXI_awready;
  output wire [31 : 0] M01_AXI_wdata;
  output wire [3 : 0] M01_AXI_wstrb;
  output wire M01_AXI_wvalid;
  input bit M01_AXI_wready;
  input bit [1 : 0] M01_AXI_bresp;
  input bit M01_AXI_bvalid;
  output wire M01_AXI_bready;
  output wire [5 : 0] M01_AXI_araddr;
  output wire [2 : 0] M01_AXI_arprot;
  output wire M01_AXI_arvalid;
  input bit M01_AXI_arready;
  input bit [31 : 0] M01_AXI_rdata;
  input bit [1 : 0] M01_AXI_rresp;
  input bit M01_AXI_rvalid;
  output wire M01_AXI_rready;
  output wire [8 : 0] M02_AXI_awaddr;
  output wire [2 : 0] M02_AXI_awprot;
  output wire M02_AXI_awvalid;
  input bit M02_AXI_awready;
  output wire [31 : 0] M02_AXI_wdata;
  output wire [3 : 0] M02_AXI_wstrb;
  output wire M02_AXI_wvalid;
  input bit M02_AXI_wready;
  input bit [1 : 0] M02_AXI_bresp;
  input bit M02_AXI_bvalid;
  output wire M02_AXI_bready;
  output wire [8 : 0] M02_AXI_araddr;
  output wire [2 : 0] M02_AXI_arprot;
  output wire M02_AXI_arvalid;
  input bit M02_AXI_arready;
  input bit [31 : 0] M02_AXI_rdata;
  input bit [1 : 0] M02_AXI_rresp;
  input bit M02_AXI_rvalid;
  output wire M02_AXI_rready;
  output wire [7 : 0] M03_AXI_awaddr;
  output wire [2 : 0] M03_AXI_awprot;
  output wire M03_AXI_awvalid;
  input bit M03_AXI_awready;
  output wire [31 : 0] M03_AXI_wdata;
  output wire [3 : 0] M03_AXI_wstrb;
  output wire M03_AXI_wvalid;
  input bit M03_AXI_wready;
  input bit [1 : 0] M03_AXI_bresp;
  input bit M03_AXI_bvalid;
  output wire M03_AXI_bready;
  output wire [7 : 0] M03_AXI_araddr;
  output wire [2 : 0] M03_AXI_arprot;
  output wire M03_AXI_arvalid;
  input bit M03_AXI_arready;
  input bit [31 : 0] M03_AXI_rdata;
  input bit [1 : 0] M03_AXI_rresp;
  input bit M03_AXI_rvalid;
  output wire M03_AXI_rready;
  output wire [6 : 0] M04_AXI_awaddr;
  output wire [2 : 0] M04_AXI_awprot;
  output wire M04_AXI_awvalid;
  input bit M04_AXI_awready;
  output wire [31 : 0] M04_AXI_wdata;
  output wire [3 : 0] M04_AXI_wstrb;
  output wire M04_AXI_wvalid;
  input bit M04_AXI_wready;
  input bit [1 : 0] M04_AXI_bresp;
  input bit M04_AXI_bvalid;
  output wire M04_AXI_bready;
  output wire [6 : 0] M04_AXI_araddr;
  output wire [2 : 0] M04_AXI_arprot;
  output wire M04_AXI_arvalid;
  input bit M04_AXI_arready;
  input bit [31 : 0] M04_AXI_rdata;
  input bit [1 : 0] M04_AXI_rresp;
  input bit M04_AXI_rvalid;
  output wire M04_AXI_rready;
  output wire M05_AXI_awid;
  output wire M05_AXI_awaddr;
  output wire M05_AXI_awlen;
  output wire [2 : 0] M05_AXI_awsize;
  output wire [1 : 0] M05_AXI_awburst;
  output wire M05_AXI_awlock;
  output wire [3 : 0] M05_AXI_awcache;
  output wire [2 : 0] M05_AXI_awprot;
  output wire [3 : 0] M05_AXI_awregion;
  output wire [3 : 0] M05_AXI_awqos;
  output wire M05_AXI_awuser;
  output wire [0 : 0] M05_AXI_awvalid;
  input bit [0 : 0] M05_AXI_awready;
  output wire M05_AXI_wid;
  output wire M05_AXI_wdata;
  output wire M05_AXI_wstrb;
  output wire [0 : 0] M05_AXI_wlast;
  output wire M05_AXI_wuser;
  output wire [0 : 0] M05_AXI_wvalid;
  input bit [0 : 0] M05_AXI_wready;
  input bit M05_AXI_bid;
  input bit [1 : 0] M05_AXI_bresp;
  input bit M05_AXI_buser;
  input bit [0 : 0] M05_AXI_bvalid;
  output wire [0 : 0] M05_AXI_bready;
  output wire M05_AXI_arid;
  output wire M05_AXI_araddr;
  output wire M05_AXI_arlen;
  output wire [2 : 0] M05_AXI_arsize;
  output wire [1 : 0] M05_AXI_arburst;
  output wire M05_AXI_arlock;
  output wire [3 : 0] M05_AXI_arcache;
  output wire [2 : 0] M05_AXI_arprot;
  output wire [3 : 0] M05_AXI_arregion;
  output wire [3 : 0] M05_AXI_arqos;
  output wire M05_AXI_aruser;
  output wire [0 : 0] M05_AXI_arvalid;
  input bit [0 : 0] M05_AXI_arready;
  input bit M05_AXI_rid;
  input bit M05_AXI_rdata;
  input bit [1 : 0] M05_AXI_rresp;
  input bit [0 : 0] M05_AXI_rlast;
  input bit M05_AXI_ruser;
  input bit [0 : 0] M05_AXI_rvalid;
  output wire [0 : 0] M05_AXI_rready;
  output wire M06_AXI_awid;
  output wire M06_AXI_awaddr;
  output wire M06_AXI_awlen;
  output wire [2 : 0] M06_AXI_awsize;
  output wire [1 : 0] M06_AXI_awburst;
  output wire M06_AXI_awlock;
  output wire [3 : 0] M06_AXI_awcache;
  output wire [2 : 0] M06_AXI_awprot;
  output wire [3 : 0] M06_AXI_awregion;
  output wire [3 : 0] M06_AXI_awqos;
  output wire M06_AXI_awuser;
  output wire [0 : 0] M06_AXI_awvalid;
  input bit [0 : 0] M06_AXI_awready;
  output wire M06_AXI_wid;
  output wire M06_AXI_wdata;
  output wire M06_AXI_wstrb;
  output wire [0 : 0] M06_AXI_wlast;
  output wire M06_AXI_wuser;
  output wire [0 : 0] M06_AXI_wvalid;
  input bit [0 : 0] M06_AXI_wready;
  input bit M06_AXI_bid;
  input bit [1 : 0] M06_AXI_bresp;
  input bit M06_AXI_buser;
  input bit [0 : 0] M06_AXI_bvalid;
  output wire [0 : 0] M06_AXI_bready;
  output wire M06_AXI_arid;
  output wire M06_AXI_araddr;
  output wire M06_AXI_arlen;
  output wire [2 : 0] M06_AXI_arsize;
  output wire [1 : 0] M06_AXI_arburst;
  output wire M06_AXI_arlock;
  output wire [3 : 0] M06_AXI_arcache;
  output wire [2 : 0] M06_AXI_arprot;
  output wire [3 : 0] M06_AXI_arregion;
  output wire [3 : 0] M06_AXI_arqos;
  output wire M06_AXI_aruser;
  output wire [0 : 0] M06_AXI_arvalid;
  input bit [0 : 0] M06_AXI_arready;
  input bit M06_AXI_rid;
  input bit M06_AXI_rdata;
  input bit [1 : 0] M06_AXI_rresp;
  input bit [0 : 0] M06_AXI_rlast;
  input bit M06_AXI_ruser;
  input bit [0 : 0] M06_AXI_rvalid;
  output wire [0 : 0] M06_AXI_rready;
  output wire M07_AXI_awid;
  output wire M07_AXI_awaddr;
  output wire M07_AXI_awlen;
  output wire [2 : 0] M07_AXI_awsize;
  output wire [1 : 0] M07_AXI_awburst;
  output wire M07_AXI_awlock;
  output wire [3 : 0] M07_AXI_awcache;
  output wire [2 : 0] M07_AXI_awprot;
  output wire [3 : 0] M07_AXI_awregion;
  output wire [3 : 0] M07_AXI_awqos;
  output wire M07_AXI_awuser;
  output wire [0 : 0] M07_AXI_awvalid;
  input bit [0 : 0] M07_AXI_awready;
  output wire M07_AXI_wid;
  output wire M07_AXI_wdata;
  output wire M07_AXI_wstrb;
  output wire [0 : 0] M07_AXI_wlast;
  output wire M07_AXI_wuser;
  output wire [0 : 0] M07_AXI_wvalid;
  input bit [0 : 0] M07_AXI_wready;
  input bit M07_AXI_bid;
  input bit [1 : 0] M07_AXI_bresp;
  input bit M07_AXI_buser;
  input bit [0 : 0] M07_AXI_bvalid;
  output wire [0 : 0] M07_AXI_bready;
  output wire M07_AXI_arid;
  output wire M07_AXI_araddr;
  output wire M07_AXI_arlen;
  output wire [2 : 0] M07_AXI_arsize;
  output wire [1 : 0] M07_AXI_arburst;
  output wire M07_AXI_arlock;
  output wire [3 : 0] M07_AXI_arcache;
  output wire [2 : 0] M07_AXI_arprot;
  output wire [3 : 0] M07_AXI_arregion;
  output wire [3 : 0] M07_AXI_arqos;
  output wire M07_AXI_aruser;
  output wire [0 : 0] M07_AXI_arvalid;
  input bit [0 : 0] M07_AXI_arready;
  input bit M07_AXI_rid;
  input bit M07_AXI_rdata;
  input bit [1 : 0] M07_AXI_rresp;
  input bit [0 : 0] M07_AXI_rlast;
  input bit M07_AXI_ruser;
  input bit [0 : 0] M07_AXI_rvalid;
  output wire [0 : 0] M07_AXI_rready;
  output wire M08_AXI_awid;
  output wire M08_AXI_awaddr;
  output wire M08_AXI_awlen;
  output wire [2 : 0] M08_AXI_awsize;
  output wire [1 : 0] M08_AXI_awburst;
  output wire M08_AXI_awlock;
  output wire [3 : 0] M08_AXI_awcache;
  output wire [2 : 0] M08_AXI_awprot;
  output wire [3 : 0] M08_AXI_awregion;
  output wire [3 : 0] M08_AXI_awqos;
  output wire M08_AXI_awuser;
  output wire [0 : 0] M08_AXI_awvalid;
  input bit [0 : 0] M08_AXI_awready;
  output wire M08_AXI_wid;
  output wire M08_AXI_wdata;
  output wire M08_AXI_wstrb;
  output wire [0 : 0] M08_AXI_wlast;
  output wire M08_AXI_wuser;
  output wire [0 : 0] M08_AXI_wvalid;
  input bit [0 : 0] M08_AXI_wready;
  input bit M08_AXI_bid;
  input bit [1 : 0] M08_AXI_bresp;
  input bit M08_AXI_buser;
  input bit [0 : 0] M08_AXI_bvalid;
  output wire [0 : 0] M08_AXI_bready;
  output wire M08_AXI_arid;
  output wire M08_AXI_araddr;
  output wire M08_AXI_arlen;
  output wire [2 : 0] M08_AXI_arsize;
  output wire [1 : 0] M08_AXI_arburst;
  output wire M08_AXI_arlock;
  output wire [3 : 0] M08_AXI_arcache;
  output wire [2 : 0] M08_AXI_arprot;
  output wire [3 : 0] M08_AXI_arregion;
  output wire [3 : 0] M08_AXI_arqos;
  output wire M08_AXI_aruser;
  output wire [0 : 0] M08_AXI_arvalid;
  input bit [0 : 0] M08_AXI_arready;
  input bit M08_AXI_rid;
  input bit M08_AXI_rdata;
  input bit [1 : 0] M08_AXI_rresp;
  input bit [0 : 0] M08_AXI_rlast;
  input bit M08_AXI_ruser;
  input bit [0 : 0] M08_AXI_rvalid;
  output wire [0 : 0] M08_AXI_rready;
endmodule
`endif

`ifdef RIVIERA
(* SC_MODULE_EXPORT *)
module design_1_smartconnect_1_0 (aclk,aresetn,S00_AXI_awid,S00_AXI_awaddr,S00_AXI_awlen,S00_AXI_awsize,S00_AXI_awburst,S00_AXI_awlock,S00_AXI_awcache,S00_AXI_awprot,S00_AXI_awqos,S00_AXI_awvalid,S00_AXI_awready,S00_AXI_wid,S00_AXI_wdata,S00_AXI_wstrb,S00_AXI_wlast,S00_AXI_wvalid,S00_AXI_wready,S00_AXI_bid,S00_AXI_bresp,S00_AXI_bvalid,S00_AXI_bready,S00_AXI_arid,S00_AXI_araddr,S00_AXI_arlen,S00_AXI_arsize,S00_AXI_arburst,S00_AXI_arlock,S00_AXI_arcache,S00_AXI_arprot,S00_AXI_arqos,S00_AXI_arvalid,S00_AXI_arready,S00_AXI_rid,S00_AXI_rdata,S00_AXI_rresp,S00_AXI_rlast,S00_AXI_rvalid,S00_AXI_rready,M00_AXI_awaddr,M00_AXI_awprot,M00_AXI_awvalid,M00_AXI_awready,M00_AXI_wdata,M00_AXI_wstrb,M00_AXI_wvalid,M00_AXI_wready,M00_AXI_bresp,M00_AXI_bvalid,M00_AXI_bready,M00_AXI_araddr,M00_AXI_arprot,M00_AXI_arvalid,M00_AXI_arready,M00_AXI_rdata,M00_AXI_rresp,M00_AXI_rvalid,M00_AXI_rready,M01_AXI_awaddr,M01_AXI_awprot,M01_AXI_awvalid,M01_AXI_awready,M01_AXI_wdata,M01_AXI_wstrb,M01_AXI_wvalid,M01_AXI_wready,M01_AXI_bresp,M01_AXI_bvalid,M01_AXI_bready,M01_AXI_araddr,M01_AXI_arprot,M01_AXI_arvalid,M01_AXI_arready,M01_AXI_rdata,M01_AXI_rresp,M01_AXI_rvalid,M01_AXI_rready,M02_AXI_awaddr,M02_AXI_awprot,M02_AXI_awvalid,M02_AXI_awready,M02_AXI_wdata,M02_AXI_wstrb,M02_AXI_wvalid,M02_AXI_wready,M02_AXI_bresp,M02_AXI_bvalid,M02_AXI_bready,M02_AXI_araddr,M02_AXI_arprot,M02_AXI_arvalid,M02_AXI_arready,M02_AXI_rdata,M02_AXI_rresp,M02_AXI_rvalid,M02_AXI_rready,M03_AXI_awaddr,M03_AXI_awprot,M03_AXI_awvalid,M03_AXI_awready,M03_AXI_wdata,M03_AXI_wstrb,M03_AXI_wvalid,M03_AXI_wready,M03_AXI_bresp,M03_AXI_bvalid,M03_AXI_bready,M03_AXI_araddr,M03_AXI_arprot,M03_AXI_arvalid,M03_AXI_arready,M03_AXI_rdata,M03_AXI_rresp,M03_AXI_rvalid,M03_AXI_rready,M04_AXI_awaddr,M04_AXI_awprot,M04_AXI_awvalid,M04_AXI_awready,M04_AXI_wdata,M04_AXI_wstrb,M04_AXI_wvalid,M04_AXI_wready,M04_AXI_bresp,M04_AXI_bvalid,M04_AXI_bready,M04_AXI_araddr,M04_AXI_arprot,M04_AXI_arvalid,M04_AXI_arready,M04_AXI_rdata,M04_AXI_rresp,M04_AXI_rvalid,M04_AXI_rready,M05_AXI_awid,M05_AXI_awaddr,M05_AXI_awlen,M05_AXI_awsize,M05_AXI_awburst,M05_AXI_awlock,M05_AXI_awcache,M05_AXI_awprot,M05_AXI_awregion,M05_AXI_awqos,M05_AXI_awuser,M05_AXI_awvalid,M05_AXI_awready,M05_AXI_wid,M05_AXI_wdata,M05_AXI_wstrb,M05_AXI_wlast,M05_AXI_wuser,M05_AXI_wvalid,M05_AXI_wready,M05_AXI_bid,M05_AXI_bresp,M05_AXI_buser,M05_AXI_bvalid,M05_AXI_bready,M05_AXI_arid,M05_AXI_araddr,M05_AXI_arlen,M05_AXI_arsize,M05_AXI_arburst,M05_AXI_arlock,M05_AXI_arcache,M05_AXI_arprot,M05_AXI_arregion,M05_AXI_arqos,M05_AXI_aruser,M05_AXI_arvalid,M05_AXI_arready,M05_AXI_rid,M05_AXI_rdata,M05_AXI_rresp,M05_AXI_rlast,M05_AXI_ruser,M05_AXI_rvalid,M05_AXI_rready,M06_AXI_awid,M06_AXI_awaddr,M06_AXI_awlen,M06_AXI_awsize,M06_AXI_awburst,M06_AXI_awlock,M06_AXI_awcache,M06_AXI_awprot,M06_AXI_awregion,M06_AXI_awqos,M06_AXI_awuser,M06_AXI_awvalid,M06_AXI_awready,M06_AXI_wid,M06_AXI_wdata,M06_AXI_wstrb,M06_AXI_wlast,M06_AXI_wuser,M06_AXI_wvalid,M06_AXI_wready,M06_AXI_bid,M06_AXI_bresp,M06_AXI_buser,M06_AXI_bvalid,M06_AXI_bready,M06_AXI_arid,M06_AXI_araddr,M06_AXI_arlen,M06_AXI_arsize,M06_AXI_arburst,M06_AXI_arlock,M06_AXI_arcache,M06_AXI_arprot,M06_AXI_arregion,M06_AXI_arqos,M06_AXI_aruser,M06_AXI_arvalid,M06_AXI_arready,M06_AXI_rid,M06_AXI_rdata,M06_AXI_rresp,M06_AXI_rlast,M06_AXI_ruser,M06_AXI_rvalid,M06_AXI_rready,M07_AXI_awid,M07_AXI_awaddr,M07_AXI_awlen,M07_AXI_awsize,M07_AXI_awburst,M07_AXI_awlock,M07_AXI_awcache,M07_AXI_awprot,M07_AXI_awregion,M07_AXI_awqos,M07_AXI_awuser,M07_AXI_awvalid,M07_AXI_awready,M07_AXI_wid,M07_AXI_wdata,M07_AXI_wstrb,M07_AXI_wlast,M07_AXI_wuser,M07_AXI_wvalid,M07_AXI_wready,M07_AXI_bid,M07_AXI_bresp,M07_AXI_buser,M07_AXI_bvalid,M07_AXI_bready,M07_AXI_arid,M07_AXI_araddr,M07_AXI_arlen,M07_AXI_arsize,M07_AXI_arburst,M07_AXI_arlock,M07_AXI_arcache,M07_AXI_arprot,M07_AXI_arregion,M07_AXI_arqos,M07_AXI_aruser,M07_AXI_arvalid,M07_AXI_arready,M07_AXI_rid,M07_AXI_rdata,M07_AXI_rresp,M07_AXI_rlast,M07_AXI_ruser,M07_AXI_rvalid,M07_AXI_rready,M08_AXI_awid,M08_AXI_awaddr,M08_AXI_awlen,M08_AXI_awsize,M08_AXI_awburst,M08_AXI_awlock,M08_AXI_awcache,M08_AXI_awprot,M08_AXI_awregion,M08_AXI_awqos,M08_AXI_awuser,M08_AXI_awvalid,M08_AXI_awready,M08_AXI_wid,M08_AXI_wdata,M08_AXI_wstrb,M08_AXI_wlast,M08_AXI_wuser,M08_AXI_wvalid,M08_AXI_wready,M08_AXI_bid,M08_AXI_bresp,M08_AXI_buser,M08_AXI_bvalid,M08_AXI_bready,M08_AXI_arid,M08_AXI_araddr,M08_AXI_arlen,M08_AXI_arsize,M08_AXI_arburst,M08_AXI_arlock,M08_AXI_arcache,M08_AXI_arprot,M08_AXI_arregion,M08_AXI_arqos,M08_AXI_aruser,M08_AXI_arvalid,M08_AXI_arready,M08_AXI_rid,M08_AXI_rdata,M08_AXI_rresp,M08_AXI_rlast,M08_AXI_ruser,M08_AXI_rvalid,M08_AXI_rready)
  input bit aclk;
  input bit aresetn;
  input bit [11 : 0] S00_AXI_awid;
  input bit [31 : 0] S00_AXI_awaddr;
  input bit [3 : 0] S00_AXI_awlen;
  input bit [2 : 0] S00_AXI_awsize;
  input bit [1 : 0] S00_AXI_awburst;
  input bit [1 : 0] S00_AXI_awlock;
  input bit [3 : 0] S00_AXI_awcache;
  input bit [2 : 0] S00_AXI_awprot;
  input bit [3 : 0] S00_AXI_awqos;
  input bit S00_AXI_awvalid;
  output wire S00_AXI_awready;
  input bit [11 : 0] S00_AXI_wid;
  input bit [31 : 0] S00_AXI_wdata;
  input bit [3 : 0] S00_AXI_wstrb;
  input bit S00_AXI_wlast;
  input bit S00_AXI_wvalid;
  output wire S00_AXI_wready;
  output wire [11 : 0] S00_AXI_bid;
  output wire [1 : 0] S00_AXI_bresp;
  output wire S00_AXI_bvalid;
  input bit S00_AXI_bready;
  input bit [11 : 0] S00_AXI_arid;
  input bit [31 : 0] S00_AXI_araddr;
  input bit [3 : 0] S00_AXI_arlen;
  input bit [2 : 0] S00_AXI_arsize;
  input bit [1 : 0] S00_AXI_arburst;
  input bit [1 : 0] S00_AXI_arlock;
  input bit [3 : 0] S00_AXI_arcache;
  input bit [2 : 0] S00_AXI_arprot;
  input bit [3 : 0] S00_AXI_arqos;
  input bit S00_AXI_arvalid;
  output wire S00_AXI_arready;
  output wire [11 : 0] S00_AXI_rid;
  output wire [31 : 0] S00_AXI_rdata;
  output wire [1 : 0] S00_AXI_rresp;
  output wire S00_AXI_rlast;
  output wire S00_AXI_rvalid;
  input bit S00_AXI_rready;
  output wire [8 : 0] M00_AXI_awaddr;
  output wire [2 : 0] M00_AXI_awprot;
  output wire M00_AXI_awvalid;
  input bit M00_AXI_awready;
  output wire [31 : 0] M00_AXI_wdata;
  output wire [3 : 0] M00_AXI_wstrb;
  output wire M00_AXI_wvalid;
  input bit M00_AXI_wready;
  input bit [1 : 0] M00_AXI_bresp;
  input bit M00_AXI_bvalid;
  output wire M00_AXI_bready;
  output wire [8 : 0] M00_AXI_araddr;
  output wire [2 : 0] M00_AXI_arprot;
  output wire M00_AXI_arvalid;
  input bit M00_AXI_arready;
  input bit [31 : 0] M00_AXI_rdata;
  input bit [1 : 0] M00_AXI_rresp;
  input bit M00_AXI_rvalid;
  output wire M00_AXI_rready;
  output wire [5 : 0] M01_AXI_awaddr;
  output wire [2 : 0] M01_AXI_awprot;
  output wire M01_AXI_awvalid;
  input bit M01_AXI_awready;
  output wire [31 : 0] M01_AXI_wdata;
  output wire [3 : 0] M01_AXI_wstrb;
  output wire M01_AXI_wvalid;
  input bit M01_AXI_wready;
  input bit [1 : 0] M01_AXI_bresp;
  input bit M01_AXI_bvalid;
  output wire M01_AXI_bready;
  output wire [5 : 0] M01_AXI_araddr;
  output wire [2 : 0] M01_AXI_arprot;
  output wire M01_AXI_arvalid;
  input bit M01_AXI_arready;
  input bit [31 : 0] M01_AXI_rdata;
  input bit [1 : 0] M01_AXI_rresp;
  input bit M01_AXI_rvalid;
  output wire M01_AXI_rready;
  output wire [8 : 0] M02_AXI_awaddr;
  output wire [2 : 0] M02_AXI_awprot;
  output wire M02_AXI_awvalid;
  input bit M02_AXI_awready;
  output wire [31 : 0] M02_AXI_wdata;
  output wire [3 : 0] M02_AXI_wstrb;
  output wire M02_AXI_wvalid;
  input bit M02_AXI_wready;
  input bit [1 : 0] M02_AXI_bresp;
  input bit M02_AXI_bvalid;
  output wire M02_AXI_bready;
  output wire [8 : 0] M02_AXI_araddr;
  output wire [2 : 0] M02_AXI_arprot;
  output wire M02_AXI_arvalid;
  input bit M02_AXI_arready;
  input bit [31 : 0] M02_AXI_rdata;
  input bit [1 : 0] M02_AXI_rresp;
  input bit M02_AXI_rvalid;
  output wire M02_AXI_rready;
  output wire [7 : 0] M03_AXI_awaddr;
  output wire [2 : 0] M03_AXI_awprot;
  output wire M03_AXI_awvalid;
  input bit M03_AXI_awready;
  output wire [31 : 0] M03_AXI_wdata;
  output wire [3 : 0] M03_AXI_wstrb;
  output wire M03_AXI_wvalid;
  input bit M03_AXI_wready;
  input bit [1 : 0] M03_AXI_bresp;
  input bit M03_AXI_bvalid;
  output wire M03_AXI_bready;
  output wire [7 : 0] M03_AXI_araddr;
  output wire [2 : 0] M03_AXI_arprot;
  output wire M03_AXI_arvalid;
  input bit M03_AXI_arready;
  input bit [31 : 0] M03_AXI_rdata;
  input bit [1 : 0] M03_AXI_rresp;
  input bit M03_AXI_rvalid;
  output wire M03_AXI_rready;
  output wire [6 : 0] M04_AXI_awaddr;
  output wire [2 : 0] M04_AXI_awprot;
  output wire M04_AXI_awvalid;
  input bit M04_AXI_awready;
  output wire [31 : 0] M04_AXI_wdata;
  output wire [3 : 0] M04_AXI_wstrb;
  output wire M04_AXI_wvalid;
  input bit M04_AXI_wready;
  input bit [1 : 0] M04_AXI_bresp;
  input bit M04_AXI_bvalid;
  output wire M04_AXI_bready;
  output wire [6 : 0] M04_AXI_araddr;
  output wire [2 : 0] M04_AXI_arprot;
  output wire M04_AXI_arvalid;
  input bit M04_AXI_arready;
  input bit [31 : 0] M04_AXI_rdata;
  input bit [1 : 0] M04_AXI_rresp;
  input bit M04_AXI_rvalid;
  output wire M04_AXI_rready;
  output wire M05_AXI_awid;
  output wire M05_AXI_awaddr;
  output wire M05_AXI_awlen;
  output wire [2 : 0] M05_AXI_awsize;
  output wire [1 : 0] M05_AXI_awburst;
  output wire M05_AXI_awlock;
  output wire [3 : 0] M05_AXI_awcache;
  output wire [2 : 0] M05_AXI_awprot;
  output wire [3 : 0] M05_AXI_awregion;
  output wire [3 : 0] M05_AXI_awqos;
  output wire M05_AXI_awuser;
  output wire [0 : 0] M05_AXI_awvalid;
  input bit [0 : 0] M05_AXI_awready;
  output wire M05_AXI_wid;
  output wire M05_AXI_wdata;
  output wire M05_AXI_wstrb;
  output wire [0 : 0] M05_AXI_wlast;
  output wire M05_AXI_wuser;
  output wire [0 : 0] M05_AXI_wvalid;
  input bit [0 : 0] M05_AXI_wready;
  input bit M05_AXI_bid;
  input bit [1 : 0] M05_AXI_bresp;
  input bit M05_AXI_buser;
  input bit [0 : 0] M05_AXI_bvalid;
  output wire [0 : 0] M05_AXI_bready;
  output wire M05_AXI_arid;
  output wire M05_AXI_araddr;
  output wire M05_AXI_arlen;
  output wire [2 : 0] M05_AXI_arsize;
  output wire [1 : 0] M05_AXI_arburst;
  output wire M05_AXI_arlock;
  output wire [3 : 0] M05_AXI_arcache;
  output wire [2 : 0] M05_AXI_arprot;
  output wire [3 : 0] M05_AXI_arregion;
  output wire [3 : 0] M05_AXI_arqos;
  output wire M05_AXI_aruser;
  output wire [0 : 0] M05_AXI_arvalid;
  input bit [0 : 0] M05_AXI_arready;
  input bit M05_AXI_rid;
  input bit M05_AXI_rdata;
  input bit [1 : 0] M05_AXI_rresp;
  input bit [0 : 0] M05_AXI_rlast;
  input bit M05_AXI_ruser;
  input bit [0 : 0] M05_AXI_rvalid;
  output wire [0 : 0] M05_AXI_rready;
  output wire M06_AXI_awid;
  output wire M06_AXI_awaddr;
  output wire M06_AXI_awlen;
  output wire [2 : 0] M06_AXI_awsize;
  output wire [1 : 0] M06_AXI_awburst;
  output wire M06_AXI_awlock;
  output wire [3 : 0] M06_AXI_awcache;
  output wire [2 : 0] M06_AXI_awprot;
  output wire [3 : 0] M06_AXI_awregion;
  output wire [3 : 0] M06_AXI_awqos;
  output wire M06_AXI_awuser;
  output wire [0 : 0] M06_AXI_awvalid;
  input bit [0 : 0] M06_AXI_awready;
  output wire M06_AXI_wid;
  output wire M06_AXI_wdata;
  output wire M06_AXI_wstrb;
  output wire [0 : 0] M06_AXI_wlast;
  output wire M06_AXI_wuser;
  output wire [0 : 0] M06_AXI_wvalid;
  input bit [0 : 0] M06_AXI_wready;
  input bit M06_AXI_bid;
  input bit [1 : 0] M06_AXI_bresp;
  input bit M06_AXI_buser;
  input bit [0 : 0] M06_AXI_bvalid;
  output wire [0 : 0] M06_AXI_bready;
  output wire M06_AXI_arid;
  output wire M06_AXI_araddr;
  output wire M06_AXI_arlen;
  output wire [2 : 0] M06_AXI_arsize;
  output wire [1 : 0] M06_AXI_arburst;
  output wire M06_AXI_arlock;
  output wire [3 : 0] M06_AXI_arcache;
  output wire [2 : 0] M06_AXI_arprot;
  output wire [3 : 0] M06_AXI_arregion;
  output wire [3 : 0] M06_AXI_arqos;
  output wire M06_AXI_aruser;
  output wire [0 : 0] M06_AXI_arvalid;
  input bit [0 : 0] M06_AXI_arready;
  input bit M06_AXI_rid;
  input bit M06_AXI_rdata;
  input bit [1 : 0] M06_AXI_rresp;
  input bit [0 : 0] M06_AXI_rlast;
  input bit M06_AXI_ruser;
  input bit [0 : 0] M06_AXI_rvalid;
  output wire [0 : 0] M06_AXI_rready;
  output wire M07_AXI_awid;
  output wire M07_AXI_awaddr;
  output wire M07_AXI_awlen;
  output wire [2 : 0] M07_AXI_awsize;
  output wire [1 : 0] M07_AXI_awburst;
  output wire M07_AXI_awlock;
  output wire [3 : 0] M07_AXI_awcache;
  output wire [2 : 0] M07_AXI_awprot;
  output wire [3 : 0] M07_AXI_awregion;
  output wire [3 : 0] M07_AXI_awqos;
  output wire M07_AXI_awuser;
  output wire [0 : 0] M07_AXI_awvalid;
  input bit [0 : 0] M07_AXI_awready;
  output wire M07_AXI_wid;
  output wire M07_AXI_wdata;
  output wire M07_AXI_wstrb;
  output wire [0 : 0] M07_AXI_wlast;
  output wire M07_AXI_wuser;
  output wire [0 : 0] M07_AXI_wvalid;
  input bit [0 : 0] M07_AXI_wready;
  input bit M07_AXI_bid;
  input bit [1 : 0] M07_AXI_bresp;
  input bit M07_AXI_buser;
  input bit [0 : 0] M07_AXI_bvalid;
  output wire [0 : 0] M07_AXI_bready;
  output wire M07_AXI_arid;
  output wire M07_AXI_araddr;
  output wire M07_AXI_arlen;
  output wire [2 : 0] M07_AXI_arsize;
  output wire [1 : 0] M07_AXI_arburst;
  output wire M07_AXI_arlock;
  output wire [3 : 0] M07_AXI_arcache;
  output wire [2 : 0] M07_AXI_arprot;
  output wire [3 : 0] M07_AXI_arregion;
  output wire [3 : 0] M07_AXI_arqos;
  output wire M07_AXI_aruser;
  output wire [0 : 0] M07_AXI_arvalid;
  input bit [0 : 0] M07_AXI_arready;
  input bit M07_AXI_rid;
  input bit M07_AXI_rdata;
  input bit [1 : 0] M07_AXI_rresp;
  input bit [0 : 0] M07_AXI_rlast;
  input bit M07_AXI_ruser;
  input bit [0 : 0] M07_AXI_rvalid;
  output wire [0 : 0] M07_AXI_rready;
  output wire M08_AXI_awid;
  output wire M08_AXI_awaddr;
  output wire M08_AXI_awlen;
  output wire [2 : 0] M08_AXI_awsize;
  output wire [1 : 0] M08_AXI_awburst;
  output wire M08_AXI_awlock;
  output wire [3 : 0] M08_AXI_awcache;
  output wire [2 : 0] M08_AXI_awprot;
  output wire [3 : 0] M08_AXI_awregion;
  output wire [3 : 0] M08_AXI_awqos;
  output wire M08_AXI_awuser;
  output wire [0 : 0] M08_AXI_awvalid;
  input bit [0 : 0] M08_AXI_awready;
  output wire M08_AXI_wid;
  output wire M08_AXI_wdata;
  output wire M08_AXI_wstrb;
  output wire [0 : 0] M08_AXI_wlast;
  output wire M08_AXI_wuser;
  output wire [0 : 0] M08_AXI_wvalid;
  input bit [0 : 0] M08_AXI_wready;
  input bit M08_AXI_bid;
  input bit [1 : 0] M08_AXI_bresp;
  input bit M08_AXI_buser;
  input bit [0 : 0] M08_AXI_bvalid;
  output wire [0 : 0] M08_AXI_bready;
  output wire M08_AXI_arid;
  output wire M08_AXI_araddr;
  output wire M08_AXI_arlen;
  output wire [2 : 0] M08_AXI_arsize;
  output wire [1 : 0] M08_AXI_arburst;
  output wire M08_AXI_arlock;
  output wire [3 : 0] M08_AXI_arcache;
  output wire [2 : 0] M08_AXI_arprot;
  output wire [3 : 0] M08_AXI_arregion;
  output wire [3 : 0] M08_AXI_arqos;
  output wire M08_AXI_aruser;
  output wire [0 : 0] M08_AXI_arvalid;
  input bit [0 : 0] M08_AXI_arready;
  input bit M08_AXI_rid;
  input bit M08_AXI_rdata;
  input bit [1 : 0] M08_AXI_rresp;
  input bit [0 : 0] M08_AXI_rlast;
  input bit M08_AXI_ruser;
  input bit [0 : 0] M08_AXI_rvalid;
  output wire [0 : 0] M08_AXI_rready;
endmodule
`endif
