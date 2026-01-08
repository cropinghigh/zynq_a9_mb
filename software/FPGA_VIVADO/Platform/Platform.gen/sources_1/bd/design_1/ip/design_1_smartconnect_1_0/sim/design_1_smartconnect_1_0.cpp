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


#include "design_1_smartconnect_1_0_sc.h"

#include "design_1_smartconnect_1_0.h"

#include "smartconnect.h"

#include <map>
#include <string>





#ifdef XILINX_SIMULATOR
design_1_smartconnect_1_0::design_1_smartconnect_1_0(const sc_core::sc_module_name& nm) : design_1_smartconnect_1_0_sc(nm), aclk("aclk"), aresetn("aresetn"), S00_AXI_awid("S00_AXI_awid"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wid("S00_AXI_wid"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bid("S00_AXI_bid"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_arid("S00_AXI_arid"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rid("S00_AXI_rid"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready"), M01_AXI_awaddr("M01_AXI_awaddr"), M01_AXI_awprot("M01_AXI_awprot"), M01_AXI_awvalid("M01_AXI_awvalid"), M01_AXI_awready("M01_AXI_awready"), M01_AXI_wdata("M01_AXI_wdata"), M01_AXI_wstrb("M01_AXI_wstrb"), M01_AXI_wvalid("M01_AXI_wvalid"), M01_AXI_wready("M01_AXI_wready"), M01_AXI_bresp("M01_AXI_bresp"), M01_AXI_bvalid("M01_AXI_bvalid"), M01_AXI_bready("M01_AXI_bready"), M01_AXI_araddr("M01_AXI_araddr"), M01_AXI_arprot("M01_AXI_arprot"), M01_AXI_arvalid("M01_AXI_arvalid"), M01_AXI_arready("M01_AXI_arready"), M01_AXI_rdata("M01_AXI_rdata"), M01_AXI_rresp("M01_AXI_rresp"), M01_AXI_rvalid("M01_AXI_rvalid"), M01_AXI_rready("M01_AXI_rready"), M02_AXI_awaddr("M02_AXI_awaddr"), M02_AXI_awprot("M02_AXI_awprot"), M02_AXI_awvalid("M02_AXI_awvalid"), M02_AXI_awready("M02_AXI_awready"), M02_AXI_wdata("M02_AXI_wdata"), M02_AXI_wstrb("M02_AXI_wstrb"), M02_AXI_wvalid("M02_AXI_wvalid"), M02_AXI_wready("M02_AXI_wready"), M02_AXI_bresp("M02_AXI_bresp"), M02_AXI_bvalid("M02_AXI_bvalid"), M02_AXI_bready("M02_AXI_bready"), M02_AXI_araddr("M02_AXI_araddr"), M02_AXI_arprot("M02_AXI_arprot"), M02_AXI_arvalid("M02_AXI_arvalid"), M02_AXI_arready("M02_AXI_arready"), M02_AXI_rdata("M02_AXI_rdata"), M02_AXI_rresp("M02_AXI_rresp"), M02_AXI_rvalid("M02_AXI_rvalid"), M02_AXI_rready("M02_AXI_rready"), M03_AXI_awaddr("M03_AXI_awaddr"), M03_AXI_awprot("M03_AXI_awprot"), M03_AXI_awvalid("M03_AXI_awvalid"), M03_AXI_awready("M03_AXI_awready"), M03_AXI_wdata("M03_AXI_wdata"), M03_AXI_wstrb("M03_AXI_wstrb"), M03_AXI_wvalid("M03_AXI_wvalid"), M03_AXI_wready("M03_AXI_wready"), M03_AXI_bresp("M03_AXI_bresp"), M03_AXI_bvalid("M03_AXI_bvalid"), M03_AXI_bready("M03_AXI_bready"), M03_AXI_araddr("M03_AXI_araddr"), M03_AXI_arprot("M03_AXI_arprot"), M03_AXI_arvalid("M03_AXI_arvalid"), M03_AXI_arready("M03_AXI_arready"), M03_AXI_rdata("M03_AXI_rdata"), M03_AXI_rresp("M03_AXI_rresp"), M03_AXI_rvalid("M03_AXI_rvalid"), M03_AXI_rready("M03_AXI_rready"), M04_AXI_awaddr("M04_AXI_awaddr"), M04_AXI_awprot("M04_AXI_awprot"), M04_AXI_awvalid("M04_AXI_awvalid"), M04_AXI_awready("M04_AXI_awready"), M04_AXI_wdata("M04_AXI_wdata"), M04_AXI_wstrb("M04_AXI_wstrb"), M04_AXI_wvalid("M04_AXI_wvalid"), M04_AXI_wready("M04_AXI_wready"), M04_AXI_bresp("M04_AXI_bresp"), M04_AXI_bvalid("M04_AXI_bvalid"), M04_AXI_bready("M04_AXI_bready"), M04_AXI_araddr("M04_AXI_araddr"), M04_AXI_arprot("M04_AXI_arprot"), M04_AXI_arvalid("M04_AXI_arvalid"), M04_AXI_arready("M04_AXI_arready"), M04_AXI_rdata("M04_AXI_rdata"), M04_AXI_rresp("M04_AXI_rresp"), M04_AXI_rvalid("M04_AXI_rvalid"), M04_AXI_rready("M04_AXI_rready"), M05_AXI_awid("M05_AXI_awid"), M05_AXI_awaddr("M05_AXI_awaddr"), M05_AXI_awlen("M05_AXI_awlen"), M05_AXI_awsize("M05_AXI_awsize"), M05_AXI_awburst("M05_AXI_awburst"), M05_AXI_awlock("M05_AXI_awlock"), M05_AXI_awcache("M05_AXI_awcache"), M05_AXI_awprot("M05_AXI_awprot"), M05_AXI_awregion("M05_AXI_awregion"), M05_AXI_awqos("M05_AXI_awqos"), M05_AXI_awuser("M05_AXI_awuser"), M05_AXI_awvalid("M05_AXI_awvalid"), M05_AXI_awready("M05_AXI_awready"), M05_AXI_wid("M05_AXI_wid"), M05_AXI_wdata("M05_AXI_wdata"), M05_AXI_wstrb("M05_AXI_wstrb"), M05_AXI_wlast("M05_AXI_wlast"), M05_AXI_wuser("M05_AXI_wuser"), M05_AXI_wvalid("M05_AXI_wvalid"), M05_AXI_wready("M05_AXI_wready"), M05_AXI_bid("M05_AXI_bid"), M05_AXI_bresp("M05_AXI_bresp"), M05_AXI_buser("M05_AXI_buser"), M05_AXI_bvalid("M05_AXI_bvalid"), M05_AXI_bready("M05_AXI_bready"), M05_AXI_arid("M05_AXI_arid"), M05_AXI_araddr("M05_AXI_araddr"), M05_AXI_arlen("M05_AXI_arlen"), M05_AXI_arsize("M05_AXI_arsize"), M05_AXI_arburst("M05_AXI_arburst"), M05_AXI_arlock("M05_AXI_arlock"), M05_AXI_arcache("M05_AXI_arcache"), M05_AXI_arprot("M05_AXI_arprot"), M05_AXI_arregion("M05_AXI_arregion"), M05_AXI_arqos("M05_AXI_arqos"), M05_AXI_aruser("M05_AXI_aruser"), M05_AXI_arvalid("M05_AXI_arvalid"), M05_AXI_arready("M05_AXI_arready"), M05_AXI_rid("M05_AXI_rid"), M05_AXI_rdata("M05_AXI_rdata"), M05_AXI_rresp("M05_AXI_rresp"), M05_AXI_rlast("M05_AXI_rlast"), M05_AXI_ruser("M05_AXI_ruser"), M05_AXI_rvalid("M05_AXI_rvalid"), M05_AXI_rready("M05_AXI_rready"), M06_AXI_awid("M06_AXI_awid"), M06_AXI_awaddr("M06_AXI_awaddr"), M06_AXI_awlen("M06_AXI_awlen"), M06_AXI_awsize("M06_AXI_awsize"), M06_AXI_awburst("M06_AXI_awburst"), M06_AXI_awlock("M06_AXI_awlock"), M06_AXI_awcache("M06_AXI_awcache"), M06_AXI_awprot("M06_AXI_awprot"), M06_AXI_awregion("M06_AXI_awregion"), M06_AXI_awqos("M06_AXI_awqos"), M06_AXI_awuser("M06_AXI_awuser"), M06_AXI_awvalid("M06_AXI_awvalid"), M06_AXI_awready("M06_AXI_awready"), M06_AXI_wid("M06_AXI_wid"), M06_AXI_wdata("M06_AXI_wdata"), M06_AXI_wstrb("M06_AXI_wstrb"), M06_AXI_wlast("M06_AXI_wlast"), M06_AXI_wuser("M06_AXI_wuser"), M06_AXI_wvalid("M06_AXI_wvalid"), M06_AXI_wready("M06_AXI_wready"), M06_AXI_bid("M06_AXI_bid"), M06_AXI_bresp("M06_AXI_bresp"), M06_AXI_buser("M06_AXI_buser"), M06_AXI_bvalid("M06_AXI_bvalid"), M06_AXI_bready("M06_AXI_bready"), M06_AXI_arid("M06_AXI_arid"), M06_AXI_araddr("M06_AXI_araddr"), M06_AXI_arlen("M06_AXI_arlen"), M06_AXI_arsize("M06_AXI_arsize"), M06_AXI_arburst("M06_AXI_arburst"), M06_AXI_arlock("M06_AXI_arlock"), M06_AXI_arcache("M06_AXI_arcache"), M06_AXI_arprot("M06_AXI_arprot"), M06_AXI_arregion("M06_AXI_arregion"), M06_AXI_arqos("M06_AXI_arqos"), M06_AXI_aruser("M06_AXI_aruser"), M06_AXI_arvalid("M06_AXI_arvalid"), M06_AXI_arready("M06_AXI_arready"), M06_AXI_rid("M06_AXI_rid"), M06_AXI_rdata("M06_AXI_rdata"), M06_AXI_rresp("M06_AXI_rresp"), M06_AXI_rlast("M06_AXI_rlast"), M06_AXI_ruser("M06_AXI_ruser"), M06_AXI_rvalid("M06_AXI_rvalid"), M06_AXI_rready("M06_AXI_rready"), M07_AXI_awid("M07_AXI_awid"), M07_AXI_awaddr("M07_AXI_awaddr"), M07_AXI_awlen("M07_AXI_awlen"), M07_AXI_awsize("M07_AXI_awsize"), M07_AXI_awburst("M07_AXI_awburst"), M07_AXI_awlock("M07_AXI_awlock"), M07_AXI_awcache("M07_AXI_awcache"), M07_AXI_awprot("M07_AXI_awprot"), M07_AXI_awregion("M07_AXI_awregion"), M07_AXI_awqos("M07_AXI_awqos"), M07_AXI_awuser("M07_AXI_awuser"), M07_AXI_awvalid("M07_AXI_awvalid"), M07_AXI_awready("M07_AXI_awready"), M07_AXI_wid("M07_AXI_wid"), M07_AXI_wdata("M07_AXI_wdata"), M07_AXI_wstrb("M07_AXI_wstrb"), M07_AXI_wlast("M07_AXI_wlast"), M07_AXI_wuser("M07_AXI_wuser"), M07_AXI_wvalid("M07_AXI_wvalid"), M07_AXI_wready("M07_AXI_wready"), M07_AXI_bid("M07_AXI_bid"), M07_AXI_bresp("M07_AXI_bresp"), M07_AXI_buser("M07_AXI_buser"), M07_AXI_bvalid("M07_AXI_bvalid"), M07_AXI_bready("M07_AXI_bready"), M07_AXI_arid("M07_AXI_arid"), M07_AXI_araddr("M07_AXI_araddr"), M07_AXI_arlen("M07_AXI_arlen"), M07_AXI_arsize("M07_AXI_arsize"), M07_AXI_arburst("M07_AXI_arburst"), M07_AXI_arlock("M07_AXI_arlock"), M07_AXI_arcache("M07_AXI_arcache"), M07_AXI_arprot("M07_AXI_arprot"), M07_AXI_arregion("M07_AXI_arregion"), M07_AXI_arqos("M07_AXI_arqos"), M07_AXI_aruser("M07_AXI_aruser"), M07_AXI_arvalid("M07_AXI_arvalid"), M07_AXI_arready("M07_AXI_arready"), M07_AXI_rid("M07_AXI_rid"), M07_AXI_rdata("M07_AXI_rdata"), M07_AXI_rresp("M07_AXI_rresp"), M07_AXI_rlast("M07_AXI_rlast"), M07_AXI_ruser("M07_AXI_ruser"), M07_AXI_rvalid("M07_AXI_rvalid"), M07_AXI_rready("M07_AXI_rready"), M08_AXI_awid("M08_AXI_awid"), M08_AXI_awaddr("M08_AXI_awaddr"), M08_AXI_awlen("M08_AXI_awlen"), M08_AXI_awsize("M08_AXI_awsize"), M08_AXI_awburst("M08_AXI_awburst"), M08_AXI_awlock("M08_AXI_awlock"), M08_AXI_awcache("M08_AXI_awcache"), M08_AXI_awprot("M08_AXI_awprot"), M08_AXI_awregion("M08_AXI_awregion"), M08_AXI_awqos("M08_AXI_awqos"), M08_AXI_awuser("M08_AXI_awuser"), M08_AXI_awvalid("M08_AXI_awvalid"), M08_AXI_awready("M08_AXI_awready"), M08_AXI_wid("M08_AXI_wid"), M08_AXI_wdata("M08_AXI_wdata"), M08_AXI_wstrb("M08_AXI_wstrb"), M08_AXI_wlast("M08_AXI_wlast"), M08_AXI_wuser("M08_AXI_wuser"), M08_AXI_wvalid("M08_AXI_wvalid"), M08_AXI_wready("M08_AXI_wready"), M08_AXI_bid("M08_AXI_bid"), M08_AXI_bresp("M08_AXI_bresp"), M08_AXI_buser("M08_AXI_buser"), M08_AXI_bvalid("M08_AXI_bvalid"), M08_AXI_bready("M08_AXI_bready"), M08_AXI_arid("M08_AXI_arid"), M08_AXI_araddr("M08_AXI_araddr"), M08_AXI_arlen("M08_AXI_arlen"), M08_AXI_arsize("M08_AXI_arsize"), M08_AXI_arburst("M08_AXI_arburst"), M08_AXI_arlock("M08_AXI_arlock"), M08_AXI_arcache("M08_AXI_arcache"), M08_AXI_arprot("M08_AXI_arprot"), M08_AXI_arregion("M08_AXI_arregion"), M08_AXI_arqos("M08_AXI_arqos"), M08_AXI_aruser("M08_AXI_aruser"), M08_AXI_arvalid("M08_AXI_arvalid"), M08_AXI_arready("M08_AXI_arready"), M08_AXI_rid("M08_AXI_rid"), M08_AXI_rdata("M08_AXI_rdata"), M08_AXI_rresp("M08_AXI_rresp"), M08_AXI_rlast("M08_AXI_rlast"), M08_AXI_ruser("M08_AXI_ruser"), M08_AXI_rvalid("M08_AXI_rvalid"), M08_AXI_rready("M08_AXI_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlen_converter = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlen_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_M02_AXI_transactor = NULL;
  mp_M03_AXI_transactor = NULL;
  mp_M04_AXI_transactor = NULL;
  mp_M05_AXI_transactor = NULL;
  mp_M05_AXI_awid_converter = NULL;
  mp_M05_AXI_awaddr_converter = NULL;
  mp_M05_AXI_awlen_converter = NULL;
  mp_M05_AXI_awuser_converter = NULL;
  mp_M05_AXI_awvalid_converter = NULL;
  mp_M05_AXI_awready_converter = NULL;
  mp_M05_AXI_wdata_converter = NULL;
  mp_M05_AXI_wstrb_converter = NULL;
  mp_M05_AXI_wlast_converter = NULL;
  mp_M05_AXI_wuser_converter = NULL;
  mp_M05_AXI_wvalid_converter = NULL;
  mp_M05_AXI_wready_converter = NULL;
  mp_M05_AXI_bid_converter = NULL;
  mp_M05_AXI_buser_converter = NULL;
  mp_M05_AXI_bvalid_converter = NULL;
  mp_M05_AXI_bready_converter = NULL;
  mp_M05_AXI_arid_converter = NULL;
  mp_M05_AXI_araddr_converter = NULL;
  mp_M05_AXI_arlen_converter = NULL;
  mp_M05_AXI_aruser_converter = NULL;
  mp_M05_AXI_arvalid_converter = NULL;
  mp_M05_AXI_arready_converter = NULL;
  mp_M05_AXI_rid_converter = NULL;
  mp_M05_AXI_rdata_converter = NULL;
  mp_M05_AXI_rlast_converter = NULL;
  mp_M05_AXI_ruser_converter = NULL;
  mp_M05_AXI_rvalid_converter = NULL;
  mp_M05_AXI_rready_converter = NULL;
  mp_M06_AXI_transactor = NULL;
  mp_M06_AXI_awid_converter = NULL;
  mp_M06_AXI_awaddr_converter = NULL;
  mp_M06_AXI_awlen_converter = NULL;
  mp_M06_AXI_awuser_converter = NULL;
  mp_M06_AXI_awvalid_converter = NULL;
  mp_M06_AXI_awready_converter = NULL;
  mp_M06_AXI_wdata_converter = NULL;
  mp_M06_AXI_wstrb_converter = NULL;
  mp_M06_AXI_wlast_converter = NULL;
  mp_M06_AXI_wuser_converter = NULL;
  mp_M06_AXI_wvalid_converter = NULL;
  mp_M06_AXI_wready_converter = NULL;
  mp_M06_AXI_bid_converter = NULL;
  mp_M06_AXI_buser_converter = NULL;
  mp_M06_AXI_bvalid_converter = NULL;
  mp_M06_AXI_bready_converter = NULL;
  mp_M06_AXI_arid_converter = NULL;
  mp_M06_AXI_araddr_converter = NULL;
  mp_M06_AXI_arlen_converter = NULL;
  mp_M06_AXI_aruser_converter = NULL;
  mp_M06_AXI_arvalid_converter = NULL;
  mp_M06_AXI_arready_converter = NULL;
  mp_M06_AXI_rid_converter = NULL;
  mp_M06_AXI_rdata_converter = NULL;
  mp_M06_AXI_rlast_converter = NULL;
  mp_M06_AXI_ruser_converter = NULL;
  mp_M06_AXI_rvalid_converter = NULL;
  mp_M06_AXI_rready_converter = NULL;
  mp_M07_AXI_transactor = NULL;
  mp_M07_AXI_awid_converter = NULL;
  mp_M07_AXI_awaddr_converter = NULL;
  mp_M07_AXI_awlen_converter = NULL;
  mp_M07_AXI_awuser_converter = NULL;
  mp_M07_AXI_awvalid_converter = NULL;
  mp_M07_AXI_awready_converter = NULL;
  mp_M07_AXI_wdata_converter = NULL;
  mp_M07_AXI_wstrb_converter = NULL;
  mp_M07_AXI_wlast_converter = NULL;
  mp_M07_AXI_wuser_converter = NULL;
  mp_M07_AXI_wvalid_converter = NULL;
  mp_M07_AXI_wready_converter = NULL;
  mp_M07_AXI_bid_converter = NULL;
  mp_M07_AXI_buser_converter = NULL;
  mp_M07_AXI_bvalid_converter = NULL;
  mp_M07_AXI_bready_converter = NULL;
  mp_M07_AXI_arid_converter = NULL;
  mp_M07_AXI_araddr_converter = NULL;
  mp_M07_AXI_arlen_converter = NULL;
  mp_M07_AXI_aruser_converter = NULL;
  mp_M07_AXI_arvalid_converter = NULL;
  mp_M07_AXI_arready_converter = NULL;
  mp_M07_AXI_rid_converter = NULL;
  mp_M07_AXI_rdata_converter = NULL;
  mp_M07_AXI_rlast_converter = NULL;
  mp_M07_AXI_ruser_converter = NULL;
  mp_M07_AXI_rvalid_converter = NULL;
  mp_M07_AXI_rready_converter = NULL;
  mp_M08_AXI_transactor = NULL;
  mp_M08_AXI_awid_converter = NULL;
  mp_M08_AXI_awaddr_converter = NULL;
  mp_M08_AXI_awlen_converter = NULL;
  mp_M08_AXI_awuser_converter = NULL;
  mp_M08_AXI_awvalid_converter = NULL;
  mp_M08_AXI_awready_converter = NULL;
  mp_M08_AXI_wdata_converter = NULL;
  mp_M08_AXI_wstrb_converter = NULL;
  mp_M08_AXI_wlast_converter = NULL;
  mp_M08_AXI_wuser_converter = NULL;
  mp_M08_AXI_wvalid_converter = NULL;
  mp_M08_AXI_wready_converter = NULL;
  mp_M08_AXI_bid_converter = NULL;
  mp_M08_AXI_buser_converter = NULL;
  mp_M08_AXI_bvalid_converter = NULL;
  mp_M08_AXI_bready_converter = NULL;
  mp_M08_AXI_arid_converter = NULL;
  mp_M08_AXI_araddr_converter = NULL;
  mp_M08_AXI_arlen_converter = NULL;
  mp_M08_AXI_aruser_converter = NULL;
  mp_M08_AXI_arvalid_converter = NULL;
  mp_M08_AXI_arready_converter = NULL;
  mp_M08_AXI_rid_converter = NULL;
  mp_M08_AXI_rdata_converter = NULL;
  mp_M08_AXI_rlast_converter = NULL;
  mp_M08_AXI_ruser_converter = NULL;
  mp_M08_AXI_rvalid_converter = NULL;
  mp_M08_AXI_rready_converter = NULL;

  // initialize socket stubs

}

void design_1_smartconnect_1_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI3");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWID(S00_AXI_awid);
    mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
    mp_S00_AXI_awlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_awlen_converter");
    mp_S00_AXI_awlen_converter->vector_in(S00_AXI_awlen);
    mp_S00_AXI_awlen_converter->vector_out(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWLEN(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
    mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
    mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_awlock_converter");
    mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
    mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
    mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
    mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
    mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
    mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
    mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
    mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
    mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
    mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
    mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
    mp_S00_AXI_transactor->BID(S00_AXI_bid);
    mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
    mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
    mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
    mp_S00_AXI_transactor->ARID(S00_AXI_arid);
    mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
    mp_S00_AXI_arlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_arlen_converter");
    mp_S00_AXI_arlen_converter->vector_in(S00_AXI_arlen);
    mp_S00_AXI_arlen_converter->vector_out(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARLEN(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
    mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
    mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_arlock_converter");
    mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
    mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
    mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
    mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
    mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
    mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
    mp_S00_AXI_transactor->RID(S00_AXI_rid);
    mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
    mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
    mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
    mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
    mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "9");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,9,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
    mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
    mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
    mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
    mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
    mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
    mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
    mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
    mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
    mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
    mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
    mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
    mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
    mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
    mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
    mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
    mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
    mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
    mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXI' transactor parameters
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "6");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,6,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);

    // M01_AXI' transactor ports

    mp_M01_AXI_transactor->AWADDR(M01_AXI_awaddr);
    mp_M01_AXI_transactor->AWPROT(M01_AXI_awprot);
    mp_M01_AXI_transactor->AWVALID(M01_AXI_awvalid);
    mp_M01_AXI_transactor->AWREADY(M01_AXI_awready);
    mp_M01_AXI_transactor->WDATA(M01_AXI_wdata);
    mp_M01_AXI_transactor->WSTRB(M01_AXI_wstrb);
    mp_M01_AXI_transactor->WVALID(M01_AXI_wvalid);
    mp_M01_AXI_transactor->WREADY(M01_AXI_wready);
    mp_M01_AXI_transactor->BRESP(M01_AXI_bresp);
    mp_M01_AXI_transactor->BVALID(M01_AXI_bvalid);
    mp_M01_AXI_transactor->BREADY(M01_AXI_bready);
    mp_M01_AXI_transactor->ARADDR(M01_AXI_araddr);
    mp_M01_AXI_transactor->ARPROT(M01_AXI_arprot);
    mp_M01_AXI_transactor->ARVALID(M01_AXI_arvalid);
    mp_M01_AXI_transactor->ARREADY(M01_AXI_arready);
    mp_M01_AXI_transactor->RDATA(M01_AXI_rdata);
    mp_M01_AXI_transactor->RRESP(M01_AXI_rresp);
    mp_M01_AXI_transactor->RVALID(M01_AXI_rvalid);
    mp_M01_AXI_transactor->RREADY(M01_AXI_rready);
    mp_M01_AXI_transactor->CLK(aclk);
    mp_M01_AXI_transactor->RST(aresetn);

    // M01_AXI' transactor sockets

    mp_impl->M01_AXI_tlm_aximm_read_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->M01_AXI_tlm_aximm_write_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M02_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M02_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M02_AXI' transactor parameters
    xsc::common_cpp::properties M02_AXI_transactor_param_props;
    M02_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M02_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M02_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ADDR_WIDTH", "9");
    M02_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M02_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M02_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M02_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M02_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M02_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M02_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M02_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M02_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M02_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M02_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M02_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M02_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M02_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M02_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,9,1,1,1,1,1,1>("M02_AXI_transactor", M02_AXI_transactor_param_props);

    // M02_AXI' transactor ports

    mp_M02_AXI_transactor->AWADDR(M02_AXI_awaddr);
    mp_M02_AXI_transactor->AWPROT(M02_AXI_awprot);
    mp_M02_AXI_transactor->AWVALID(M02_AXI_awvalid);
    mp_M02_AXI_transactor->AWREADY(M02_AXI_awready);
    mp_M02_AXI_transactor->WDATA(M02_AXI_wdata);
    mp_M02_AXI_transactor->WSTRB(M02_AXI_wstrb);
    mp_M02_AXI_transactor->WVALID(M02_AXI_wvalid);
    mp_M02_AXI_transactor->WREADY(M02_AXI_wready);
    mp_M02_AXI_transactor->BRESP(M02_AXI_bresp);
    mp_M02_AXI_transactor->BVALID(M02_AXI_bvalid);
    mp_M02_AXI_transactor->BREADY(M02_AXI_bready);
    mp_M02_AXI_transactor->ARADDR(M02_AXI_araddr);
    mp_M02_AXI_transactor->ARPROT(M02_AXI_arprot);
    mp_M02_AXI_transactor->ARVALID(M02_AXI_arvalid);
    mp_M02_AXI_transactor->ARREADY(M02_AXI_arready);
    mp_M02_AXI_transactor->RDATA(M02_AXI_rdata);
    mp_M02_AXI_transactor->RRESP(M02_AXI_rresp);
    mp_M02_AXI_transactor->RVALID(M02_AXI_rvalid);
    mp_M02_AXI_transactor->RREADY(M02_AXI_rready);
    mp_M02_AXI_transactor->CLK(aclk);
    mp_M02_AXI_transactor->RST(aresetn);

    // M02_AXI' transactor sockets

    mp_impl->M02_AXI_tlm_aximm_read_socket->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_impl->M02_AXI_tlm_aximm_write_socket->bind(*(mp_M02_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M03_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M03_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M03_AXI' transactor parameters
    xsc::common_cpp::properties M03_AXI_transactor_param_props;
    M03_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M03_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M03_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ADDR_WIDTH", "8");
    M03_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M03_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M03_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M03_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M03_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M03_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M03_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M03_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M03_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M03_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M03_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M03_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M03_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M03_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M03_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,8,1,1,1,1,1,1>("M03_AXI_transactor", M03_AXI_transactor_param_props);

    // M03_AXI' transactor ports

    mp_M03_AXI_transactor->AWADDR(M03_AXI_awaddr);
    mp_M03_AXI_transactor->AWPROT(M03_AXI_awprot);
    mp_M03_AXI_transactor->AWVALID(M03_AXI_awvalid);
    mp_M03_AXI_transactor->AWREADY(M03_AXI_awready);
    mp_M03_AXI_transactor->WDATA(M03_AXI_wdata);
    mp_M03_AXI_transactor->WSTRB(M03_AXI_wstrb);
    mp_M03_AXI_transactor->WVALID(M03_AXI_wvalid);
    mp_M03_AXI_transactor->WREADY(M03_AXI_wready);
    mp_M03_AXI_transactor->BRESP(M03_AXI_bresp);
    mp_M03_AXI_transactor->BVALID(M03_AXI_bvalid);
    mp_M03_AXI_transactor->BREADY(M03_AXI_bready);
    mp_M03_AXI_transactor->ARADDR(M03_AXI_araddr);
    mp_M03_AXI_transactor->ARPROT(M03_AXI_arprot);
    mp_M03_AXI_transactor->ARVALID(M03_AXI_arvalid);
    mp_M03_AXI_transactor->ARREADY(M03_AXI_arready);
    mp_M03_AXI_transactor->RDATA(M03_AXI_rdata);
    mp_M03_AXI_transactor->RRESP(M03_AXI_rresp);
    mp_M03_AXI_transactor->RVALID(M03_AXI_rvalid);
    mp_M03_AXI_transactor->RREADY(M03_AXI_rready);
    mp_M03_AXI_transactor->CLK(aclk);
    mp_M03_AXI_transactor->RST(aresetn);

    // M03_AXI' transactor sockets

    mp_impl->M03_AXI_tlm_aximm_read_socket->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_impl->M03_AXI_tlm_aximm_write_socket->bind(*(mp_M03_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M04_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M04_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M04_AXI' transactor parameters
    xsc::common_cpp::properties M04_AXI_transactor_param_props;
    M04_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M04_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M04_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ADDR_WIDTH", "7");
    M04_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M04_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M04_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M04_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M04_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M04_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M04_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M04_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M04_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M04_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M04_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M04_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M04_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M04_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M04_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,7,1,1,1,1,1,1>("M04_AXI_transactor", M04_AXI_transactor_param_props);

    // M04_AXI' transactor ports

    mp_M04_AXI_transactor->AWADDR(M04_AXI_awaddr);
    mp_M04_AXI_transactor->AWPROT(M04_AXI_awprot);
    mp_M04_AXI_transactor->AWVALID(M04_AXI_awvalid);
    mp_M04_AXI_transactor->AWREADY(M04_AXI_awready);
    mp_M04_AXI_transactor->WDATA(M04_AXI_wdata);
    mp_M04_AXI_transactor->WSTRB(M04_AXI_wstrb);
    mp_M04_AXI_transactor->WVALID(M04_AXI_wvalid);
    mp_M04_AXI_transactor->WREADY(M04_AXI_wready);
    mp_M04_AXI_transactor->BRESP(M04_AXI_bresp);
    mp_M04_AXI_transactor->BVALID(M04_AXI_bvalid);
    mp_M04_AXI_transactor->BREADY(M04_AXI_bready);
    mp_M04_AXI_transactor->ARADDR(M04_AXI_araddr);
    mp_M04_AXI_transactor->ARPROT(M04_AXI_arprot);
    mp_M04_AXI_transactor->ARVALID(M04_AXI_arvalid);
    mp_M04_AXI_transactor->ARREADY(M04_AXI_arready);
    mp_M04_AXI_transactor->RDATA(M04_AXI_rdata);
    mp_M04_AXI_transactor->RRESP(M04_AXI_rresp);
    mp_M04_AXI_transactor->RVALID(M04_AXI_rvalid);
    mp_M04_AXI_transactor->RREADY(M04_AXI_rready);
    mp_M04_AXI_transactor->CLK(aclk);
    mp_M04_AXI_transactor->RST(aresetn);

    // M04_AXI' transactor sockets

    mp_impl->M04_AXI_tlm_aximm_read_socket->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_impl->M04_AXI_tlm_aximm_write_socket->bind(*(mp_M04_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M05_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M05_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M05_AXI' transactor parameters
    xsc::common_cpp::properties M05_AXI_transactor_param_props;
    M05_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M05_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M05_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M05_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M05_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M05_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M05_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M05_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M05_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M05_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M05_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M05_AXI_transactor_param_props.addString("PROTOCOL", "");
    M05_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M05_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M05_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M05_AXI_transactor", M05_AXI_transactor_param_props);

    // M05_AXI' transactor ports

    mp_M05_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awid_converter");
    mp_M05_AXI_awid_converter->vector_in(m_M05_AXI_awid_converter_signal);
    mp_M05_AXI_awid_converter->scalar_out(M05_AXI_awid);
    mp_M05_AXI_transactor->AWID(m_M05_AXI_awid_converter_signal);
    mp_M05_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_awaddr_converter");
    mp_M05_AXI_awaddr_converter->vector_in(m_M05_AXI_awaddr_converter_signal);
    mp_M05_AXI_awaddr_converter->scalar_out(M05_AXI_awaddr);
    mp_M05_AXI_transactor->AWADDR(m_M05_AXI_awaddr_converter_signal);
    mp_M05_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M05_AXI_awlen_converter");
    mp_M05_AXI_awlen_converter->vector_in(m_M05_AXI_awlen_converter_signal);
    mp_M05_AXI_awlen_converter->scalar_out(M05_AXI_awlen);
    mp_M05_AXI_transactor->AWLEN(m_M05_AXI_awlen_converter_signal);
    mp_M05_AXI_transactor->AWSIZE(M05_AXI_awsize);
    mp_M05_AXI_transactor->AWBURST(M05_AXI_awburst);
    mp_M05_AXI_transactor->AWLOCK(M05_AXI_awlock);
    mp_M05_AXI_transactor->AWCACHE(M05_AXI_awcache);
    mp_M05_AXI_transactor->AWPROT(M05_AXI_awprot);
    mp_M05_AXI_transactor->AWREGION(M05_AXI_awregion);
    mp_M05_AXI_transactor->AWQOS(M05_AXI_awqos);
    mp_M05_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awuser_converter");
    mp_M05_AXI_awuser_converter->vector_in(m_M05_AXI_awuser_converter_signal);
    mp_M05_AXI_awuser_converter->scalar_out(M05_AXI_awuser);
    mp_M05_AXI_transactor->AWUSER(m_M05_AXI_awuser_converter_signal);
    mp_M05_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_awvalid_converter");
    mp_M05_AXI_awvalid_converter->scalar_in(m_M05_AXI_awvalid_converter_signal);
    mp_M05_AXI_awvalid_converter->vector_out(M05_AXI_awvalid);
    mp_M05_AXI_transactor->AWVALID(m_M05_AXI_awvalid_converter_signal);
    mp_M05_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awready_converter");
    mp_M05_AXI_awready_converter->vector_in(M05_AXI_awready);
    mp_M05_AXI_awready_converter->scalar_out(m_M05_AXI_awready_converter_signal);
    mp_M05_AXI_transactor->AWREADY(m_M05_AXI_awready_converter_signal);
    mp_M05_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_wdata_converter");
    mp_M05_AXI_wdata_converter->vector_in(m_M05_AXI_wdata_converter_signal);
    mp_M05_AXI_wdata_converter->scalar_out(M05_AXI_wdata);
    mp_M05_AXI_transactor->WDATA(m_M05_AXI_wdata_converter_signal);
    mp_M05_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M05_AXI_wstrb_converter");
    mp_M05_AXI_wstrb_converter->vector_in(m_M05_AXI_wstrb_converter_signal);
    mp_M05_AXI_wstrb_converter->scalar_out(M05_AXI_wstrb);
    mp_M05_AXI_transactor->WSTRB(m_M05_AXI_wstrb_converter_signal);
    mp_M05_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_wlast_converter");
    mp_M05_AXI_wlast_converter->scalar_in(m_M05_AXI_wlast_converter_signal);
    mp_M05_AXI_wlast_converter->vector_out(M05_AXI_wlast);
    mp_M05_AXI_transactor->WLAST(m_M05_AXI_wlast_converter_signal);
    mp_M05_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_wuser_converter");
    mp_M05_AXI_wuser_converter->vector_in(m_M05_AXI_wuser_converter_signal);
    mp_M05_AXI_wuser_converter->scalar_out(M05_AXI_wuser);
    mp_M05_AXI_transactor->WUSER(m_M05_AXI_wuser_converter_signal);
    mp_M05_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_wvalid_converter");
    mp_M05_AXI_wvalid_converter->scalar_in(m_M05_AXI_wvalid_converter_signal);
    mp_M05_AXI_wvalid_converter->vector_out(M05_AXI_wvalid);
    mp_M05_AXI_transactor->WVALID(m_M05_AXI_wvalid_converter_signal);
    mp_M05_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_wready_converter");
    mp_M05_AXI_wready_converter->vector_in(M05_AXI_wready);
    mp_M05_AXI_wready_converter->scalar_out(m_M05_AXI_wready_converter_signal);
    mp_M05_AXI_transactor->WREADY(m_M05_AXI_wready_converter_signal);
    mp_M05_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_bid_converter");
    mp_M05_AXI_bid_converter->scalar_in(M05_AXI_bid);
    mp_M05_AXI_bid_converter->vector_out(m_M05_AXI_bid_converter_signal);
    mp_M05_AXI_transactor->BID(m_M05_AXI_bid_converter_signal);
    mp_M05_AXI_transactor->BRESP(M05_AXI_bresp);
    mp_M05_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_buser_converter");
    mp_M05_AXI_buser_converter->scalar_in(M05_AXI_buser);
    mp_M05_AXI_buser_converter->vector_out(m_M05_AXI_buser_converter_signal);
    mp_M05_AXI_transactor->BUSER(m_M05_AXI_buser_converter_signal);
    mp_M05_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_bvalid_converter");
    mp_M05_AXI_bvalid_converter->vector_in(M05_AXI_bvalid);
    mp_M05_AXI_bvalid_converter->scalar_out(m_M05_AXI_bvalid_converter_signal);
    mp_M05_AXI_transactor->BVALID(m_M05_AXI_bvalid_converter_signal);
    mp_M05_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_bready_converter");
    mp_M05_AXI_bready_converter->scalar_in(m_M05_AXI_bready_converter_signal);
    mp_M05_AXI_bready_converter->vector_out(M05_AXI_bready);
    mp_M05_AXI_transactor->BREADY(m_M05_AXI_bready_converter_signal);
    mp_M05_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_arid_converter");
    mp_M05_AXI_arid_converter->vector_in(m_M05_AXI_arid_converter_signal);
    mp_M05_AXI_arid_converter->scalar_out(M05_AXI_arid);
    mp_M05_AXI_transactor->ARID(m_M05_AXI_arid_converter_signal);
    mp_M05_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_araddr_converter");
    mp_M05_AXI_araddr_converter->vector_in(m_M05_AXI_araddr_converter_signal);
    mp_M05_AXI_araddr_converter->scalar_out(M05_AXI_araddr);
    mp_M05_AXI_transactor->ARADDR(m_M05_AXI_araddr_converter_signal);
    mp_M05_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M05_AXI_arlen_converter");
    mp_M05_AXI_arlen_converter->vector_in(m_M05_AXI_arlen_converter_signal);
    mp_M05_AXI_arlen_converter->scalar_out(M05_AXI_arlen);
    mp_M05_AXI_transactor->ARLEN(m_M05_AXI_arlen_converter_signal);
    mp_M05_AXI_transactor->ARSIZE(M05_AXI_arsize);
    mp_M05_AXI_transactor->ARBURST(M05_AXI_arburst);
    mp_M05_AXI_transactor->ARLOCK(M05_AXI_arlock);
    mp_M05_AXI_transactor->ARCACHE(M05_AXI_arcache);
    mp_M05_AXI_transactor->ARPROT(M05_AXI_arprot);
    mp_M05_AXI_transactor->ARREGION(M05_AXI_arregion);
    mp_M05_AXI_transactor->ARQOS(M05_AXI_arqos);
    mp_M05_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_aruser_converter");
    mp_M05_AXI_aruser_converter->vector_in(m_M05_AXI_aruser_converter_signal);
    mp_M05_AXI_aruser_converter->scalar_out(M05_AXI_aruser);
    mp_M05_AXI_transactor->ARUSER(m_M05_AXI_aruser_converter_signal);
    mp_M05_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_arvalid_converter");
    mp_M05_AXI_arvalid_converter->scalar_in(m_M05_AXI_arvalid_converter_signal);
    mp_M05_AXI_arvalid_converter->vector_out(M05_AXI_arvalid);
    mp_M05_AXI_transactor->ARVALID(m_M05_AXI_arvalid_converter_signal);
    mp_M05_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_arready_converter");
    mp_M05_AXI_arready_converter->vector_in(M05_AXI_arready);
    mp_M05_AXI_arready_converter->scalar_out(m_M05_AXI_arready_converter_signal);
    mp_M05_AXI_transactor->ARREADY(m_M05_AXI_arready_converter_signal);
    mp_M05_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_rid_converter");
    mp_M05_AXI_rid_converter->scalar_in(M05_AXI_rid);
    mp_M05_AXI_rid_converter->vector_out(m_M05_AXI_rid_converter_signal);
    mp_M05_AXI_transactor->RID(m_M05_AXI_rid_converter_signal);
    mp_M05_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M05_AXI_rdata_converter");
    mp_M05_AXI_rdata_converter->scalar_in(M05_AXI_rdata);
    mp_M05_AXI_rdata_converter->vector_out(m_M05_AXI_rdata_converter_signal);
    mp_M05_AXI_transactor->RDATA(m_M05_AXI_rdata_converter_signal);
    mp_M05_AXI_transactor->RRESP(M05_AXI_rresp);
    mp_M05_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_rlast_converter");
    mp_M05_AXI_rlast_converter->vector_in(M05_AXI_rlast);
    mp_M05_AXI_rlast_converter->scalar_out(m_M05_AXI_rlast_converter_signal);
    mp_M05_AXI_transactor->RLAST(m_M05_AXI_rlast_converter_signal);
    mp_M05_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_ruser_converter");
    mp_M05_AXI_ruser_converter->scalar_in(M05_AXI_ruser);
    mp_M05_AXI_ruser_converter->vector_out(m_M05_AXI_ruser_converter_signal);
    mp_M05_AXI_transactor->RUSER(m_M05_AXI_ruser_converter_signal);
    mp_M05_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_rvalid_converter");
    mp_M05_AXI_rvalid_converter->vector_in(M05_AXI_rvalid);
    mp_M05_AXI_rvalid_converter->scalar_out(m_M05_AXI_rvalid_converter_signal);
    mp_M05_AXI_transactor->RVALID(m_M05_AXI_rvalid_converter_signal);
    mp_M05_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_rready_converter");
    mp_M05_AXI_rready_converter->scalar_in(m_M05_AXI_rready_converter_signal);
    mp_M05_AXI_rready_converter->vector_out(M05_AXI_rready);
    mp_M05_AXI_transactor->RREADY(m_M05_AXI_rready_converter_signal);
    mp_M05_AXI_transactor->CLK(aclk);
    mp_M05_AXI_transactor->RST(aresetn);

    // M05_AXI' transactor sockets

    mp_impl->M05_AXI_tlm_aximm_read_socket->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_impl->M05_AXI_tlm_aximm_write_socket->bind(*(mp_M05_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M06_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M06_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M06_AXI' transactor parameters
    xsc::common_cpp::properties M06_AXI_transactor_param_props;
    M06_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M06_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M06_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M06_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M06_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M06_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M06_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M06_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M06_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M06_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M06_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M06_AXI_transactor_param_props.addString("PROTOCOL", "");
    M06_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M06_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M06_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M06_AXI_transactor", M06_AXI_transactor_param_props);

    // M06_AXI' transactor ports

    mp_M06_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awid_converter");
    mp_M06_AXI_awid_converter->vector_in(m_M06_AXI_awid_converter_signal);
    mp_M06_AXI_awid_converter->scalar_out(M06_AXI_awid);
    mp_M06_AXI_transactor->AWID(m_M06_AXI_awid_converter_signal);
    mp_M06_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_awaddr_converter");
    mp_M06_AXI_awaddr_converter->vector_in(m_M06_AXI_awaddr_converter_signal);
    mp_M06_AXI_awaddr_converter->scalar_out(M06_AXI_awaddr);
    mp_M06_AXI_transactor->AWADDR(m_M06_AXI_awaddr_converter_signal);
    mp_M06_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M06_AXI_awlen_converter");
    mp_M06_AXI_awlen_converter->vector_in(m_M06_AXI_awlen_converter_signal);
    mp_M06_AXI_awlen_converter->scalar_out(M06_AXI_awlen);
    mp_M06_AXI_transactor->AWLEN(m_M06_AXI_awlen_converter_signal);
    mp_M06_AXI_transactor->AWSIZE(M06_AXI_awsize);
    mp_M06_AXI_transactor->AWBURST(M06_AXI_awburst);
    mp_M06_AXI_transactor->AWLOCK(M06_AXI_awlock);
    mp_M06_AXI_transactor->AWCACHE(M06_AXI_awcache);
    mp_M06_AXI_transactor->AWPROT(M06_AXI_awprot);
    mp_M06_AXI_transactor->AWREGION(M06_AXI_awregion);
    mp_M06_AXI_transactor->AWQOS(M06_AXI_awqos);
    mp_M06_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awuser_converter");
    mp_M06_AXI_awuser_converter->vector_in(m_M06_AXI_awuser_converter_signal);
    mp_M06_AXI_awuser_converter->scalar_out(M06_AXI_awuser);
    mp_M06_AXI_transactor->AWUSER(m_M06_AXI_awuser_converter_signal);
    mp_M06_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_awvalid_converter");
    mp_M06_AXI_awvalid_converter->scalar_in(m_M06_AXI_awvalid_converter_signal);
    mp_M06_AXI_awvalid_converter->vector_out(M06_AXI_awvalid);
    mp_M06_AXI_transactor->AWVALID(m_M06_AXI_awvalid_converter_signal);
    mp_M06_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awready_converter");
    mp_M06_AXI_awready_converter->vector_in(M06_AXI_awready);
    mp_M06_AXI_awready_converter->scalar_out(m_M06_AXI_awready_converter_signal);
    mp_M06_AXI_transactor->AWREADY(m_M06_AXI_awready_converter_signal);
    mp_M06_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_wdata_converter");
    mp_M06_AXI_wdata_converter->vector_in(m_M06_AXI_wdata_converter_signal);
    mp_M06_AXI_wdata_converter->scalar_out(M06_AXI_wdata);
    mp_M06_AXI_transactor->WDATA(m_M06_AXI_wdata_converter_signal);
    mp_M06_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M06_AXI_wstrb_converter");
    mp_M06_AXI_wstrb_converter->vector_in(m_M06_AXI_wstrb_converter_signal);
    mp_M06_AXI_wstrb_converter->scalar_out(M06_AXI_wstrb);
    mp_M06_AXI_transactor->WSTRB(m_M06_AXI_wstrb_converter_signal);
    mp_M06_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_wlast_converter");
    mp_M06_AXI_wlast_converter->scalar_in(m_M06_AXI_wlast_converter_signal);
    mp_M06_AXI_wlast_converter->vector_out(M06_AXI_wlast);
    mp_M06_AXI_transactor->WLAST(m_M06_AXI_wlast_converter_signal);
    mp_M06_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_wuser_converter");
    mp_M06_AXI_wuser_converter->vector_in(m_M06_AXI_wuser_converter_signal);
    mp_M06_AXI_wuser_converter->scalar_out(M06_AXI_wuser);
    mp_M06_AXI_transactor->WUSER(m_M06_AXI_wuser_converter_signal);
    mp_M06_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_wvalid_converter");
    mp_M06_AXI_wvalid_converter->scalar_in(m_M06_AXI_wvalid_converter_signal);
    mp_M06_AXI_wvalid_converter->vector_out(M06_AXI_wvalid);
    mp_M06_AXI_transactor->WVALID(m_M06_AXI_wvalid_converter_signal);
    mp_M06_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_wready_converter");
    mp_M06_AXI_wready_converter->vector_in(M06_AXI_wready);
    mp_M06_AXI_wready_converter->scalar_out(m_M06_AXI_wready_converter_signal);
    mp_M06_AXI_transactor->WREADY(m_M06_AXI_wready_converter_signal);
    mp_M06_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_bid_converter");
    mp_M06_AXI_bid_converter->scalar_in(M06_AXI_bid);
    mp_M06_AXI_bid_converter->vector_out(m_M06_AXI_bid_converter_signal);
    mp_M06_AXI_transactor->BID(m_M06_AXI_bid_converter_signal);
    mp_M06_AXI_transactor->BRESP(M06_AXI_bresp);
    mp_M06_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_buser_converter");
    mp_M06_AXI_buser_converter->scalar_in(M06_AXI_buser);
    mp_M06_AXI_buser_converter->vector_out(m_M06_AXI_buser_converter_signal);
    mp_M06_AXI_transactor->BUSER(m_M06_AXI_buser_converter_signal);
    mp_M06_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_bvalid_converter");
    mp_M06_AXI_bvalid_converter->vector_in(M06_AXI_bvalid);
    mp_M06_AXI_bvalid_converter->scalar_out(m_M06_AXI_bvalid_converter_signal);
    mp_M06_AXI_transactor->BVALID(m_M06_AXI_bvalid_converter_signal);
    mp_M06_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_bready_converter");
    mp_M06_AXI_bready_converter->scalar_in(m_M06_AXI_bready_converter_signal);
    mp_M06_AXI_bready_converter->vector_out(M06_AXI_bready);
    mp_M06_AXI_transactor->BREADY(m_M06_AXI_bready_converter_signal);
    mp_M06_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_arid_converter");
    mp_M06_AXI_arid_converter->vector_in(m_M06_AXI_arid_converter_signal);
    mp_M06_AXI_arid_converter->scalar_out(M06_AXI_arid);
    mp_M06_AXI_transactor->ARID(m_M06_AXI_arid_converter_signal);
    mp_M06_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_araddr_converter");
    mp_M06_AXI_araddr_converter->vector_in(m_M06_AXI_araddr_converter_signal);
    mp_M06_AXI_araddr_converter->scalar_out(M06_AXI_araddr);
    mp_M06_AXI_transactor->ARADDR(m_M06_AXI_araddr_converter_signal);
    mp_M06_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M06_AXI_arlen_converter");
    mp_M06_AXI_arlen_converter->vector_in(m_M06_AXI_arlen_converter_signal);
    mp_M06_AXI_arlen_converter->scalar_out(M06_AXI_arlen);
    mp_M06_AXI_transactor->ARLEN(m_M06_AXI_arlen_converter_signal);
    mp_M06_AXI_transactor->ARSIZE(M06_AXI_arsize);
    mp_M06_AXI_transactor->ARBURST(M06_AXI_arburst);
    mp_M06_AXI_transactor->ARLOCK(M06_AXI_arlock);
    mp_M06_AXI_transactor->ARCACHE(M06_AXI_arcache);
    mp_M06_AXI_transactor->ARPROT(M06_AXI_arprot);
    mp_M06_AXI_transactor->ARREGION(M06_AXI_arregion);
    mp_M06_AXI_transactor->ARQOS(M06_AXI_arqos);
    mp_M06_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_aruser_converter");
    mp_M06_AXI_aruser_converter->vector_in(m_M06_AXI_aruser_converter_signal);
    mp_M06_AXI_aruser_converter->scalar_out(M06_AXI_aruser);
    mp_M06_AXI_transactor->ARUSER(m_M06_AXI_aruser_converter_signal);
    mp_M06_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_arvalid_converter");
    mp_M06_AXI_arvalid_converter->scalar_in(m_M06_AXI_arvalid_converter_signal);
    mp_M06_AXI_arvalid_converter->vector_out(M06_AXI_arvalid);
    mp_M06_AXI_transactor->ARVALID(m_M06_AXI_arvalid_converter_signal);
    mp_M06_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_arready_converter");
    mp_M06_AXI_arready_converter->vector_in(M06_AXI_arready);
    mp_M06_AXI_arready_converter->scalar_out(m_M06_AXI_arready_converter_signal);
    mp_M06_AXI_transactor->ARREADY(m_M06_AXI_arready_converter_signal);
    mp_M06_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_rid_converter");
    mp_M06_AXI_rid_converter->scalar_in(M06_AXI_rid);
    mp_M06_AXI_rid_converter->vector_out(m_M06_AXI_rid_converter_signal);
    mp_M06_AXI_transactor->RID(m_M06_AXI_rid_converter_signal);
    mp_M06_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M06_AXI_rdata_converter");
    mp_M06_AXI_rdata_converter->scalar_in(M06_AXI_rdata);
    mp_M06_AXI_rdata_converter->vector_out(m_M06_AXI_rdata_converter_signal);
    mp_M06_AXI_transactor->RDATA(m_M06_AXI_rdata_converter_signal);
    mp_M06_AXI_transactor->RRESP(M06_AXI_rresp);
    mp_M06_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_rlast_converter");
    mp_M06_AXI_rlast_converter->vector_in(M06_AXI_rlast);
    mp_M06_AXI_rlast_converter->scalar_out(m_M06_AXI_rlast_converter_signal);
    mp_M06_AXI_transactor->RLAST(m_M06_AXI_rlast_converter_signal);
    mp_M06_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_ruser_converter");
    mp_M06_AXI_ruser_converter->scalar_in(M06_AXI_ruser);
    mp_M06_AXI_ruser_converter->vector_out(m_M06_AXI_ruser_converter_signal);
    mp_M06_AXI_transactor->RUSER(m_M06_AXI_ruser_converter_signal);
    mp_M06_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_rvalid_converter");
    mp_M06_AXI_rvalid_converter->vector_in(M06_AXI_rvalid);
    mp_M06_AXI_rvalid_converter->scalar_out(m_M06_AXI_rvalid_converter_signal);
    mp_M06_AXI_transactor->RVALID(m_M06_AXI_rvalid_converter_signal);
    mp_M06_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_rready_converter");
    mp_M06_AXI_rready_converter->scalar_in(m_M06_AXI_rready_converter_signal);
    mp_M06_AXI_rready_converter->vector_out(M06_AXI_rready);
    mp_M06_AXI_transactor->RREADY(m_M06_AXI_rready_converter_signal);
    mp_M06_AXI_transactor->CLK(aclk);
    mp_M06_AXI_transactor->RST(aresetn);

    // M06_AXI' transactor sockets

    mp_impl->M06_AXI_tlm_aximm_read_socket->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_impl->M06_AXI_tlm_aximm_write_socket->bind(*(mp_M06_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M07_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M07_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M07_AXI' transactor parameters
    xsc::common_cpp::properties M07_AXI_transactor_param_props;
    M07_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M07_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M07_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M07_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M07_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M07_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M07_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M07_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M07_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M07_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M07_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M07_AXI_transactor_param_props.addString("PROTOCOL", "");
    M07_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M07_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M07_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M07_AXI_transactor", M07_AXI_transactor_param_props);

    // M07_AXI' transactor ports

    mp_M07_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awid_converter");
    mp_M07_AXI_awid_converter->vector_in(m_M07_AXI_awid_converter_signal);
    mp_M07_AXI_awid_converter->scalar_out(M07_AXI_awid);
    mp_M07_AXI_transactor->AWID(m_M07_AXI_awid_converter_signal);
    mp_M07_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_awaddr_converter");
    mp_M07_AXI_awaddr_converter->vector_in(m_M07_AXI_awaddr_converter_signal);
    mp_M07_AXI_awaddr_converter->scalar_out(M07_AXI_awaddr);
    mp_M07_AXI_transactor->AWADDR(m_M07_AXI_awaddr_converter_signal);
    mp_M07_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M07_AXI_awlen_converter");
    mp_M07_AXI_awlen_converter->vector_in(m_M07_AXI_awlen_converter_signal);
    mp_M07_AXI_awlen_converter->scalar_out(M07_AXI_awlen);
    mp_M07_AXI_transactor->AWLEN(m_M07_AXI_awlen_converter_signal);
    mp_M07_AXI_transactor->AWSIZE(M07_AXI_awsize);
    mp_M07_AXI_transactor->AWBURST(M07_AXI_awburst);
    mp_M07_AXI_transactor->AWLOCK(M07_AXI_awlock);
    mp_M07_AXI_transactor->AWCACHE(M07_AXI_awcache);
    mp_M07_AXI_transactor->AWPROT(M07_AXI_awprot);
    mp_M07_AXI_transactor->AWREGION(M07_AXI_awregion);
    mp_M07_AXI_transactor->AWQOS(M07_AXI_awqos);
    mp_M07_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awuser_converter");
    mp_M07_AXI_awuser_converter->vector_in(m_M07_AXI_awuser_converter_signal);
    mp_M07_AXI_awuser_converter->scalar_out(M07_AXI_awuser);
    mp_M07_AXI_transactor->AWUSER(m_M07_AXI_awuser_converter_signal);
    mp_M07_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_awvalid_converter");
    mp_M07_AXI_awvalid_converter->scalar_in(m_M07_AXI_awvalid_converter_signal);
    mp_M07_AXI_awvalid_converter->vector_out(M07_AXI_awvalid);
    mp_M07_AXI_transactor->AWVALID(m_M07_AXI_awvalid_converter_signal);
    mp_M07_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awready_converter");
    mp_M07_AXI_awready_converter->vector_in(M07_AXI_awready);
    mp_M07_AXI_awready_converter->scalar_out(m_M07_AXI_awready_converter_signal);
    mp_M07_AXI_transactor->AWREADY(m_M07_AXI_awready_converter_signal);
    mp_M07_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_wdata_converter");
    mp_M07_AXI_wdata_converter->vector_in(m_M07_AXI_wdata_converter_signal);
    mp_M07_AXI_wdata_converter->scalar_out(M07_AXI_wdata);
    mp_M07_AXI_transactor->WDATA(m_M07_AXI_wdata_converter_signal);
    mp_M07_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M07_AXI_wstrb_converter");
    mp_M07_AXI_wstrb_converter->vector_in(m_M07_AXI_wstrb_converter_signal);
    mp_M07_AXI_wstrb_converter->scalar_out(M07_AXI_wstrb);
    mp_M07_AXI_transactor->WSTRB(m_M07_AXI_wstrb_converter_signal);
    mp_M07_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_wlast_converter");
    mp_M07_AXI_wlast_converter->scalar_in(m_M07_AXI_wlast_converter_signal);
    mp_M07_AXI_wlast_converter->vector_out(M07_AXI_wlast);
    mp_M07_AXI_transactor->WLAST(m_M07_AXI_wlast_converter_signal);
    mp_M07_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_wuser_converter");
    mp_M07_AXI_wuser_converter->vector_in(m_M07_AXI_wuser_converter_signal);
    mp_M07_AXI_wuser_converter->scalar_out(M07_AXI_wuser);
    mp_M07_AXI_transactor->WUSER(m_M07_AXI_wuser_converter_signal);
    mp_M07_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_wvalid_converter");
    mp_M07_AXI_wvalid_converter->scalar_in(m_M07_AXI_wvalid_converter_signal);
    mp_M07_AXI_wvalid_converter->vector_out(M07_AXI_wvalid);
    mp_M07_AXI_transactor->WVALID(m_M07_AXI_wvalid_converter_signal);
    mp_M07_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_wready_converter");
    mp_M07_AXI_wready_converter->vector_in(M07_AXI_wready);
    mp_M07_AXI_wready_converter->scalar_out(m_M07_AXI_wready_converter_signal);
    mp_M07_AXI_transactor->WREADY(m_M07_AXI_wready_converter_signal);
    mp_M07_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_bid_converter");
    mp_M07_AXI_bid_converter->scalar_in(M07_AXI_bid);
    mp_M07_AXI_bid_converter->vector_out(m_M07_AXI_bid_converter_signal);
    mp_M07_AXI_transactor->BID(m_M07_AXI_bid_converter_signal);
    mp_M07_AXI_transactor->BRESP(M07_AXI_bresp);
    mp_M07_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_buser_converter");
    mp_M07_AXI_buser_converter->scalar_in(M07_AXI_buser);
    mp_M07_AXI_buser_converter->vector_out(m_M07_AXI_buser_converter_signal);
    mp_M07_AXI_transactor->BUSER(m_M07_AXI_buser_converter_signal);
    mp_M07_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_bvalid_converter");
    mp_M07_AXI_bvalid_converter->vector_in(M07_AXI_bvalid);
    mp_M07_AXI_bvalid_converter->scalar_out(m_M07_AXI_bvalid_converter_signal);
    mp_M07_AXI_transactor->BVALID(m_M07_AXI_bvalid_converter_signal);
    mp_M07_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_bready_converter");
    mp_M07_AXI_bready_converter->scalar_in(m_M07_AXI_bready_converter_signal);
    mp_M07_AXI_bready_converter->vector_out(M07_AXI_bready);
    mp_M07_AXI_transactor->BREADY(m_M07_AXI_bready_converter_signal);
    mp_M07_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_arid_converter");
    mp_M07_AXI_arid_converter->vector_in(m_M07_AXI_arid_converter_signal);
    mp_M07_AXI_arid_converter->scalar_out(M07_AXI_arid);
    mp_M07_AXI_transactor->ARID(m_M07_AXI_arid_converter_signal);
    mp_M07_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_araddr_converter");
    mp_M07_AXI_araddr_converter->vector_in(m_M07_AXI_araddr_converter_signal);
    mp_M07_AXI_araddr_converter->scalar_out(M07_AXI_araddr);
    mp_M07_AXI_transactor->ARADDR(m_M07_AXI_araddr_converter_signal);
    mp_M07_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M07_AXI_arlen_converter");
    mp_M07_AXI_arlen_converter->vector_in(m_M07_AXI_arlen_converter_signal);
    mp_M07_AXI_arlen_converter->scalar_out(M07_AXI_arlen);
    mp_M07_AXI_transactor->ARLEN(m_M07_AXI_arlen_converter_signal);
    mp_M07_AXI_transactor->ARSIZE(M07_AXI_arsize);
    mp_M07_AXI_transactor->ARBURST(M07_AXI_arburst);
    mp_M07_AXI_transactor->ARLOCK(M07_AXI_arlock);
    mp_M07_AXI_transactor->ARCACHE(M07_AXI_arcache);
    mp_M07_AXI_transactor->ARPROT(M07_AXI_arprot);
    mp_M07_AXI_transactor->ARREGION(M07_AXI_arregion);
    mp_M07_AXI_transactor->ARQOS(M07_AXI_arqos);
    mp_M07_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_aruser_converter");
    mp_M07_AXI_aruser_converter->vector_in(m_M07_AXI_aruser_converter_signal);
    mp_M07_AXI_aruser_converter->scalar_out(M07_AXI_aruser);
    mp_M07_AXI_transactor->ARUSER(m_M07_AXI_aruser_converter_signal);
    mp_M07_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_arvalid_converter");
    mp_M07_AXI_arvalid_converter->scalar_in(m_M07_AXI_arvalid_converter_signal);
    mp_M07_AXI_arvalid_converter->vector_out(M07_AXI_arvalid);
    mp_M07_AXI_transactor->ARVALID(m_M07_AXI_arvalid_converter_signal);
    mp_M07_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_arready_converter");
    mp_M07_AXI_arready_converter->vector_in(M07_AXI_arready);
    mp_M07_AXI_arready_converter->scalar_out(m_M07_AXI_arready_converter_signal);
    mp_M07_AXI_transactor->ARREADY(m_M07_AXI_arready_converter_signal);
    mp_M07_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_rid_converter");
    mp_M07_AXI_rid_converter->scalar_in(M07_AXI_rid);
    mp_M07_AXI_rid_converter->vector_out(m_M07_AXI_rid_converter_signal);
    mp_M07_AXI_transactor->RID(m_M07_AXI_rid_converter_signal);
    mp_M07_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M07_AXI_rdata_converter");
    mp_M07_AXI_rdata_converter->scalar_in(M07_AXI_rdata);
    mp_M07_AXI_rdata_converter->vector_out(m_M07_AXI_rdata_converter_signal);
    mp_M07_AXI_transactor->RDATA(m_M07_AXI_rdata_converter_signal);
    mp_M07_AXI_transactor->RRESP(M07_AXI_rresp);
    mp_M07_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_rlast_converter");
    mp_M07_AXI_rlast_converter->vector_in(M07_AXI_rlast);
    mp_M07_AXI_rlast_converter->scalar_out(m_M07_AXI_rlast_converter_signal);
    mp_M07_AXI_transactor->RLAST(m_M07_AXI_rlast_converter_signal);
    mp_M07_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_ruser_converter");
    mp_M07_AXI_ruser_converter->scalar_in(M07_AXI_ruser);
    mp_M07_AXI_ruser_converter->vector_out(m_M07_AXI_ruser_converter_signal);
    mp_M07_AXI_transactor->RUSER(m_M07_AXI_ruser_converter_signal);
    mp_M07_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_rvalid_converter");
    mp_M07_AXI_rvalid_converter->vector_in(M07_AXI_rvalid);
    mp_M07_AXI_rvalid_converter->scalar_out(m_M07_AXI_rvalid_converter_signal);
    mp_M07_AXI_transactor->RVALID(m_M07_AXI_rvalid_converter_signal);
    mp_M07_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_rready_converter");
    mp_M07_AXI_rready_converter->scalar_in(m_M07_AXI_rready_converter_signal);
    mp_M07_AXI_rready_converter->vector_out(M07_AXI_rready);
    mp_M07_AXI_transactor->RREADY(m_M07_AXI_rready_converter_signal);
    mp_M07_AXI_transactor->CLK(aclk);
    mp_M07_AXI_transactor->RST(aresetn);

    // M07_AXI' transactor sockets

    mp_impl->M07_AXI_tlm_aximm_read_socket->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_impl->M07_AXI_tlm_aximm_write_socket->bind(*(mp_M07_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M08_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M08_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M08_AXI' transactor parameters
    xsc::common_cpp::properties M08_AXI_transactor_param_props;
    M08_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M08_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M08_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M08_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M08_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M08_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M08_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M08_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M08_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M08_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M08_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M08_AXI_transactor_param_props.addString("PROTOCOL", "");
    M08_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M08_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M08_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M08_AXI_transactor", M08_AXI_transactor_param_props);

    // M08_AXI' transactor ports

    mp_M08_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awid_converter");
    mp_M08_AXI_awid_converter->vector_in(m_M08_AXI_awid_converter_signal);
    mp_M08_AXI_awid_converter->scalar_out(M08_AXI_awid);
    mp_M08_AXI_transactor->AWID(m_M08_AXI_awid_converter_signal);
    mp_M08_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_awaddr_converter");
    mp_M08_AXI_awaddr_converter->vector_in(m_M08_AXI_awaddr_converter_signal);
    mp_M08_AXI_awaddr_converter->scalar_out(M08_AXI_awaddr);
    mp_M08_AXI_transactor->AWADDR(m_M08_AXI_awaddr_converter_signal);
    mp_M08_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M08_AXI_awlen_converter");
    mp_M08_AXI_awlen_converter->vector_in(m_M08_AXI_awlen_converter_signal);
    mp_M08_AXI_awlen_converter->scalar_out(M08_AXI_awlen);
    mp_M08_AXI_transactor->AWLEN(m_M08_AXI_awlen_converter_signal);
    mp_M08_AXI_transactor->AWSIZE(M08_AXI_awsize);
    mp_M08_AXI_transactor->AWBURST(M08_AXI_awburst);
    mp_M08_AXI_transactor->AWLOCK(M08_AXI_awlock);
    mp_M08_AXI_transactor->AWCACHE(M08_AXI_awcache);
    mp_M08_AXI_transactor->AWPROT(M08_AXI_awprot);
    mp_M08_AXI_transactor->AWREGION(M08_AXI_awregion);
    mp_M08_AXI_transactor->AWQOS(M08_AXI_awqos);
    mp_M08_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awuser_converter");
    mp_M08_AXI_awuser_converter->vector_in(m_M08_AXI_awuser_converter_signal);
    mp_M08_AXI_awuser_converter->scalar_out(M08_AXI_awuser);
    mp_M08_AXI_transactor->AWUSER(m_M08_AXI_awuser_converter_signal);
    mp_M08_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_awvalid_converter");
    mp_M08_AXI_awvalid_converter->scalar_in(m_M08_AXI_awvalid_converter_signal);
    mp_M08_AXI_awvalid_converter->vector_out(M08_AXI_awvalid);
    mp_M08_AXI_transactor->AWVALID(m_M08_AXI_awvalid_converter_signal);
    mp_M08_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awready_converter");
    mp_M08_AXI_awready_converter->vector_in(M08_AXI_awready);
    mp_M08_AXI_awready_converter->scalar_out(m_M08_AXI_awready_converter_signal);
    mp_M08_AXI_transactor->AWREADY(m_M08_AXI_awready_converter_signal);
    mp_M08_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_wdata_converter");
    mp_M08_AXI_wdata_converter->vector_in(m_M08_AXI_wdata_converter_signal);
    mp_M08_AXI_wdata_converter->scalar_out(M08_AXI_wdata);
    mp_M08_AXI_transactor->WDATA(m_M08_AXI_wdata_converter_signal);
    mp_M08_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M08_AXI_wstrb_converter");
    mp_M08_AXI_wstrb_converter->vector_in(m_M08_AXI_wstrb_converter_signal);
    mp_M08_AXI_wstrb_converter->scalar_out(M08_AXI_wstrb);
    mp_M08_AXI_transactor->WSTRB(m_M08_AXI_wstrb_converter_signal);
    mp_M08_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_wlast_converter");
    mp_M08_AXI_wlast_converter->scalar_in(m_M08_AXI_wlast_converter_signal);
    mp_M08_AXI_wlast_converter->vector_out(M08_AXI_wlast);
    mp_M08_AXI_transactor->WLAST(m_M08_AXI_wlast_converter_signal);
    mp_M08_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_wuser_converter");
    mp_M08_AXI_wuser_converter->vector_in(m_M08_AXI_wuser_converter_signal);
    mp_M08_AXI_wuser_converter->scalar_out(M08_AXI_wuser);
    mp_M08_AXI_transactor->WUSER(m_M08_AXI_wuser_converter_signal);
    mp_M08_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_wvalid_converter");
    mp_M08_AXI_wvalid_converter->scalar_in(m_M08_AXI_wvalid_converter_signal);
    mp_M08_AXI_wvalid_converter->vector_out(M08_AXI_wvalid);
    mp_M08_AXI_transactor->WVALID(m_M08_AXI_wvalid_converter_signal);
    mp_M08_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_wready_converter");
    mp_M08_AXI_wready_converter->vector_in(M08_AXI_wready);
    mp_M08_AXI_wready_converter->scalar_out(m_M08_AXI_wready_converter_signal);
    mp_M08_AXI_transactor->WREADY(m_M08_AXI_wready_converter_signal);
    mp_M08_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_bid_converter");
    mp_M08_AXI_bid_converter->scalar_in(M08_AXI_bid);
    mp_M08_AXI_bid_converter->vector_out(m_M08_AXI_bid_converter_signal);
    mp_M08_AXI_transactor->BID(m_M08_AXI_bid_converter_signal);
    mp_M08_AXI_transactor->BRESP(M08_AXI_bresp);
    mp_M08_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_buser_converter");
    mp_M08_AXI_buser_converter->scalar_in(M08_AXI_buser);
    mp_M08_AXI_buser_converter->vector_out(m_M08_AXI_buser_converter_signal);
    mp_M08_AXI_transactor->BUSER(m_M08_AXI_buser_converter_signal);
    mp_M08_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_bvalid_converter");
    mp_M08_AXI_bvalid_converter->vector_in(M08_AXI_bvalid);
    mp_M08_AXI_bvalid_converter->scalar_out(m_M08_AXI_bvalid_converter_signal);
    mp_M08_AXI_transactor->BVALID(m_M08_AXI_bvalid_converter_signal);
    mp_M08_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_bready_converter");
    mp_M08_AXI_bready_converter->scalar_in(m_M08_AXI_bready_converter_signal);
    mp_M08_AXI_bready_converter->vector_out(M08_AXI_bready);
    mp_M08_AXI_transactor->BREADY(m_M08_AXI_bready_converter_signal);
    mp_M08_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_arid_converter");
    mp_M08_AXI_arid_converter->vector_in(m_M08_AXI_arid_converter_signal);
    mp_M08_AXI_arid_converter->scalar_out(M08_AXI_arid);
    mp_M08_AXI_transactor->ARID(m_M08_AXI_arid_converter_signal);
    mp_M08_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_araddr_converter");
    mp_M08_AXI_araddr_converter->vector_in(m_M08_AXI_araddr_converter_signal);
    mp_M08_AXI_araddr_converter->scalar_out(M08_AXI_araddr);
    mp_M08_AXI_transactor->ARADDR(m_M08_AXI_araddr_converter_signal);
    mp_M08_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M08_AXI_arlen_converter");
    mp_M08_AXI_arlen_converter->vector_in(m_M08_AXI_arlen_converter_signal);
    mp_M08_AXI_arlen_converter->scalar_out(M08_AXI_arlen);
    mp_M08_AXI_transactor->ARLEN(m_M08_AXI_arlen_converter_signal);
    mp_M08_AXI_transactor->ARSIZE(M08_AXI_arsize);
    mp_M08_AXI_transactor->ARBURST(M08_AXI_arburst);
    mp_M08_AXI_transactor->ARLOCK(M08_AXI_arlock);
    mp_M08_AXI_transactor->ARCACHE(M08_AXI_arcache);
    mp_M08_AXI_transactor->ARPROT(M08_AXI_arprot);
    mp_M08_AXI_transactor->ARREGION(M08_AXI_arregion);
    mp_M08_AXI_transactor->ARQOS(M08_AXI_arqos);
    mp_M08_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_aruser_converter");
    mp_M08_AXI_aruser_converter->vector_in(m_M08_AXI_aruser_converter_signal);
    mp_M08_AXI_aruser_converter->scalar_out(M08_AXI_aruser);
    mp_M08_AXI_transactor->ARUSER(m_M08_AXI_aruser_converter_signal);
    mp_M08_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_arvalid_converter");
    mp_M08_AXI_arvalid_converter->scalar_in(m_M08_AXI_arvalid_converter_signal);
    mp_M08_AXI_arvalid_converter->vector_out(M08_AXI_arvalid);
    mp_M08_AXI_transactor->ARVALID(m_M08_AXI_arvalid_converter_signal);
    mp_M08_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_arready_converter");
    mp_M08_AXI_arready_converter->vector_in(M08_AXI_arready);
    mp_M08_AXI_arready_converter->scalar_out(m_M08_AXI_arready_converter_signal);
    mp_M08_AXI_transactor->ARREADY(m_M08_AXI_arready_converter_signal);
    mp_M08_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_rid_converter");
    mp_M08_AXI_rid_converter->scalar_in(M08_AXI_rid);
    mp_M08_AXI_rid_converter->vector_out(m_M08_AXI_rid_converter_signal);
    mp_M08_AXI_transactor->RID(m_M08_AXI_rid_converter_signal);
    mp_M08_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M08_AXI_rdata_converter");
    mp_M08_AXI_rdata_converter->scalar_in(M08_AXI_rdata);
    mp_M08_AXI_rdata_converter->vector_out(m_M08_AXI_rdata_converter_signal);
    mp_M08_AXI_transactor->RDATA(m_M08_AXI_rdata_converter_signal);
    mp_M08_AXI_transactor->RRESP(M08_AXI_rresp);
    mp_M08_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_rlast_converter");
    mp_M08_AXI_rlast_converter->vector_in(M08_AXI_rlast);
    mp_M08_AXI_rlast_converter->scalar_out(m_M08_AXI_rlast_converter_signal);
    mp_M08_AXI_transactor->RLAST(m_M08_AXI_rlast_converter_signal);
    mp_M08_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_ruser_converter");
    mp_M08_AXI_ruser_converter->scalar_in(M08_AXI_ruser);
    mp_M08_AXI_ruser_converter->vector_out(m_M08_AXI_ruser_converter_signal);
    mp_M08_AXI_transactor->RUSER(m_M08_AXI_ruser_converter_signal);
    mp_M08_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_rvalid_converter");
    mp_M08_AXI_rvalid_converter->vector_in(M08_AXI_rvalid);
    mp_M08_AXI_rvalid_converter->scalar_out(m_M08_AXI_rvalid_converter_signal);
    mp_M08_AXI_transactor->RVALID(m_M08_AXI_rvalid_converter_signal);
    mp_M08_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_rready_converter");
    mp_M08_AXI_rready_converter->scalar_in(m_M08_AXI_rready_converter_signal);
    mp_M08_AXI_rready_converter->vector_out(M08_AXI_rready);
    mp_M08_AXI_transactor->RREADY(m_M08_AXI_rready_converter_signal);
    mp_M08_AXI_transactor->CLK(aclk);
    mp_M08_AXI_transactor->RST(aresetn);

    // M08_AXI' transactor sockets

    mp_impl->M08_AXI_tlm_aximm_read_socket->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_impl->M08_AXI_tlm_aximm_write_socket->bind(*(mp_M08_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XILINX_SIMULATOR




#ifdef XM_SYSTEMC
design_1_smartconnect_1_0::design_1_smartconnect_1_0(const sc_core::sc_module_name& nm) : design_1_smartconnect_1_0_sc(nm), aclk("aclk"), aresetn("aresetn"), S00_AXI_awid("S00_AXI_awid"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wid("S00_AXI_wid"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bid("S00_AXI_bid"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_arid("S00_AXI_arid"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rid("S00_AXI_rid"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready"), M01_AXI_awaddr("M01_AXI_awaddr"), M01_AXI_awprot("M01_AXI_awprot"), M01_AXI_awvalid("M01_AXI_awvalid"), M01_AXI_awready("M01_AXI_awready"), M01_AXI_wdata("M01_AXI_wdata"), M01_AXI_wstrb("M01_AXI_wstrb"), M01_AXI_wvalid("M01_AXI_wvalid"), M01_AXI_wready("M01_AXI_wready"), M01_AXI_bresp("M01_AXI_bresp"), M01_AXI_bvalid("M01_AXI_bvalid"), M01_AXI_bready("M01_AXI_bready"), M01_AXI_araddr("M01_AXI_araddr"), M01_AXI_arprot("M01_AXI_arprot"), M01_AXI_arvalid("M01_AXI_arvalid"), M01_AXI_arready("M01_AXI_arready"), M01_AXI_rdata("M01_AXI_rdata"), M01_AXI_rresp("M01_AXI_rresp"), M01_AXI_rvalid("M01_AXI_rvalid"), M01_AXI_rready("M01_AXI_rready"), M02_AXI_awaddr("M02_AXI_awaddr"), M02_AXI_awprot("M02_AXI_awprot"), M02_AXI_awvalid("M02_AXI_awvalid"), M02_AXI_awready("M02_AXI_awready"), M02_AXI_wdata("M02_AXI_wdata"), M02_AXI_wstrb("M02_AXI_wstrb"), M02_AXI_wvalid("M02_AXI_wvalid"), M02_AXI_wready("M02_AXI_wready"), M02_AXI_bresp("M02_AXI_bresp"), M02_AXI_bvalid("M02_AXI_bvalid"), M02_AXI_bready("M02_AXI_bready"), M02_AXI_araddr("M02_AXI_araddr"), M02_AXI_arprot("M02_AXI_arprot"), M02_AXI_arvalid("M02_AXI_arvalid"), M02_AXI_arready("M02_AXI_arready"), M02_AXI_rdata("M02_AXI_rdata"), M02_AXI_rresp("M02_AXI_rresp"), M02_AXI_rvalid("M02_AXI_rvalid"), M02_AXI_rready("M02_AXI_rready"), M03_AXI_awaddr("M03_AXI_awaddr"), M03_AXI_awprot("M03_AXI_awprot"), M03_AXI_awvalid("M03_AXI_awvalid"), M03_AXI_awready("M03_AXI_awready"), M03_AXI_wdata("M03_AXI_wdata"), M03_AXI_wstrb("M03_AXI_wstrb"), M03_AXI_wvalid("M03_AXI_wvalid"), M03_AXI_wready("M03_AXI_wready"), M03_AXI_bresp("M03_AXI_bresp"), M03_AXI_bvalid("M03_AXI_bvalid"), M03_AXI_bready("M03_AXI_bready"), M03_AXI_araddr("M03_AXI_araddr"), M03_AXI_arprot("M03_AXI_arprot"), M03_AXI_arvalid("M03_AXI_arvalid"), M03_AXI_arready("M03_AXI_arready"), M03_AXI_rdata("M03_AXI_rdata"), M03_AXI_rresp("M03_AXI_rresp"), M03_AXI_rvalid("M03_AXI_rvalid"), M03_AXI_rready("M03_AXI_rready"), M04_AXI_awaddr("M04_AXI_awaddr"), M04_AXI_awprot("M04_AXI_awprot"), M04_AXI_awvalid("M04_AXI_awvalid"), M04_AXI_awready("M04_AXI_awready"), M04_AXI_wdata("M04_AXI_wdata"), M04_AXI_wstrb("M04_AXI_wstrb"), M04_AXI_wvalid("M04_AXI_wvalid"), M04_AXI_wready("M04_AXI_wready"), M04_AXI_bresp("M04_AXI_bresp"), M04_AXI_bvalid("M04_AXI_bvalid"), M04_AXI_bready("M04_AXI_bready"), M04_AXI_araddr("M04_AXI_araddr"), M04_AXI_arprot("M04_AXI_arprot"), M04_AXI_arvalid("M04_AXI_arvalid"), M04_AXI_arready("M04_AXI_arready"), M04_AXI_rdata("M04_AXI_rdata"), M04_AXI_rresp("M04_AXI_rresp"), M04_AXI_rvalid("M04_AXI_rvalid"), M04_AXI_rready("M04_AXI_rready"), M05_AXI_awid("M05_AXI_awid"), M05_AXI_awaddr("M05_AXI_awaddr"), M05_AXI_awlen("M05_AXI_awlen"), M05_AXI_awsize("M05_AXI_awsize"), M05_AXI_awburst("M05_AXI_awburst"), M05_AXI_awlock("M05_AXI_awlock"), M05_AXI_awcache("M05_AXI_awcache"), M05_AXI_awprot("M05_AXI_awprot"), M05_AXI_awregion("M05_AXI_awregion"), M05_AXI_awqos("M05_AXI_awqos"), M05_AXI_awuser("M05_AXI_awuser"), M05_AXI_awvalid("M05_AXI_awvalid"), M05_AXI_awready("M05_AXI_awready"), M05_AXI_wid("M05_AXI_wid"), M05_AXI_wdata("M05_AXI_wdata"), M05_AXI_wstrb("M05_AXI_wstrb"), M05_AXI_wlast("M05_AXI_wlast"), M05_AXI_wuser("M05_AXI_wuser"), M05_AXI_wvalid("M05_AXI_wvalid"), M05_AXI_wready("M05_AXI_wready"), M05_AXI_bid("M05_AXI_bid"), M05_AXI_bresp("M05_AXI_bresp"), M05_AXI_buser("M05_AXI_buser"), M05_AXI_bvalid("M05_AXI_bvalid"), M05_AXI_bready("M05_AXI_bready"), M05_AXI_arid("M05_AXI_arid"), M05_AXI_araddr("M05_AXI_araddr"), M05_AXI_arlen("M05_AXI_arlen"), M05_AXI_arsize("M05_AXI_arsize"), M05_AXI_arburst("M05_AXI_arburst"), M05_AXI_arlock("M05_AXI_arlock"), M05_AXI_arcache("M05_AXI_arcache"), M05_AXI_arprot("M05_AXI_arprot"), M05_AXI_arregion("M05_AXI_arregion"), M05_AXI_arqos("M05_AXI_arqos"), M05_AXI_aruser("M05_AXI_aruser"), M05_AXI_arvalid("M05_AXI_arvalid"), M05_AXI_arready("M05_AXI_arready"), M05_AXI_rid("M05_AXI_rid"), M05_AXI_rdata("M05_AXI_rdata"), M05_AXI_rresp("M05_AXI_rresp"), M05_AXI_rlast("M05_AXI_rlast"), M05_AXI_ruser("M05_AXI_ruser"), M05_AXI_rvalid("M05_AXI_rvalid"), M05_AXI_rready("M05_AXI_rready"), M06_AXI_awid("M06_AXI_awid"), M06_AXI_awaddr("M06_AXI_awaddr"), M06_AXI_awlen("M06_AXI_awlen"), M06_AXI_awsize("M06_AXI_awsize"), M06_AXI_awburst("M06_AXI_awburst"), M06_AXI_awlock("M06_AXI_awlock"), M06_AXI_awcache("M06_AXI_awcache"), M06_AXI_awprot("M06_AXI_awprot"), M06_AXI_awregion("M06_AXI_awregion"), M06_AXI_awqos("M06_AXI_awqos"), M06_AXI_awuser("M06_AXI_awuser"), M06_AXI_awvalid("M06_AXI_awvalid"), M06_AXI_awready("M06_AXI_awready"), M06_AXI_wid("M06_AXI_wid"), M06_AXI_wdata("M06_AXI_wdata"), M06_AXI_wstrb("M06_AXI_wstrb"), M06_AXI_wlast("M06_AXI_wlast"), M06_AXI_wuser("M06_AXI_wuser"), M06_AXI_wvalid("M06_AXI_wvalid"), M06_AXI_wready("M06_AXI_wready"), M06_AXI_bid("M06_AXI_bid"), M06_AXI_bresp("M06_AXI_bresp"), M06_AXI_buser("M06_AXI_buser"), M06_AXI_bvalid("M06_AXI_bvalid"), M06_AXI_bready("M06_AXI_bready"), M06_AXI_arid("M06_AXI_arid"), M06_AXI_araddr("M06_AXI_araddr"), M06_AXI_arlen("M06_AXI_arlen"), M06_AXI_arsize("M06_AXI_arsize"), M06_AXI_arburst("M06_AXI_arburst"), M06_AXI_arlock("M06_AXI_arlock"), M06_AXI_arcache("M06_AXI_arcache"), M06_AXI_arprot("M06_AXI_arprot"), M06_AXI_arregion("M06_AXI_arregion"), M06_AXI_arqos("M06_AXI_arqos"), M06_AXI_aruser("M06_AXI_aruser"), M06_AXI_arvalid("M06_AXI_arvalid"), M06_AXI_arready("M06_AXI_arready"), M06_AXI_rid("M06_AXI_rid"), M06_AXI_rdata("M06_AXI_rdata"), M06_AXI_rresp("M06_AXI_rresp"), M06_AXI_rlast("M06_AXI_rlast"), M06_AXI_ruser("M06_AXI_ruser"), M06_AXI_rvalid("M06_AXI_rvalid"), M06_AXI_rready("M06_AXI_rready"), M07_AXI_awid("M07_AXI_awid"), M07_AXI_awaddr("M07_AXI_awaddr"), M07_AXI_awlen("M07_AXI_awlen"), M07_AXI_awsize("M07_AXI_awsize"), M07_AXI_awburst("M07_AXI_awburst"), M07_AXI_awlock("M07_AXI_awlock"), M07_AXI_awcache("M07_AXI_awcache"), M07_AXI_awprot("M07_AXI_awprot"), M07_AXI_awregion("M07_AXI_awregion"), M07_AXI_awqos("M07_AXI_awqos"), M07_AXI_awuser("M07_AXI_awuser"), M07_AXI_awvalid("M07_AXI_awvalid"), M07_AXI_awready("M07_AXI_awready"), M07_AXI_wid("M07_AXI_wid"), M07_AXI_wdata("M07_AXI_wdata"), M07_AXI_wstrb("M07_AXI_wstrb"), M07_AXI_wlast("M07_AXI_wlast"), M07_AXI_wuser("M07_AXI_wuser"), M07_AXI_wvalid("M07_AXI_wvalid"), M07_AXI_wready("M07_AXI_wready"), M07_AXI_bid("M07_AXI_bid"), M07_AXI_bresp("M07_AXI_bresp"), M07_AXI_buser("M07_AXI_buser"), M07_AXI_bvalid("M07_AXI_bvalid"), M07_AXI_bready("M07_AXI_bready"), M07_AXI_arid("M07_AXI_arid"), M07_AXI_araddr("M07_AXI_araddr"), M07_AXI_arlen("M07_AXI_arlen"), M07_AXI_arsize("M07_AXI_arsize"), M07_AXI_arburst("M07_AXI_arburst"), M07_AXI_arlock("M07_AXI_arlock"), M07_AXI_arcache("M07_AXI_arcache"), M07_AXI_arprot("M07_AXI_arprot"), M07_AXI_arregion("M07_AXI_arregion"), M07_AXI_arqos("M07_AXI_arqos"), M07_AXI_aruser("M07_AXI_aruser"), M07_AXI_arvalid("M07_AXI_arvalid"), M07_AXI_arready("M07_AXI_arready"), M07_AXI_rid("M07_AXI_rid"), M07_AXI_rdata("M07_AXI_rdata"), M07_AXI_rresp("M07_AXI_rresp"), M07_AXI_rlast("M07_AXI_rlast"), M07_AXI_ruser("M07_AXI_ruser"), M07_AXI_rvalid("M07_AXI_rvalid"), M07_AXI_rready("M07_AXI_rready"), M08_AXI_awid("M08_AXI_awid"), M08_AXI_awaddr("M08_AXI_awaddr"), M08_AXI_awlen("M08_AXI_awlen"), M08_AXI_awsize("M08_AXI_awsize"), M08_AXI_awburst("M08_AXI_awburst"), M08_AXI_awlock("M08_AXI_awlock"), M08_AXI_awcache("M08_AXI_awcache"), M08_AXI_awprot("M08_AXI_awprot"), M08_AXI_awregion("M08_AXI_awregion"), M08_AXI_awqos("M08_AXI_awqos"), M08_AXI_awuser("M08_AXI_awuser"), M08_AXI_awvalid("M08_AXI_awvalid"), M08_AXI_awready("M08_AXI_awready"), M08_AXI_wid("M08_AXI_wid"), M08_AXI_wdata("M08_AXI_wdata"), M08_AXI_wstrb("M08_AXI_wstrb"), M08_AXI_wlast("M08_AXI_wlast"), M08_AXI_wuser("M08_AXI_wuser"), M08_AXI_wvalid("M08_AXI_wvalid"), M08_AXI_wready("M08_AXI_wready"), M08_AXI_bid("M08_AXI_bid"), M08_AXI_bresp("M08_AXI_bresp"), M08_AXI_buser("M08_AXI_buser"), M08_AXI_bvalid("M08_AXI_bvalid"), M08_AXI_bready("M08_AXI_bready"), M08_AXI_arid("M08_AXI_arid"), M08_AXI_araddr("M08_AXI_araddr"), M08_AXI_arlen("M08_AXI_arlen"), M08_AXI_arsize("M08_AXI_arsize"), M08_AXI_arburst("M08_AXI_arburst"), M08_AXI_arlock("M08_AXI_arlock"), M08_AXI_arcache("M08_AXI_arcache"), M08_AXI_arprot("M08_AXI_arprot"), M08_AXI_arregion("M08_AXI_arregion"), M08_AXI_arqos("M08_AXI_arqos"), M08_AXI_aruser("M08_AXI_aruser"), M08_AXI_arvalid("M08_AXI_arvalid"), M08_AXI_arready("M08_AXI_arready"), M08_AXI_rid("M08_AXI_rid"), M08_AXI_rdata("M08_AXI_rdata"), M08_AXI_rresp("M08_AXI_rresp"), M08_AXI_rlast("M08_AXI_rlast"), M08_AXI_ruser("M08_AXI_ruser"), M08_AXI_rvalid("M08_AXI_rvalid"), M08_AXI_rready("M08_AXI_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlen_converter = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlen_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_M02_AXI_transactor = NULL;
  mp_M03_AXI_transactor = NULL;
  mp_M04_AXI_transactor = NULL;
  mp_M05_AXI_transactor = NULL;
  mp_M05_AXI_awid_converter = NULL;
  mp_M05_AXI_awaddr_converter = NULL;
  mp_M05_AXI_awlen_converter = NULL;
  mp_M05_AXI_awuser_converter = NULL;
  mp_M05_AXI_awvalid_converter = NULL;
  mp_M05_AXI_awready_converter = NULL;
  mp_M05_AXI_wdata_converter = NULL;
  mp_M05_AXI_wstrb_converter = NULL;
  mp_M05_AXI_wlast_converter = NULL;
  mp_M05_AXI_wuser_converter = NULL;
  mp_M05_AXI_wvalid_converter = NULL;
  mp_M05_AXI_wready_converter = NULL;
  mp_M05_AXI_bid_converter = NULL;
  mp_M05_AXI_buser_converter = NULL;
  mp_M05_AXI_bvalid_converter = NULL;
  mp_M05_AXI_bready_converter = NULL;
  mp_M05_AXI_arid_converter = NULL;
  mp_M05_AXI_araddr_converter = NULL;
  mp_M05_AXI_arlen_converter = NULL;
  mp_M05_AXI_aruser_converter = NULL;
  mp_M05_AXI_arvalid_converter = NULL;
  mp_M05_AXI_arready_converter = NULL;
  mp_M05_AXI_rid_converter = NULL;
  mp_M05_AXI_rdata_converter = NULL;
  mp_M05_AXI_rlast_converter = NULL;
  mp_M05_AXI_ruser_converter = NULL;
  mp_M05_AXI_rvalid_converter = NULL;
  mp_M05_AXI_rready_converter = NULL;
  mp_M06_AXI_transactor = NULL;
  mp_M06_AXI_awid_converter = NULL;
  mp_M06_AXI_awaddr_converter = NULL;
  mp_M06_AXI_awlen_converter = NULL;
  mp_M06_AXI_awuser_converter = NULL;
  mp_M06_AXI_awvalid_converter = NULL;
  mp_M06_AXI_awready_converter = NULL;
  mp_M06_AXI_wdata_converter = NULL;
  mp_M06_AXI_wstrb_converter = NULL;
  mp_M06_AXI_wlast_converter = NULL;
  mp_M06_AXI_wuser_converter = NULL;
  mp_M06_AXI_wvalid_converter = NULL;
  mp_M06_AXI_wready_converter = NULL;
  mp_M06_AXI_bid_converter = NULL;
  mp_M06_AXI_buser_converter = NULL;
  mp_M06_AXI_bvalid_converter = NULL;
  mp_M06_AXI_bready_converter = NULL;
  mp_M06_AXI_arid_converter = NULL;
  mp_M06_AXI_araddr_converter = NULL;
  mp_M06_AXI_arlen_converter = NULL;
  mp_M06_AXI_aruser_converter = NULL;
  mp_M06_AXI_arvalid_converter = NULL;
  mp_M06_AXI_arready_converter = NULL;
  mp_M06_AXI_rid_converter = NULL;
  mp_M06_AXI_rdata_converter = NULL;
  mp_M06_AXI_rlast_converter = NULL;
  mp_M06_AXI_ruser_converter = NULL;
  mp_M06_AXI_rvalid_converter = NULL;
  mp_M06_AXI_rready_converter = NULL;
  mp_M07_AXI_transactor = NULL;
  mp_M07_AXI_awid_converter = NULL;
  mp_M07_AXI_awaddr_converter = NULL;
  mp_M07_AXI_awlen_converter = NULL;
  mp_M07_AXI_awuser_converter = NULL;
  mp_M07_AXI_awvalid_converter = NULL;
  mp_M07_AXI_awready_converter = NULL;
  mp_M07_AXI_wdata_converter = NULL;
  mp_M07_AXI_wstrb_converter = NULL;
  mp_M07_AXI_wlast_converter = NULL;
  mp_M07_AXI_wuser_converter = NULL;
  mp_M07_AXI_wvalid_converter = NULL;
  mp_M07_AXI_wready_converter = NULL;
  mp_M07_AXI_bid_converter = NULL;
  mp_M07_AXI_buser_converter = NULL;
  mp_M07_AXI_bvalid_converter = NULL;
  mp_M07_AXI_bready_converter = NULL;
  mp_M07_AXI_arid_converter = NULL;
  mp_M07_AXI_araddr_converter = NULL;
  mp_M07_AXI_arlen_converter = NULL;
  mp_M07_AXI_aruser_converter = NULL;
  mp_M07_AXI_arvalid_converter = NULL;
  mp_M07_AXI_arready_converter = NULL;
  mp_M07_AXI_rid_converter = NULL;
  mp_M07_AXI_rdata_converter = NULL;
  mp_M07_AXI_rlast_converter = NULL;
  mp_M07_AXI_ruser_converter = NULL;
  mp_M07_AXI_rvalid_converter = NULL;
  mp_M07_AXI_rready_converter = NULL;
  mp_M08_AXI_transactor = NULL;
  mp_M08_AXI_awid_converter = NULL;
  mp_M08_AXI_awaddr_converter = NULL;
  mp_M08_AXI_awlen_converter = NULL;
  mp_M08_AXI_awuser_converter = NULL;
  mp_M08_AXI_awvalid_converter = NULL;
  mp_M08_AXI_awready_converter = NULL;
  mp_M08_AXI_wdata_converter = NULL;
  mp_M08_AXI_wstrb_converter = NULL;
  mp_M08_AXI_wlast_converter = NULL;
  mp_M08_AXI_wuser_converter = NULL;
  mp_M08_AXI_wvalid_converter = NULL;
  mp_M08_AXI_wready_converter = NULL;
  mp_M08_AXI_bid_converter = NULL;
  mp_M08_AXI_buser_converter = NULL;
  mp_M08_AXI_bvalid_converter = NULL;
  mp_M08_AXI_bready_converter = NULL;
  mp_M08_AXI_arid_converter = NULL;
  mp_M08_AXI_araddr_converter = NULL;
  mp_M08_AXI_arlen_converter = NULL;
  mp_M08_AXI_aruser_converter = NULL;
  mp_M08_AXI_arvalid_converter = NULL;
  mp_M08_AXI_arready_converter = NULL;
  mp_M08_AXI_rid_converter = NULL;
  mp_M08_AXI_rdata_converter = NULL;
  mp_M08_AXI_rlast_converter = NULL;
  mp_M08_AXI_ruser_converter = NULL;
  mp_M08_AXI_rvalid_converter = NULL;
  mp_M08_AXI_rready_converter = NULL;

  // initialize socket stubs

}

void design_1_smartconnect_1_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI3");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWID(S00_AXI_awid);
    mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
    mp_S00_AXI_awlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_awlen_converter");
    mp_S00_AXI_awlen_converter->vector_in(S00_AXI_awlen);
    mp_S00_AXI_awlen_converter->vector_out(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWLEN(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
    mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
    mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_awlock_converter");
    mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
    mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
    mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
    mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
    mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
    mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
    mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
    mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
    mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
    mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
    mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
    mp_S00_AXI_transactor->BID(S00_AXI_bid);
    mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
    mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
    mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
    mp_S00_AXI_transactor->ARID(S00_AXI_arid);
    mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
    mp_S00_AXI_arlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_arlen_converter");
    mp_S00_AXI_arlen_converter->vector_in(S00_AXI_arlen);
    mp_S00_AXI_arlen_converter->vector_out(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARLEN(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
    mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
    mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_arlock_converter");
    mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
    mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
    mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
    mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
    mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
    mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
    mp_S00_AXI_transactor->RID(S00_AXI_rid);
    mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
    mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
    mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
    mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
    mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "9");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,9,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
    mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
    mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
    mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
    mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
    mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
    mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
    mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
    mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
    mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
    mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
    mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
    mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
    mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
    mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
    mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
    mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
    mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
    mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXI' transactor parameters
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "6");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,6,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);

    // M01_AXI' transactor ports

    mp_M01_AXI_transactor->AWADDR(M01_AXI_awaddr);
    mp_M01_AXI_transactor->AWPROT(M01_AXI_awprot);
    mp_M01_AXI_transactor->AWVALID(M01_AXI_awvalid);
    mp_M01_AXI_transactor->AWREADY(M01_AXI_awready);
    mp_M01_AXI_transactor->WDATA(M01_AXI_wdata);
    mp_M01_AXI_transactor->WSTRB(M01_AXI_wstrb);
    mp_M01_AXI_transactor->WVALID(M01_AXI_wvalid);
    mp_M01_AXI_transactor->WREADY(M01_AXI_wready);
    mp_M01_AXI_transactor->BRESP(M01_AXI_bresp);
    mp_M01_AXI_transactor->BVALID(M01_AXI_bvalid);
    mp_M01_AXI_transactor->BREADY(M01_AXI_bready);
    mp_M01_AXI_transactor->ARADDR(M01_AXI_araddr);
    mp_M01_AXI_transactor->ARPROT(M01_AXI_arprot);
    mp_M01_AXI_transactor->ARVALID(M01_AXI_arvalid);
    mp_M01_AXI_transactor->ARREADY(M01_AXI_arready);
    mp_M01_AXI_transactor->RDATA(M01_AXI_rdata);
    mp_M01_AXI_transactor->RRESP(M01_AXI_rresp);
    mp_M01_AXI_transactor->RVALID(M01_AXI_rvalid);
    mp_M01_AXI_transactor->RREADY(M01_AXI_rready);
    mp_M01_AXI_transactor->CLK(aclk);
    mp_M01_AXI_transactor->RST(aresetn);

    // M01_AXI' transactor sockets

    mp_impl->M01_AXI_tlm_aximm_read_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->M01_AXI_tlm_aximm_write_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M02_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M02_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M02_AXI' transactor parameters
    xsc::common_cpp::properties M02_AXI_transactor_param_props;
    M02_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M02_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M02_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ADDR_WIDTH", "9");
    M02_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M02_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M02_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M02_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M02_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M02_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M02_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M02_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M02_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M02_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M02_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M02_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M02_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M02_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M02_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,9,1,1,1,1,1,1>("M02_AXI_transactor", M02_AXI_transactor_param_props);

    // M02_AXI' transactor ports

    mp_M02_AXI_transactor->AWADDR(M02_AXI_awaddr);
    mp_M02_AXI_transactor->AWPROT(M02_AXI_awprot);
    mp_M02_AXI_transactor->AWVALID(M02_AXI_awvalid);
    mp_M02_AXI_transactor->AWREADY(M02_AXI_awready);
    mp_M02_AXI_transactor->WDATA(M02_AXI_wdata);
    mp_M02_AXI_transactor->WSTRB(M02_AXI_wstrb);
    mp_M02_AXI_transactor->WVALID(M02_AXI_wvalid);
    mp_M02_AXI_transactor->WREADY(M02_AXI_wready);
    mp_M02_AXI_transactor->BRESP(M02_AXI_bresp);
    mp_M02_AXI_transactor->BVALID(M02_AXI_bvalid);
    mp_M02_AXI_transactor->BREADY(M02_AXI_bready);
    mp_M02_AXI_transactor->ARADDR(M02_AXI_araddr);
    mp_M02_AXI_transactor->ARPROT(M02_AXI_arprot);
    mp_M02_AXI_transactor->ARVALID(M02_AXI_arvalid);
    mp_M02_AXI_transactor->ARREADY(M02_AXI_arready);
    mp_M02_AXI_transactor->RDATA(M02_AXI_rdata);
    mp_M02_AXI_transactor->RRESP(M02_AXI_rresp);
    mp_M02_AXI_transactor->RVALID(M02_AXI_rvalid);
    mp_M02_AXI_transactor->RREADY(M02_AXI_rready);
    mp_M02_AXI_transactor->CLK(aclk);
    mp_M02_AXI_transactor->RST(aresetn);

    // M02_AXI' transactor sockets

    mp_impl->M02_AXI_tlm_aximm_read_socket->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_impl->M02_AXI_tlm_aximm_write_socket->bind(*(mp_M02_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M03_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M03_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M03_AXI' transactor parameters
    xsc::common_cpp::properties M03_AXI_transactor_param_props;
    M03_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M03_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M03_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ADDR_WIDTH", "8");
    M03_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M03_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M03_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M03_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M03_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M03_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M03_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M03_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M03_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M03_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M03_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M03_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M03_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M03_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M03_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,8,1,1,1,1,1,1>("M03_AXI_transactor", M03_AXI_transactor_param_props);

    // M03_AXI' transactor ports

    mp_M03_AXI_transactor->AWADDR(M03_AXI_awaddr);
    mp_M03_AXI_transactor->AWPROT(M03_AXI_awprot);
    mp_M03_AXI_transactor->AWVALID(M03_AXI_awvalid);
    mp_M03_AXI_transactor->AWREADY(M03_AXI_awready);
    mp_M03_AXI_transactor->WDATA(M03_AXI_wdata);
    mp_M03_AXI_transactor->WSTRB(M03_AXI_wstrb);
    mp_M03_AXI_transactor->WVALID(M03_AXI_wvalid);
    mp_M03_AXI_transactor->WREADY(M03_AXI_wready);
    mp_M03_AXI_transactor->BRESP(M03_AXI_bresp);
    mp_M03_AXI_transactor->BVALID(M03_AXI_bvalid);
    mp_M03_AXI_transactor->BREADY(M03_AXI_bready);
    mp_M03_AXI_transactor->ARADDR(M03_AXI_araddr);
    mp_M03_AXI_transactor->ARPROT(M03_AXI_arprot);
    mp_M03_AXI_transactor->ARVALID(M03_AXI_arvalid);
    mp_M03_AXI_transactor->ARREADY(M03_AXI_arready);
    mp_M03_AXI_transactor->RDATA(M03_AXI_rdata);
    mp_M03_AXI_transactor->RRESP(M03_AXI_rresp);
    mp_M03_AXI_transactor->RVALID(M03_AXI_rvalid);
    mp_M03_AXI_transactor->RREADY(M03_AXI_rready);
    mp_M03_AXI_transactor->CLK(aclk);
    mp_M03_AXI_transactor->RST(aresetn);

    // M03_AXI' transactor sockets

    mp_impl->M03_AXI_tlm_aximm_read_socket->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_impl->M03_AXI_tlm_aximm_write_socket->bind(*(mp_M03_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M04_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M04_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M04_AXI' transactor parameters
    xsc::common_cpp::properties M04_AXI_transactor_param_props;
    M04_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M04_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M04_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ADDR_WIDTH", "7");
    M04_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M04_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M04_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M04_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M04_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M04_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M04_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M04_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M04_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M04_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M04_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M04_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M04_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M04_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M04_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,7,1,1,1,1,1,1>("M04_AXI_transactor", M04_AXI_transactor_param_props);

    // M04_AXI' transactor ports

    mp_M04_AXI_transactor->AWADDR(M04_AXI_awaddr);
    mp_M04_AXI_transactor->AWPROT(M04_AXI_awprot);
    mp_M04_AXI_transactor->AWVALID(M04_AXI_awvalid);
    mp_M04_AXI_transactor->AWREADY(M04_AXI_awready);
    mp_M04_AXI_transactor->WDATA(M04_AXI_wdata);
    mp_M04_AXI_transactor->WSTRB(M04_AXI_wstrb);
    mp_M04_AXI_transactor->WVALID(M04_AXI_wvalid);
    mp_M04_AXI_transactor->WREADY(M04_AXI_wready);
    mp_M04_AXI_transactor->BRESP(M04_AXI_bresp);
    mp_M04_AXI_transactor->BVALID(M04_AXI_bvalid);
    mp_M04_AXI_transactor->BREADY(M04_AXI_bready);
    mp_M04_AXI_transactor->ARADDR(M04_AXI_araddr);
    mp_M04_AXI_transactor->ARPROT(M04_AXI_arprot);
    mp_M04_AXI_transactor->ARVALID(M04_AXI_arvalid);
    mp_M04_AXI_transactor->ARREADY(M04_AXI_arready);
    mp_M04_AXI_transactor->RDATA(M04_AXI_rdata);
    mp_M04_AXI_transactor->RRESP(M04_AXI_rresp);
    mp_M04_AXI_transactor->RVALID(M04_AXI_rvalid);
    mp_M04_AXI_transactor->RREADY(M04_AXI_rready);
    mp_M04_AXI_transactor->CLK(aclk);
    mp_M04_AXI_transactor->RST(aresetn);

    // M04_AXI' transactor sockets

    mp_impl->M04_AXI_tlm_aximm_read_socket->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_impl->M04_AXI_tlm_aximm_write_socket->bind(*(mp_M04_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M05_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M05_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M05_AXI' transactor parameters
    xsc::common_cpp::properties M05_AXI_transactor_param_props;
    M05_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M05_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M05_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M05_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M05_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M05_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M05_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M05_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M05_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M05_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M05_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M05_AXI_transactor_param_props.addString("PROTOCOL", "");
    M05_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M05_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M05_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M05_AXI_transactor", M05_AXI_transactor_param_props);

    // M05_AXI' transactor ports

    mp_M05_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awid_converter");
    mp_M05_AXI_awid_converter->vector_in(m_M05_AXI_awid_converter_signal);
    mp_M05_AXI_awid_converter->scalar_out(M05_AXI_awid);
    mp_M05_AXI_transactor->AWID(m_M05_AXI_awid_converter_signal);
    mp_M05_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_awaddr_converter");
    mp_M05_AXI_awaddr_converter->vector_in(m_M05_AXI_awaddr_converter_signal);
    mp_M05_AXI_awaddr_converter->scalar_out(M05_AXI_awaddr);
    mp_M05_AXI_transactor->AWADDR(m_M05_AXI_awaddr_converter_signal);
    mp_M05_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M05_AXI_awlen_converter");
    mp_M05_AXI_awlen_converter->vector_in(m_M05_AXI_awlen_converter_signal);
    mp_M05_AXI_awlen_converter->scalar_out(M05_AXI_awlen);
    mp_M05_AXI_transactor->AWLEN(m_M05_AXI_awlen_converter_signal);
    mp_M05_AXI_transactor->AWSIZE(M05_AXI_awsize);
    mp_M05_AXI_transactor->AWBURST(M05_AXI_awburst);
    mp_M05_AXI_transactor->AWLOCK(M05_AXI_awlock);
    mp_M05_AXI_transactor->AWCACHE(M05_AXI_awcache);
    mp_M05_AXI_transactor->AWPROT(M05_AXI_awprot);
    mp_M05_AXI_transactor->AWREGION(M05_AXI_awregion);
    mp_M05_AXI_transactor->AWQOS(M05_AXI_awqos);
    mp_M05_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awuser_converter");
    mp_M05_AXI_awuser_converter->vector_in(m_M05_AXI_awuser_converter_signal);
    mp_M05_AXI_awuser_converter->scalar_out(M05_AXI_awuser);
    mp_M05_AXI_transactor->AWUSER(m_M05_AXI_awuser_converter_signal);
    mp_M05_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_awvalid_converter");
    mp_M05_AXI_awvalid_converter->scalar_in(m_M05_AXI_awvalid_converter_signal);
    mp_M05_AXI_awvalid_converter->vector_out(M05_AXI_awvalid);
    mp_M05_AXI_transactor->AWVALID(m_M05_AXI_awvalid_converter_signal);
    mp_M05_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awready_converter");
    mp_M05_AXI_awready_converter->vector_in(M05_AXI_awready);
    mp_M05_AXI_awready_converter->scalar_out(m_M05_AXI_awready_converter_signal);
    mp_M05_AXI_transactor->AWREADY(m_M05_AXI_awready_converter_signal);
    mp_M05_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_wdata_converter");
    mp_M05_AXI_wdata_converter->vector_in(m_M05_AXI_wdata_converter_signal);
    mp_M05_AXI_wdata_converter->scalar_out(M05_AXI_wdata);
    mp_M05_AXI_transactor->WDATA(m_M05_AXI_wdata_converter_signal);
    mp_M05_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M05_AXI_wstrb_converter");
    mp_M05_AXI_wstrb_converter->vector_in(m_M05_AXI_wstrb_converter_signal);
    mp_M05_AXI_wstrb_converter->scalar_out(M05_AXI_wstrb);
    mp_M05_AXI_transactor->WSTRB(m_M05_AXI_wstrb_converter_signal);
    mp_M05_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_wlast_converter");
    mp_M05_AXI_wlast_converter->scalar_in(m_M05_AXI_wlast_converter_signal);
    mp_M05_AXI_wlast_converter->vector_out(M05_AXI_wlast);
    mp_M05_AXI_transactor->WLAST(m_M05_AXI_wlast_converter_signal);
    mp_M05_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_wuser_converter");
    mp_M05_AXI_wuser_converter->vector_in(m_M05_AXI_wuser_converter_signal);
    mp_M05_AXI_wuser_converter->scalar_out(M05_AXI_wuser);
    mp_M05_AXI_transactor->WUSER(m_M05_AXI_wuser_converter_signal);
    mp_M05_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_wvalid_converter");
    mp_M05_AXI_wvalid_converter->scalar_in(m_M05_AXI_wvalid_converter_signal);
    mp_M05_AXI_wvalid_converter->vector_out(M05_AXI_wvalid);
    mp_M05_AXI_transactor->WVALID(m_M05_AXI_wvalid_converter_signal);
    mp_M05_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_wready_converter");
    mp_M05_AXI_wready_converter->vector_in(M05_AXI_wready);
    mp_M05_AXI_wready_converter->scalar_out(m_M05_AXI_wready_converter_signal);
    mp_M05_AXI_transactor->WREADY(m_M05_AXI_wready_converter_signal);
    mp_M05_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_bid_converter");
    mp_M05_AXI_bid_converter->scalar_in(M05_AXI_bid);
    mp_M05_AXI_bid_converter->vector_out(m_M05_AXI_bid_converter_signal);
    mp_M05_AXI_transactor->BID(m_M05_AXI_bid_converter_signal);
    mp_M05_AXI_transactor->BRESP(M05_AXI_bresp);
    mp_M05_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_buser_converter");
    mp_M05_AXI_buser_converter->scalar_in(M05_AXI_buser);
    mp_M05_AXI_buser_converter->vector_out(m_M05_AXI_buser_converter_signal);
    mp_M05_AXI_transactor->BUSER(m_M05_AXI_buser_converter_signal);
    mp_M05_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_bvalid_converter");
    mp_M05_AXI_bvalid_converter->vector_in(M05_AXI_bvalid);
    mp_M05_AXI_bvalid_converter->scalar_out(m_M05_AXI_bvalid_converter_signal);
    mp_M05_AXI_transactor->BVALID(m_M05_AXI_bvalid_converter_signal);
    mp_M05_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_bready_converter");
    mp_M05_AXI_bready_converter->scalar_in(m_M05_AXI_bready_converter_signal);
    mp_M05_AXI_bready_converter->vector_out(M05_AXI_bready);
    mp_M05_AXI_transactor->BREADY(m_M05_AXI_bready_converter_signal);
    mp_M05_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_arid_converter");
    mp_M05_AXI_arid_converter->vector_in(m_M05_AXI_arid_converter_signal);
    mp_M05_AXI_arid_converter->scalar_out(M05_AXI_arid);
    mp_M05_AXI_transactor->ARID(m_M05_AXI_arid_converter_signal);
    mp_M05_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_araddr_converter");
    mp_M05_AXI_araddr_converter->vector_in(m_M05_AXI_araddr_converter_signal);
    mp_M05_AXI_araddr_converter->scalar_out(M05_AXI_araddr);
    mp_M05_AXI_transactor->ARADDR(m_M05_AXI_araddr_converter_signal);
    mp_M05_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M05_AXI_arlen_converter");
    mp_M05_AXI_arlen_converter->vector_in(m_M05_AXI_arlen_converter_signal);
    mp_M05_AXI_arlen_converter->scalar_out(M05_AXI_arlen);
    mp_M05_AXI_transactor->ARLEN(m_M05_AXI_arlen_converter_signal);
    mp_M05_AXI_transactor->ARSIZE(M05_AXI_arsize);
    mp_M05_AXI_transactor->ARBURST(M05_AXI_arburst);
    mp_M05_AXI_transactor->ARLOCK(M05_AXI_arlock);
    mp_M05_AXI_transactor->ARCACHE(M05_AXI_arcache);
    mp_M05_AXI_transactor->ARPROT(M05_AXI_arprot);
    mp_M05_AXI_transactor->ARREGION(M05_AXI_arregion);
    mp_M05_AXI_transactor->ARQOS(M05_AXI_arqos);
    mp_M05_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_aruser_converter");
    mp_M05_AXI_aruser_converter->vector_in(m_M05_AXI_aruser_converter_signal);
    mp_M05_AXI_aruser_converter->scalar_out(M05_AXI_aruser);
    mp_M05_AXI_transactor->ARUSER(m_M05_AXI_aruser_converter_signal);
    mp_M05_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_arvalid_converter");
    mp_M05_AXI_arvalid_converter->scalar_in(m_M05_AXI_arvalid_converter_signal);
    mp_M05_AXI_arvalid_converter->vector_out(M05_AXI_arvalid);
    mp_M05_AXI_transactor->ARVALID(m_M05_AXI_arvalid_converter_signal);
    mp_M05_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_arready_converter");
    mp_M05_AXI_arready_converter->vector_in(M05_AXI_arready);
    mp_M05_AXI_arready_converter->scalar_out(m_M05_AXI_arready_converter_signal);
    mp_M05_AXI_transactor->ARREADY(m_M05_AXI_arready_converter_signal);
    mp_M05_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_rid_converter");
    mp_M05_AXI_rid_converter->scalar_in(M05_AXI_rid);
    mp_M05_AXI_rid_converter->vector_out(m_M05_AXI_rid_converter_signal);
    mp_M05_AXI_transactor->RID(m_M05_AXI_rid_converter_signal);
    mp_M05_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M05_AXI_rdata_converter");
    mp_M05_AXI_rdata_converter->scalar_in(M05_AXI_rdata);
    mp_M05_AXI_rdata_converter->vector_out(m_M05_AXI_rdata_converter_signal);
    mp_M05_AXI_transactor->RDATA(m_M05_AXI_rdata_converter_signal);
    mp_M05_AXI_transactor->RRESP(M05_AXI_rresp);
    mp_M05_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_rlast_converter");
    mp_M05_AXI_rlast_converter->vector_in(M05_AXI_rlast);
    mp_M05_AXI_rlast_converter->scalar_out(m_M05_AXI_rlast_converter_signal);
    mp_M05_AXI_transactor->RLAST(m_M05_AXI_rlast_converter_signal);
    mp_M05_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_ruser_converter");
    mp_M05_AXI_ruser_converter->scalar_in(M05_AXI_ruser);
    mp_M05_AXI_ruser_converter->vector_out(m_M05_AXI_ruser_converter_signal);
    mp_M05_AXI_transactor->RUSER(m_M05_AXI_ruser_converter_signal);
    mp_M05_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_rvalid_converter");
    mp_M05_AXI_rvalid_converter->vector_in(M05_AXI_rvalid);
    mp_M05_AXI_rvalid_converter->scalar_out(m_M05_AXI_rvalid_converter_signal);
    mp_M05_AXI_transactor->RVALID(m_M05_AXI_rvalid_converter_signal);
    mp_M05_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_rready_converter");
    mp_M05_AXI_rready_converter->scalar_in(m_M05_AXI_rready_converter_signal);
    mp_M05_AXI_rready_converter->vector_out(M05_AXI_rready);
    mp_M05_AXI_transactor->RREADY(m_M05_AXI_rready_converter_signal);
    mp_M05_AXI_transactor->CLK(aclk);
    mp_M05_AXI_transactor->RST(aresetn);

    // M05_AXI' transactor sockets

    mp_impl->M05_AXI_tlm_aximm_read_socket->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_impl->M05_AXI_tlm_aximm_write_socket->bind(*(mp_M05_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M06_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M06_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M06_AXI' transactor parameters
    xsc::common_cpp::properties M06_AXI_transactor_param_props;
    M06_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M06_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M06_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M06_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M06_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M06_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M06_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M06_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M06_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M06_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M06_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M06_AXI_transactor_param_props.addString("PROTOCOL", "");
    M06_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M06_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M06_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M06_AXI_transactor", M06_AXI_transactor_param_props);

    // M06_AXI' transactor ports

    mp_M06_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awid_converter");
    mp_M06_AXI_awid_converter->vector_in(m_M06_AXI_awid_converter_signal);
    mp_M06_AXI_awid_converter->scalar_out(M06_AXI_awid);
    mp_M06_AXI_transactor->AWID(m_M06_AXI_awid_converter_signal);
    mp_M06_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_awaddr_converter");
    mp_M06_AXI_awaddr_converter->vector_in(m_M06_AXI_awaddr_converter_signal);
    mp_M06_AXI_awaddr_converter->scalar_out(M06_AXI_awaddr);
    mp_M06_AXI_transactor->AWADDR(m_M06_AXI_awaddr_converter_signal);
    mp_M06_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M06_AXI_awlen_converter");
    mp_M06_AXI_awlen_converter->vector_in(m_M06_AXI_awlen_converter_signal);
    mp_M06_AXI_awlen_converter->scalar_out(M06_AXI_awlen);
    mp_M06_AXI_transactor->AWLEN(m_M06_AXI_awlen_converter_signal);
    mp_M06_AXI_transactor->AWSIZE(M06_AXI_awsize);
    mp_M06_AXI_transactor->AWBURST(M06_AXI_awburst);
    mp_M06_AXI_transactor->AWLOCK(M06_AXI_awlock);
    mp_M06_AXI_transactor->AWCACHE(M06_AXI_awcache);
    mp_M06_AXI_transactor->AWPROT(M06_AXI_awprot);
    mp_M06_AXI_transactor->AWREGION(M06_AXI_awregion);
    mp_M06_AXI_transactor->AWQOS(M06_AXI_awqos);
    mp_M06_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awuser_converter");
    mp_M06_AXI_awuser_converter->vector_in(m_M06_AXI_awuser_converter_signal);
    mp_M06_AXI_awuser_converter->scalar_out(M06_AXI_awuser);
    mp_M06_AXI_transactor->AWUSER(m_M06_AXI_awuser_converter_signal);
    mp_M06_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_awvalid_converter");
    mp_M06_AXI_awvalid_converter->scalar_in(m_M06_AXI_awvalid_converter_signal);
    mp_M06_AXI_awvalid_converter->vector_out(M06_AXI_awvalid);
    mp_M06_AXI_transactor->AWVALID(m_M06_AXI_awvalid_converter_signal);
    mp_M06_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awready_converter");
    mp_M06_AXI_awready_converter->vector_in(M06_AXI_awready);
    mp_M06_AXI_awready_converter->scalar_out(m_M06_AXI_awready_converter_signal);
    mp_M06_AXI_transactor->AWREADY(m_M06_AXI_awready_converter_signal);
    mp_M06_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_wdata_converter");
    mp_M06_AXI_wdata_converter->vector_in(m_M06_AXI_wdata_converter_signal);
    mp_M06_AXI_wdata_converter->scalar_out(M06_AXI_wdata);
    mp_M06_AXI_transactor->WDATA(m_M06_AXI_wdata_converter_signal);
    mp_M06_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M06_AXI_wstrb_converter");
    mp_M06_AXI_wstrb_converter->vector_in(m_M06_AXI_wstrb_converter_signal);
    mp_M06_AXI_wstrb_converter->scalar_out(M06_AXI_wstrb);
    mp_M06_AXI_transactor->WSTRB(m_M06_AXI_wstrb_converter_signal);
    mp_M06_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_wlast_converter");
    mp_M06_AXI_wlast_converter->scalar_in(m_M06_AXI_wlast_converter_signal);
    mp_M06_AXI_wlast_converter->vector_out(M06_AXI_wlast);
    mp_M06_AXI_transactor->WLAST(m_M06_AXI_wlast_converter_signal);
    mp_M06_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_wuser_converter");
    mp_M06_AXI_wuser_converter->vector_in(m_M06_AXI_wuser_converter_signal);
    mp_M06_AXI_wuser_converter->scalar_out(M06_AXI_wuser);
    mp_M06_AXI_transactor->WUSER(m_M06_AXI_wuser_converter_signal);
    mp_M06_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_wvalid_converter");
    mp_M06_AXI_wvalid_converter->scalar_in(m_M06_AXI_wvalid_converter_signal);
    mp_M06_AXI_wvalid_converter->vector_out(M06_AXI_wvalid);
    mp_M06_AXI_transactor->WVALID(m_M06_AXI_wvalid_converter_signal);
    mp_M06_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_wready_converter");
    mp_M06_AXI_wready_converter->vector_in(M06_AXI_wready);
    mp_M06_AXI_wready_converter->scalar_out(m_M06_AXI_wready_converter_signal);
    mp_M06_AXI_transactor->WREADY(m_M06_AXI_wready_converter_signal);
    mp_M06_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_bid_converter");
    mp_M06_AXI_bid_converter->scalar_in(M06_AXI_bid);
    mp_M06_AXI_bid_converter->vector_out(m_M06_AXI_bid_converter_signal);
    mp_M06_AXI_transactor->BID(m_M06_AXI_bid_converter_signal);
    mp_M06_AXI_transactor->BRESP(M06_AXI_bresp);
    mp_M06_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_buser_converter");
    mp_M06_AXI_buser_converter->scalar_in(M06_AXI_buser);
    mp_M06_AXI_buser_converter->vector_out(m_M06_AXI_buser_converter_signal);
    mp_M06_AXI_transactor->BUSER(m_M06_AXI_buser_converter_signal);
    mp_M06_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_bvalid_converter");
    mp_M06_AXI_bvalid_converter->vector_in(M06_AXI_bvalid);
    mp_M06_AXI_bvalid_converter->scalar_out(m_M06_AXI_bvalid_converter_signal);
    mp_M06_AXI_transactor->BVALID(m_M06_AXI_bvalid_converter_signal);
    mp_M06_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_bready_converter");
    mp_M06_AXI_bready_converter->scalar_in(m_M06_AXI_bready_converter_signal);
    mp_M06_AXI_bready_converter->vector_out(M06_AXI_bready);
    mp_M06_AXI_transactor->BREADY(m_M06_AXI_bready_converter_signal);
    mp_M06_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_arid_converter");
    mp_M06_AXI_arid_converter->vector_in(m_M06_AXI_arid_converter_signal);
    mp_M06_AXI_arid_converter->scalar_out(M06_AXI_arid);
    mp_M06_AXI_transactor->ARID(m_M06_AXI_arid_converter_signal);
    mp_M06_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_araddr_converter");
    mp_M06_AXI_araddr_converter->vector_in(m_M06_AXI_araddr_converter_signal);
    mp_M06_AXI_araddr_converter->scalar_out(M06_AXI_araddr);
    mp_M06_AXI_transactor->ARADDR(m_M06_AXI_araddr_converter_signal);
    mp_M06_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M06_AXI_arlen_converter");
    mp_M06_AXI_arlen_converter->vector_in(m_M06_AXI_arlen_converter_signal);
    mp_M06_AXI_arlen_converter->scalar_out(M06_AXI_arlen);
    mp_M06_AXI_transactor->ARLEN(m_M06_AXI_arlen_converter_signal);
    mp_M06_AXI_transactor->ARSIZE(M06_AXI_arsize);
    mp_M06_AXI_transactor->ARBURST(M06_AXI_arburst);
    mp_M06_AXI_transactor->ARLOCK(M06_AXI_arlock);
    mp_M06_AXI_transactor->ARCACHE(M06_AXI_arcache);
    mp_M06_AXI_transactor->ARPROT(M06_AXI_arprot);
    mp_M06_AXI_transactor->ARREGION(M06_AXI_arregion);
    mp_M06_AXI_transactor->ARQOS(M06_AXI_arqos);
    mp_M06_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_aruser_converter");
    mp_M06_AXI_aruser_converter->vector_in(m_M06_AXI_aruser_converter_signal);
    mp_M06_AXI_aruser_converter->scalar_out(M06_AXI_aruser);
    mp_M06_AXI_transactor->ARUSER(m_M06_AXI_aruser_converter_signal);
    mp_M06_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_arvalid_converter");
    mp_M06_AXI_arvalid_converter->scalar_in(m_M06_AXI_arvalid_converter_signal);
    mp_M06_AXI_arvalid_converter->vector_out(M06_AXI_arvalid);
    mp_M06_AXI_transactor->ARVALID(m_M06_AXI_arvalid_converter_signal);
    mp_M06_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_arready_converter");
    mp_M06_AXI_arready_converter->vector_in(M06_AXI_arready);
    mp_M06_AXI_arready_converter->scalar_out(m_M06_AXI_arready_converter_signal);
    mp_M06_AXI_transactor->ARREADY(m_M06_AXI_arready_converter_signal);
    mp_M06_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_rid_converter");
    mp_M06_AXI_rid_converter->scalar_in(M06_AXI_rid);
    mp_M06_AXI_rid_converter->vector_out(m_M06_AXI_rid_converter_signal);
    mp_M06_AXI_transactor->RID(m_M06_AXI_rid_converter_signal);
    mp_M06_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M06_AXI_rdata_converter");
    mp_M06_AXI_rdata_converter->scalar_in(M06_AXI_rdata);
    mp_M06_AXI_rdata_converter->vector_out(m_M06_AXI_rdata_converter_signal);
    mp_M06_AXI_transactor->RDATA(m_M06_AXI_rdata_converter_signal);
    mp_M06_AXI_transactor->RRESP(M06_AXI_rresp);
    mp_M06_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_rlast_converter");
    mp_M06_AXI_rlast_converter->vector_in(M06_AXI_rlast);
    mp_M06_AXI_rlast_converter->scalar_out(m_M06_AXI_rlast_converter_signal);
    mp_M06_AXI_transactor->RLAST(m_M06_AXI_rlast_converter_signal);
    mp_M06_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_ruser_converter");
    mp_M06_AXI_ruser_converter->scalar_in(M06_AXI_ruser);
    mp_M06_AXI_ruser_converter->vector_out(m_M06_AXI_ruser_converter_signal);
    mp_M06_AXI_transactor->RUSER(m_M06_AXI_ruser_converter_signal);
    mp_M06_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_rvalid_converter");
    mp_M06_AXI_rvalid_converter->vector_in(M06_AXI_rvalid);
    mp_M06_AXI_rvalid_converter->scalar_out(m_M06_AXI_rvalid_converter_signal);
    mp_M06_AXI_transactor->RVALID(m_M06_AXI_rvalid_converter_signal);
    mp_M06_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_rready_converter");
    mp_M06_AXI_rready_converter->scalar_in(m_M06_AXI_rready_converter_signal);
    mp_M06_AXI_rready_converter->vector_out(M06_AXI_rready);
    mp_M06_AXI_transactor->RREADY(m_M06_AXI_rready_converter_signal);
    mp_M06_AXI_transactor->CLK(aclk);
    mp_M06_AXI_transactor->RST(aresetn);

    // M06_AXI' transactor sockets

    mp_impl->M06_AXI_tlm_aximm_read_socket->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_impl->M06_AXI_tlm_aximm_write_socket->bind(*(mp_M06_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M07_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M07_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M07_AXI' transactor parameters
    xsc::common_cpp::properties M07_AXI_transactor_param_props;
    M07_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M07_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M07_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M07_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M07_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M07_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M07_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M07_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M07_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M07_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M07_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M07_AXI_transactor_param_props.addString("PROTOCOL", "");
    M07_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M07_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M07_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M07_AXI_transactor", M07_AXI_transactor_param_props);

    // M07_AXI' transactor ports

    mp_M07_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awid_converter");
    mp_M07_AXI_awid_converter->vector_in(m_M07_AXI_awid_converter_signal);
    mp_M07_AXI_awid_converter->scalar_out(M07_AXI_awid);
    mp_M07_AXI_transactor->AWID(m_M07_AXI_awid_converter_signal);
    mp_M07_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_awaddr_converter");
    mp_M07_AXI_awaddr_converter->vector_in(m_M07_AXI_awaddr_converter_signal);
    mp_M07_AXI_awaddr_converter->scalar_out(M07_AXI_awaddr);
    mp_M07_AXI_transactor->AWADDR(m_M07_AXI_awaddr_converter_signal);
    mp_M07_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M07_AXI_awlen_converter");
    mp_M07_AXI_awlen_converter->vector_in(m_M07_AXI_awlen_converter_signal);
    mp_M07_AXI_awlen_converter->scalar_out(M07_AXI_awlen);
    mp_M07_AXI_transactor->AWLEN(m_M07_AXI_awlen_converter_signal);
    mp_M07_AXI_transactor->AWSIZE(M07_AXI_awsize);
    mp_M07_AXI_transactor->AWBURST(M07_AXI_awburst);
    mp_M07_AXI_transactor->AWLOCK(M07_AXI_awlock);
    mp_M07_AXI_transactor->AWCACHE(M07_AXI_awcache);
    mp_M07_AXI_transactor->AWPROT(M07_AXI_awprot);
    mp_M07_AXI_transactor->AWREGION(M07_AXI_awregion);
    mp_M07_AXI_transactor->AWQOS(M07_AXI_awqos);
    mp_M07_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awuser_converter");
    mp_M07_AXI_awuser_converter->vector_in(m_M07_AXI_awuser_converter_signal);
    mp_M07_AXI_awuser_converter->scalar_out(M07_AXI_awuser);
    mp_M07_AXI_transactor->AWUSER(m_M07_AXI_awuser_converter_signal);
    mp_M07_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_awvalid_converter");
    mp_M07_AXI_awvalid_converter->scalar_in(m_M07_AXI_awvalid_converter_signal);
    mp_M07_AXI_awvalid_converter->vector_out(M07_AXI_awvalid);
    mp_M07_AXI_transactor->AWVALID(m_M07_AXI_awvalid_converter_signal);
    mp_M07_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awready_converter");
    mp_M07_AXI_awready_converter->vector_in(M07_AXI_awready);
    mp_M07_AXI_awready_converter->scalar_out(m_M07_AXI_awready_converter_signal);
    mp_M07_AXI_transactor->AWREADY(m_M07_AXI_awready_converter_signal);
    mp_M07_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_wdata_converter");
    mp_M07_AXI_wdata_converter->vector_in(m_M07_AXI_wdata_converter_signal);
    mp_M07_AXI_wdata_converter->scalar_out(M07_AXI_wdata);
    mp_M07_AXI_transactor->WDATA(m_M07_AXI_wdata_converter_signal);
    mp_M07_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M07_AXI_wstrb_converter");
    mp_M07_AXI_wstrb_converter->vector_in(m_M07_AXI_wstrb_converter_signal);
    mp_M07_AXI_wstrb_converter->scalar_out(M07_AXI_wstrb);
    mp_M07_AXI_transactor->WSTRB(m_M07_AXI_wstrb_converter_signal);
    mp_M07_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_wlast_converter");
    mp_M07_AXI_wlast_converter->scalar_in(m_M07_AXI_wlast_converter_signal);
    mp_M07_AXI_wlast_converter->vector_out(M07_AXI_wlast);
    mp_M07_AXI_transactor->WLAST(m_M07_AXI_wlast_converter_signal);
    mp_M07_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_wuser_converter");
    mp_M07_AXI_wuser_converter->vector_in(m_M07_AXI_wuser_converter_signal);
    mp_M07_AXI_wuser_converter->scalar_out(M07_AXI_wuser);
    mp_M07_AXI_transactor->WUSER(m_M07_AXI_wuser_converter_signal);
    mp_M07_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_wvalid_converter");
    mp_M07_AXI_wvalid_converter->scalar_in(m_M07_AXI_wvalid_converter_signal);
    mp_M07_AXI_wvalid_converter->vector_out(M07_AXI_wvalid);
    mp_M07_AXI_transactor->WVALID(m_M07_AXI_wvalid_converter_signal);
    mp_M07_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_wready_converter");
    mp_M07_AXI_wready_converter->vector_in(M07_AXI_wready);
    mp_M07_AXI_wready_converter->scalar_out(m_M07_AXI_wready_converter_signal);
    mp_M07_AXI_transactor->WREADY(m_M07_AXI_wready_converter_signal);
    mp_M07_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_bid_converter");
    mp_M07_AXI_bid_converter->scalar_in(M07_AXI_bid);
    mp_M07_AXI_bid_converter->vector_out(m_M07_AXI_bid_converter_signal);
    mp_M07_AXI_transactor->BID(m_M07_AXI_bid_converter_signal);
    mp_M07_AXI_transactor->BRESP(M07_AXI_bresp);
    mp_M07_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_buser_converter");
    mp_M07_AXI_buser_converter->scalar_in(M07_AXI_buser);
    mp_M07_AXI_buser_converter->vector_out(m_M07_AXI_buser_converter_signal);
    mp_M07_AXI_transactor->BUSER(m_M07_AXI_buser_converter_signal);
    mp_M07_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_bvalid_converter");
    mp_M07_AXI_bvalid_converter->vector_in(M07_AXI_bvalid);
    mp_M07_AXI_bvalid_converter->scalar_out(m_M07_AXI_bvalid_converter_signal);
    mp_M07_AXI_transactor->BVALID(m_M07_AXI_bvalid_converter_signal);
    mp_M07_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_bready_converter");
    mp_M07_AXI_bready_converter->scalar_in(m_M07_AXI_bready_converter_signal);
    mp_M07_AXI_bready_converter->vector_out(M07_AXI_bready);
    mp_M07_AXI_transactor->BREADY(m_M07_AXI_bready_converter_signal);
    mp_M07_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_arid_converter");
    mp_M07_AXI_arid_converter->vector_in(m_M07_AXI_arid_converter_signal);
    mp_M07_AXI_arid_converter->scalar_out(M07_AXI_arid);
    mp_M07_AXI_transactor->ARID(m_M07_AXI_arid_converter_signal);
    mp_M07_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_araddr_converter");
    mp_M07_AXI_araddr_converter->vector_in(m_M07_AXI_araddr_converter_signal);
    mp_M07_AXI_araddr_converter->scalar_out(M07_AXI_araddr);
    mp_M07_AXI_transactor->ARADDR(m_M07_AXI_araddr_converter_signal);
    mp_M07_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M07_AXI_arlen_converter");
    mp_M07_AXI_arlen_converter->vector_in(m_M07_AXI_arlen_converter_signal);
    mp_M07_AXI_arlen_converter->scalar_out(M07_AXI_arlen);
    mp_M07_AXI_transactor->ARLEN(m_M07_AXI_arlen_converter_signal);
    mp_M07_AXI_transactor->ARSIZE(M07_AXI_arsize);
    mp_M07_AXI_transactor->ARBURST(M07_AXI_arburst);
    mp_M07_AXI_transactor->ARLOCK(M07_AXI_arlock);
    mp_M07_AXI_transactor->ARCACHE(M07_AXI_arcache);
    mp_M07_AXI_transactor->ARPROT(M07_AXI_arprot);
    mp_M07_AXI_transactor->ARREGION(M07_AXI_arregion);
    mp_M07_AXI_transactor->ARQOS(M07_AXI_arqos);
    mp_M07_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_aruser_converter");
    mp_M07_AXI_aruser_converter->vector_in(m_M07_AXI_aruser_converter_signal);
    mp_M07_AXI_aruser_converter->scalar_out(M07_AXI_aruser);
    mp_M07_AXI_transactor->ARUSER(m_M07_AXI_aruser_converter_signal);
    mp_M07_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_arvalid_converter");
    mp_M07_AXI_arvalid_converter->scalar_in(m_M07_AXI_arvalid_converter_signal);
    mp_M07_AXI_arvalid_converter->vector_out(M07_AXI_arvalid);
    mp_M07_AXI_transactor->ARVALID(m_M07_AXI_arvalid_converter_signal);
    mp_M07_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_arready_converter");
    mp_M07_AXI_arready_converter->vector_in(M07_AXI_arready);
    mp_M07_AXI_arready_converter->scalar_out(m_M07_AXI_arready_converter_signal);
    mp_M07_AXI_transactor->ARREADY(m_M07_AXI_arready_converter_signal);
    mp_M07_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_rid_converter");
    mp_M07_AXI_rid_converter->scalar_in(M07_AXI_rid);
    mp_M07_AXI_rid_converter->vector_out(m_M07_AXI_rid_converter_signal);
    mp_M07_AXI_transactor->RID(m_M07_AXI_rid_converter_signal);
    mp_M07_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M07_AXI_rdata_converter");
    mp_M07_AXI_rdata_converter->scalar_in(M07_AXI_rdata);
    mp_M07_AXI_rdata_converter->vector_out(m_M07_AXI_rdata_converter_signal);
    mp_M07_AXI_transactor->RDATA(m_M07_AXI_rdata_converter_signal);
    mp_M07_AXI_transactor->RRESP(M07_AXI_rresp);
    mp_M07_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_rlast_converter");
    mp_M07_AXI_rlast_converter->vector_in(M07_AXI_rlast);
    mp_M07_AXI_rlast_converter->scalar_out(m_M07_AXI_rlast_converter_signal);
    mp_M07_AXI_transactor->RLAST(m_M07_AXI_rlast_converter_signal);
    mp_M07_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_ruser_converter");
    mp_M07_AXI_ruser_converter->scalar_in(M07_AXI_ruser);
    mp_M07_AXI_ruser_converter->vector_out(m_M07_AXI_ruser_converter_signal);
    mp_M07_AXI_transactor->RUSER(m_M07_AXI_ruser_converter_signal);
    mp_M07_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_rvalid_converter");
    mp_M07_AXI_rvalid_converter->vector_in(M07_AXI_rvalid);
    mp_M07_AXI_rvalid_converter->scalar_out(m_M07_AXI_rvalid_converter_signal);
    mp_M07_AXI_transactor->RVALID(m_M07_AXI_rvalid_converter_signal);
    mp_M07_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_rready_converter");
    mp_M07_AXI_rready_converter->scalar_in(m_M07_AXI_rready_converter_signal);
    mp_M07_AXI_rready_converter->vector_out(M07_AXI_rready);
    mp_M07_AXI_transactor->RREADY(m_M07_AXI_rready_converter_signal);
    mp_M07_AXI_transactor->CLK(aclk);
    mp_M07_AXI_transactor->RST(aresetn);

    // M07_AXI' transactor sockets

    mp_impl->M07_AXI_tlm_aximm_read_socket->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_impl->M07_AXI_tlm_aximm_write_socket->bind(*(mp_M07_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M08_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M08_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M08_AXI' transactor parameters
    xsc::common_cpp::properties M08_AXI_transactor_param_props;
    M08_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M08_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M08_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M08_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M08_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M08_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M08_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M08_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M08_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M08_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M08_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M08_AXI_transactor_param_props.addString("PROTOCOL", "");
    M08_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M08_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M08_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M08_AXI_transactor", M08_AXI_transactor_param_props);

    // M08_AXI' transactor ports

    mp_M08_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awid_converter");
    mp_M08_AXI_awid_converter->vector_in(m_M08_AXI_awid_converter_signal);
    mp_M08_AXI_awid_converter->scalar_out(M08_AXI_awid);
    mp_M08_AXI_transactor->AWID(m_M08_AXI_awid_converter_signal);
    mp_M08_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_awaddr_converter");
    mp_M08_AXI_awaddr_converter->vector_in(m_M08_AXI_awaddr_converter_signal);
    mp_M08_AXI_awaddr_converter->scalar_out(M08_AXI_awaddr);
    mp_M08_AXI_transactor->AWADDR(m_M08_AXI_awaddr_converter_signal);
    mp_M08_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M08_AXI_awlen_converter");
    mp_M08_AXI_awlen_converter->vector_in(m_M08_AXI_awlen_converter_signal);
    mp_M08_AXI_awlen_converter->scalar_out(M08_AXI_awlen);
    mp_M08_AXI_transactor->AWLEN(m_M08_AXI_awlen_converter_signal);
    mp_M08_AXI_transactor->AWSIZE(M08_AXI_awsize);
    mp_M08_AXI_transactor->AWBURST(M08_AXI_awburst);
    mp_M08_AXI_transactor->AWLOCK(M08_AXI_awlock);
    mp_M08_AXI_transactor->AWCACHE(M08_AXI_awcache);
    mp_M08_AXI_transactor->AWPROT(M08_AXI_awprot);
    mp_M08_AXI_transactor->AWREGION(M08_AXI_awregion);
    mp_M08_AXI_transactor->AWQOS(M08_AXI_awqos);
    mp_M08_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awuser_converter");
    mp_M08_AXI_awuser_converter->vector_in(m_M08_AXI_awuser_converter_signal);
    mp_M08_AXI_awuser_converter->scalar_out(M08_AXI_awuser);
    mp_M08_AXI_transactor->AWUSER(m_M08_AXI_awuser_converter_signal);
    mp_M08_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_awvalid_converter");
    mp_M08_AXI_awvalid_converter->scalar_in(m_M08_AXI_awvalid_converter_signal);
    mp_M08_AXI_awvalid_converter->vector_out(M08_AXI_awvalid);
    mp_M08_AXI_transactor->AWVALID(m_M08_AXI_awvalid_converter_signal);
    mp_M08_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awready_converter");
    mp_M08_AXI_awready_converter->vector_in(M08_AXI_awready);
    mp_M08_AXI_awready_converter->scalar_out(m_M08_AXI_awready_converter_signal);
    mp_M08_AXI_transactor->AWREADY(m_M08_AXI_awready_converter_signal);
    mp_M08_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_wdata_converter");
    mp_M08_AXI_wdata_converter->vector_in(m_M08_AXI_wdata_converter_signal);
    mp_M08_AXI_wdata_converter->scalar_out(M08_AXI_wdata);
    mp_M08_AXI_transactor->WDATA(m_M08_AXI_wdata_converter_signal);
    mp_M08_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M08_AXI_wstrb_converter");
    mp_M08_AXI_wstrb_converter->vector_in(m_M08_AXI_wstrb_converter_signal);
    mp_M08_AXI_wstrb_converter->scalar_out(M08_AXI_wstrb);
    mp_M08_AXI_transactor->WSTRB(m_M08_AXI_wstrb_converter_signal);
    mp_M08_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_wlast_converter");
    mp_M08_AXI_wlast_converter->scalar_in(m_M08_AXI_wlast_converter_signal);
    mp_M08_AXI_wlast_converter->vector_out(M08_AXI_wlast);
    mp_M08_AXI_transactor->WLAST(m_M08_AXI_wlast_converter_signal);
    mp_M08_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_wuser_converter");
    mp_M08_AXI_wuser_converter->vector_in(m_M08_AXI_wuser_converter_signal);
    mp_M08_AXI_wuser_converter->scalar_out(M08_AXI_wuser);
    mp_M08_AXI_transactor->WUSER(m_M08_AXI_wuser_converter_signal);
    mp_M08_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_wvalid_converter");
    mp_M08_AXI_wvalid_converter->scalar_in(m_M08_AXI_wvalid_converter_signal);
    mp_M08_AXI_wvalid_converter->vector_out(M08_AXI_wvalid);
    mp_M08_AXI_transactor->WVALID(m_M08_AXI_wvalid_converter_signal);
    mp_M08_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_wready_converter");
    mp_M08_AXI_wready_converter->vector_in(M08_AXI_wready);
    mp_M08_AXI_wready_converter->scalar_out(m_M08_AXI_wready_converter_signal);
    mp_M08_AXI_transactor->WREADY(m_M08_AXI_wready_converter_signal);
    mp_M08_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_bid_converter");
    mp_M08_AXI_bid_converter->scalar_in(M08_AXI_bid);
    mp_M08_AXI_bid_converter->vector_out(m_M08_AXI_bid_converter_signal);
    mp_M08_AXI_transactor->BID(m_M08_AXI_bid_converter_signal);
    mp_M08_AXI_transactor->BRESP(M08_AXI_bresp);
    mp_M08_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_buser_converter");
    mp_M08_AXI_buser_converter->scalar_in(M08_AXI_buser);
    mp_M08_AXI_buser_converter->vector_out(m_M08_AXI_buser_converter_signal);
    mp_M08_AXI_transactor->BUSER(m_M08_AXI_buser_converter_signal);
    mp_M08_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_bvalid_converter");
    mp_M08_AXI_bvalid_converter->vector_in(M08_AXI_bvalid);
    mp_M08_AXI_bvalid_converter->scalar_out(m_M08_AXI_bvalid_converter_signal);
    mp_M08_AXI_transactor->BVALID(m_M08_AXI_bvalid_converter_signal);
    mp_M08_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_bready_converter");
    mp_M08_AXI_bready_converter->scalar_in(m_M08_AXI_bready_converter_signal);
    mp_M08_AXI_bready_converter->vector_out(M08_AXI_bready);
    mp_M08_AXI_transactor->BREADY(m_M08_AXI_bready_converter_signal);
    mp_M08_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_arid_converter");
    mp_M08_AXI_arid_converter->vector_in(m_M08_AXI_arid_converter_signal);
    mp_M08_AXI_arid_converter->scalar_out(M08_AXI_arid);
    mp_M08_AXI_transactor->ARID(m_M08_AXI_arid_converter_signal);
    mp_M08_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_araddr_converter");
    mp_M08_AXI_araddr_converter->vector_in(m_M08_AXI_araddr_converter_signal);
    mp_M08_AXI_araddr_converter->scalar_out(M08_AXI_araddr);
    mp_M08_AXI_transactor->ARADDR(m_M08_AXI_araddr_converter_signal);
    mp_M08_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M08_AXI_arlen_converter");
    mp_M08_AXI_arlen_converter->vector_in(m_M08_AXI_arlen_converter_signal);
    mp_M08_AXI_arlen_converter->scalar_out(M08_AXI_arlen);
    mp_M08_AXI_transactor->ARLEN(m_M08_AXI_arlen_converter_signal);
    mp_M08_AXI_transactor->ARSIZE(M08_AXI_arsize);
    mp_M08_AXI_transactor->ARBURST(M08_AXI_arburst);
    mp_M08_AXI_transactor->ARLOCK(M08_AXI_arlock);
    mp_M08_AXI_transactor->ARCACHE(M08_AXI_arcache);
    mp_M08_AXI_transactor->ARPROT(M08_AXI_arprot);
    mp_M08_AXI_transactor->ARREGION(M08_AXI_arregion);
    mp_M08_AXI_transactor->ARQOS(M08_AXI_arqos);
    mp_M08_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_aruser_converter");
    mp_M08_AXI_aruser_converter->vector_in(m_M08_AXI_aruser_converter_signal);
    mp_M08_AXI_aruser_converter->scalar_out(M08_AXI_aruser);
    mp_M08_AXI_transactor->ARUSER(m_M08_AXI_aruser_converter_signal);
    mp_M08_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_arvalid_converter");
    mp_M08_AXI_arvalid_converter->scalar_in(m_M08_AXI_arvalid_converter_signal);
    mp_M08_AXI_arvalid_converter->vector_out(M08_AXI_arvalid);
    mp_M08_AXI_transactor->ARVALID(m_M08_AXI_arvalid_converter_signal);
    mp_M08_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_arready_converter");
    mp_M08_AXI_arready_converter->vector_in(M08_AXI_arready);
    mp_M08_AXI_arready_converter->scalar_out(m_M08_AXI_arready_converter_signal);
    mp_M08_AXI_transactor->ARREADY(m_M08_AXI_arready_converter_signal);
    mp_M08_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_rid_converter");
    mp_M08_AXI_rid_converter->scalar_in(M08_AXI_rid);
    mp_M08_AXI_rid_converter->vector_out(m_M08_AXI_rid_converter_signal);
    mp_M08_AXI_transactor->RID(m_M08_AXI_rid_converter_signal);
    mp_M08_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M08_AXI_rdata_converter");
    mp_M08_AXI_rdata_converter->scalar_in(M08_AXI_rdata);
    mp_M08_AXI_rdata_converter->vector_out(m_M08_AXI_rdata_converter_signal);
    mp_M08_AXI_transactor->RDATA(m_M08_AXI_rdata_converter_signal);
    mp_M08_AXI_transactor->RRESP(M08_AXI_rresp);
    mp_M08_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_rlast_converter");
    mp_M08_AXI_rlast_converter->vector_in(M08_AXI_rlast);
    mp_M08_AXI_rlast_converter->scalar_out(m_M08_AXI_rlast_converter_signal);
    mp_M08_AXI_transactor->RLAST(m_M08_AXI_rlast_converter_signal);
    mp_M08_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_ruser_converter");
    mp_M08_AXI_ruser_converter->scalar_in(M08_AXI_ruser);
    mp_M08_AXI_ruser_converter->vector_out(m_M08_AXI_ruser_converter_signal);
    mp_M08_AXI_transactor->RUSER(m_M08_AXI_ruser_converter_signal);
    mp_M08_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_rvalid_converter");
    mp_M08_AXI_rvalid_converter->vector_in(M08_AXI_rvalid);
    mp_M08_AXI_rvalid_converter->scalar_out(m_M08_AXI_rvalid_converter_signal);
    mp_M08_AXI_transactor->RVALID(m_M08_AXI_rvalid_converter_signal);
    mp_M08_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_rready_converter");
    mp_M08_AXI_rready_converter->scalar_in(m_M08_AXI_rready_converter_signal);
    mp_M08_AXI_rready_converter->vector_out(M08_AXI_rready);
    mp_M08_AXI_transactor->RREADY(m_M08_AXI_rready_converter_signal);
    mp_M08_AXI_transactor->CLK(aclk);
    mp_M08_AXI_transactor->RST(aresetn);

    // M08_AXI' transactor sockets

    mp_impl->M08_AXI_tlm_aximm_read_socket->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_impl->M08_AXI_tlm_aximm_write_socket->bind(*(mp_M08_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XM_SYSTEMC




#ifdef RIVIERA
design_1_smartconnect_1_0::design_1_smartconnect_1_0(const sc_core::sc_module_name& nm) : design_1_smartconnect_1_0_sc(nm), aclk("aclk"), aresetn("aresetn"), S00_AXI_awid("S00_AXI_awid"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wid("S00_AXI_wid"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bid("S00_AXI_bid"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_arid("S00_AXI_arid"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rid("S00_AXI_rid"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready"), M01_AXI_awaddr("M01_AXI_awaddr"), M01_AXI_awprot("M01_AXI_awprot"), M01_AXI_awvalid("M01_AXI_awvalid"), M01_AXI_awready("M01_AXI_awready"), M01_AXI_wdata("M01_AXI_wdata"), M01_AXI_wstrb("M01_AXI_wstrb"), M01_AXI_wvalid("M01_AXI_wvalid"), M01_AXI_wready("M01_AXI_wready"), M01_AXI_bresp("M01_AXI_bresp"), M01_AXI_bvalid("M01_AXI_bvalid"), M01_AXI_bready("M01_AXI_bready"), M01_AXI_araddr("M01_AXI_araddr"), M01_AXI_arprot("M01_AXI_arprot"), M01_AXI_arvalid("M01_AXI_arvalid"), M01_AXI_arready("M01_AXI_arready"), M01_AXI_rdata("M01_AXI_rdata"), M01_AXI_rresp("M01_AXI_rresp"), M01_AXI_rvalid("M01_AXI_rvalid"), M01_AXI_rready("M01_AXI_rready"), M02_AXI_awaddr("M02_AXI_awaddr"), M02_AXI_awprot("M02_AXI_awprot"), M02_AXI_awvalid("M02_AXI_awvalid"), M02_AXI_awready("M02_AXI_awready"), M02_AXI_wdata("M02_AXI_wdata"), M02_AXI_wstrb("M02_AXI_wstrb"), M02_AXI_wvalid("M02_AXI_wvalid"), M02_AXI_wready("M02_AXI_wready"), M02_AXI_bresp("M02_AXI_bresp"), M02_AXI_bvalid("M02_AXI_bvalid"), M02_AXI_bready("M02_AXI_bready"), M02_AXI_araddr("M02_AXI_araddr"), M02_AXI_arprot("M02_AXI_arprot"), M02_AXI_arvalid("M02_AXI_arvalid"), M02_AXI_arready("M02_AXI_arready"), M02_AXI_rdata("M02_AXI_rdata"), M02_AXI_rresp("M02_AXI_rresp"), M02_AXI_rvalid("M02_AXI_rvalid"), M02_AXI_rready("M02_AXI_rready"), M03_AXI_awaddr("M03_AXI_awaddr"), M03_AXI_awprot("M03_AXI_awprot"), M03_AXI_awvalid("M03_AXI_awvalid"), M03_AXI_awready("M03_AXI_awready"), M03_AXI_wdata("M03_AXI_wdata"), M03_AXI_wstrb("M03_AXI_wstrb"), M03_AXI_wvalid("M03_AXI_wvalid"), M03_AXI_wready("M03_AXI_wready"), M03_AXI_bresp("M03_AXI_bresp"), M03_AXI_bvalid("M03_AXI_bvalid"), M03_AXI_bready("M03_AXI_bready"), M03_AXI_araddr("M03_AXI_araddr"), M03_AXI_arprot("M03_AXI_arprot"), M03_AXI_arvalid("M03_AXI_arvalid"), M03_AXI_arready("M03_AXI_arready"), M03_AXI_rdata("M03_AXI_rdata"), M03_AXI_rresp("M03_AXI_rresp"), M03_AXI_rvalid("M03_AXI_rvalid"), M03_AXI_rready("M03_AXI_rready"), M04_AXI_awaddr("M04_AXI_awaddr"), M04_AXI_awprot("M04_AXI_awprot"), M04_AXI_awvalid("M04_AXI_awvalid"), M04_AXI_awready("M04_AXI_awready"), M04_AXI_wdata("M04_AXI_wdata"), M04_AXI_wstrb("M04_AXI_wstrb"), M04_AXI_wvalid("M04_AXI_wvalid"), M04_AXI_wready("M04_AXI_wready"), M04_AXI_bresp("M04_AXI_bresp"), M04_AXI_bvalid("M04_AXI_bvalid"), M04_AXI_bready("M04_AXI_bready"), M04_AXI_araddr("M04_AXI_araddr"), M04_AXI_arprot("M04_AXI_arprot"), M04_AXI_arvalid("M04_AXI_arvalid"), M04_AXI_arready("M04_AXI_arready"), M04_AXI_rdata("M04_AXI_rdata"), M04_AXI_rresp("M04_AXI_rresp"), M04_AXI_rvalid("M04_AXI_rvalid"), M04_AXI_rready("M04_AXI_rready"), M05_AXI_awid("M05_AXI_awid"), M05_AXI_awaddr("M05_AXI_awaddr"), M05_AXI_awlen("M05_AXI_awlen"), M05_AXI_awsize("M05_AXI_awsize"), M05_AXI_awburst("M05_AXI_awburst"), M05_AXI_awlock("M05_AXI_awlock"), M05_AXI_awcache("M05_AXI_awcache"), M05_AXI_awprot("M05_AXI_awprot"), M05_AXI_awregion("M05_AXI_awregion"), M05_AXI_awqos("M05_AXI_awqos"), M05_AXI_awuser("M05_AXI_awuser"), M05_AXI_awvalid("M05_AXI_awvalid"), M05_AXI_awready("M05_AXI_awready"), M05_AXI_wid("M05_AXI_wid"), M05_AXI_wdata("M05_AXI_wdata"), M05_AXI_wstrb("M05_AXI_wstrb"), M05_AXI_wlast("M05_AXI_wlast"), M05_AXI_wuser("M05_AXI_wuser"), M05_AXI_wvalid("M05_AXI_wvalid"), M05_AXI_wready("M05_AXI_wready"), M05_AXI_bid("M05_AXI_bid"), M05_AXI_bresp("M05_AXI_bresp"), M05_AXI_buser("M05_AXI_buser"), M05_AXI_bvalid("M05_AXI_bvalid"), M05_AXI_bready("M05_AXI_bready"), M05_AXI_arid("M05_AXI_arid"), M05_AXI_araddr("M05_AXI_araddr"), M05_AXI_arlen("M05_AXI_arlen"), M05_AXI_arsize("M05_AXI_arsize"), M05_AXI_arburst("M05_AXI_arburst"), M05_AXI_arlock("M05_AXI_arlock"), M05_AXI_arcache("M05_AXI_arcache"), M05_AXI_arprot("M05_AXI_arprot"), M05_AXI_arregion("M05_AXI_arregion"), M05_AXI_arqos("M05_AXI_arqos"), M05_AXI_aruser("M05_AXI_aruser"), M05_AXI_arvalid("M05_AXI_arvalid"), M05_AXI_arready("M05_AXI_arready"), M05_AXI_rid("M05_AXI_rid"), M05_AXI_rdata("M05_AXI_rdata"), M05_AXI_rresp("M05_AXI_rresp"), M05_AXI_rlast("M05_AXI_rlast"), M05_AXI_ruser("M05_AXI_ruser"), M05_AXI_rvalid("M05_AXI_rvalid"), M05_AXI_rready("M05_AXI_rready"), M06_AXI_awid("M06_AXI_awid"), M06_AXI_awaddr("M06_AXI_awaddr"), M06_AXI_awlen("M06_AXI_awlen"), M06_AXI_awsize("M06_AXI_awsize"), M06_AXI_awburst("M06_AXI_awburst"), M06_AXI_awlock("M06_AXI_awlock"), M06_AXI_awcache("M06_AXI_awcache"), M06_AXI_awprot("M06_AXI_awprot"), M06_AXI_awregion("M06_AXI_awregion"), M06_AXI_awqos("M06_AXI_awqos"), M06_AXI_awuser("M06_AXI_awuser"), M06_AXI_awvalid("M06_AXI_awvalid"), M06_AXI_awready("M06_AXI_awready"), M06_AXI_wid("M06_AXI_wid"), M06_AXI_wdata("M06_AXI_wdata"), M06_AXI_wstrb("M06_AXI_wstrb"), M06_AXI_wlast("M06_AXI_wlast"), M06_AXI_wuser("M06_AXI_wuser"), M06_AXI_wvalid("M06_AXI_wvalid"), M06_AXI_wready("M06_AXI_wready"), M06_AXI_bid("M06_AXI_bid"), M06_AXI_bresp("M06_AXI_bresp"), M06_AXI_buser("M06_AXI_buser"), M06_AXI_bvalid("M06_AXI_bvalid"), M06_AXI_bready("M06_AXI_bready"), M06_AXI_arid("M06_AXI_arid"), M06_AXI_araddr("M06_AXI_araddr"), M06_AXI_arlen("M06_AXI_arlen"), M06_AXI_arsize("M06_AXI_arsize"), M06_AXI_arburst("M06_AXI_arburst"), M06_AXI_arlock("M06_AXI_arlock"), M06_AXI_arcache("M06_AXI_arcache"), M06_AXI_arprot("M06_AXI_arprot"), M06_AXI_arregion("M06_AXI_arregion"), M06_AXI_arqos("M06_AXI_arqos"), M06_AXI_aruser("M06_AXI_aruser"), M06_AXI_arvalid("M06_AXI_arvalid"), M06_AXI_arready("M06_AXI_arready"), M06_AXI_rid("M06_AXI_rid"), M06_AXI_rdata("M06_AXI_rdata"), M06_AXI_rresp("M06_AXI_rresp"), M06_AXI_rlast("M06_AXI_rlast"), M06_AXI_ruser("M06_AXI_ruser"), M06_AXI_rvalid("M06_AXI_rvalid"), M06_AXI_rready("M06_AXI_rready"), M07_AXI_awid("M07_AXI_awid"), M07_AXI_awaddr("M07_AXI_awaddr"), M07_AXI_awlen("M07_AXI_awlen"), M07_AXI_awsize("M07_AXI_awsize"), M07_AXI_awburst("M07_AXI_awburst"), M07_AXI_awlock("M07_AXI_awlock"), M07_AXI_awcache("M07_AXI_awcache"), M07_AXI_awprot("M07_AXI_awprot"), M07_AXI_awregion("M07_AXI_awregion"), M07_AXI_awqos("M07_AXI_awqos"), M07_AXI_awuser("M07_AXI_awuser"), M07_AXI_awvalid("M07_AXI_awvalid"), M07_AXI_awready("M07_AXI_awready"), M07_AXI_wid("M07_AXI_wid"), M07_AXI_wdata("M07_AXI_wdata"), M07_AXI_wstrb("M07_AXI_wstrb"), M07_AXI_wlast("M07_AXI_wlast"), M07_AXI_wuser("M07_AXI_wuser"), M07_AXI_wvalid("M07_AXI_wvalid"), M07_AXI_wready("M07_AXI_wready"), M07_AXI_bid("M07_AXI_bid"), M07_AXI_bresp("M07_AXI_bresp"), M07_AXI_buser("M07_AXI_buser"), M07_AXI_bvalid("M07_AXI_bvalid"), M07_AXI_bready("M07_AXI_bready"), M07_AXI_arid("M07_AXI_arid"), M07_AXI_araddr("M07_AXI_araddr"), M07_AXI_arlen("M07_AXI_arlen"), M07_AXI_arsize("M07_AXI_arsize"), M07_AXI_arburst("M07_AXI_arburst"), M07_AXI_arlock("M07_AXI_arlock"), M07_AXI_arcache("M07_AXI_arcache"), M07_AXI_arprot("M07_AXI_arprot"), M07_AXI_arregion("M07_AXI_arregion"), M07_AXI_arqos("M07_AXI_arqos"), M07_AXI_aruser("M07_AXI_aruser"), M07_AXI_arvalid("M07_AXI_arvalid"), M07_AXI_arready("M07_AXI_arready"), M07_AXI_rid("M07_AXI_rid"), M07_AXI_rdata("M07_AXI_rdata"), M07_AXI_rresp("M07_AXI_rresp"), M07_AXI_rlast("M07_AXI_rlast"), M07_AXI_ruser("M07_AXI_ruser"), M07_AXI_rvalid("M07_AXI_rvalid"), M07_AXI_rready("M07_AXI_rready"), M08_AXI_awid("M08_AXI_awid"), M08_AXI_awaddr("M08_AXI_awaddr"), M08_AXI_awlen("M08_AXI_awlen"), M08_AXI_awsize("M08_AXI_awsize"), M08_AXI_awburst("M08_AXI_awburst"), M08_AXI_awlock("M08_AXI_awlock"), M08_AXI_awcache("M08_AXI_awcache"), M08_AXI_awprot("M08_AXI_awprot"), M08_AXI_awregion("M08_AXI_awregion"), M08_AXI_awqos("M08_AXI_awqos"), M08_AXI_awuser("M08_AXI_awuser"), M08_AXI_awvalid("M08_AXI_awvalid"), M08_AXI_awready("M08_AXI_awready"), M08_AXI_wid("M08_AXI_wid"), M08_AXI_wdata("M08_AXI_wdata"), M08_AXI_wstrb("M08_AXI_wstrb"), M08_AXI_wlast("M08_AXI_wlast"), M08_AXI_wuser("M08_AXI_wuser"), M08_AXI_wvalid("M08_AXI_wvalid"), M08_AXI_wready("M08_AXI_wready"), M08_AXI_bid("M08_AXI_bid"), M08_AXI_bresp("M08_AXI_bresp"), M08_AXI_buser("M08_AXI_buser"), M08_AXI_bvalid("M08_AXI_bvalid"), M08_AXI_bready("M08_AXI_bready"), M08_AXI_arid("M08_AXI_arid"), M08_AXI_araddr("M08_AXI_araddr"), M08_AXI_arlen("M08_AXI_arlen"), M08_AXI_arsize("M08_AXI_arsize"), M08_AXI_arburst("M08_AXI_arburst"), M08_AXI_arlock("M08_AXI_arlock"), M08_AXI_arcache("M08_AXI_arcache"), M08_AXI_arprot("M08_AXI_arprot"), M08_AXI_arregion("M08_AXI_arregion"), M08_AXI_arqos("M08_AXI_arqos"), M08_AXI_aruser("M08_AXI_aruser"), M08_AXI_arvalid("M08_AXI_arvalid"), M08_AXI_arready("M08_AXI_arready"), M08_AXI_rid("M08_AXI_rid"), M08_AXI_rdata("M08_AXI_rdata"), M08_AXI_rresp("M08_AXI_rresp"), M08_AXI_rlast("M08_AXI_rlast"), M08_AXI_ruser("M08_AXI_ruser"), M08_AXI_rvalid("M08_AXI_rvalid"), M08_AXI_rready("M08_AXI_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlen_converter = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlen_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_M02_AXI_transactor = NULL;
  mp_M03_AXI_transactor = NULL;
  mp_M04_AXI_transactor = NULL;
  mp_M05_AXI_transactor = NULL;
  mp_M05_AXI_awid_converter = NULL;
  mp_M05_AXI_awaddr_converter = NULL;
  mp_M05_AXI_awlen_converter = NULL;
  mp_M05_AXI_awuser_converter = NULL;
  mp_M05_AXI_awvalid_converter = NULL;
  mp_M05_AXI_awready_converter = NULL;
  mp_M05_AXI_wdata_converter = NULL;
  mp_M05_AXI_wstrb_converter = NULL;
  mp_M05_AXI_wlast_converter = NULL;
  mp_M05_AXI_wuser_converter = NULL;
  mp_M05_AXI_wvalid_converter = NULL;
  mp_M05_AXI_wready_converter = NULL;
  mp_M05_AXI_bid_converter = NULL;
  mp_M05_AXI_buser_converter = NULL;
  mp_M05_AXI_bvalid_converter = NULL;
  mp_M05_AXI_bready_converter = NULL;
  mp_M05_AXI_arid_converter = NULL;
  mp_M05_AXI_araddr_converter = NULL;
  mp_M05_AXI_arlen_converter = NULL;
  mp_M05_AXI_aruser_converter = NULL;
  mp_M05_AXI_arvalid_converter = NULL;
  mp_M05_AXI_arready_converter = NULL;
  mp_M05_AXI_rid_converter = NULL;
  mp_M05_AXI_rdata_converter = NULL;
  mp_M05_AXI_rlast_converter = NULL;
  mp_M05_AXI_ruser_converter = NULL;
  mp_M05_AXI_rvalid_converter = NULL;
  mp_M05_AXI_rready_converter = NULL;
  mp_M06_AXI_transactor = NULL;
  mp_M06_AXI_awid_converter = NULL;
  mp_M06_AXI_awaddr_converter = NULL;
  mp_M06_AXI_awlen_converter = NULL;
  mp_M06_AXI_awuser_converter = NULL;
  mp_M06_AXI_awvalid_converter = NULL;
  mp_M06_AXI_awready_converter = NULL;
  mp_M06_AXI_wdata_converter = NULL;
  mp_M06_AXI_wstrb_converter = NULL;
  mp_M06_AXI_wlast_converter = NULL;
  mp_M06_AXI_wuser_converter = NULL;
  mp_M06_AXI_wvalid_converter = NULL;
  mp_M06_AXI_wready_converter = NULL;
  mp_M06_AXI_bid_converter = NULL;
  mp_M06_AXI_buser_converter = NULL;
  mp_M06_AXI_bvalid_converter = NULL;
  mp_M06_AXI_bready_converter = NULL;
  mp_M06_AXI_arid_converter = NULL;
  mp_M06_AXI_araddr_converter = NULL;
  mp_M06_AXI_arlen_converter = NULL;
  mp_M06_AXI_aruser_converter = NULL;
  mp_M06_AXI_arvalid_converter = NULL;
  mp_M06_AXI_arready_converter = NULL;
  mp_M06_AXI_rid_converter = NULL;
  mp_M06_AXI_rdata_converter = NULL;
  mp_M06_AXI_rlast_converter = NULL;
  mp_M06_AXI_ruser_converter = NULL;
  mp_M06_AXI_rvalid_converter = NULL;
  mp_M06_AXI_rready_converter = NULL;
  mp_M07_AXI_transactor = NULL;
  mp_M07_AXI_awid_converter = NULL;
  mp_M07_AXI_awaddr_converter = NULL;
  mp_M07_AXI_awlen_converter = NULL;
  mp_M07_AXI_awuser_converter = NULL;
  mp_M07_AXI_awvalid_converter = NULL;
  mp_M07_AXI_awready_converter = NULL;
  mp_M07_AXI_wdata_converter = NULL;
  mp_M07_AXI_wstrb_converter = NULL;
  mp_M07_AXI_wlast_converter = NULL;
  mp_M07_AXI_wuser_converter = NULL;
  mp_M07_AXI_wvalid_converter = NULL;
  mp_M07_AXI_wready_converter = NULL;
  mp_M07_AXI_bid_converter = NULL;
  mp_M07_AXI_buser_converter = NULL;
  mp_M07_AXI_bvalid_converter = NULL;
  mp_M07_AXI_bready_converter = NULL;
  mp_M07_AXI_arid_converter = NULL;
  mp_M07_AXI_araddr_converter = NULL;
  mp_M07_AXI_arlen_converter = NULL;
  mp_M07_AXI_aruser_converter = NULL;
  mp_M07_AXI_arvalid_converter = NULL;
  mp_M07_AXI_arready_converter = NULL;
  mp_M07_AXI_rid_converter = NULL;
  mp_M07_AXI_rdata_converter = NULL;
  mp_M07_AXI_rlast_converter = NULL;
  mp_M07_AXI_ruser_converter = NULL;
  mp_M07_AXI_rvalid_converter = NULL;
  mp_M07_AXI_rready_converter = NULL;
  mp_M08_AXI_transactor = NULL;
  mp_M08_AXI_awid_converter = NULL;
  mp_M08_AXI_awaddr_converter = NULL;
  mp_M08_AXI_awlen_converter = NULL;
  mp_M08_AXI_awuser_converter = NULL;
  mp_M08_AXI_awvalid_converter = NULL;
  mp_M08_AXI_awready_converter = NULL;
  mp_M08_AXI_wdata_converter = NULL;
  mp_M08_AXI_wstrb_converter = NULL;
  mp_M08_AXI_wlast_converter = NULL;
  mp_M08_AXI_wuser_converter = NULL;
  mp_M08_AXI_wvalid_converter = NULL;
  mp_M08_AXI_wready_converter = NULL;
  mp_M08_AXI_bid_converter = NULL;
  mp_M08_AXI_buser_converter = NULL;
  mp_M08_AXI_bvalid_converter = NULL;
  mp_M08_AXI_bready_converter = NULL;
  mp_M08_AXI_arid_converter = NULL;
  mp_M08_AXI_araddr_converter = NULL;
  mp_M08_AXI_arlen_converter = NULL;
  mp_M08_AXI_aruser_converter = NULL;
  mp_M08_AXI_arvalid_converter = NULL;
  mp_M08_AXI_arready_converter = NULL;
  mp_M08_AXI_rid_converter = NULL;
  mp_M08_AXI_rdata_converter = NULL;
  mp_M08_AXI_rlast_converter = NULL;
  mp_M08_AXI_ruser_converter = NULL;
  mp_M08_AXI_rvalid_converter = NULL;
  mp_M08_AXI_rready_converter = NULL;

  // initialize socket stubs

}

void design_1_smartconnect_1_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI3");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWID(S00_AXI_awid);
    mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
    mp_S00_AXI_awlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_awlen_converter");
    mp_S00_AXI_awlen_converter->vector_in(S00_AXI_awlen);
    mp_S00_AXI_awlen_converter->vector_out(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWLEN(m_S00_AXI_awlen_converter_signal);
    mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
    mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
    mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_awlock_converter");
    mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
    mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
    mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
    mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
    mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
    mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
    mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
    mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
    mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
    mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
    mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
    mp_S00_AXI_transactor->BID(S00_AXI_bid);
    mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
    mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
    mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
    mp_S00_AXI_transactor->ARID(S00_AXI_arid);
    mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
    mp_S00_AXI_arlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_arlen_converter");
    mp_S00_AXI_arlen_converter->vector_in(S00_AXI_arlen);
    mp_S00_AXI_arlen_converter->vector_out(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARLEN(m_S00_AXI_arlen_converter_signal);
    mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
    mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
    mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_arlock_converter");
    mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
    mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
    mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
    mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
    mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
    mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
    mp_S00_AXI_transactor->RID(S00_AXI_rid);
    mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
    mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
    mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
    mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
    mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "9");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,9,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
    mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
    mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
    mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
    mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
    mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
    mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
    mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
    mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
    mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
    mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
    mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
    mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
    mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
    mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
    mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
    mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
    mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
    mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXI' transactor parameters
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "6");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,6,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);

    // M01_AXI' transactor ports

    mp_M01_AXI_transactor->AWADDR(M01_AXI_awaddr);
    mp_M01_AXI_transactor->AWPROT(M01_AXI_awprot);
    mp_M01_AXI_transactor->AWVALID(M01_AXI_awvalid);
    mp_M01_AXI_transactor->AWREADY(M01_AXI_awready);
    mp_M01_AXI_transactor->WDATA(M01_AXI_wdata);
    mp_M01_AXI_transactor->WSTRB(M01_AXI_wstrb);
    mp_M01_AXI_transactor->WVALID(M01_AXI_wvalid);
    mp_M01_AXI_transactor->WREADY(M01_AXI_wready);
    mp_M01_AXI_transactor->BRESP(M01_AXI_bresp);
    mp_M01_AXI_transactor->BVALID(M01_AXI_bvalid);
    mp_M01_AXI_transactor->BREADY(M01_AXI_bready);
    mp_M01_AXI_transactor->ARADDR(M01_AXI_araddr);
    mp_M01_AXI_transactor->ARPROT(M01_AXI_arprot);
    mp_M01_AXI_transactor->ARVALID(M01_AXI_arvalid);
    mp_M01_AXI_transactor->ARREADY(M01_AXI_arready);
    mp_M01_AXI_transactor->RDATA(M01_AXI_rdata);
    mp_M01_AXI_transactor->RRESP(M01_AXI_rresp);
    mp_M01_AXI_transactor->RVALID(M01_AXI_rvalid);
    mp_M01_AXI_transactor->RREADY(M01_AXI_rready);
    mp_M01_AXI_transactor->CLK(aclk);
    mp_M01_AXI_transactor->RST(aresetn);

    // M01_AXI' transactor sockets

    mp_impl->M01_AXI_tlm_aximm_read_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->M01_AXI_tlm_aximm_write_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M02_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M02_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M02_AXI' transactor parameters
    xsc::common_cpp::properties M02_AXI_transactor_param_props;
    M02_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M02_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M02_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ADDR_WIDTH", "9");
    M02_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M02_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M02_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M02_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M02_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M02_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M02_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M02_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M02_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M02_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M02_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M02_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M02_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M02_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M02_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,9,1,1,1,1,1,1>("M02_AXI_transactor", M02_AXI_transactor_param_props);

    // M02_AXI' transactor ports

    mp_M02_AXI_transactor->AWADDR(M02_AXI_awaddr);
    mp_M02_AXI_transactor->AWPROT(M02_AXI_awprot);
    mp_M02_AXI_transactor->AWVALID(M02_AXI_awvalid);
    mp_M02_AXI_transactor->AWREADY(M02_AXI_awready);
    mp_M02_AXI_transactor->WDATA(M02_AXI_wdata);
    mp_M02_AXI_transactor->WSTRB(M02_AXI_wstrb);
    mp_M02_AXI_transactor->WVALID(M02_AXI_wvalid);
    mp_M02_AXI_transactor->WREADY(M02_AXI_wready);
    mp_M02_AXI_transactor->BRESP(M02_AXI_bresp);
    mp_M02_AXI_transactor->BVALID(M02_AXI_bvalid);
    mp_M02_AXI_transactor->BREADY(M02_AXI_bready);
    mp_M02_AXI_transactor->ARADDR(M02_AXI_araddr);
    mp_M02_AXI_transactor->ARPROT(M02_AXI_arprot);
    mp_M02_AXI_transactor->ARVALID(M02_AXI_arvalid);
    mp_M02_AXI_transactor->ARREADY(M02_AXI_arready);
    mp_M02_AXI_transactor->RDATA(M02_AXI_rdata);
    mp_M02_AXI_transactor->RRESP(M02_AXI_rresp);
    mp_M02_AXI_transactor->RVALID(M02_AXI_rvalid);
    mp_M02_AXI_transactor->RREADY(M02_AXI_rready);
    mp_M02_AXI_transactor->CLK(aclk);
    mp_M02_AXI_transactor->RST(aresetn);

    // M02_AXI' transactor sockets

    mp_impl->M02_AXI_tlm_aximm_read_socket->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_impl->M02_AXI_tlm_aximm_write_socket->bind(*(mp_M02_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M03_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M03_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M03_AXI' transactor parameters
    xsc::common_cpp::properties M03_AXI_transactor_param_props;
    M03_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M03_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M03_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ADDR_WIDTH", "8");
    M03_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M03_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M03_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M03_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M03_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M03_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M03_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M03_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M03_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M03_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M03_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M03_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M03_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M03_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M03_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,8,1,1,1,1,1,1>("M03_AXI_transactor", M03_AXI_transactor_param_props);

    // M03_AXI' transactor ports

    mp_M03_AXI_transactor->AWADDR(M03_AXI_awaddr);
    mp_M03_AXI_transactor->AWPROT(M03_AXI_awprot);
    mp_M03_AXI_transactor->AWVALID(M03_AXI_awvalid);
    mp_M03_AXI_transactor->AWREADY(M03_AXI_awready);
    mp_M03_AXI_transactor->WDATA(M03_AXI_wdata);
    mp_M03_AXI_transactor->WSTRB(M03_AXI_wstrb);
    mp_M03_AXI_transactor->WVALID(M03_AXI_wvalid);
    mp_M03_AXI_transactor->WREADY(M03_AXI_wready);
    mp_M03_AXI_transactor->BRESP(M03_AXI_bresp);
    mp_M03_AXI_transactor->BVALID(M03_AXI_bvalid);
    mp_M03_AXI_transactor->BREADY(M03_AXI_bready);
    mp_M03_AXI_transactor->ARADDR(M03_AXI_araddr);
    mp_M03_AXI_transactor->ARPROT(M03_AXI_arprot);
    mp_M03_AXI_transactor->ARVALID(M03_AXI_arvalid);
    mp_M03_AXI_transactor->ARREADY(M03_AXI_arready);
    mp_M03_AXI_transactor->RDATA(M03_AXI_rdata);
    mp_M03_AXI_transactor->RRESP(M03_AXI_rresp);
    mp_M03_AXI_transactor->RVALID(M03_AXI_rvalid);
    mp_M03_AXI_transactor->RREADY(M03_AXI_rready);
    mp_M03_AXI_transactor->CLK(aclk);
    mp_M03_AXI_transactor->RST(aresetn);

    // M03_AXI' transactor sockets

    mp_impl->M03_AXI_tlm_aximm_read_socket->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_impl->M03_AXI_tlm_aximm_write_socket->bind(*(mp_M03_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M04_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M04_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M04_AXI' transactor parameters
    xsc::common_cpp::properties M04_AXI_transactor_param_props;
    M04_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M04_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M04_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ADDR_WIDTH", "7");
    M04_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M04_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M04_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M04_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M04_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M04_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M04_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M04_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M04_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M04_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M04_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M04_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M04_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M04_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M04_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,7,1,1,1,1,1,1>("M04_AXI_transactor", M04_AXI_transactor_param_props);

    // M04_AXI' transactor ports

    mp_M04_AXI_transactor->AWADDR(M04_AXI_awaddr);
    mp_M04_AXI_transactor->AWPROT(M04_AXI_awprot);
    mp_M04_AXI_transactor->AWVALID(M04_AXI_awvalid);
    mp_M04_AXI_transactor->AWREADY(M04_AXI_awready);
    mp_M04_AXI_transactor->WDATA(M04_AXI_wdata);
    mp_M04_AXI_transactor->WSTRB(M04_AXI_wstrb);
    mp_M04_AXI_transactor->WVALID(M04_AXI_wvalid);
    mp_M04_AXI_transactor->WREADY(M04_AXI_wready);
    mp_M04_AXI_transactor->BRESP(M04_AXI_bresp);
    mp_M04_AXI_transactor->BVALID(M04_AXI_bvalid);
    mp_M04_AXI_transactor->BREADY(M04_AXI_bready);
    mp_M04_AXI_transactor->ARADDR(M04_AXI_araddr);
    mp_M04_AXI_transactor->ARPROT(M04_AXI_arprot);
    mp_M04_AXI_transactor->ARVALID(M04_AXI_arvalid);
    mp_M04_AXI_transactor->ARREADY(M04_AXI_arready);
    mp_M04_AXI_transactor->RDATA(M04_AXI_rdata);
    mp_M04_AXI_transactor->RRESP(M04_AXI_rresp);
    mp_M04_AXI_transactor->RVALID(M04_AXI_rvalid);
    mp_M04_AXI_transactor->RREADY(M04_AXI_rready);
    mp_M04_AXI_transactor->CLK(aclk);
    mp_M04_AXI_transactor->RST(aresetn);

    // M04_AXI' transactor sockets

    mp_impl->M04_AXI_tlm_aximm_read_socket->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_impl->M04_AXI_tlm_aximm_write_socket->bind(*(mp_M04_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M05_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M05_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M05_AXI' transactor parameters
    xsc::common_cpp::properties M05_AXI_transactor_param_props;
    M05_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M05_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M05_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M05_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M05_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M05_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M05_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M05_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M05_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M05_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M05_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M05_AXI_transactor_param_props.addString("PROTOCOL", "");
    M05_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M05_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M05_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M05_AXI_transactor", M05_AXI_transactor_param_props);

    // M05_AXI' transactor ports

    mp_M05_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awid_converter");
    mp_M05_AXI_awid_converter->vector_in(m_M05_AXI_awid_converter_signal);
    mp_M05_AXI_awid_converter->scalar_out(M05_AXI_awid);
    mp_M05_AXI_transactor->AWID(m_M05_AXI_awid_converter_signal);
    mp_M05_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_awaddr_converter");
    mp_M05_AXI_awaddr_converter->vector_in(m_M05_AXI_awaddr_converter_signal);
    mp_M05_AXI_awaddr_converter->scalar_out(M05_AXI_awaddr);
    mp_M05_AXI_transactor->AWADDR(m_M05_AXI_awaddr_converter_signal);
    mp_M05_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M05_AXI_awlen_converter");
    mp_M05_AXI_awlen_converter->vector_in(m_M05_AXI_awlen_converter_signal);
    mp_M05_AXI_awlen_converter->scalar_out(M05_AXI_awlen);
    mp_M05_AXI_transactor->AWLEN(m_M05_AXI_awlen_converter_signal);
    mp_M05_AXI_transactor->AWSIZE(M05_AXI_awsize);
    mp_M05_AXI_transactor->AWBURST(M05_AXI_awburst);
    mp_M05_AXI_transactor->AWLOCK(M05_AXI_awlock);
    mp_M05_AXI_transactor->AWCACHE(M05_AXI_awcache);
    mp_M05_AXI_transactor->AWPROT(M05_AXI_awprot);
    mp_M05_AXI_transactor->AWREGION(M05_AXI_awregion);
    mp_M05_AXI_transactor->AWQOS(M05_AXI_awqos);
    mp_M05_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awuser_converter");
    mp_M05_AXI_awuser_converter->vector_in(m_M05_AXI_awuser_converter_signal);
    mp_M05_AXI_awuser_converter->scalar_out(M05_AXI_awuser);
    mp_M05_AXI_transactor->AWUSER(m_M05_AXI_awuser_converter_signal);
    mp_M05_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_awvalid_converter");
    mp_M05_AXI_awvalid_converter->scalar_in(m_M05_AXI_awvalid_converter_signal);
    mp_M05_AXI_awvalid_converter->vector_out(M05_AXI_awvalid);
    mp_M05_AXI_transactor->AWVALID(m_M05_AXI_awvalid_converter_signal);
    mp_M05_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awready_converter");
    mp_M05_AXI_awready_converter->vector_in(M05_AXI_awready);
    mp_M05_AXI_awready_converter->scalar_out(m_M05_AXI_awready_converter_signal);
    mp_M05_AXI_transactor->AWREADY(m_M05_AXI_awready_converter_signal);
    mp_M05_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_wdata_converter");
    mp_M05_AXI_wdata_converter->vector_in(m_M05_AXI_wdata_converter_signal);
    mp_M05_AXI_wdata_converter->scalar_out(M05_AXI_wdata);
    mp_M05_AXI_transactor->WDATA(m_M05_AXI_wdata_converter_signal);
    mp_M05_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M05_AXI_wstrb_converter");
    mp_M05_AXI_wstrb_converter->vector_in(m_M05_AXI_wstrb_converter_signal);
    mp_M05_AXI_wstrb_converter->scalar_out(M05_AXI_wstrb);
    mp_M05_AXI_transactor->WSTRB(m_M05_AXI_wstrb_converter_signal);
    mp_M05_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_wlast_converter");
    mp_M05_AXI_wlast_converter->scalar_in(m_M05_AXI_wlast_converter_signal);
    mp_M05_AXI_wlast_converter->vector_out(M05_AXI_wlast);
    mp_M05_AXI_transactor->WLAST(m_M05_AXI_wlast_converter_signal);
    mp_M05_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_wuser_converter");
    mp_M05_AXI_wuser_converter->vector_in(m_M05_AXI_wuser_converter_signal);
    mp_M05_AXI_wuser_converter->scalar_out(M05_AXI_wuser);
    mp_M05_AXI_transactor->WUSER(m_M05_AXI_wuser_converter_signal);
    mp_M05_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_wvalid_converter");
    mp_M05_AXI_wvalid_converter->scalar_in(m_M05_AXI_wvalid_converter_signal);
    mp_M05_AXI_wvalid_converter->vector_out(M05_AXI_wvalid);
    mp_M05_AXI_transactor->WVALID(m_M05_AXI_wvalid_converter_signal);
    mp_M05_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_wready_converter");
    mp_M05_AXI_wready_converter->vector_in(M05_AXI_wready);
    mp_M05_AXI_wready_converter->scalar_out(m_M05_AXI_wready_converter_signal);
    mp_M05_AXI_transactor->WREADY(m_M05_AXI_wready_converter_signal);
    mp_M05_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_bid_converter");
    mp_M05_AXI_bid_converter->scalar_in(M05_AXI_bid);
    mp_M05_AXI_bid_converter->vector_out(m_M05_AXI_bid_converter_signal);
    mp_M05_AXI_transactor->BID(m_M05_AXI_bid_converter_signal);
    mp_M05_AXI_transactor->BRESP(M05_AXI_bresp);
    mp_M05_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_buser_converter");
    mp_M05_AXI_buser_converter->scalar_in(M05_AXI_buser);
    mp_M05_AXI_buser_converter->vector_out(m_M05_AXI_buser_converter_signal);
    mp_M05_AXI_transactor->BUSER(m_M05_AXI_buser_converter_signal);
    mp_M05_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_bvalid_converter");
    mp_M05_AXI_bvalid_converter->vector_in(M05_AXI_bvalid);
    mp_M05_AXI_bvalid_converter->scalar_out(m_M05_AXI_bvalid_converter_signal);
    mp_M05_AXI_transactor->BVALID(m_M05_AXI_bvalid_converter_signal);
    mp_M05_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_bready_converter");
    mp_M05_AXI_bready_converter->scalar_in(m_M05_AXI_bready_converter_signal);
    mp_M05_AXI_bready_converter->vector_out(M05_AXI_bready);
    mp_M05_AXI_transactor->BREADY(m_M05_AXI_bready_converter_signal);
    mp_M05_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_arid_converter");
    mp_M05_AXI_arid_converter->vector_in(m_M05_AXI_arid_converter_signal);
    mp_M05_AXI_arid_converter->scalar_out(M05_AXI_arid);
    mp_M05_AXI_transactor->ARID(m_M05_AXI_arid_converter_signal);
    mp_M05_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_araddr_converter");
    mp_M05_AXI_araddr_converter->vector_in(m_M05_AXI_araddr_converter_signal);
    mp_M05_AXI_araddr_converter->scalar_out(M05_AXI_araddr);
    mp_M05_AXI_transactor->ARADDR(m_M05_AXI_araddr_converter_signal);
    mp_M05_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M05_AXI_arlen_converter");
    mp_M05_AXI_arlen_converter->vector_in(m_M05_AXI_arlen_converter_signal);
    mp_M05_AXI_arlen_converter->scalar_out(M05_AXI_arlen);
    mp_M05_AXI_transactor->ARLEN(m_M05_AXI_arlen_converter_signal);
    mp_M05_AXI_transactor->ARSIZE(M05_AXI_arsize);
    mp_M05_AXI_transactor->ARBURST(M05_AXI_arburst);
    mp_M05_AXI_transactor->ARLOCK(M05_AXI_arlock);
    mp_M05_AXI_transactor->ARCACHE(M05_AXI_arcache);
    mp_M05_AXI_transactor->ARPROT(M05_AXI_arprot);
    mp_M05_AXI_transactor->ARREGION(M05_AXI_arregion);
    mp_M05_AXI_transactor->ARQOS(M05_AXI_arqos);
    mp_M05_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_aruser_converter");
    mp_M05_AXI_aruser_converter->vector_in(m_M05_AXI_aruser_converter_signal);
    mp_M05_AXI_aruser_converter->scalar_out(M05_AXI_aruser);
    mp_M05_AXI_transactor->ARUSER(m_M05_AXI_aruser_converter_signal);
    mp_M05_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_arvalid_converter");
    mp_M05_AXI_arvalid_converter->scalar_in(m_M05_AXI_arvalid_converter_signal);
    mp_M05_AXI_arvalid_converter->vector_out(M05_AXI_arvalid);
    mp_M05_AXI_transactor->ARVALID(m_M05_AXI_arvalid_converter_signal);
    mp_M05_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_arready_converter");
    mp_M05_AXI_arready_converter->vector_in(M05_AXI_arready);
    mp_M05_AXI_arready_converter->scalar_out(m_M05_AXI_arready_converter_signal);
    mp_M05_AXI_transactor->ARREADY(m_M05_AXI_arready_converter_signal);
    mp_M05_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_rid_converter");
    mp_M05_AXI_rid_converter->scalar_in(M05_AXI_rid);
    mp_M05_AXI_rid_converter->vector_out(m_M05_AXI_rid_converter_signal);
    mp_M05_AXI_transactor->RID(m_M05_AXI_rid_converter_signal);
    mp_M05_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M05_AXI_rdata_converter");
    mp_M05_AXI_rdata_converter->scalar_in(M05_AXI_rdata);
    mp_M05_AXI_rdata_converter->vector_out(m_M05_AXI_rdata_converter_signal);
    mp_M05_AXI_transactor->RDATA(m_M05_AXI_rdata_converter_signal);
    mp_M05_AXI_transactor->RRESP(M05_AXI_rresp);
    mp_M05_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_rlast_converter");
    mp_M05_AXI_rlast_converter->vector_in(M05_AXI_rlast);
    mp_M05_AXI_rlast_converter->scalar_out(m_M05_AXI_rlast_converter_signal);
    mp_M05_AXI_transactor->RLAST(m_M05_AXI_rlast_converter_signal);
    mp_M05_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_ruser_converter");
    mp_M05_AXI_ruser_converter->scalar_in(M05_AXI_ruser);
    mp_M05_AXI_ruser_converter->vector_out(m_M05_AXI_ruser_converter_signal);
    mp_M05_AXI_transactor->RUSER(m_M05_AXI_ruser_converter_signal);
    mp_M05_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_rvalid_converter");
    mp_M05_AXI_rvalid_converter->vector_in(M05_AXI_rvalid);
    mp_M05_AXI_rvalid_converter->scalar_out(m_M05_AXI_rvalid_converter_signal);
    mp_M05_AXI_transactor->RVALID(m_M05_AXI_rvalid_converter_signal);
    mp_M05_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_rready_converter");
    mp_M05_AXI_rready_converter->scalar_in(m_M05_AXI_rready_converter_signal);
    mp_M05_AXI_rready_converter->vector_out(M05_AXI_rready);
    mp_M05_AXI_transactor->RREADY(m_M05_AXI_rready_converter_signal);
    mp_M05_AXI_transactor->CLK(aclk);
    mp_M05_AXI_transactor->RST(aresetn);

    // M05_AXI' transactor sockets

    mp_impl->M05_AXI_tlm_aximm_read_socket->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_impl->M05_AXI_tlm_aximm_write_socket->bind(*(mp_M05_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M06_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M06_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M06_AXI' transactor parameters
    xsc::common_cpp::properties M06_AXI_transactor_param_props;
    M06_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M06_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M06_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M06_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M06_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M06_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M06_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M06_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M06_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M06_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M06_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M06_AXI_transactor_param_props.addString("PROTOCOL", "");
    M06_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M06_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M06_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M06_AXI_transactor", M06_AXI_transactor_param_props);

    // M06_AXI' transactor ports

    mp_M06_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awid_converter");
    mp_M06_AXI_awid_converter->vector_in(m_M06_AXI_awid_converter_signal);
    mp_M06_AXI_awid_converter->scalar_out(M06_AXI_awid);
    mp_M06_AXI_transactor->AWID(m_M06_AXI_awid_converter_signal);
    mp_M06_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_awaddr_converter");
    mp_M06_AXI_awaddr_converter->vector_in(m_M06_AXI_awaddr_converter_signal);
    mp_M06_AXI_awaddr_converter->scalar_out(M06_AXI_awaddr);
    mp_M06_AXI_transactor->AWADDR(m_M06_AXI_awaddr_converter_signal);
    mp_M06_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M06_AXI_awlen_converter");
    mp_M06_AXI_awlen_converter->vector_in(m_M06_AXI_awlen_converter_signal);
    mp_M06_AXI_awlen_converter->scalar_out(M06_AXI_awlen);
    mp_M06_AXI_transactor->AWLEN(m_M06_AXI_awlen_converter_signal);
    mp_M06_AXI_transactor->AWSIZE(M06_AXI_awsize);
    mp_M06_AXI_transactor->AWBURST(M06_AXI_awburst);
    mp_M06_AXI_transactor->AWLOCK(M06_AXI_awlock);
    mp_M06_AXI_transactor->AWCACHE(M06_AXI_awcache);
    mp_M06_AXI_transactor->AWPROT(M06_AXI_awprot);
    mp_M06_AXI_transactor->AWREGION(M06_AXI_awregion);
    mp_M06_AXI_transactor->AWQOS(M06_AXI_awqos);
    mp_M06_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awuser_converter");
    mp_M06_AXI_awuser_converter->vector_in(m_M06_AXI_awuser_converter_signal);
    mp_M06_AXI_awuser_converter->scalar_out(M06_AXI_awuser);
    mp_M06_AXI_transactor->AWUSER(m_M06_AXI_awuser_converter_signal);
    mp_M06_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_awvalid_converter");
    mp_M06_AXI_awvalid_converter->scalar_in(m_M06_AXI_awvalid_converter_signal);
    mp_M06_AXI_awvalid_converter->vector_out(M06_AXI_awvalid);
    mp_M06_AXI_transactor->AWVALID(m_M06_AXI_awvalid_converter_signal);
    mp_M06_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awready_converter");
    mp_M06_AXI_awready_converter->vector_in(M06_AXI_awready);
    mp_M06_AXI_awready_converter->scalar_out(m_M06_AXI_awready_converter_signal);
    mp_M06_AXI_transactor->AWREADY(m_M06_AXI_awready_converter_signal);
    mp_M06_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_wdata_converter");
    mp_M06_AXI_wdata_converter->vector_in(m_M06_AXI_wdata_converter_signal);
    mp_M06_AXI_wdata_converter->scalar_out(M06_AXI_wdata);
    mp_M06_AXI_transactor->WDATA(m_M06_AXI_wdata_converter_signal);
    mp_M06_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M06_AXI_wstrb_converter");
    mp_M06_AXI_wstrb_converter->vector_in(m_M06_AXI_wstrb_converter_signal);
    mp_M06_AXI_wstrb_converter->scalar_out(M06_AXI_wstrb);
    mp_M06_AXI_transactor->WSTRB(m_M06_AXI_wstrb_converter_signal);
    mp_M06_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_wlast_converter");
    mp_M06_AXI_wlast_converter->scalar_in(m_M06_AXI_wlast_converter_signal);
    mp_M06_AXI_wlast_converter->vector_out(M06_AXI_wlast);
    mp_M06_AXI_transactor->WLAST(m_M06_AXI_wlast_converter_signal);
    mp_M06_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_wuser_converter");
    mp_M06_AXI_wuser_converter->vector_in(m_M06_AXI_wuser_converter_signal);
    mp_M06_AXI_wuser_converter->scalar_out(M06_AXI_wuser);
    mp_M06_AXI_transactor->WUSER(m_M06_AXI_wuser_converter_signal);
    mp_M06_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_wvalid_converter");
    mp_M06_AXI_wvalid_converter->scalar_in(m_M06_AXI_wvalid_converter_signal);
    mp_M06_AXI_wvalid_converter->vector_out(M06_AXI_wvalid);
    mp_M06_AXI_transactor->WVALID(m_M06_AXI_wvalid_converter_signal);
    mp_M06_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_wready_converter");
    mp_M06_AXI_wready_converter->vector_in(M06_AXI_wready);
    mp_M06_AXI_wready_converter->scalar_out(m_M06_AXI_wready_converter_signal);
    mp_M06_AXI_transactor->WREADY(m_M06_AXI_wready_converter_signal);
    mp_M06_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_bid_converter");
    mp_M06_AXI_bid_converter->scalar_in(M06_AXI_bid);
    mp_M06_AXI_bid_converter->vector_out(m_M06_AXI_bid_converter_signal);
    mp_M06_AXI_transactor->BID(m_M06_AXI_bid_converter_signal);
    mp_M06_AXI_transactor->BRESP(M06_AXI_bresp);
    mp_M06_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_buser_converter");
    mp_M06_AXI_buser_converter->scalar_in(M06_AXI_buser);
    mp_M06_AXI_buser_converter->vector_out(m_M06_AXI_buser_converter_signal);
    mp_M06_AXI_transactor->BUSER(m_M06_AXI_buser_converter_signal);
    mp_M06_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_bvalid_converter");
    mp_M06_AXI_bvalid_converter->vector_in(M06_AXI_bvalid);
    mp_M06_AXI_bvalid_converter->scalar_out(m_M06_AXI_bvalid_converter_signal);
    mp_M06_AXI_transactor->BVALID(m_M06_AXI_bvalid_converter_signal);
    mp_M06_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_bready_converter");
    mp_M06_AXI_bready_converter->scalar_in(m_M06_AXI_bready_converter_signal);
    mp_M06_AXI_bready_converter->vector_out(M06_AXI_bready);
    mp_M06_AXI_transactor->BREADY(m_M06_AXI_bready_converter_signal);
    mp_M06_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_arid_converter");
    mp_M06_AXI_arid_converter->vector_in(m_M06_AXI_arid_converter_signal);
    mp_M06_AXI_arid_converter->scalar_out(M06_AXI_arid);
    mp_M06_AXI_transactor->ARID(m_M06_AXI_arid_converter_signal);
    mp_M06_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_araddr_converter");
    mp_M06_AXI_araddr_converter->vector_in(m_M06_AXI_araddr_converter_signal);
    mp_M06_AXI_araddr_converter->scalar_out(M06_AXI_araddr);
    mp_M06_AXI_transactor->ARADDR(m_M06_AXI_araddr_converter_signal);
    mp_M06_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M06_AXI_arlen_converter");
    mp_M06_AXI_arlen_converter->vector_in(m_M06_AXI_arlen_converter_signal);
    mp_M06_AXI_arlen_converter->scalar_out(M06_AXI_arlen);
    mp_M06_AXI_transactor->ARLEN(m_M06_AXI_arlen_converter_signal);
    mp_M06_AXI_transactor->ARSIZE(M06_AXI_arsize);
    mp_M06_AXI_transactor->ARBURST(M06_AXI_arburst);
    mp_M06_AXI_transactor->ARLOCK(M06_AXI_arlock);
    mp_M06_AXI_transactor->ARCACHE(M06_AXI_arcache);
    mp_M06_AXI_transactor->ARPROT(M06_AXI_arprot);
    mp_M06_AXI_transactor->ARREGION(M06_AXI_arregion);
    mp_M06_AXI_transactor->ARQOS(M06_AXI_arqos);
    mp_M06_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_aruser_converter");
    mp_M06_AXI_aruser_converter->vector_in(m_M06_AXI_aruser_converter_signal);
    mp_M06_AXI_aruser_converter->scalar_out(M06_AXI_aruser);
    mp_M06_AXI_transactor->ARUSER(m_M06_AXI_aruser_converter_signal);
    mp_M06_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_arvalid_converter");
    mp_M06_AXI_arvalid_converter->scalar_in(m_M06_AXI_arvalid_converter_signal);
    mp_M06_AXI_arvalid_converter->vector_out(M06_AXI_arvalid);
    mp_M06_AXI_transactor->ARVALID(m_M06_AXI_arvalid_converter_signal);
    mp_M06_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_arready_converter");
    mp_M06_AXI_arready_converter->vector_in(M06_AXI_arready);
    mp_M06_AXI_arready_converter->scalar_out(m_M06_AXI_arready_converter_signal);
    mp_M06_AXI_transactor->ARREADY(m_M06_AXI_arready_converter_signal);
    mp_M06_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_rid_converter");
    mp_M06_AXI_rid_converter->scalar_in(M06_AXI_rid);
    mp_M06_AXI_rid_converter->vector_out(m_M06_AXI_rid_converter_signal);
    mp_M06_AXI_transactor->RID(m_M06_AXI_rid_converter_signal);
    mp_M06_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M06_AXI_rdata_converter");
    mp_M06_AXI_rdata_converter->scalar_in(M06_AXI_rdata);
    mp_M06_AXI_rdata_converter->vector_out(m_M06_AXI_rdata_converter_signal);
    mp_M06_AXI_transactor->RDATA(m_M06_AXI_rdata_converter_signal);
    mp_M06_AXI_transactor->RRESP(M06_AXI_rresp);
    mp_M06_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_rlast_converter");
    mp_M06_AXI_rlast_converter->vector_in(M06_AXI_rlast);
    mp_M06_AXI_rlast_converter->scalar_out(m_M06_AXI_rlast_converter_signal);
    mp_M06_AXI_transactor->RLAST(m_M06_AXI_rlast_converter_signal);
    mp_M06_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_ruser_converter");
    mp_M06_AXI_ruser_converter->scalar_in(M06_AXI_ruser);
    mp_M06_AXI_ruser_converter->vector_out(m_M06_AXI_ruser_converter_signal);
    mp_M06_AXI_transactor->RUSER(m_M06_AXI_ruser_converter_signal);
    mp_M06_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_rvalid_converter");
    mp_M06_AXI_rvalid_converter->vector_in(M06_AXI_rvalid);
    mp_M06_AXI_rvalid_converter->scalar_out(m_M06_AXI_rvalid_converter_signal);
    mp_M06_AXI_transactor->RVALID(m_M06_AXI_rvalid_converter_signal);
    mp_M06_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_rready_converter");
    mp_M06_AXI_rready_converter->scalar_in(m_M06_AXI_rready_converter_signal);
    mp_M06_AXI_rready_converter->vector_out(M06_AXI_rready);
    mp_M06_AXI_transactor->RREADY(m_M06_AXI_rready_converter_signal);
    mp_M06_AXI_transactor->CLK(aclk);
    mp_M06_AXI_transactor->RST(aresetn);

    // M06_AXI' transactor sockets

    mp_impl->M06_AXI_tlm_aximm_read_socket->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_impl->M06_AXI_tlm_aximm_write_socket->bind(*(mp_M06_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M07_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M07_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M07_AXI' transactor parameters
    xsc::common_cpp::properties M07_AXI_transactor_param_props;
    M07_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M07_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M07_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M07_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M07_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M07_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M07_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M07_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M07_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M07_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M07_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M07_AXI_transactor_param_props.addString("PROTOCOL", "");
    M07_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M07_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M07_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M07_AXI_transactor", M07_AXI_transactor_param_props);

    // M07_AXI' transactor ports

    mp_M07_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awid_converter");
    mp_M07_AXI_awid_converter->vector_in(m_M07_AXI_awid_converter_signal);
    mp_M07_AXI_awid_converter->scalar_out(M07_AXI_awid);
    mp_M07_AXI_transactor->AWID(m_M07_AXI_awid_converter_signal);
    mp_M07_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_awaddr_converter");
    mp_M07_AXI_awaddr_converter->vector_in(m_M07_AXI_awaddr_converter_signal);
    mp_M07_AXI_awaddr_converter->scalar_out(M07_AXI_awaddr);
    mp_M07_AXI_transactor->AWADDR(m_M07_AXI_awaddr_converter_signal);
    mp_M07_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M07_AXI_awlen_converter");
    mp_M07_AXI_awlen_converter->vector_in(m_M07_AXI_awlen_converter_signal);
    mp_M07_AXI_awlen_converter->scalar_out(M07_AXI_awlen);
    mp_M07_AXI_transactor->AWLEN(m_M07_AXI_awlen_converter_signal);
    mp_M07_AXI_transactor->AWSIZE(M07_AXI_awsize);
    mp_M07_AXI_transactor->AWBURST(M07_AXI_awburst);
    mp_M07_AXI_transactor->AWLOCK(M07_AXI_awlock);
    mp_M07_AXI_transactor->AWCACHE(M07_AXI_awcache);
    mp_M07_AXI_transactor->AWPROT(M07_AXI_awprot);
    mp_M07_AXI_transactor->AWREGION(M07_AXI_awregion);
    mp_M07_AXI_transactor->AWQOS(M07_AXI_awqos);
    mp_M07_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awuser_converter");
    mp_M07_AXI_awuser_converter->vector_in(m_M07_AXI_awuser_converter_signal);
    mp_M07_AXI_awuser_converter->scalar_out(M07_AXI_awuser);
    mp_M07_AXI_transactor->AWUSER(m_M07_AXI_awuser_converter_signal);
    mp_M07_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_awvalid_converter");
    mp_M07_AXI_awvalid_converter->scalar_in(m_M07_AXI_awvalid_converter_signal);
    mp_M07_AXI_awvalid_converter->vector_out(M07_AXI_awvalid);
    mp_M07_AXI_transactor->AWVALID(m_M07_AXI_awvalid_converter_signal);
    mp_M07_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awready_converter");
    mp_M07_AXI_awready_converter->vector_in(M07_AXI_awready);
    mp_M07_AXI_awready_converter->scalar_out(m_M07_AXI_awready_converter_signal);
    mp_M07_AXI_transactor->AWREADY(m_M07_AXI_awready_converter_signal);
    mp_M07_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_wdata_converter");
    mp_M07_AXI_wdata_converter->vector_in(m_M07_AXI_wdata_converter_signal);
    mp_M07_AXI_wdata_converter->scalar_out(M07_AXI_wdata);
    mp_M07_AXI_transactor->WDATA(m_M07_AXI_wdata_converter_signal);
    mp_M07_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M07_AXI_wstrb_converter");
    mp_M07_AXI_wstrb_converter->vector_in(m_M07_AXI_wstrb_converter_signal);
    mp_M07_AXI_wstrb_converter->scalar_out(M07_AXI_wstrb);
    mp_M07_AXI_transactor->WSTRB(m_M07_AXI_wstrb_converter_signal);
    mp_M07_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_wlast_converter");
    mp_M07_AXI_wlast_converter->scalar_in(m_M07_AXI_wlast_converter_signal);
    mp_M07_AXI_wlast_converter->vector_out(M07_AXI_wlast);
    mp_M07_AXI_transactor->WLAST(m_M07_AXI_wlast_converter_signal);
    mp_M07_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_wuser_converter");
    mp_M07_AXI_wuser_converter->vector_in(m_M07_AXI_wuser_converter_signal);
    mp_M07_AXI_wuser_converter->scalar_out(M07_AXI_wuser);
    mp_M07_AXI_transactor->WUSER(m_M07_AXI_wuser_converter_signal);
    mp_M07_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_wvalid_converter");
    mp_M07_AXI_wvalid_converter->scalar_in(m_M07_AXI_wvalid_converter_signal);
    mp_M07_AXI_wvalid_converter->vector_out(M07_AXI_wvalid);
    mp_M07_AXI_transactor->WVALID(m_M07_AXI_wvalid_converter_signal);
    mp_M07_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_wready_converter");
    mp_M07_AXI_wready_converter->vector_in(M07_AXI_wready);
    mp_M07_AXI_wready_converter->scalar_out(m_M07_AXI_wready_converter_signal);
    mp_M07_AXI_transactor->WREADY(m_M07_AXI_wready_converter_signal);
    mp_M07_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_bid_converter");
    mp_M07_AXI_bid_converter->scalar_in(M07_AXI_bid);
    mp_M07_AXI_bid_converter->vector_out(m_M07_AXI_bid_converter_signal);
    mp_M07_AXI_transactor->BID(m_M07_AXI_bid_converter_signal);
    mp_M07_AXI_transactor->BRESP(M07_AXI_bresp);
    mp_M07_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_buser_converter");
    mp_M07_AXI_buser_converter->scalar_in(M07_AXI_buser);
    mp_M07_AXI_buser_converter->vector_out(m_M07_AXI_buser_converter_signal);
    mp_M07_AXI_transactor->BUSER(m_M07_AXI_buser_converter_signal);
    mp_M07_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_bvalid_converter");
    mp_M07_AXI_bvalid_converter->vector_in(M07_AXI_bvalid);
    mp_M07_AXI_bvalid_converter->scalar_out(m_M07_AXI_bvalid_converter_signal);
    mp_M07_AXI_transactor->BVALID(m_M07_AXI_bvalid_converter_signal);
    mp_M07_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_bready_converter");
    mp_M07_AXI_bready_converter->scalar_in(m_M07_AXI_bready_converter_signal);
    mp_M07_AXI_bready_converter->vector_out(M07_AXI_bready);
    mp_M07_AXI_transactor->BREADY(m_M07_AXI_bready_converter_signal);
    mp_M07_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_arid_converter");
    mp_M07_AXI_arid_converter->vector_in(m_M07_AXI_arid_converter_signal);
    mp_M07_AXI_arid_converter->scalar_out(M07_AXI_arid);
    mp_M07_AXI_transactor->ARID(m_M07_AXI_arid_converter_signal);
    mp_M07_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_araddr_converter");
    mp_M07_AXI_araddr_converter->vector_in(m_M07_AXI_araddr_converter_signal);
    mp_M07_AXI_araddr_converter->scalar_out(M07_AXI_araddr);
    mp_M07_AXI_transactor->ARADDR(m_M07_AXI_araddr_converter_signal);
    mp_M07_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M07_AXI_arlen_converter");
    mp_M07_AXI_arlen_converter->vector_in(m_M07_AXI_arlen_converter_signal);
    mp_M07_AXI_arlen_converter->scalar_out(M07_AXI_arlen);
    mp_M07_AXI_transactor->ARLEN(m_M07_AXI_arlen_converter_signal);
    mp_M07_AXI_transactor->ARSIZE(M07_AXI_arsize);
    mp_M07_AXI_transactor->ARBURST(M07_AXI_arburst);
    mp_M07_AXI_transactor->ARLOCK(M07_AXI_arlock);
    mp_M07_AXI_transactor->ARCACHE(M07_AXI_arcache);
    mp_M07_AXI_transactor->ARPROT(M07_AXI_arprot);
    mp_M07_AXI_transactor->ARREGION(M07_AXI_arregion);
    mp_M07_AXI_transactor->ARQOS(M07_AXI_arqos);
    mp_M07_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_aruser_converter");
    mp_M07_AXI_aruser_converter->vector_in(m_M07_AXI_aruser_converter_signal);
    mp_M07_AXI_aruser_converter->scalar_out(M07_AXI_aruser);
    mp_M07_AXI_transactor->ARUSER(m_M07_AXI_aruser_converter_signal);
    mp_M07_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_arvalid_converter");
    mp_M07_AXI_arvalid_converter->scalar_in(m_M07_AXI_arvalid_converter_signal);
    mp_M07_AXI_arvalid_converter->vector_out(M07_AXI_arvalid);
    mp_M07_AXI_transactor->ARVALID(m_M07_AXI_arvalid_converter_signal);
    mp_M07_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_arready_converter");
    mp_M07_AXI_arready_converter->vector_in(M07_AXI_arready);
    mp_M07_AXI_arready_converter->scalar_out(m_M07_AXI_arready_converter_signal);
    mp_M07_AXI_transactor->ARREADY(m_M07_AXI_arready_converter_signal);
    mp_M07_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_rid_converter");
    mp_M07_AXI_rid_converter->scalar_in(M07_AXI_rid);
    mp_M07_AXI_rid_converter->vector_out(m_M07_AXI_rid_converter_signal);
    mp_M07_AXI_transactor->RID(m_M07_AXI_rid_converter_signal);
    mp_M07_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M07_AXI_rdata_converter");
    mp_M07_AXI_rdata_converter->scalar_in(M07_AXI_rdata);
    mp_M07_AXI_rdata_converter->vector_out(m_M07_AXI_rdata_converter_signal);
    mp_M07_AXI_transactor->RDATA(m_M07_AXI_rdata_converter_signal);
    mp_M07_AXI_transactor->RRESP(M07_AXI_rresp);
    mp_M07_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_rlast_converter");
    mp_M07_AXI_rlast_converter->vector_in(M07_AXI_rlast);
    mp_M07_AXI_rlast_converter->scalar_out(m_M07_AXI_rlast_converter_signal);
    mp_M07_AXI_transactor->RLAST(m_M07_AXI_rlast_converter_signal);
    mp_M07_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_ruser_converter");
    mp_M07_AXI_ruser_converter->scalar_in(M07_AXI_ruser);
    mp_M07_AXI_ruser_converter->vector_out(m_M07_AXI_ruser_converter_signal);
    mp_M07_AXI_transactor->RUSER(m_M07_AXI_ruser_converter_signal);
    mp_M07_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_rvalid_converter");
    mp_M07_AXI_rvalid_converter->vector_in(M07_AXI_rvalid);
    mp_M07_AXI_rvalid_converter->scalar_out(m_M07_AXI_rvalid_converter_signal);
    mp_M07_AXI_transactor->RVALID(m_M07_AXI_rvalid_converter_signal);
    mp_M07_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_rready_converter");
    mp_M07_AXI_rready_converter->scalar_in(m_M07_AXI_rready_converter_signal);
    mp_M07_AXI_rready_converter->vector_out(M07_AXI_rready);
    mp_M07_AXI_transactor->RREADY(m_M07_AXI_rready_converter_signal);
    mp_M07_AXI_transactor->CLK(aclk);
    mp_M07_AXI_transactor->RST(aresetn);

    // M07_AXI' transactor sockets

    mp_impl->M07_AXI_tlm_aximm_read_socket->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_impl->M07_AXI_tlm_aximm_write_socket->bind(*(mp_M07_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M08_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M08_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M08_AXI' transactor parameters
    xsc::common_cpp::properties M08_AXI_transactor_param_props;
    M08_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M08_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M08_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M08_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M08_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M08_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M08_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M08_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M08_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M08_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M08_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M08_AXI_transactor_param_props.addString("PROTOCOL", "");
    M08_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M08_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M08_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M08_AXI_transactor", M08_AXI_transactor_param_props);

    // M08_AXI' transactor ports

    mp_M08_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awid_converter");
    mp_M08_AXI_awid_converter->vector_in(m_M08_AXI_awid_converter_signal);
    mp_M08_AXI_awid_converter->scalar_out(M08_AXI_awid);
    mp_M08_AXI_transactor->AWID(m_M08_AXI_awid_converter_signal);
    mp_M08_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_awaddr_converter");
    mp_M08_AXI_awaddr_converter->vector_in(m_M08_AXI_awaddr_converter_signal);
    mp_M08_AXI_awaddr_converter->scalar_out(M08_AXI_awaddr);
    mp_M08_AXI_transactor->AWADDR(m_M08_AXI_awaddr_converter_signal);
    mp_M08_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M08_AXI_awlen_converter");
    mp_M08_AXI_awlen_converter->vector_in(m_M08_AXI_awlen_converter_signal);
    mp_M08_AXI_awlen_converter->scalar_out(M08_AXI_awlen);
    mp_M08_AXI_transactor->AWLEN(m_M08_AXI_awlen_converter_signal);
    mp_M08_AXI_transactor->AWSIZE(M08_AXI_awsize);
    mp_M08_AXI_transactor->AWBURST(M08_AXI_awburst);
    mp_M08_AXI_transactor->AWLOCK(M08_AXI_awlock);
    mp_M08_AXI_transactor->AWCACHE(M08_AXI_awcache);
    mp_M08_AXI_transactor->AWPROT(M08_AXI_awprot);
    mp_M08_AXI_transactor->AWREGION(M08_AXI_awregion);
    mp_M08_AXI_transactor->AWQOS(M08_AXI_awqos);
    mp_M08_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awuser_converter");
    mp_M08_AXI_awuser_converter->vector_in(m_M08_AXI_awuser_converter_signal);
    mp_M08_AXI_awuser_converter->scalar_out(M08_AXI_awuser);
    mp_M08_AXI_transactor->AWUSER(m_M08_AXI_awuser_converter_signal);
    mp_M08_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_awvalid_converter");
    mp_M08_AXI_awvalid_converter->scalar_in(m_M08_AXI_awvalid_converter_signal);
    mp_M08_AXI_awvalid_converter->vector_out(M08_AXI_awvalid);
    mp_M08_AXI_transactor->AWVALID(m_M08_AXI_awvalid_converter_signal);
    mp_M08_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awready_converter");
    mp_M08_AXI_awready_converter->vector_in(M08_AXI_awready);
    mp_M08_AXI_awready_converter->scalar_out(m_M08_AXI_awready_converter_signal);
    mp_M08_AXI_transactor->AWREADY(m_M08_AXI_awready_converter_signal);
    mp_M08_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_wdata_converter");
    mp_M08_AXI_wdata_converter->vector_in(m_M08_AXI_wdata_converter_signal);
    mp_M08_AXI_wdata_converter->scalar_out(M08_AXI_wdata);
    mp_M08_AXI_transactor->WDATA(m_M08_AXI_wdata_converter_signal);
    mp_M08_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M08_AXI_wstrb_converter");
    mp_M08_AXI_wstrb_converter->vector_in(m_M08_AXI_wstrb_converter_signal);
    mp_M08_AXI_wstrb_converter->scalar_out(M08_AXI_wstrb);
    mp_M08_AXI_transactor->WSTRB(m_M08_AXI_wstrb_converter_signal);
    mp_M08_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_wlast_converter");
    mp_M08_AXI_wlast_converter->scalar_in(m_M08_AXI_wlast_converter_signal);
    mp_M08_AXI_wlast_converter->vector_out(M08_AXI_wlast);
    mp_M08_AXI_transactor->WLAST(m_M08_AXI_wlast_converter_signal);
    mp_M08_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_wuser_converter");
    mp_M08_AXI_wuser_converter->vector_in(m_M08_AXI_wuser_converter_signal);
    mp_M08_AXI_wuser_converter->scalar_out(M08_AXI_wuser);
    mp_M08_AXI_transactor->WUSER(m_M08_AXI_wuser_converter_signal);
    mp_M08_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_wvalid_converter");
    mp_M08_AXI_wvalid_converter->scalar_in(m_M08_AXI_wvalid_converter_signal);
    mp_M08_AXI_wvalid_converter->vector_out(M08_AXI_wvalid);
    mp_M08_AXI_transactor->WVALID(m_M08_AXI_wvalid_converter_signal);
    mp_M08_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_wready_converter");
    mp_M08_AXI_wready_converter->vector_in(M08_AXI_wready);
    mp_M08_AXI_wready_converter->scalar_out(m_M08_AXI_wready_converter_signal);
    mp_M08_AXI_transactor->WREADY(m_M08_AXI_wready_converter_signal);
    mp_M08_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_bid_converter");
    mp_M08_AXI_bid_converter->scalar_in(M08_AXI_bid);
    mp_M08_AXI_bid_converter->vector_out(m_M08_AXI_bid_converter_signal);
    mp_M08_AXI_transactor->BID(m_M08_AXI_bid_converter_signal);
    mp_M08_AXI_transactor->BRESP(M08_AXI_bresp);
    mp_M08_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_buser_converter");
    mp_M08_AXI_buser_converter->scalar_in(M08_AXI_buser);
    mp_M08_AXI_buser_converter->vector_out(m_M08_AXI_buser_converter_signal);
    mp_M08_AXI_transactor->BUSER(m_M08_AXI_buser_converter_signal);
    mp_M08_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_bvalid_converter");
    mp_M08_AXI_bvalid_converter->vector_in(M08_AXI_bvalid);
    mp_M08_AXI_bvalid_converter->scalar_out(m_M08_AXI_bvalid_converter_signal);
    mp_M08_AXI_transactor->BVALID(m_M08_AXI_bvalid_converter_signal);
    mp_M08_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_bready_converter");
    mp_M08_AXI_bready_converter->scalar_in(m_M08_AXI_bready_converter_signal);
    mp_M08_AXI_bready_converter->vector_out(M08_AXI_bready);
    mp_M08_AXI_transactor->BREADY(m_M08_AXI_bready_converter_signal);
    mp_M08_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_arid_converter");
    mp_M08_AXI_arid_converter->vector_in(m_M08_AXI_arid_converter_signal);
    mp_M08_AXI_arid_converter->scalar_out(M08_AXI_arid);
    mp_M08_AXI_transactor->ARID(m_M08_AXI_arid_converter_signal);
    mp_M08_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_araddr_converter");
    mp_M08_AXI_araddr_converter->vector_in(m_M08_AXI_araddr_converter_signal);
    mp_M08_AXI_araddr_converter->scalar_out(M08_AXI_araddr);
    mp_M08_AXI_transactor->ARADDR(m_M08_AXI_araddr_converter_signal);
    mp_M08_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M08_AXI_arlen_converter");
    mp_M08_AXI_arlen_converter->vector_in(m_M08_AXI_arlen_converter_signal);
    mp_M08_AXI_arlen_converter->scalar_out(M08_AXI_arlen);
    mp_M08_AXI_transactor->ARLEN(m_M08_AXI_arlen_converter_signal);
    mp_M08_AXI_transactor->ARSIZE(M08_AXI_arsize);
    mp_M08_AXI_transactor->ARBURST(M08_AXI_arburst);
    mp_M08_AXI_transactor->ARLOCK(M08_AXI_arlock);
    mp_M08_AXI_transactor->ARCACHE(M08_AXI_arcache);
    mp_M08_AXI_transactor->ARPROT(M08_AXI_arprot);
    mp_M08_AXI_transactor->ARREGION(M08_AXI_arregion);
    mp_M08_AXI_transactor->ARQOS(M08_AXI_arqos);
    mp_M08_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_aruser_converter");
    mp_M08_AXI_aruser_converter->vector_in(m_M08_AXI_aruser_converter_signal);
    mp_M08_AXI_aruser_converter->scalar_out(M08_AXI_aruser);
    mp_M08_AXI_transactor->ARUSER(m_M08_AXI_aruser_converter_signal);
    mp_M08_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_arvalid_converter");
    mp_M08_AXI_arvalid_converter->scalar_in(m_M08_AXI_arvalid_converter_signal);
    mp_M08_AXI_arvalid_converter->vector_out(M08_AXI_arvalid);
    mp_M08_AXI_transactor->ARVALID(m_M08_AXI_arvalid_converter_signal);
    mp_M08_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_arready_converter");
    mp_M08_AXI_arready_converter->vector_in(M08_AXI_arready);
    mp_M08_AXI_arready_converter->scalar_out(m_M08_AXI_arready_converter_signal);
    mp_M08_AXI_transactor->ARREADY(m_M08_AXI_arready_converter_signal);
    mp_M08_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_rid_converter");
    mp_M08_AXI_rid_converter->scalar_in(M08_AXI_rid);
    mp_M08_AXI_rid_converter->vector_out(m_M08_AXI_rid_converter_signal);
    mp_M08_AXI_transactor->RID(m_M08_AXI_rid_converter_signal);
    mp_M08_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M08_AXI_rdata_converter");
    mp_M08_AXI_rdata_converter->scalar_in(M08_AXI_rdata);
    mp_M08_AXI_rdata_converter->vector_out(m_M08_AXI_rdata_converter_signal);
    mp_M08_AXI_transactor->RDATA(m_M08_AXI_rdata_converter_signal);
    mp_M08_AXI_transactor->RRESP(M08_AXI_rresp);
    mp_M08_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_rlast_converter");
    mp_M08_AXI_rlast_converter->vector_in(M08_AXI_rlast);
    mp_M08_AXI_rlast_converter->scalar_out(m_M08_AXI_rlast_converter_signal);
    mp_M08_AXI_transactor->RLAST(m_M08_AXI_rlast_converter_signal);
    mp_M08_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_ruser_converter");
    mp_M08_AXI_ruser_converter->scalar_in(M08_AXI_ruser);
    mp_M08_AXI_ruser_converter->vector_out(m_M08_AXI_ruser_converter_signal);
    mp_M08_AXI_transactor->RUSER(m_M08_AXI_ruser_converter_signal);
    mp_M08_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_rvalid_converter");
    mp_M08_AXI_rvalid_converter->vector_in(M08_AXI_rvalid);
    mp_M08_AXI_rvalid_converter->scalar_out(m_M08_AXI_rvalid_converter_signal);
    mp_M08_AXI_transactor->RVALID(m_M08_AXI_rvalid_converter_signal);
    mp_M08_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_rready_converter");
    mp_M08_AXI_rready_converter->scalar_in(m_M08_AXI_rready_converter_signal);
    mp_M08_AXI_rready_converter->vector_out(M08_AXI_rready);
    mp_M08_AXI_transactor->RREADY(m_M08_AXI_rready_converter_signal);
    mp_M08_AXI_transactor->CLK(aclk);
    mp_M08_AXI_transactor->RST(aresetn);

    // M08_AXI' transactor sockets

    mp_impl->M08_AXI_tlm_aximm_read_socket->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_impl->M08_AXI_tlm_aximm_write_socket->bind(*(mp_M08_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // RIVIERA




#ifdef VCSSYSTEMC
design_1_smartconnect_1_0::design_1_smartconnect_1_0(const sc_core::sc_module_name& nm) : design_1_smartconnect_1_0_sc(nm),  aclk("aclk"), aresetn("aresetn"), S00_AXI_awid("S00_AXI_awid"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wid("S00_AXI_wid"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bid("S00_AXI_bid"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_arid("S00_AXI_arid"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rid("S00_AXI_rid"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready"), M01_AXI_awaddr("M01_AXI_awaddr"), M01_AXI_awprot("M01_AXI_awprot"), M01_AXI_awvalid("M01_AXI_awvalid"), M01_AXI_awready("M01_AXI_awready"), M01_AXI_wdata("M01_AXI_wdata"), M01_AXI_wstrb("M01_AXI_wstrb"), M01_AXI_wvalid("M01_AXI_wvalid"), M01_AXI_wready("M01_AXI_wready"), M01_AXI_bresp("M01_AXI_bresp"), M01_AXI_bvalid("M01_AXI_bvalid"), M01_AXI_bready("M01_AXI_bready"), M01_AXI_araddr("M01_AXI_araddr"), M01_AXI_arprot("M01_AXI_arprot"), M01_AXI_arvalid("M01_AXI_arvalid"), M01_AXI_arready("M01_AXI_arready"), M01_AXI_rdata("M01_AXI_rdata"), M01_AXI_rresp("M01_AXI_rresp"), M01_AXI_rvalid("M01_AXI_rvalid"), M01_AXI_rready("M01_AXI_rready"), M02_AXI_awaddr("M02_AXI_awaddr"), M02_AXI_awprot("M02_AXI_awprot"), M02_AXI_awvalid("M02_AXI_awvalid"), M02_AXI_awready("M02_AXI_awready"), M02_AXI_wdata("M02_AXI_wdata"), M02_AXI_wstrb("M02_AXI_wstrb"), M02_AXI_wvalid("M02_AXI_wvalid"), M02_AXI_wready("M02_AXI_wready"), M02_AXI_bresp("M02_AXI_bresp"), M02_AXI_bvalid("M02_AXI_bvalid"), M02_AXI_bready("M02_AXI_bready"), M02_AXI_araddr("M02_AXI_araddr"), M02_AXI_arprot("M02_AXI_arprot"), M02_AXI_arvalid("M02_AXI_arvalid"), M02_AXI_arready("M02_AXI_arready"), M02_AXI_rdata("M02_AXI_rdata"), M02_AXI_rresp("M02_AXI_rresp"), M02_AXI_rvalid("M02_AXI_rvalid"), M02_AXI_rready("M02_AXI_rready"), M03_AXI_awaddr("M03_AXI_awaddr"), M03_AXI_awprot("M03_AXI_awprot"), M03_AXI_awvalid("M03_AXI_awvalid"), M03_AXI_awready("M03_AXI_awready"), M03_AXI_wdata("M03_AXI_wdata"), M03_AXI_wstrb("M03_AXI_wstrb"), M03_AXI_wvalid("M03_AXI_wvalid"), M03_AXI_wready("M03_AXI_wready"), M03_AXI_bresp("M03_AXI_bresp"), M03_AXI_bvalid("M03_AXI_bvalid"), M03_AXI_bready("M03_AXI_bready"), M03_AXI_araddr("M03_AXI_araddr"), M03_AXI_arprot("M03_AXI_arprot"), M03_AXI_arvalid("M03_AXI_arvalid"), M03_AXI_arready("M03_AXI_arready"), M03_AXI_rdata("M03_AXI_rdata"), M03_AXI_rresp("M03_AXI_rresp"), M03_AXI_rvalid("M03_AXI_rvalid"), M03_AXI_rready("M03_AXI_rready"), M04_AXI_awaddr("M04_AXI_awaddr"), M04_AXI_awprot("M04_AXI_awprot"), M04_AXI_awvalid("M04_AXI_awvalid"), M04_AXI_awready("M04_AXI_awready"), M04_AXI_wdata("M04_AXI_wdata"), M04_AXI_wstrb("M04_AXI_wstrb"), M04_AXI_wvalid("M04_AXI_wvalid"), M04_AXI_wready("M04_AXI_wready"), M04_AXI_bresp("M04_AXI_bresp"), M04_AXI_bvalid("M04_AXI_bvalid"), M04_AXI_bready("M04_AXI_bready"), M04_AXI_araddr("M04_AXI_araddr"), M04_AXI_arprot("M04_AXI_arprot"), M04_AXI_arvalid("M04_AXI_arvalid"), M04_AXI_arready("M04_AXI_arready"), M04_AXI_rdata("M04_AXI_rdata"), M04_AXI_rresp("M04_AXI_rresp"), M04_AXI_rvalid("M04_AXI_rvalid"), M04_AXI_rready("M04_AXI_rready"), M05_AXI_awid("M05_AXI_awid"), M05_AXI_awaddr("M05_AXI_awaddr"), M05_AXI_awlen("M05_AXI_awlen"), M05_AXI_awsize("M05_AXI_awsize"), M05_AXI_awburst("M05_AXI_awburst"), M05_AXI_awlock("M05_AXI_awlock"), M05_AXI_awcache("M05_AXI_awcache"), M05_AXI_awprot("M05_AXI_awprot"), M05_AXI_awregion("M05_AXI_awregion"), M05_AXI_awqos("M05_AXI_awqos"), M05_AXI_awuser("M05_AXI_awuser"), M05_AXI_awvalid("M05_AXI_awvalid"), M05_AXI_awready("M05_AXI_awready"), M05_AXI_wid("M05_AXI_wid"), M05_AXI_wdata("M05_AXI_wdata"), M05_AXI_wstrb("M05_AXI_wstrb"), M05_AXI_wlast("M05_AXI_wlast"), M05_AXI_wuser("M05_AXI_wuser"), M05_AXI_wvalid("M05_AXI_wvalid"), M05_AXI_wready("M05_AXI_wready"), M05_AXI_bid("M05_AXI_bid"), M05_AXI_bresp("M05_AXI_bresp"), M05_AXI_buser("M05_AXI_buser"), M05_AXI_bvalid("M05_AXI_bvalid"), M05_AXI_bready("M05_AXI_bready"), M05_AXI_arid("M05_AXI_arid"), M05_AXI_araddr("M05_AXI_araddr"), M05_AXI_arlen("M05_AXI_arlen"), M05_AXI_arsize("M05_AXI_arsize"), M05_AXI_arburst("M05_AXI_arburst"), M05_AXI_arlock("M05_AXI_arlock"), M05_AXI_arcache("M05_AXI_arcache"), M05_AXI_arprot("M05_AXI_arprot"), M05_AXI_arregion("M05_AXI_arregion"), M05_AXI_arqos("M05_AXI_arqos"), M05_AXI_aruser("M05_AXI_aruser"), M05_AXI_arvalid("M05_AXI_arvalid"), M05_AXI_arready("M05_AXI_arready"), M05_AXI_rid("M05_AXI_rid"), M05_AXI_rdata("M05_AXI_rdata"), M05_AXI_rresp("M05_AXI_rresp"), M05_AXI_rlast("M05_AXI_rlast"), M05_AXI_ruser("M05_AXI_ruser"), M05_AXI_rvalid("M05_AXI_rvalid"), M05_AXI_rready("M05_AXI_rready"), M06_AXI_awid("M06_AXI_awid"), M06_AXI_awaddr("M06_AXI_awaddr"), M06_AXI_awlen("M06_AXI_awlen"), M06_AXI_awsize("M06_AXI_awsize"), M06_AXI_awburst("M06_AXI_awburst"), M06_AXI_awlock("M06_AXI_awlock"), M06_AXI_awcache("M06_AXI_awcache"), M06_AXI_awprot("M06_AXI_awprot"), M06_AXI_awregion("M06_AXI_awregion"), M06_AXI_awqos("M06_AXI_awqos"), M06_AXI_awuser("M06_AXI_awuser"), M06_AXI_awvalid("M06_AXI_awvalid"), M06_AXI_awready("M06_AXI_awready"), M06_AXI_wid("M06_AXI_wid"), M06_AXI_wdata("M06_AXI_wdata"), M06_AXI_wstrb("M06_AXI_wstrb"), M06_AXI_wlast("M06_AXI_wlast"), M06_AXI_wuser("M06_AXI_wuser"), M06_AXI_wvalid("M06_AXI_wvalid"), M06_AXI_wready("M06_AXI_wready"), M06_AXI_bid("M06_AXI_bid"), M06_AXI_bresp("M06_AXI_bresp"), M06_AXI_buser("M06_AXI_buser"), M06_AXI_bvalid("M06_AXI_bvalid"), M06_AXI_bready("M06_AXI_bready"), M06_AXI_arid("M06_AXI_arid"), M06_AXI_araddr("M06_AXI_araddr"), M06_AXI_arlen("M06_AXI_arlen"), M06_AXI_arsize("M06_AXI_arsize"), M06_AXI_arburst("M06_AXI_arburst"), M06_AXI_arlock("M06_AXI_arlock"), M06_AXI_arcache("M06_AXI_arcache"), M06_AXI_arprot("M06_AXI_arprot"), M06_AXI_arregion("M06_AXI_arregion"), M06_AXI_arqos("M06_AXI_arqos"), M06_AXI_aruser("M06_AXI_aruser"), M06_AXI_arvalid("M06_AXI_arvalid"), M06_AXI_arready("M06_AXI_arready"), M06_AXI_rid("M06_AXI_rid"), M06_AXI_rdata("M06_AXI_rdata"), M06_AXI_rresp("M06_AXI_rresp"), M06_AXI_rlast("M06_AXI_rlast"), M06_AXI_ruser("M06_AXI_ruser"), M06_AXI_rvalid("M06_AXI_rvalid"), M06_AXI_rready("M06_AXI_rready"), M07_AXI_awid("M07_AXI_awid"), M07_AXI_awaddr("M07_AXI_awaddr"), M07_AXI_awlen("M07_AXI_awlen"), M07_AXI_awsize("M07_AXI_awsize"), M07_AXI_awburst("M07_AXI_awburst"), M07_AXI_awlock("M07_AXI_awlock"), M07_AXI_awcache("M07_AXI_awcache"), M07_AXI_awprot("M07_AXI_awprot"), M07_AXI_awregion("M07_AXI_awregion"), M07_AXI_awqos("M07_AXI_awqos"), M07_AXI_awuser("M07_AXI_awuser"), M07_AXI_awvalid("M07_AXI_awvalid"), M07_AXI_awready("M07_AXI_awready"), M07_AXI_wid("M07_AXI_wid"), M07_AXI_wdata("M07_AXI_wdata"), M07_AXI_wstrb("M07_AXI_wstrb"), M07_AXI_wlast("M07_AXI_wlast"), M07_AXI_wuser("M07_AXI_wuser"), M07_AXI_wvalid("M07_AXI_wvalid"), M07_AXI_wready("M07_AXI_wready"), M07_AXI_bid("M07_AXI_bid"), M07_AXI_bresp("M07_AXI_bresp"), M07_AXI_buser("M07_AXI_buser"), M07_AXI_bvalid("M07_AXI_bvalid"), M07_AXI_bready("M07_AXI_bready"), M07_AXI_arid("M07_AXI_arid"), M07_AXI_araddr("M07_AXI_araddr"), M07_AXI_arlen("M07_AXI_arlen"), M07_AXI_arsize("M07_AXI_arsize"), M07_AXI_arburst("M07_AXI_arburst"), M07_AXI_arlock("M07_AXI_arlock"), M07_AXI_arcache("M07_AXI_arcache"), M07_AXI_arprot("M07_AXI_arprot"), M07_AXI_arregion("M07_AXI_arregion"), M07_AXI_arqos("M07_AXI_arqos"), M07_AXI_aruser("M07_AXI_aruser"), M07_AXI_arvalid("M07_AXI_arvalid"), M07_AXI_arready("M07_AXI_arready"), M07_AXI_rid("M07_AXI_rid"), M07_AXI_rdata("M07_AXI_rdata"), M07_AXI_rresp("M07_AXI_rresp"), M07_AXI_rlast("M07_AXI_rlast"), M07_AXI_ruser("M07_AXI_ruser"), M07_AXI_rvalid("M07_AXI_rvalid"), M07_AXI_rready("M07_AXI_rready"), M08_AXI_awid("M08_AXI_awid"), M08_AXI_awaddr("M08_AXI_awaddr"), M08_AXI_awlen("M08_AXI_awlen"), M08_AXI_awsize("M08_AXI_awsize"), M08_AXI_awburst("M08_AXI_awburst"), M08_AXI_awlock("M08_AXI_awlock"), M08_AXI_awcache("M08_AXI_awcache"), M08_AXI_awprot("M08_AXI_awprot"), M08_AXI_awregion("M08_AXI_awregion"), M08_AXI_awqos("M08_AXI_awqos"), M08_AXI_awuser("M08_AXI_awuser"), M08_AXI_awvalid("M08_AXI_awvalid"), M08_AXI_awready("M08_AXI_awready"), M08_AXI_wid("M08_AXI_wid"), M08_AXI_wdata("M08_AXI_wdata"), M08_AXI_wstrb("M08_AXI_wstrb"), M08_AXI_wlast("M08_AXI_wlast"), M08_AXI_wuser("M08_AXI_wuser"), M08_AXI_wvalid("M08_AXI_wvalid"), M08_AXI_wready("M08_AXI_wready"), M08_AXI_bid("M08_AXI_bid"), M08_AXI_bresp("M08_AXI_bresp"), M08_AXI_buser("M08_AXI_buser"), M08_AXI_bvalid("M08_AXI_bvalid"), M08_AXI_bready("M08_AXI_bready"), M08_AXI_arid("M08_AXI_arid"), M08_AXI_araddr("M08_AXI_araddr"), M08_AXI_arlen("M08_AXI_arlen"), M08_AXI_arsize("M08_AXI_arsize"), M08_AXI_arburst("M08_AXI_arburst"), M08_AXI_arlock("M08_AXI_arlock"), M08_AXI_arcache("M08_AXI_arcache"), M08_AXI_arprot("M08_AXI_arprot"), M08_AXI_arregion("M08_AXI_arregion"), M08_AXI_arqos("M08_AXI_arqos"), M08_AXI_aruser("M08_AXI_aruser"), M08_AXI_arvalid("M08_AXI_arvalid"), M08_AXI_arready("M08_AXI_arready"), M08_AXI_rid("M08_AXI_rid"), M08_AXI_rdata("M08_AXI_rdata"), M08_AXI_rresp("M08_AXI_rresp"), M08_AXI_rlast("M08_AXI_rlast"), M08_AXI_ruser("M08_AXI_ruser"), M08_AXI_rvalid("M08_AXI_rvalid"), M08_AXI_rready("M08_AXI_rready")
{
  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlen_converter = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlen_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_M02_AXI_transactor = NULL;
  mp_M03_AXI_transactor = NULL;
  mp_M04_AXI_transactor = NULL;
  mp_M05_AXI_transactor = NULL;
  mp_M05_AXI_awid_converter = NULL;
  mp_M05_AXI_awaddr_converter = NULL;
  mp_M05_AXI_awlen_converter = NULL;
  mp_M05_AXI_awuser_converter = NULL;
  mp_M05_AXI_awvalid_converter = NULL;
  mp_M05_AXI_awready_converter = NULL;
  mp_M05_AXI_wdata_converter = NULL;
  mp_M05_AXI_wstrb_converter = NULL;
  mp_M05_AXI_wlast_converter = NULL;
  mp_M05_AXI_wuser_converter = NULL;
  mp_M05_AXI_wvalid_converter = NULL;
  mp_M05_AXI_wready_converter = NULL;
  mp_M05_AXI_bid_converter = NULL;
  mp_M05_AXI_buser_converter = NULL;
  mp_M05_AXI_bvalid_converter = NULL;
  mp_M05_AXI_bready_converter = NULL;
  mp_M05_AXI_arid_converter = NULL;
  mp_M05_AXI_araddr_converter = NULL;
  mp_M05_AXI_arlen_converter = NULL;
  mp_M05_AXI_aruser_converter = NULL;
  mp_M05_AXI_arvalid_converter = NULL;
  mp_M05_AXI_arready_converter = NULL;
  mp_M05_AXI_rid_converter = NULL;
  mp_M05_AXI_rdata_converter = NULL;
  mp_M05_AXI_rlast_converter = NULL;
  mp_M05_AXI_ruser_converter = NULL;
  mp_M05_AXI_rvalid_converter = NULL;
  mp_M05_AXI_rready_converter = NULL;
  mp_M06_AXI_transactor = NULL;
  mp_M06_AXI_awid_converter = NULL;
  mp_M06_AXI_awaddr_converter = NULL;
  mp_M06_AXI_awlen_converter = NULL;
  mp_M06_AXI_awuser_converter = NULL;
  mp_M06_AXI_awvalid_converter = NULL;
  mp_M06_AXI_awready_converter = NULL;
  mp_M06_AXI_wdata_converter = NULL;
  mp_M06_AXI_wstrb_converter = NULL;
  mp_M06_AXI_wlast_converter = NULL;
  mp_M06_AXI_wuser_converter = NULL;
  mp_M06_AXI_wvalid_converter = NULL;
  mp_M06_AXI_wready_converter = NULL;
  mp_M06_AXI_bid_converter = NULL;
  mp_M06_AXI_buser_converter = NULL;
  mp_M06_AXI_bvalid_converter = NULL;
  mp_M06_AXI_bready_converter = NULL;
  mp_M06_AXI_arid_converter = NULL;
  mp_M06_AXI_araddr_converter = NULL;
  mp_M06_AXI_arlen_converter = NULL;
  mp_M06_AXI_aruser_converter = NULL;
  mp_M06_AXI_arvalid_converter = NULL;
  mp_M06_AXI_arready_converter = NULL;
  mp_M06_AXI_rid_converter = NULL;
  mp_M06_AXI_rdata_converter = NULL;
  mp_M06_AXI_rlast_converter = NULL;
  mp_M06_AXI_ruser_converter = NULL;
  mp_M06_AXI_rvalid_converter = NULL;
  mp_M06_AXI_rready_converter = NULL;
  mp_M07_AXI_transactor = NULL;
  mp_M07_AXI_awid_converter = NULL;
  mp_M07_AXI_awaddr_converter = NULL;
  mp_M07_AXI_awlen_converter = NULL;
  mp_M07_AXI_awuser_converter = NULL;
  mp_M07_AXI_awvalid_converter = NULL;
  mp_M07_AXI_awready_converter = NULL;
  mp_M07_AXI_wdata_converter = NULL;
  mp_M07_AXI_wstrb_converter = NULL;
  mp_M07_AXI_wlast_converter = NULL;
  mp_M07_AXI_wuser_converter = NULL;
  mp_M07_AXI_wvalid_converter = NULL;
  mp_M07_AXI_wready_converter = NULL;
  mp_M07_AXI_bid_converter = NULL;
  mp_M07_AXI_buser_converter = NULL;
  mp_M07_AXI_bvalid_converter = NULL;
  mp_M07_AXI_bready_converter = NULL;
  mp_M07_AXI_arid_converter = NULL;
  mp_M07_AXI_araddr_converter = NULL;
  mp_M07_AXI_arlen_converter = NULL;
  mp_M07_AXI_aruser_converter = NULL;
  mp_M07_AXI_arvalid_converter = NULL;
  mp_M07_AXI_arready_converter = NULL;
  mp_M07_AXI_rid_converter = NULL;
  mp_M07_AXI_rdata_converter = NULL;
  mp_M07_AXI_rlast_converter = NULL;
  mp_M07_AXI_ruser_converter = NULL;
  mp_M07_AXI_rvalid_converter = NULL;
  mp_M07_AXI_rready_converter = NULL;
  mp_M08_AXI_transactor = NULL;
  mp_M08_AXI_awid_converter = NULL;
  mp_M08_AXI_awaddr_converter = NULL;
  mp_M08_AXI_awlen_converter = NULL;
  mp_M08_AXI_awuser_converter = NULL;
  mp_M08_AXI_awvalid_converter = NULL;
  mp_M08_AXI_awready_converter = NULL;
  mp_M08_AXI_wdata_converter = NULL;
  mp_M08_AXI_wstrb_converter = NULL;
  mp_M08_AXI_wlast_converter = NULL;
  mp_M08_AXI_wuser_converter = NULL;
  mp_M08_AXI_wvalid_converter = NULL;
  mp_M08_AXI_wready_converter = NULL;
  mp_M08_AXI_bid_converter = NULL;
  mp_M08_AXI_buser_converter = NULL;
  mp_M08_AXI_bvalid_converter = NULL;
  mp_M08_AXI_bready_converter = NULL;
  mp_M08_AXI_arid_converter = NULL;
  mp_M08_AXI_araddr_converter = NULL;
  mp_M08_AXI_arlen_converter = NULL;
  mp_M08_AXI_aruser_converter = NULL;
  mp_M08_AXI_arvalid_converter = NULL;
  mp_M08_AXI_arready_converter = NULL;
  mp_M08_AXI_rid_converter = NULL;
  mp_M08_AXI_rdata_converter = NULL;
  mp_M08_AXI_rlast_converter = NULL;
  mp_M08_AXI_ruser_converter = NULL;
  mp_M08_AXI_rvalid_converter = NULL;
  mp_M08_AXI_rready_converter = NULL;

  // Instantiate Socket Stubs

  // configure S00_AXI_transactor
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI3");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);
  mp_S00_AXI_transactor->AWID(S00_AXI_awid);
  mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
  mp_S00_AXI_awlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_awlen_converter");
  mp_S00_AXI_awlen_converter->vector_in(S00_AXI_awlen);
  mp_S00_AXI_awlen_converter->vector_out(m_S00_AXI_awlen_converter_signal);
  mp_S00_AXI_transactor->AWLEN(m_S00_AXI_awlen_converter_signal);
  mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
  mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
  mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_awlock_converter");
  mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
  mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
  mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
  mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
  mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
  mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
  mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
  mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
  mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
  mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
  mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
  mp_S00_AXI_transactor->BID(S00_AXI_bid);
  mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
  mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
  mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
  mp_S00_AXI_transactor->ARID(S00_AXI_arid);
  mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
  mp_S00_AXI_arlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_arlen_converter");
  mp_S00_AXI_arlen_converter->vector_in(S00_AXI_arlen);
  mp_S00_AXI_arlen_converter->vector_out(m_S00_AXI_arlen_converter_signal);
  mp_S00_AXI_transactor->ARLEN(m_S00_AXI_arlen_converter_signal);
  mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
  mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
  mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_arlock_converter");
  mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
  mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
  mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
  mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
  mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
  mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
  mp_S00_AXI_transactor->RID(S00_AXI_rid);
  mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
  mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
  mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
  mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
  mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
  mp_S00_AXI_transactor->CLK(aclk);
  mp_S00_AXI_transactor->RST(aresetn);
  // configure M00_AXI_transactor
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "9");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,9,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);
  mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
  mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
  mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
  mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
  mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
  mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
  mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
  mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
  mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
  mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
  mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
  mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
  mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
  mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
  mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
  mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
  mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
  mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
  mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
  mp_M00_AXI_transactor->CLK(aclk);
  mp_M00_AXI_transactor->RST(aresetn);
  // configure M01_AXI_transactor
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "6");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,6,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);
  mp_M01_AXI_transactor->AWADDR(M01_AXI_awaddr);
  mp_M01_AXI_transactor->AWPROT(M01_AXI_awprot);
  mp_M01_AXI_transactor->AWVALID(M01_AXI_awvalid);
  mp_M01_AXI_transactor->AWREADY(M01_AXI_awready);
  mp_M01_AXI_transactor->WDATA(M01_AXI_wdata);
  mp_M01_AXI_transactor->WSTRB(M01_AXI_wstrb);
  mp_M01_AXI_transactor->WVALID(M01_AXI_wvalid);
  mp_M01_AXI_transactor->WREADY(M01_AXI_wready);
  mp_M01_AXI_transactor->BRESP(M01_AXI_bresp);
  mp_M01_AXI_transactor->BVALID(M01_AXI_bvalid);
  mp_M01_AXI_transactor->BREADY(M01_AXI_bready);
  mp_M01_AXI_transactor->ARADDR(M01_AXI_araddr);
  mp_M01_AXI_transactor->ARPROT(M01_AXI_arprot);
  mp_M01_AXI_transactor->ARVALID(M01_AXI_arvalid);
  mp_M01_AXI_transactor->ARREADY(M01_AXI_arready);
  mp_M01_AXI_transactor->RDATA(M01_AXI_rdata);
  mp_M01_AXI_transactor->RRESP(M01_AXI_rresp);
  mp_M01_AXI_transactor->RVALID(M01_AXI_rvalid);
  mp_M01_AXI_transactor->RREADY(M01_AXI_rready);
  mp_M01_AXI_transactor->CLK(aclk);
  mp_M01_AXI_transactor->RST(aresetn);
  // configure M02_AXI_transactor
    xsc::common_cpp::properties M02_AXI_transactor_param_props;
    M02_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M02_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M02_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ADDR_WIDTH", "9");
    M02_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M02_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M02_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M02_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M02_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M02_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M02_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M02_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M02_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M02_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M02_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M02_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M02_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M02_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M02_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,9,1,1,1,1,1,1>("M02_AXI_transactor", M02_AXI_transactor_param_props);
  mp_M02_AXI_transactor->AWADDR(M02_AXI_awaddr);
  mp_M02_AXI_transactor->AWPROT(M02_AXI_awprot);
  mp_M02_AXI_transactor->AWVALID(M02_AXI_awvalid);
  mp_M02_AXI_transactor->AWREADY(M02_AXI_awready);
  mp_M02_AXI_transactor->WDATA(M02_AXI_wdata);
  mp_M02_AXI_transactor->WSTRB(M02_AXI_wstrb);
  mp_M02_AXI_transactor->WVALID(M02_AXI_wvalid);
  mp_M02_AXI_transactor->WREADY(M02_AXI_wready);
  mp_M02_AXI_transactor->BRESP(M02_AXI_bresp);
  mp_M02_AXI_transactor->BVALID(M02_AXI_bvalid);
  mp_M02_AXI_transactor->BREADY(M02_AXI_bready);
  mp_M02_AXI_transactor->ARADDR(M02_AXI_araddr);
  mp_M02_AXI_transactor->ARPROT(M02_AXI_arprot);
  mp_M02_AXI_transactor->ARVALID(M02_AXI_arvalid);
  mp_M02_AXI_transactor->ARREADY(M02_AXI_arready);
  mp_M02_AXI_transactor->RDATA(M02_AXI_rdata);
  mp_M02_AXI_transactor->RRESP(M02_AXI_rresp);
  mp_M02_AXI_transactor->RVALID(M02_AXI_rvalid);
  mp_M02_AXI_transactor->RREADY(M02_AXI_rready);
  mp_M02_AXI_transactor->CLK(aclk);
  mp_M02_AXI_transactor->RST(aresetn);
  // configure M03_AXI_transactor
    xsc::common_cpp::properties M03_AXI_transactor_param_props;
    M03_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M03_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M03_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ADDR_WIDTH", "8");
    M03_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M03_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M03_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M03_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M03_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M03_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M03_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M03_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M03_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M03_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M03_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M03_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M03_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M03_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M03_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,8,1,1,1,1,1,1>("M03_AXI_transactor", M03_AXI_transactor_param_props);
  mp_M03_AXI_transactor->AWADDR(M03_AXI_awaddr);
  mp_M03_AXI_transactor->AWPROT(M03_AXI_awprot);
  mp_M03_AXI_transactor->AWVALID(M03_AXI_awvalid);
  mp_M03_AXI_transactor->AWREADY(M03_AXI_awready);
  mp_M03_AXI_transactor->WDATA(M03_AXI_wdata);
  mp_M03_AXI_transactor->WSTRB(M03_AXI_wstrb);
  mp_M03_AXI_transactor->WVALID(M03_AXI_wvalid);
  mp_M03_AXI_transactor->WREADY(M03_AXI_wready);
  mp_M03_AXI_transactor->BRESP(M03_AXI_bresp);
  mp_M03_AXI_transactor->BVALID(M03_AXI_bvalid);
  mp_M03_AXI_transactor->BREADY(M03_AXI_bready);
  mp_M03_AXI_transactor->ARADDR(M03_AXI_araddr);
  mp_M03_AXI_transactor->ARPROT(M03_AXI_arprot);
  mp_M03_AXI_transactor->ARVALID(M03_AXI_arvalid);
  mp_M03_AXI_transactor->ARREADY(M03_AXI_arready);
  mp_M03_AXI_transactor->RDATA(M03_AXI_rdata);
  mp_M03_AXI_transactor->RRESP(M03_AXI_rresp);
  mp_M03_AXI_transactor->RVALID(M03_AXI_rvalid);
  mp_M03_AXI_transactor->RREADY(M03_AXI_rready);
  mp_M03_AXI_transactor->CLK(aclk);
  mp_M03_AXI_transactor->RST(aresetn);
  // configure M04_AXI_transactor
    xsc::common_cpp::properties M04_AXI_transactor_param_props;
    M04_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M04_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M04_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ADDR_WIDTH", "7");
    M04_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M04_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M04_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M04_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M04_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M04_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M04_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M04_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M04_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M04_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M04_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M04_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M04_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M04_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M04_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,7,1,1,1,1,1,1>("M04_AXI_transactor", M04_AXI_transactor_param_props);
  mp_M04_AXI_transactor->AWADDR(M04_AXI_awaddr);
  mp_M04_AXI_transactor->AWPROT(M04_AXI_awprot);
  mp_M04_AXI_transactor->AWVALID(M04_AXI_awvalid);
  mp_M04_AXI_transactor->AWREADY(M04_AXI_awready);
  mp_M04_AXI_transactor->WDATA(M04_AXI_wdata);
  mp_M04_AXI_transactor->WSTRB(M04_AXI_wstrb);
  mp_M04_AXI_transactor->WVALID(M04_AXI_wvalid);
  mp_M04_AXI_transactor->WREADY(M04_AXI_wready);
  mp_M04_AXI_transactor->BRESP(M04_AXI_bresp);
  mp_M04_AXI_transactor->BVALID(M04_AXI_bvalid);
  mp_M04_AXI_transactor->BREADY(M04_AXI_bready);
  mp_M04_AXI_transactor->ARADDR(M04_AXI_araddr);
  mp_M04_AXI_transactor->ARPROT(M04_AXI_arprot);
  mp_M04_AXI_transactor->ARVALID(M04_AXI_arvalid);
  mp_M04_AXI_transactor->ARREADY(M04_AXI_arready);
  mp_M04_AXI_transactor->RDATA(M04_AXI_rdata);
  mp_M04_AXI_transactor->RRESP(M04_AXI_rresp);
  mp_M04_AXI_transactor->RVALID(M04_AXI_rvalid);
  mp_M04_AXI_transactor->RREADY(M04_AXI_rready);
  mp_M04_AXI_transactor->CLK(aclk);
  mp_M04_AXI_transactor->RST(aresetn);
  // configure M05_AXI_transactor
    xsc::common_cpp::properties M05_AXI_transactor_param_props;
    M05_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M05_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M05_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M05_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M05_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M05_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M05_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M05_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M05_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M05_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M05_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M05_AXI_transactor_param_props.addString("PROTOCOL", "");
    M05_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M05_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M05_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M05_AXI_transactor", M05_AXI_transactor_param_props);
  mp_M05_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awid_converter");
  mp_M05_AXI_awid_converter->vector_in(m_M05_AXI_awid_converter_signal);
  mp_M05_AXI_awid_converter->scalar_out(M05_AXI_awid);
  mp_M05_AXI_transactor->AWID(m_M05_AXI_awid_converter_signal);
  mp_M05_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_awaddr_converter");
  mp_M05_AXI_awaddr_converter->vector_in(m_M05_AXI_awaddr_converter_signal);
  mp_M05_AXI_awaddr_converter->scalar_out(M05_AXI_awaddr);
  mp_M05_AXI_transactor->AWADDR(m_M05_AXI_awaddr_converter_signal);
  mp_M05_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M05_AXI_awlen_converter");
  mp_M05_AXI_awlen_converter->vector_in(m_M05_AXI_awlen_converter_signal);
  mp_M05_AXI_awlen_converter->scalar_out(M05_AXI_awlen);
  mp_M05_AXI_transactor->AWLEN(m_M05_AXI_awlen_converter_signal);
  mp_M05_AXI_transactor->AWSIZE(M05_AXI_awsize);
  mp_M05_AXI_transactor->AWBURST(M05_AXI_awburst);
  mp_M05_AXI_transactor->AWLOCK(M05_AXI_awlock);
  mp_M05_AXI_transactor->AWCACHE(M05_AXI_awcache);
  mp_M05_AXI_transactor->AWPROT(M05_AXI_awprot);
  mp_M05_AXI_transactor->AWREGION(M05_AXI_awregion);
  mp_M05_AXI_transactor->AWQOS(M05_AXI_awqos);
  mp_M05_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awuser_converter");
  mp_M05_AXI_awuser_converter->vector_in(m_M05_AXI_awuser_converter_signal);
  mp_M05_AXI_awuser_converter->scalar_out(M05_AXI_awuser);
  mp_M05_AXI_transactor->AWUSER(m_M05_AXI_awuser_converter_signal);
  mp_M05_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_awvalid_converter");
  mp_M05_AXI_awvalid_converter->scalar_in(m_M05_AXI_awvalid_converter_signal);
  mp_M05_AXI_awvalid_converter->vector_out(M05_AXI_awvalid);
  mp_M05_AXI_transactor->AWVALID(m_M05_AXI_awvalid_converter_signal);
  mp_M05_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awready_converter");
  mp_M05_AXI_awready_converter->vector_in(M05_AXI_awready);
  mp_M05_AXI_awready_converter->scalar_out(m_M05_AXI_awready_converter_signal);
  mp_M05_AXI_transactor->AWREADY(m_M05_AXI_awready_converter_signal);
  mp_M05_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_wdata_converter");
  mp_M05_AXI_wdata_converter->vector_in(m_M05_AXI_wdata_converter_signal);
  mp_M05_AXI_wdata_converter->scalar_out(M05_AXI_wdata);
  mp_M05_AXI_transactor->WDATA(m_M05_AXI_wdata_converter_signal);
  mp_M05_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M05_AXI_wstrb_converter");
  mp_M05_AXI_wstrb_converter->vector_in(m_M05_AXI_wstrb_converter_signal);
  mp_M05_AXI_wstrb_converter->scalar_out(M05_AXI_wstrb);
  mp_M05_AXI_transactor->WSTRB(m_M05_AXI_wstrb_converter_signal);
  mp_M05_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_wlast_converter");
  mp_M05_AXI_wlast_converter->scalar_in(m_M05_AXI_wlast_converter_signal);
  mp_M05_AXI_wlast_converter->vector_out(M05_AXI_wlast);
  mp_M05_AXI_transactor->WLAST(m_M05_AXI_wlast_converter_signal);
  mp_M05_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_wuser_converter");
  mp_M05_AXI_wuser_converter->vector_in(m_M05_AXI_wuser_converter_signal);
  mp_M05_AXI_wuser_converter->scalar_out(M05_AXI_wuser);
  mp_M05_AXI_transactor->WUSER(m_M05_AXI_wuser_converter_signal);
  mp_M05_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_wvalid_converter");
  mp_M05_AXI_wvalid_converter->scalar_in(m_M05_AXI_wvalid_converter_signal);
  mp_M05_AXI_wvalid_converter->vector_out(M05_AXI_wvalid);
  mp_M05_AXI_transactor->WVALID(m_M05_AXI_wvalid_converter_signal);
  mp_M05_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_wready_converter");
  mp_M05_AXI_wready_converter->vector_in(M05_AXI_wready);
  mp_M05_AXI_wready_converter->scalar_out(m_M05_AXI_wready_converter_signal);
  mp_M05_AXI_transactor->WREADY(m_M05_AXI_wready_converter_signal);
  mp_M05_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_bid_converter");
  mp_M05_AXI_bid_converter->scalar_in(M05_AXI_bid);
  mp_M05_AXI_bid_converter->vector_out(m_M05_AXI_bid_converter_signal);
  mp_M05_AXI_transactor->BID(m_M05_AXI_bid_converter_signal);
  mp_M05_AXI_transactor->BRESP(M05_AXI_bresp);
  mp_M05_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_buser_converter");
  mp_M05_AXI_buser_converter->scalar_in(M05_AXI_buser);
  mp_M05_AXI_buser_converter->vector_out(m_M05_AXI_buser_converter_signal);
  mp_M05_AXI_transactor->BUSER(m_M05_AXI_buser_converter_signal);
  mp_M05_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_bvalid_converter");
  mp_M05_AXI_bvalid_converter->vector_in(M05_AXI_bvalid);
  mp_M05_AXI_bvalid_converter->scalar_out(m_M05_AXI_bvalid_converter_signal);
  mp_M05_AXI_transactor->BVALID(m_M05_AXI_bvalid_converter_signal);
  mp_M05_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_bready_converter");
  mp_M05_AXI_bready_converter->scalar_in(m_M05_AXI_bready_converter_signal);
  mp_M05_AXI_bready_converter->vector_out(M05_AXI_bready);
  mp_M05_AXI_transactor->BREADY(m_M05_AXI_bready_converter_signal);
  mp_M05_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_arid_converter");
  mp_M05_AXI_arid_converter->vector_in(m_M05_AXI_arid_converter_signal);
  mp_M05_AXI_arid_converter->scalar_out(M05_AXI_arid);
  mp_M05_AXI_transactor->ARID(m_M05_AXI_arid_converter_signal);
  mp_M05_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_araddr_converter");
  mp_M05_AXI_araddr_converter->vector_in(m_M05_AXI_araddr_converter_signal);
  mp_M05_AXI_araddr_converter->scalar_out(M05_AXI_araddr);
  mp_M05_AXI_transactor->ARADDR(m_M05_AXI_araddr_converter_signal);
  mp_M05_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M05_AXI_arlen_converter");
  mp_M05_AXI_arlen_converter->vector_in(m_M05_AXI_arlen_converter_signal);
  mp_M05_AXI_arlen_converter->scalar_out(M05_AXI_arlen);
  mp_M05_AXI_transactor->ARLEN(m_M05_AXI_arlen_converter_signal);
  mp_M05_AXI_transactor->ARSIZE(M05_AXI_arsize);
  mp_M05_AXI_transactor->ARBURST(M05_AXI_arburst);
  mp_M05_AXI_transactor->ARLOCK(M05_AXI_arlock);
  mp_M05_AXI_transactor->ARCACHE(M05_AXI_arcache);
  mp_M05_AXI_transactor->ARPROT(M05_AXI_arprot);
  mp_M05_AXI_transactor->ARREGION(M05_AXI_arregion);
  mp_M05_AXI_transactor->ARQOS(M05_AXI_arqos);
  mp_M05_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_aruser_converter");
  mp_M05_AXI_aruser_converter->vector_in(m_M05_AXI_aruser_converter_signal);
  mp_M05_AXI_aruser_converter->scalar_out(M05_AXI_aruser);
  mp_M05_AXI_transactor->ARUSER(m_M05_AXI_aruser_converter_signal);
  mp_M05_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_arvalid_converter");
  mp_M05_AXI_arvalid_converter->scalar_in(m_M05_AXI_arvalid_converter_signal);
  mp_M05_AXI_arvalid_converter->vector_out(M05_AXI_arvalid);
  mp_M05_AXI_transactor->ARVALID(m_M05_AXI_arvalid_converter_signal);
  mp_M05_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_arready_converter");
  mp_M05_AXI_arready_converter->vector_in(M05_AXI_arready);
  mp_M05_AXI_arready_converter->scalar_out(m_M05_AXI_arready_converter_signal);
  mp_M05_AXI_transactor->ARREADY(m_M05_AXI_arready_converter_signal);
  mp_M05_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_rid_converter");
  mp_M05_AXI_rid_converter->scalar_in(M05_AXI_rid);
  mp_M05_AXI_rid_converter->vector_out(m_M05_AXI_rid_converter_signal);
  mp_M05_AXI_transactor->RID(m_M05_AXI_rid_converter_signal);
  mp_M05_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M05_AXI_rdata_converter");
  mp_M05_AXI_rdata_converter->scalar_in(M05_AXI_rdata);
  mp_M05_AXI_rdata_converter->vector_out(m_M05_AXI_rdata_converter_signal);
  mp_M05_AXI_transactor->RDATA(m_M05_AXI_rdata_converter_signal);
  mp_M05_AXI_transactor->RRESP(M05_AXI_rresp);
  mp_M05_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_rlast_converter");
  mp_M05_AXI_rlast_converter->vector_in(M05_AXI_rlast);
  mp_M05_AXI_rlast_converter->scalar_out(m_M05_AXI_rlast_converter_signal);
  mp_M05_AXI_transactor->RLAST(m_M05_AXI_rlast_converter_signal);
  mp_M05_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_ruser_converter");
  mp_M05_AXI_ruser_converter->scalar_in(M05_AXI_ruser);
  mp_M05_AXI_ruser_converter->vector_out(m_M05_AXI_ruser_converter_signal);
  mp_M05_AXI_transactor->RUSER(m_M05_AXI_ruser_converter_signal);
  mp_M05_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_rvalid_converter");
  mp_M05_AXI_rvalid_converter->vector_in(M05_AXI_rvalid);
  mp_M05_AXI_rvalid_converter->scalar_out(m_M05_AXI_rvalid_converter_signal);
  mp_M05_AXI_transactor->RVALID(m_M05_AXI_rvalid_converter_signal);
  mp_M05_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_rready_converter");
  mp_M05_AXI_rready_converter->scalar_in(m_M05_AXI_rready_converter_signal);
  mp_M05_AXI_rready_converter->vector_out(M05_AXI_rready);
  mp_M05_AXI_transactor->RREADY(m_M05_AXI_rready_converter_signal);
  mp_M05_AXI_transactor->CLK(aclk);
  mp_M05_AXI_transactor->RST(aresetn);
  // configure M06_AXI_transactor
    xsc::common_cpp::properties M06_AXI_transactor_param_props;
    M06_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M06_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M06_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M06_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M06_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M06_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M06_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M06_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M06_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M06_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M06_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M06_AXI_transactor_param_props.addString("PROTOCOL", "");
    M06_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M06_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M06_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M06_AXI_transactor", M06_AXI_transactor_param_props);
  mp_M06_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awid_converter");
  mp_M06_AXI_awid_converter->vector_in(m_M06_AXI_awid_converter_signal);
  mp_M06_AXI_awid_converter->scalar_out(M06_AXI_awid);
  mp_M06_AXI_transactor->AWID(m_M06_AXI_awid_converter_signal);
  mp_M06_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_awaddr_converter");
  mp_M06_AXI_awaddr_converter->vector_in(m_M06_AXI_awaddr_converter_signal);
  mp_M06_AXI_awaddr_converter->scalar_out(M06_AXI_awaddr);
  mp_M06_AXI_transactor->AWADDR(m_M06_AXI_awaddr_converter_signal);
  mp_M06_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M06_AXI_awlen_converter");
  mp_M06_AXI_awlen_converter->vector_in(m_M06_AXI_awlen_converter_signal);
  mp_M06_AXI_awlen_converter->scalar_out(M06_AXI_awlen);
  mp_M06_AXI_transactor->AWLEN(m_M06_AXI_awlen_converter_signal);
  mp_M06_AXI_transactor->AWSIZE(M06_AXI_awsize);
  mp_M06_AXI_transactor->AWBURST(M06_AXI_awburst);
  mp_M06_AXI_transactor->AWLOCK(M06_AXI_awlock);
  mp_M06_AXI_transactor->AWCACHE(M06_AXI_awcache);
  mp_M06_AXI_transactor->AWPROT(M06_AXI_awprot);
  mp_M06_AXI_transactor->AWREGION(M06_AXI_awregion);
  mp_M06_AXI_transactor->AWQOS(M06_AXI_awqos);
  mp_M06_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awuser_converter");
  mp_M06_AXI_awuser_converter->vector_in(m_M06_AXI_awuser_converter_signal);
  mp_M06_AXI_awuser_converter->scalar_out(M06_AXI_awuser);
  mp_M06_AXI_transactor->AWUSER(m_M06_AXI_awuser_converter_signal);
  mp_M06_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_awvalid_converter");
  mp_M06_AXI_awvalid_converter->scalar_in(m_M06_AXI_awvalid_converter_signal);
  mp_M06_AXI_awvalid_converter->vector_out(M06_AXI_awvalid);
  mp_M06_AXI_transactor->AWVALID(m_M06_AXI_awvalid_converter_signal);
  mp_M06_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awready_converter");
  mp_M06_AXI_awready_converter->vector_in(M06_AXI_awready);
  mp_M06_AXI_awready_converter->scalar_out(m_M06_AXI_awready_converter_signal);
  mp_M06_AXI_transactor->AWREADY(m_M06_AXI_awready_converter_signal);
  mp_M06_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_wdata_converter");
  mp_M06_AXI_wdata_converter->vector_in(m_M06_AXI_wdata_converter_signal);
  mp_M06_AXI_wdata_converter->scalar_out(M06_AXI_wdata);
  mp_M06_AXI_transactor->WDATA(m_M06_AXI_wdata_converter_signal);
  mp_M06_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M06_AXI_wstrb_converter");
  mp_M06_AXI_wstrb_converter->vector_in(m_M06_AXI_wstrb_converter_signal);
  mp_M06_AXI_wstrb_converter->scalar_out(M06_AXI_wstrb);
  mp_M06_AXI_transactor->WSTRB(m_M06_AXI_wstrb_converter_signal);
  mp_M06_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_wlast_converter");
  mp_M06_AXI_wlast_converter->scalar_in(m_M06_AXI_wlast_converter_signal);
  mp_M06_AXI_wlast_converter->vector_out(M06_AXI_wlast);
  mp_M06_AXI_transactor->WLAST(m_M06_AXI_wlast_converter_signal);
  mp_M06_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_wuser_converter");
  mp_M06_AXI_wuser_converter->vector_in(m_M06_AXI_wuser_converter_signal);
  mp_M06_AXI_wuser_converter->scalar_out(M06_AXI_wuser);
  mp_M06_AXI_transactor->WUSER(m_M06_AXI_wuser_converter_signal);
  mp_M06_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_wvalid_converter");
  mp_M06_AXI_wvalid_converter->scalar_in(m_M06_AXI_wvalid_converter_signal);
  mp_M06_AXI_wvalid_converter->vector_out(M06_AXI_wvalid);
  mp_M06_AXI_transactor->WVALID(m_M06_AXI_wvalid_converter_signal);
  mp_M06_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_wready_converter");
  mp_M06_AXI_wready_converter->vector_in(M06_AXI_wready);
  mp_M06_AXI_wready_converter->scalar_out(m_M06_AXI_wready_converter_signal);
  mp_M06_AXI_transactor->WREADY(m_M06_AXI_wready_converter_signal);
  mp_M06_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_bid_converter");
  mp_M06_AXI_bid_converter->scalar_in(M06_AXI_bid);
  mp_M06_AXI_bid_converter->vector_out(m_M06_AXI_bid_converter_signal);
  mp_M06_AXI_transactor->BID(m_M06_AXI_bid_converter_signal);
  mp_M06_AXI_transactor->BRESP(M06_AXI_bresp);
  mp_M06_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_buser_converter");
  mp_M06_AXI_buser_converter->scalar_in(M06_AXI_buser);
  mp_M06_AXI_buser_converter->vector_out(m_M06_AXI_buser_converter_signal);
  mp_M06_AXI_transactor->BUSER(m_M06_AXI_buser_converter_signal);
  mp_M06_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_bvalid_converter");
  mp_M06_AXI_bvalid_converter->vector_in(M06_AXI_bvalid);
  mp_M06_AXI_bvalid_converter->scalar_out(m_M06_AXI_bvalid_converter_signal);
  mp_M06_AXI_transactor->BVALID(m_M06_AXI_bvalid_converter_signal);
  mp_M06_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_bready_converter");
  mp_M06_AXI_bready_converter->scalar_in(m_M06_AXI_bready_converter_signal);
  mp_M06_AXI_bready_converter->vector_out(M06_AXI_bready);
  mp_M06_AXI_transactor->BREADY(m_M06_AXI_bready_converter_signal);
  mp_M06_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_arid_converter");
  mp_M06_AXI_arid_converter->vector_in(m_M06_AXI_arid_converter_signal);
  mp_M06_AXI_arid_converter->scalar_out(M06_AXI_arid);
  mp_M06_AXI_transactor->ARID(m_M06_AXI_arid_converter_signal);
  mp_M06_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_araddr_converter");
  mp_M06_AXI_araddr_converter->vector_in(m_M06_AXI_araddr_converter_signal);
  mp_M06_AXI_araddr_converter->scalar_out(M06_AXI_araddr);
  mp_M06_AXI_transactor->ARADDR(m_M06_AXI_araddr_converter_signal);
  mp_M06_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M06_AXI_arlen_converter");
  mp_M06_AXI_arlen_converter->vector_in(m_M06_AXI_arlen_converter_signal);
  mp_M06_AXI_arlen_converter->scalar_out(M06_AXI_arlen);
  mp_M06_AXI_transactor->ARLEN(m_M06_AXI_arlen_converter_signal);
  mp_M06_AXI_transactor->ARSIZE(M06_AXI_arsize);
  mp_M06_AXI_transactor->ARBURST(M06_AXI_arburst);
  mp_M06_AXI_transactor->ARLOCK(M06_AXI_arlock);
  mp_M06_AXI_transactor->ARCACHE(M06_AXI_arcache);
  mp_M06_AXI_transactor->ARPROT(M06_AXI_arprot);
  mp_M06_AXI_transactor->ARREGION(M06_AXI_arregion);
  mp_M06_AXI_transactor->ARQOS(M06_AXI_arqos);
  mp_M06_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_aruser_converter");
  mp_M06_AXI_aruser_converter->vector_in(m_M06_AXI_aruser_converter_signal);
  mp_M06_AXI_aruser_converter->scalar_out(M06_AXI_aruser);
  mp_M06_AXI_transactor->ARUSER(m_M06_AXI_aruser_converter_signal);
  mp_M06_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_arvalid_converter");
  mp_M06_AXI_arvalid_converter->scalar_in(m_M06_AXI_arvalid_converter_signal);
  mp_M06_AXI_arvalid_converter->vector_out(M06_AXI_arvalid);
  mp_M06_AXI_transactor->ARVALID(m_M06_AXI_arvalid_converter_signal);
  mp_M06_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_arready_converter");
  mp_M06_AXI_arready_converter->vector_in(M06_AXI_arready);
  mp_M06_AXI_arready_converter->scalar_out(m_M06_AXI_arready_converter_signal);
  mp_M06_AXI_transactor->ARREADY(m_M06_AXI_arready_converter_signal);
  mp_M06_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_rid_converter");
  mp_M06_AXI_rid_converter->scalar_in(M06_AXI_rid);
  mp_M06_AXI_rid_converter->vector_out(m_M06_AXI_rid_converter_signal);
  mp_M06_AXI_transactor->RID(m_M06_AXI_rid_converter_signal);
  mp_M06_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M06_AXI_rdata_converter");
  mp_M06_AXI_rdata_converter->scalar_in(M06_AXI_rdata);
  mp_M06_AXI_rdata_converter->vector_out(m_M06_AXI_rdata_converter_signal);
  mp_M06_AXI_transactor->RDATA(m_M06_AXI_rdata_converter_signal);
  mp_M06_AXI_transactor->RRESP(M06_AXI_rresp);
  mp_M06_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_rlast_converter");
  mp_M06_AXI_rlast_converter->vector_in(M06_AXI_rlast);
  mp_M06_AXI_rlast_converter->scalar_out(m_M06_AXI_rlast_converter_signal);
  mp_M06_AXI_transactor->RLAST(m_M06_AXI_rlast_converter_signal);
  mp_M06_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_ruser_converter");
  mp_M06_AXI_ruser_converter->scalar_in(M06_AXI_ruser);
  mp_M06_AXI_ruser_converter->vector_out(m_M06_AXI_ruser_converter_signal);
  mp_M06_AXI_transactor->RUSER(m_M06_AXI_ruser_converter_signal);
  mp_M06_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_rvalid_converter");
  mp_M06_AXI_rvalid_converter->vector_in(M06_AXI_rvalid);
  mp_M06_AXI_rvalid_converter->scalar_out(m_M06_AXI_rvalid_converter_signal);
  mp_M06_AXI_transactor->RVALID(m_M06_AXI_rvalid_converter_signal);
  mp_M06_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_rready_converter");
  mp_M06_AXI_rready_converter->scalar_in(m_M06_AXI_rready_converter_signal);
  mp_M06_AXI_rready_converter->vector_out(M06_AXI_rready);
  mp_M06_AXI_transactor->RREADY(m_M06_AXI_rready_converter_signal);
  mp_M06_AXI_transactor->CLK(aclk);
  mp_M06_AXI_transactor->RST(aresetn);
  // configure M07_AXI_transactor
    xsc::common_cpp::properties M07_AXI_transactor_param_props;
    M07_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M07_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M07_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M07_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M07_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M07_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M07_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M07_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M07_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M07_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M07_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M07_AXI_transactor_param_props.addString("PROTOCOL", "");
    M07_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M07_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M07_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M07_AXI_transactor", M07_AXI_transactor_param_props);
  mp_M07_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awid_converter");
  mp_M07_AXI_awid_converter->vector_in(m_M07_AXI_awid_converter_signal);
  mp_M07_AXI_awid_converter->scalar_out(M07_AXI_awid);
  mp_M07_AXI_transactor->AWID(m_M07_AXI_awid_converter_signal);
  mp_M07_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_awaddr_converter");
  mp_M07_AXI_awaddr_converter->vector_in(m_M07_AXI_awaddr_converter_signal);
  mp_M07_AXI_awaddr_converter->scalar_out(M07_AXI_awaddr);
  mp_M07_AXI_transactor->AWADDR(m_M07_AXI_awaddr_converter_signal);
  mp_M07_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M07_AXI_awlen_converter");
  mp_M07_AXI_awlen_converter->vector_in(m_M07_AXI_awlen_converter_signal);
  mp_M07_AXI_awlen_converter->scalar_out(M07_AXI_awlen);
  mp_M07_AXI_transactor->AWLEN(m_M07_AXI_awlen_converter_signal);
  mp_M07_AXI_transactor->AWSIZE(M07_AXI_awsize);
  mp_M07_AXI_transactor->AWBURST(M07_AXI_awburst);
  mp_M07_AXI_transactor->AWLOCK(M07_AXI_awlock);
  mp_M07_AXI_transactor->AWCACHE(M07_AXI_awcache);
  mp_M07_AXI_transactor->AWPROT(M07_AXI_awprot);
  mp_M07_AXI_transactor->AWREGION(M07_AXI_awregion);
  mp_M07_AXI_transactor->AWQOS(M07_AXI_awqos);
  mp_M07_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awuser_converter");
  mp_M07_AXI_awuser_converter->vector_in(m_M07_AXI_awuser_converter_signal);
  mp_M07_AXI_awuser_converter->scalar_out(M07_AXI_awuser);
  mp_M07_AXI_transactor->AWUSER(m_M07_AXI_awuser_converter_signal);
  mp_M07_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_awvalid_converter");
  mp_M07_AXI_awvalid_converter->scalar_in(m_M07_AXI_awvalid_converter_signal);
  mp_M07_AXI_awvalid_converter->vector_out(M07_AXI_awvalid);
  mp_M07_AXI_transactor->AWVALID(m_M07_AXI_awvalid_converter_signal);
  mp_M07_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awready_converter");
  mp_M07_AXI_awready_converter->vector_in(M07_AXI_awready);
  mp_M07_AXI_awready_converter->scalar_out(m_M07_AXI_awready_converter_signal);
  mp_M07_AXI_transactor->AWREADY(m_M07_AXI_awready_converter_signal);
  mp_M07_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_wdata_converter");
  mp_M07_AXI_wdata_converter->vector_in(m_M07_AXI_wdata_converter_signal);
  mp_M07_AXI_wdata_converter->scalar_out(M07_AXI_wdata);
  mp_M07_AXI_transactor->WDATA(m_M07_AXI_wdata_converter_signal);
  mp_M07_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M07_AXI_wstrb_converter");
  mp_M07_AXI_wstrb_converter->vector_in(m_M07_AXI_wstrb_converter_signal);
  mp_M07_AXI_wstrb_converter->scalar_out(M07_AXI_wstrb);
  mp_M07_AXI_transactor->WSTRB(m_M07_AXI_wstrb_converter_signal);
  mp_M07_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_wlast_converter");
  mp_M07_AXI_wlast_converter->scalar_in(m_M07_AXI_wlast_converter_signal);
  mp_M07_AXI_wlast_converter->vector_out(M07_AXI_wlast);
  mp_M07_AXI_transactor->WLAST(m_M07_AXI_wlast_converter_signal);
  mp_M07_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_wuser_converter");
  mp_M07_AXI_wuser_converter->vector_in(m_M07_AXI_wuser_converter_signal);
  mp_M07_AXI_wuser_converter->scalar_out(M07_AXI_wuser);
  mp_M07_AXI_transactor->WUSER(m_M07_AXI_wuser_converter_signal);
  mp_M07_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_wvalid_converter");
  mp_M07_AXI_wvalid_converter->scalar_in(m_M07_AXI_wvalid_converter_signal);
  mp_M07_AXI_wvalid_converter->vector_out(M07_AXI_wvalid);
  mp_M07_AXI_transactor->WVALID(m_M07_AXI_wvalid_converter_signal);
  mp_M07_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_wready_converter");
  mp_M07_AXI_wready_converter->vector_in(M07_AXI_wready);
  mp_M07_AXI_wready_converter->scalar_out(m_M07_AXI_wready_converter_signal);
  mp_M07_AXI_transactor->WREADY(m_M07_AXI_wready_converter_signal);
  mp_M07_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_bid_converter");
  mp_M07_AXI_bid_converter->scalar_in(M07_AXI_bid);
  mp_M07_AXI_bid_converter->vector_out(m_M07_AXI_bid_converter_signal);
  mp_M07_AXI_transactor->BID(m_M07_AXI_bid_converter_signal);
  mp_M07_AXI_transactor->BRESP(M07_AXI_bresp);
  mp_M07_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_buser_converter");
  mp_M07_AXI_buser_converter->scalar_in(M07_AXI_buser);
  mp_M07_AXI_buser_converter->vector_out(m_M07_AXI_buser_converter_signal);
  mp_M07_AXI_transactor->BUSER(m_M07_AXI_buser_converter_signal);
  mp_M07_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_bvalid_converter");
  mp_M07_AXI_bvalid_converter->vector_in(M07_AXI_bvalid);
  mp_M07_AXI_bvalid_converter->scalar_out(m_M07_AXI_bvalid_converter_signal);
  mp_M07_AXI_transactor->BVALID(m_M07_AXI_bvalid_converter_signal);
  mp_M07_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_bready_converter");
  mp_M07_AXI_bready_converter->scalar_in(m_M07_AXI_bready_converter_signal);
  mp_M07_AXI_bready_converter->vector_out(M07_AXI_bready);
  mp_M07_AXI_transactor->BREADY(m_M07_AXI_bready_converter_signal);
  mp_M07_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_arid_converter");
  mp_M07_AXI_arid_converter->vector_in(m_M07_AXI_arid_converter_signal);
  mp_M07_AXI_arid_converter->scalar_out(M07_AXI_arid);
  mp_M07_AXI_transactor->ARID(m_M07_AXI_arid_converter_signal);
  mp_M07_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_araddr_converter");
  mp_M07_AXI_araddr_converter->vector_in(m_M07_AXI_araddr_converter_signal);
  mp_M07_AXI_araddr_converter->scalar_out(M07_AXI_araddr);
  mp_M07_AXI_transactor->ARADDR(m_M07_AXI_araddr_converter_signal);
  mp_M07_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M07_AXI_arlen_converter");
  mp_M07_AXI_arlen_converter->vector_in(m_M07_AXI_arlen_converter_signal);
  mp_M07_AXI_arlen_converter->scalar_out(M07_AXI_arlen);
  mp_M07_AXI_transactor->ARLEN(m_M07_AXI_arlen_converter_signal);
  mp_M07_AXI_transactor->ARSIZE(M07_AXI_arsize);
  mp_M07_AXI_transactor->ARBURST(M07_AXI_arburst);
  mp_M07_AXI_transactor->ARLOCK(M07_AXI_arlock);
  mp_M07_AXI_transactor->ARCACHE(M07_AXI_arcache);
  mp_M07_AXI_transactor->ARPROT(M07_AXI_arprot);
  mp_M07_AXI_transactor->ARREGION(M07_AXI_arregion);
  mp_M07_AXI_transactor->ARQOS(M07_AXI_arqos);
  mp_M07_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_aruser_converter");
  mp_M07_AXI_aruser_converter->vector_in(m_M07_AXI_aruser_converter_signal);
  mp_M07_AXI_aruser_converter->scalar_out(M07_AXI_aruser);
  mp_M07_AXI_transactor->ARUSER(m_M07_AXI_aruser_converter_signal);
  mp_M07_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_arvalid_converter");
  mp_M07_AXI_arvalid_converter->scalar_in(m_M07_AXI_arvalid_converter_signal);
  mp_M07_AXI_arvalid_converter->vector_out(M07_AXI_arvalid);
  mp_M07_AXI_transactor->ARVALID(m_M07_AXI_arvalid_converter_signal);
  mp_M07_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_arready_converter");
  mp_M07_AXI_arready_converter->vector_in(M07_AXI_arready);
  mp_M07_AXI_arready_converter->scalar_out(m_M07_AXI_arready_converter_signal);
  mp_M07_AXI_transactor->ARREADY(m_M07_AXI_arready_converter_signal);
  mp_M07_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_rid_converter");
  mp_M07_AXI_rid_converter->scalar_in(M07_AXI_rid);
  mp_M07_AXI_rid_converter->vector_out(m_M07_AXI_rid_converter_signal);
  mp_M07_AXI_transactor->RID(m_M07_AXI_rid_converter_signal);
  mp_M07_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M07_AXI_rdata_converter");
  mp_M07_AXI_rdata_converter->scalar_in(M07_AXI_rdata);
  mp_M07_AXI_rdata_converter->vector_out(m_M07_AXI_rdata_converter_signal);
  mp_M07_AXI_transactor->RDATA(m_M07_AXI_rdata_converter_signal);
  mp_M07_AXI_transactor->RRESP(M07_AXI_rresp);
  mp_M07_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_rlast_converter");
  mp_M07_AXI_rlast_converter->vector_in(M07_AXI_rlast);
  mp_M07_AXI_rlast_converter->scalar_out(m_M07_AXI_rlast_converter_signal);
  mp_M07_AXI_transactor->RLAST(m_M07_AXI_rlast_converter_signal);
  mp_M07_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_ruser_converter");
  mp_M07_AXI_ruser_converter->scalar_in(M07_AXI_ruser);
  mp_M07_AXI_ruser_converter->vector_out(m_M07_AXI_ruser_converter_signal);
  mp_M07_AXI_transactor->RUSER(m_M07_AXI_ruser_converter_signal);
  mp_M07_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_rvalid_converter");
  mp_M07_AXI_rvalid_converter->vector_in(M07_AXI_rvalid);
  mp_M07_AXI_rvalid_converter->scalar_out(m_M07_AXI_rvalid_converter_signal);
  mp_M07_AXI_transactor->RVALID(m_M07_AXI_rvalid_converter_signal);
  mp_M07_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_rready_converter");
  mp_M07_AXI_rready_converter->scalar_in(m_M07_AXI_rready_converter_signal);
  mp_M07_AXI_rready_converter->vector_out(M07_AXI_rready);
  mp_M07_AXI_transactor->RREADY(m_M07_AXI_rready_converter_signal);
  mp_M07_AXI_transactor->CLK(aclk);
  mp_M07_AXI_transactor->RST(aresetn);
  // configure M08_AXI_transactor
    xsc::common_cpp::properties M08_AXI_transactor_param_props;
    M08_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M08_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M08_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M08_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M08_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M08_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M08_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M08_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M08_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M08_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M08_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M08_AXI_transactor_param_props.addString("PROTOCOL", "");
    M08_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M08_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M08_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M08_AXI_transactor", M08_AXI_transactor_param_props);
  mp_M08_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awid_converter");
  mp_M08_AXI_awid_converter->vector_in(m_M08_AXI_awid_converter_signal);
  mp_M08_AXI_awid_converter->scalar_out(M08_AXI_awid);
  mp_M08_AXI_transactor->AWID(m_M08_AXI_awid_converter_signal);
  mp_M08_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_awaddr_converter");
  mp_M08_AXI_awaddr_converter->vector_in(m_M08_AXI_awaddr_converter_signal);
  mp_M08_AXI_awaddr_converter->scalar_out(M08_AXI_awaddr);
  mp_M08_AXI_transactor->AWADDR(m_M08_AXI_awaddr_converter_signal);
  mp_M08_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M08_AXI_awlen_converter");
  mp_M08_AXI_awlen_converter->vector_in(m_M08_AXI_awlen_converter_signal);
  mp_M08_AXI_awlen_converter->scalar_out(M08_AXI_awlen);
  mp_M08_AXI_transactor->AWLEN(m_M08_AXI_awlen_converter_signal);
  mp_M08_AXI_transactor->AWSIZE(M08_AXI_awsize);
  mp_M08_AXI_transactor->AWBURST(M08_AXI_awburst);
  mp_M08_AXI_transactor->AWLOCK(M08_AXI_awlock);
  mp_M08_AXI_transactor->AWCACHE(M08_AXI_awcache);
  mp_M08_AXI_transactor->AWPROT(M08_AXI_awprot);
  mp_M08_AXI_transactor->AWREGION(M08_AXI_awregion);
  mp_M08_AXI_transactor->AWQOS(M08_AXI_awqos);
  mp_M08_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awuser_converter");
  mp_M08_AXI_awuser_converter->vector_in(m_M08_AXI_awuser_converter_signal);
  mp_M08_AXI_awuser_converter->scalar_out(M08_AXI_awuser);
  mp_M08_AXI_transactor->AWUSER(m_M08_AXI_awuser_converter_signal);
  mp_M08_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_awvalid_converter");
  mp_M08_AXI_awvalid_converter->scalar_in(m_M08_AXI_awvalid_converter_signal);
  mp_M08_AXI_awvalid_converter->vector_out(M08_AXI_awvalid);
  mp_M08_AXI_transactor->AWVALID(m_M08_AXI_awvalid_converter_signal);
  mp_M08_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awready_converter");
  mp_M08_AXI_awready_converter->vector_in(M08_AXI_awready);
  mp_M08_AXI_awready_converter->scalar_out(m_M08_AXI_awready_converter_signal);
  mp_M08_AXI_transactor->AWREADY(m_M08_AXI_awready_converter_signal);
  mp_M08_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_wdata_converter");
  mp_M08_AXI_wdata_converter->vector_in(m_M08_AXI_wdata_converter_signal);
  mp_M08_AXI_wdata_converter->scalar_out(M08_AXI_wdata);
  mp_M08_AXI_transactor->WDATA(m_M08_AXI_wdata_converter_signal);
  mp_M08_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M08_AXI_wstrb_converter");
  mp_M08_AXI_wstrb_converter->vector_in(m_M08_AXI_wstrb_converter_signal);
  mp_M08_AXI_wstrb_converter->scalar_out(M08_AXI_wstrb);
  mp_M08_AXI_transactor->WSTRB(m_M08_AXI_wstrb_converter_signal);
  mp_M08_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_wlast_converter");
  mp_M08_AXI_wlast_converter->scalar_in(m_M08_AXI_wlast_converter_signal);
  mp_M08_AXI_wlast_converter->vector_out(M08_AXI_wlast);
  mp_M08_AXI_transactor->WLAST(m_M08_AXI_wlast_converter_signal);
  mp_M08_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_wuser_converter");
  mp_M08_AXI_wuser_converter->vector_in(m_M08_AXI_wuser_converter_signal);
  mp_M08_AXI_wuser_converter->scalar_out(M08_AXI_wuser);
  mp_M08_AXI_transactor->WUSER(m_M08_AXI_wuser_converter_signal);
  mp_M08_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_wvalid_converter");
  mp_M08_AXI_wvalid_converter->scalar_in(m_M08_AXI_wvalid_converter_signal);
  mp_M08_AXI_wvalid_converter->vector_out(M08_AXI_wvalid);
  mp_M08_AXI_transactor->WVALID(m_M08_AXI_wvalid_converter_signal);
  mp_M08_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_wready_converter");
  mp_M08_AXI_wready_converter->vector_in(M08_AXI_wready);
  mp_M08_AXI_wready_converter->scalar_out(m_M08_AXI_wready_converter_signal);
  mp_M08_AXI_transactor->WREADY(m_M08_AXI_wready_converter_signal);
  mp_M08_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_bid_converter");
  mp_M08_AXI_bid_converter->scalar_in(M08_AXI_bid);
  mp_M08_AXI_bid_converter->vector_out(m_M08_AXI_bid_converter_signal);
  mp_M08_AXI_transactor->BID(m_M08_AXI_bid_converter_signal);
  mp_M08_AXI_transactor->BRESP(M08_AXI_bresp);
  mp_M08_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_buser_converter");
  mp_M08_AXI_buser_converter->scalar_in(M08_AXI_buser);
  mp_M08_AXI_buser_converter->vector_out(m_M08_AXI_buser_converter_signal);
  mp_M08_AXI_transactor->BUSER(m_M08_AXI_buser_converter_signal);
  mp_M08_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_bvalid_converter");
  mp_M08_AXI_bvalid_converter->vector_in(M08_AXI_bvalid);
  mp_M08_AXI_bvalid_converter->scalar_out(m_M08_AXI_bvalid_converter_signal);
  mp_M08_AXI_transactor->BVALID(m_M08_AXI_bvalid_converter_signal);
  mp_M08_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_bready_converter");
  mp_M08_AXI_bready_converter->scalar_in(m_M08_AXI_bready_converter_signal);
  mp_M08_AXI_bready_converter->vector_out(M08_AXI_bready);
  mp_M08_AXI_transactor->BREADY(m_M08_AXI_bready_converter_signal);
  mp_M08_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_arid_converter");
  mp_M08_AXI_arid_converter->vector_in(m_M08_AXI_arid_converter_signal);
  mp_M08_AXI_arid_converter->scalar_out(M08_AXI_arid);
  mp_M08_AXI_transactor->ARID(m_M08_AXI_arid_converter_signal);
  mp_M08_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_araddr_converter");
  mp_M08_AXI_araddr_converter->vector_in(m_M08_AXI_araddr_converter_signal);
  mp_M08_AXI_araddr_converter->scalar_out(M08_AXI_araddr);
  mp_M08_AXI_transactor->ARADDR(m_M08_AXI_araddr_converter_signal);
  mp_M08_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M08_AXI_arlen_converter");
  mp_M08_AXI_arlen_converter->vector_in(m_M08_AXI_arlen_converter_signal);
  mp_M08_AXI_arlen_converter->scalar_out(M08_AXI_arlen);
  mp_M08_AXI_transactor->ARLEN(m_M08_AXI_arlen_converter_signal);
  mp_M08_AXI_transactor->ARSIZE(M08_AXI_arsize);
  mp_M08_AXI_transactor->ARBURST(M08_AXI_arburst);
  mp_M08_AXI_transactor->ARLOCK(M08_AXI_arlock);
  mp_M08_AXI_transactor->ARCACHE(M08_AXI_arcache);
  mp_M08_AXI_transactor->ARPROT(M08_AXI_arprot);
  mp_M08_AXI_transactor->ARREGION(M08_AXI_arregion);
  mp_M08_AXI_transactor->ARQOS(M08_AXI_arqos);
  mp_M08_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_aruser_converter");
  mp_M08_AXI_aruser_converter->vector_in(m_M08_AXI_aruser_converter_signal);
  mp_M08_AXI_aruser_converter->scalar_out(M08_AXI_aruser);
  mp_M08_AXI_transactor->ARUSER(m_M08_AXI_aruser_converter_signal);
  mp_M08_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_arvalid_converter");
  mp_M08_AXI_arvalid_converter->scalar_in(m_M08_AXI_arvalid_converter_signal);
  mp_M08_AXI_arvalid_converter->vector_out(M08_AXI_arvalid);
  mp_M08_AXI_transactor->ARVALID(m_M08_AXI_arvalid_converter_signal);
  mp_M08_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_arready_converter");
  mp_M08_AXI_arready_converter->vector_in(M08_AXI_arready);
  mp_M08_AXI_arready_converter->scalar_out(m_M08_AXI_arready_converter_signal);
  mp_M08_AXI_transactor->ARREADY(m_M08_AXI_arready_converter_signal);
  mp_M08_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_rid_converter");
  mp_M08_AXI_rid_converter->scalar_in(M08_AXI_rid);
  mp_M08_AXI_rid_converter->vector_out(m_M08_AXI_rid_converter_signal);
  mp_M08_AXI_transactor->RID(m_M08_AXI_rid_converter_signal);
  mp_M08_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M08_AXI_rdata_converter");
  mp_M08_AXI_rdata_converter->scalar_in(M08_AXI_rdata);
  mp_M08_AXI_rdata_converter->vector_out(m_M08_AXI_rdata_converter_signal);
  mp_M08_AXI_transactor->RDATA(m_M08_AXI_rdata_converter_signal);
  mp_M08_AXI_transactor->RRESP(M08_AXI_rresp);
  mp_M08_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_rlast_converter");
  mp_M08_AXI_rlast_converter->vector_in(M08_AXI_rlast);
  mp_M08_AXI_rlast_converter->scalar_out(m_M08_AXI_rlast_converter_signal);
  mp_M08_AXI_transactor->RLAST(m_M08_AXI_rlast_converter_signal);
  mp_M08_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_ruser_converter");
  mp_M08_AXI_ruser_converter->scalar_in(M08_AXI_ruser);
  mp_M08_AXI_ruser_converter->vector_out(m_M08_AXI_ruser_converter_signal);
  mp_M08_AXI_transactor->RUSER(m_M08_AXI_ruser_converter_signal);
  mp_M08_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_rvalid_converter");
  mp_M08_AXI_rvalid_converter->vector_in(M08_AXI_rvalid);
  mp_M08_AXI_rvalid_converter->scalar_out(m_M08_AXI_rvalid_converter_signal);
  mp_M08_AXI_transactor->RVALID(m_M08_AXI_rvalid_converter_signal);
  mp_M08_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_rready_converter");
  mp_M08_AXI_rready_converter->scalar_in(m_M08_AXI_rready_converter_signal);
  mp_M08_AXI_rready_converter->vector_out(M08_AXI_rready);
  mp_M08_AXI_transactor->RREADY(m_M08_AXI_rready_converter_signal);
  mp_M08_AXI_transactor->CLK(aclk);
  mp_M08_AXI_transactor->RST(aresetn);

  // initialize transactors stubs
  S00_AXI_transactor_target_wr_socket_stub = nullptr;
  S00_AXI_transactor_target_rd_socket_stub = nullptr;
  M00_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M00_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M01_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M01_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M02_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M02_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M03_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M03_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M04_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M04_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M05_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M05_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M06_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M06_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M07_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M07_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M08_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M08_AXI_transactor_initiator_rd_socket_stub = nullptr;

}

void design_1_smartconnect_1_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "S00_AXI_TLM_MODE") != 1)
  {
    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  
  }
  else
  {
    S00_AXI_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S00_AXI_transactor_target_wr_socket_stub->bind(*(mp_S00_AXI_transactor->wr_socket));
    S00_AXI_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S00_AXI_transactor_target_rd_socket_stub->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_S00_AXI_transactor->disable_transactor();
  }

  // configure 'M00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M00_AXI_TLM_MODE") != 1)
  {
    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  
  }
  else
  {
    M00_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M00_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M00_AXI_transactor->wr_socket));
    M00_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M00_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_M00_AXI_transactor->disable_transactor();
  }

  // configure 'M01_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M01_AXI_TLM_MODE") != 1)
  {
    mp_impl->M01_AXI_tlm_aximm_read_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->M01_AXI_tlm_aximm_write_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  
  }
  else
  {
    M01_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M01_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M01_AXI_transactor->wr_socket));
    M01_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M01_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_M01_AXI_transactor->disable_transactor();
  }

  // configure 'M02_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M02_AXI_TLM_MODE") != 1)
  {
    mp_impl->M02_AXI_tlm_aximm_read_socket->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_impl->M02_AXI_tlm_aximm_write_socket->bind(*(mp_M02_AXI_transactor->wr_socket));
  
  }
  else
  {
    M02_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M02_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M02_AXI_transactor->wr_socket));
    M02_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M02_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_M02_AXI_transactor->disable_transactor();
  }

  // configure 'M03_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M03_AXI_TLM_MODE") != 1)
  {
    mp_impl->M03_AXI_tlm_aximm_read_socket->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_impl->M03_AXI_tlm_aximm_write_socket->bind(*(mp_M03_AXI_transactor->wr_socket));
  
  }
  else
  {
    M03_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M03_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M03_AXI_transactor->wr_socket));
    M03_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M03_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_M03_AXI_transactor->disable_transactor();
  }

  // configure 'M04_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M04_AXI_TLM_MODE") != 1)
  {
    mp_impl->M04_AXI_tlm_aximm_read_socket->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_impl->M04_AXI_tlm_aximm_write_socket->bind(*(mp_M04_AXI_transactor->wr_socket));
  
  }
  else
  {
    M04_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M04_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M04_AXI_transactor->wr_socket));
    M04_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M04_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_M04_AXI_transactor->disable_transactor();
  }

  // configure 'M05_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M05_AXI_TLM_MODE") != 1)
  {
    mp_impl->M05_AXI_tlm_aximm_read_socket->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_impl->M05_AXI_tlm_aximm_write_socket->bind(*(mp_M05_AXI_transactor->wr_socket));
  
  }
  else
  {
    M05_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M05_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M05_AXI_transactor->wr_socket));
    M05_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M05_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_M05_AXI_transactor->disable_transactor();
  }

  // configure 'M06_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M06_AXI_TLM_MODE") != 1)
  {
    mp_impl->M06_AXI_tlm_aximm_read_socket->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_impl->M06_AXI_tlm_aximm_write_socket->bind(*(mp_M06_AXI_transactor->wr_socket));
  
  }
  else
  {
    M06_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M06_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M06_AXI_transactor->wr_socket));
    M06_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M06_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_M06_AXI_transactor->disable_transactor();
  }

  // configure 'M07_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M07_AXI_TLM_MODE") != 1)
  {
    mp_impl->M07_AXI_tlm_aximm_read_socket->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_impl->M07_AXI_tlm_aximm_write_socket->bind(*(mp_M07_AXI_transactor->wr_socket));
  
  }
  else
  {
    M07_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M07_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M07_AXI_transactor->wr_socket));
    M07_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M07_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_M07_AXI_transactor->disable_transactor();
  }

  // configure 'M08_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M08_AXI_TLM_MODE") != 1)
  {
    mp_impl->M08_AXI_tlm_aximm_read_socket->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_impl->M08_AXI_tlm_aximm_write_socket->bind(*(mp_M08_AXI_transactor->wr_socket));
  
  }
  else
  {
    M08_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M08_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M08_AXI_transactor->wr_socket));
    M08_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M08_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_M08_AXI_transactor->disable_transactor();
  }

}

#endif // VCSSYSTEMC




#ifdef MTI_SYSTEMC
design_1_smartconnect_1_0::design_1_smartconnect_1_0(const sc_core::sc_module_name& nm) : design_1_smartconnect_1_0_sc(nm),  aclk("aclk"), aresetn("aresetn"), S00_AXI_awid("S00_AXI_awid"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wid("S00_AXI_wid"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bid("S00_AXI_bid"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_arid("S00_AXI_arid"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rid("S00_AXI_rid"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready"), M01_AXI_awaddr("M01_AXI_awaddr"), M01_AXI_awprot("M01_AXI_awprot"), M01_AXI_awvalid("M01_AXI_awvalid"), M01_AXI_awready("M01_AXI_awready"), M01_AXI_wdata("M01_AXI_wdata"), M01_AXI_wstrb("M01_AXI_wstrb"), M01_AXI_wvalid("M01_AXI_wvalid"), M01_AXI_wready("M01_AXI_wready"), M01_AXI_bresp("M01_AXI_bresp"), M01_AXI_bvalid("M01_AXI_bvalid"), M01_AXI_bready("M01_AXI_bready"), M01_AXI_araddr("M01_AXI_araddr"), M01_AXI_arprot("M01_AXI_arprot"), M01_AXI_arvalid("M01_AXI_arvalid"), M01_AXI_arready("M01_AXI_arready"), M01_AXI_rdata("M01_AXI_rdata"), M01_AXI_rresp("M01_AXI_rresp"), M01_AXI_rvalid("M01_AXI_rvalid"), M01_AXI_rready("M01_AXI_rready"), M02_AXI_awaddr("M02_AXI_awaddr"), M02_AXI_awprot("M02_AXI_awprot"), M02_AXI_awvalid("M02_AXI_awvalid"), M02_AXI_awready("M02_AXI_awready"), M02_AXI_wdata("M02_AXI_wdata"), M02_AXI_wstrb("M02_AXI_wstrb"), M02_AXI_wvalid("M02_AXI_wvalid"), M02_AXI_wready("M02_AXI_wready"), M02_AXI_bresp("M02_AXI_bresp"), M02_AXI_bvalid("M02_AXI_bvalid"), M02_AXI_bready("M02_AXI_bready"), M02_AXI_araddr("M02_AXI_araddr"), M02_AXI_arprot("M02_AXI_arprot"), M02_AXI_arvalid("M02_AXI_arvalid"), M02_AXI_arready("M02_AXI_arready"), M02_AXI_rdata("M02_AXI_rdata"), M02_AXI_rresp("M02_AXI_rresp"), M02_AXI_rvalid("M02_AXI_rvalid"), M02_AXI_rready("M02_AXI_rready"), M03_AXI_awaddr("M03_AXI_awaddr"), M03_AXI_awprot("M03_AXI_awprot"), M03_AXI_awvalid("M03_AXI_awvalid"), M03_AXI_awready("M03_AXI_awready"), M03_AXI_wdata("M03_AXI_wdata"), M03_AXI_wstrb("M03_AXI_wstrb"), M03_AXI_wvalid("M03_AXI_wvalid"), M03_AXI_wready("M03_AXI_wready"), M03_AXI_bresp("M03_AXI_bresp"), M03_AXI_bvalid("M03_AXI_bvalid"), M03_AXI_bready("M03_AXI_bready"), M03_AXI_araddr("M03_AXI_araddr"), M03_AXI_arprot("M03_AXI_arprot"), M03_AXI_arvalid("M03_AXI_arvalid"), M03_AXI_arready("M03_AXI_arready"), M03_AXI_rdata("M03_AXI_rdata"), M03_AXI_rresp("M03_AXI_rresp"), M03_AXI_rvalid("M03_AXI_rvalid"), M03_AXI_rready("M03_AXI_rready"), M04_AXI_awaddr("M04_AXI_awaddr"), M04_AXI_awprot("M04_AXI_awprot"), M04_AXI_awvalid("M04_AXI_awvalid"), M04_AXI_awready("M04_AXI_awready"), M04_AXI_wdata("M04_AXI_wdata"), M04_AXI_wstrb("M04_AXI_wstrb"), M04_AXI_wvalid("M04_AXI_wvalid"), M04_AXI_wready("M04_AXI_wready"), M04_AXI_bresp("M04_AXI_bresp"), M04_AXI_bvalid("M04_AXI_bvalid"), M04_AXI_bready("M04_AXI_bready"), M04_AXI_araddr("M04_AXI_araddr"), M04_AXI_arprot("M04_AXI_arprot"), M04_AXI_arvalid("M04_AXI_arvalid"), M04_AXI_arready("M04_AXI_arready"), M04_AXI_rdata("M04_AXI_rdata"), M04_AXI_rresp("M04_AXI_rresp"), M04_AXI_rvalid("M04_AXI_rvalid"), M04_AXI_rready("M04_AXI_rready"), M05_AXI_awid("M05_AXI_awid"), M05_AXI_awaddr("M05_AXI_awaddr"), M05_AXI_awlen("M05_AXI_awlen"), M05_AXI_awsize("M05_AXI_awsize"), M05_AXI_awburst("M05_AXI_awburst"), M05_AXI_awlock("M05_AXI_awlock"), M05_AXI_awcache("M05_AXI_awcache"), M05_AXI_awprot("M05_AXI_awprot"), M05_AXI_awregion("M05_AXI_awregion"), M05_AXI_awqos("M05_AXI_awqos"), M05_AXI_awuser("M05_AXI_awuser"), M05_AXI_awvalid("M05_AXI_awvalid"), M05_AXI_awready("M05_AXI_awready"), M05_AXI_wid("M05_AXI_wid"), M05_AXI_wdata("M05_AXI_wdata"), M05_AXI_wstrb("M05_AXI_wstrb"), M05_AXI_wlast("M05_AXI_wlast"), M05_AXI_wuser("M05_AXI_wuser"), M05_AXI_wvalid("M05_AXI_wvalid"), M05_AXI_wready("M05_AXI_wready"), M05_AXI_bid("M05_AXI_bid"), M05_AXI_bresp("M05_AXI_bresp"), M05_AXI_buser("M05_AXI_buser"), M05_AXI_bvalid("M05_AXI_bvalid"), M05_AXI_bready("M05_AXI_bready"), M05_AXI_arid("M05_AXI_arid"), M05_AXI_araddr("M05_AXI_araddr"), M05_AXI_arlen("M05_AXI_arlen"), M05_AXI_arsize("M05_AXI_arsize"), M05_AXI_arburst("M05_AXI_arburst"), M05_AXI_arlock("M05_AXI_arlock"), M05_AXI_arcache("M05_AXI_arcache"), M05_AXI_arprot("M05_AXI_arprot"), M05_AXI_arregion("M05_AXI_arregion"), M05_AXI_arqos("M05_AXI_arqos"), M05_AXI_aruser("M05_AXI_aruser"), M05_AXI_arvalid("M05_AXI_arvalid"), M05_AXI_arready("M05_AXI_arready"), M05_AXI_rid("M05_AXI_rid"), M05_AXI_rdata("M05_AXI_rdata"), M05_AXI_rresp("M05_AXI_rresp"), M05_AXI_rlast("M05_AXI_rlast"), M05_AXI_ruser("M05_AXI_ruser"), M05_AXI_rvalid("M05_AXI_rvalid"), M05_AXI_rready("M05_AXI_rready"), M06_AXI_awid("M06_AXI_awid"), M06_AXI_awaddr("M06_AXI_awaddr"), M06_AXI_awlen("M06_AXI_awlen"), M06_AXI_awsize("M06_AXI_awsize"), M06_AXI_awburst("M06_AXI_awburst"), M06_AXI_awlock("M06_AXI_awlock"), M06_AXI_awcache("M06_AXI_awcache"), M06_AXI_awprot("M06_AXI_awprot"), M06_AXI_awregion("M06_AXI_awregion"), M06_AXI_awqos("M06_AXI_awqos"), M06_AXI_awuser("M06_AXI_awuser"), M06_AXI_awvalid("M06_AXI_awvalid"), M06_AXI_awready("M06_AXI_awready"), M06_AXI_wid("M06_AXI_wid"), M06_AXI_wdata("M06_AXI_wdata"), M06_AXI_wstrb("M06_AXI_wstrb"), M06_AXI_wlast("M06_AXI_wlast"), M06_AXI_wuser("M06_AXI_wuser"), M06_AXI_wvalid("M06_AXI_wvalid"), M06_AXI_wready("M06_AXI_wready"), M06_AXI_bid("M06_AXI_bid"), M06_AXI_bresp("M06_AXI_bresp"), M06_AXI_buser("M06_AXI_buser"), M06_AXI_bvalid("M06_AXI_bvalid"), M06_AXI_bready("M06_AXI_bready"), M06_AXI_arid("M06_AXI_arid"), M06_AXI_araddr("M06_AXI_araddr"), M06_AXI_arlen("M06_AXI_arlen"), M06_AXI_arsize("M06_AXI_arsize"), M06_AXI_arburst("M06_AXI_arburst"), M06_AXI_arlock("M06_AXI_arlock"), M06_AXI_arcache("M06_AXI_arcache"), M06_AXI_arprot("M06_AXI_arprot"), M06_AXI_arregion("M06_AXI_arregion"), M06_AXI_arqos("M06_AXI_arqos"), M06_AXI_aruser("M06_AXI_aruser"), M06_AXI_arvalid("M06_AXI_arvalid"), M06_AXI_arready("M06_AXI_arready"), M06_AXI_rid("M06_AXI_rid"), M06_AXI_rdata("M06_AXI_rdata"), M06_AXI_rresp("M06_AXI_rresp"), M06_AXI_rlast("M06_AXI_rlast"), M06_AXI_ruser("M06_AXI_ruser"), M06_AXI_rvalid("M06_AXI_rvalid"), M06_AXI_rready("M06_AXI_rready"), M07_AXI_awid("M07_AXI_awid"), M07_AXI_awaddr("M07_AXI_awaddr"), M07_AXI_awlen("M07_AXI_awlen"), M07_AXI_awsize("M07_AXI_awsize"), M07_AXI_awburst("M07_AXI_awburst"), M07_AXI_awlock("M07_AXI_awlock"), M07_AXI_awcache("M07_AXI_awcache"), M07_AXI_awprot("M07_AXI_awprot"), M07_AXI_awregion("M07_AXI_awregion"), M07_AXI_awqos("M07_AXI_awqos"), M07_AXI_awuser("M07_AXI_awuser"), M07_AXI_awvalid("M07_AXI_awvalid"), M07_AXI_awready("M07_AXI_awready"), M07_AXI_wid("M07_AXI_wid"), M07_AXI_wdata("M07_AXI_wdata"), M07_AXI_wstrb("M07_AXI_wstrb"), M07_AXI_wlast("M07_AXI_wlast"), M07_AXI_wuser("M07_AXI_wuser"), M07_AXI_wvalid("M07_AXI_wvalid"), M07_AXI_wready("M07_AXI_wready"), M07_AXI_bid("M07_AXI_bid"), M07_AXI_bresp("M07_AXI_bresp"), M07_AXI_buser("M07_AXI_buser"), M07_AXI_bvalid("M07_AXI_bvalid"), M07_AXI_bready("M07_AXI_bready"), M07_AXI_arid("M07_AXI_arid"), M07_AXI_araddr("M07_AXI_araddr"), M07_AXI_arlen("M07_AXI_arlen"), M07_AXI_arsize("M07_AXI_arsize"), M07_AXI_arburst("M07_AXI_arburst"), M07_AXI_arlock("M07_AXI_arlock"), M07_AXI_arcache("M07_AXI_arcache"), M07_AXI_arprot("M07_AXI_arprot"), M07_AXI_arregion("M07_AXI_arregion"), M07_AXI_arqos("M07_AXI_arqos"), M07_AXI_aruser("M07_AXI_aruser"), M07_AXI_arvalid("M07_AXI_arvalid"), M07_AXI_arready("M07_AXI_arready"), M07_AXI_rid("M07_AXI_rid"), M07_AXI_rdata("M07_AXI_rdata"), M07_AXI_rresp("M07_AXI_rresp"), M07_AXI_rlast("M07_AXI_rlast"), M07_AXI_ruser("M07_AXI_ruser"), M07_AXI_rvalid("M07_AXI_rvalid"), M07_AXI_rready("M07_AXI_rready"), M08_AXI_awid("M08_AXI_awid"), M08_AXI_awaddr("M08_AXI_awaddr"), M08_AXI_awlen("M08_AXI_awlen"), M08_AXI_awsize("M08_AXI_awsize"), M08_AXI_awburst("M08_AXI_awburst"), M08_AXI_awlock("M08_AXI_awlock"), M08_AXI_awcache("M08_AXI_awcache"), M08_AXI_awprot("M08_AXI_awprot"), M08_AXI_awregion("M08_AXI_awregion"), M08_AXI_awqos("M08_AXI_awqos"), M08_AXI_awuser("M08_AXI_awuser"), M08_AXI_awvalid("M08_AXI_awvalid"), M08_AXI_awready("M08_AXI_awready"), M08_AXI_wid("M08_AXI_wid"), M08_AXI_wdata("M08_AXI_wdata"), M08_AXI_wstrb("M08_AXI_wstrb"), M08_AXI_wlast("M08_AXI_wlast"), M08_AXI_wuser("M08_AXI_wuser"), M08_AXI_wvalid("M08_AXI_wvalid"), M08_AXI_wready("M08_AXI_wready"), M08_AXI_bid("M08_AXI_bid"), M08_AXI_bresp("M08_AXI_bresp"), M08_AXI_buser("M08_AXI_buser"), M08_AXI_bvalid("M08_AXI_bvalid"), M08_AXI_bready("M08_AXI_bready"), M08_AXI_arid("M08_AXI_arid"), M08_AXI_araddr("M08_AXI_araddr"), M08_AXI_arlen("M08_AXI_arlen"), M08_AXI_arsize("M08_AXI_arsize"), M08_AXI_arburst("M08_AXI_arburst"), M08_AXI_arlock("M08_AXI_arlock"), M08_AXI_arcache("M08_AXI_arcache"), M08_AXI_arprot("M08_AXI_arprot"), M08_AXI_arregion("M08_AXI_arregion"), M08_AXI_arqos("M08_AXI_arqos"), M08_AXI_aruser("M08_AXI_aruser"), M08_AXI_arvalid("M08_AXI_arvalid"), M08_AXI_arready("M08_AXI_arready"), M08_AXI_rid("M08_AXI_rid"), M08_AXI_rdata("M08_AXI_rdata"), M08_AXI_rresp("M08_AXI_rresp"), M08_AXI_rlast("M08_AXI_rlast"), M08_AXI_ruser("M08_AXI_ruser"), M08_AXI_rvalid("M08_AXI_rvalid"), M08_AXI_rready("M08_AXI_rready")
{
  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlen_converter = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlen_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_M02_AXI_transactor = NULL;
  mp_M03_AXI_transactor = NULL;
  mp_M04_AXI_transactor = NULL;
  mp_M05_AXI_transactor = NULL;
  mp_M05_AXI_awid_converter = NULL;
  mp_M05_AXI_awaddr_converter = NULL;
  mp_M05_AXI_awlen_converter = NULL;
  mp_M05_AXI_awuser_converter = NULL;
  mp_M05_AXI_awvalid_converter = NULL;
  mp_M05_AXI_awready_converter = NULL;
  mp_M05_AXI_wdata_converter = NULL;
  mp_M05_AXI_wstrb_converter = NULL;
  mp_M05_AXI_wlast_converter = NULL;
  mp_M05_AXI_wuser_converter = NULL;
  mp_M05_AXI_wvalid_converter = NULL;
  mp_M05_AXI_wready_converter = NULL;
  mp_M05_AXI_bid_converter = NULL;
  mp_M05_AXI_buser_converter = NULL;
  mp_M05_AXI_bvalid_converter = NULL;
  mp_M05_AXI_bready_converter = NULL;
  mp_M05_AXI_arid_converter = NULL;
  mp_M05_AXI_araddr_converter = NULL;
  mp_M05_AXI_arlen_converter = NULL;
  mp_M05_AXI_aruser_converter = NULL;
  mp_M05_AXI_arvalid_converter = NULL;
  mp_M05_AXI_arready_converter = NULL;
  mp_M05_AXI_rid_converter = NULL;
  mp_M05_AXI_rdata_converter = NULL;
  mp_M05_AXI_rlast_converter = NULL;
  mp_M05_AXI_ruser_converter = NULL;
  mp_M05_AXI_rvalid_converter = NULL;
  mp_M05_AXI_rready_converter = NULL;
  mp_M06_AXI_transactor = NULL;
  mp_M06_AXI_awid_converter = NULL;
  mp_M06_AXI_awaddr_converter = NULL;
  mp_M06_AXI_awlen_converter = NULL;
  mp_M06_AXI_awuser_converter = NULL;
  mp_M06_AXI_awvalid_converter = NULL;
  mp_M06_AXI_awready_converter = NULL;
  mp_M06_AXI_wdata_converter = NULL;
  mp_M06_AXI_wstrb_converter = NULL;
  mp_M06_AXI_wlast_converter = NULL;
  mp_M06_AXI_wuser_converter = NULL;
  mp_M06_AXI_wvalid_converter = NULL;
  mp_M06_AXI_wready_converter = NULL;
  mp_M06_AXI_bid_converter = NULL;
  mp_M06_AXI_buser_converter = NULL;
  mp_M06_AXI_bvalid_converter = NULL;
  mp_M06_AXI_bready_converter = NULL;
  mp_M06_AXI_arid_converter = NULL;
  mp_M06_AXI_araddr_converter = NULL;
  mp_M06_AXI_arlen_converter = NULL;
  mp_M06_AXI_aruser_converter = NULL;
  mp_M06_AXI_arvalid_converter = NULL;
  mp_M06_AXI_arready_converter = NULL;
  mp_M06_AXI_rid_converter = NULL;
  mp_M06_AXI_rdata_converter = NULL;
  mp_M06_AXI_rlast_converter = NULL;
  mp_M06_AXI_ruser_converter = NULL;
  mp_M06_AXI_rvalid_converter = NULL;
  mp_M06_AXI_rready_converter = NULL;
  mp_M07_AXI_transactor = NULL;
  mp_M07_AXI_awid_converter = NULL;
  mp_M07_AXI_awaddr_converter = NULL;
  mp_M07_AXI_awlen_converter = NULL;
  mp_M07_AXI_awuser_converter = NULL;
  mp_M07_AXI_awvalid_converter = NULL;
  mp_M07_AXI_awready_converter = NULL;
  mp_M07_AXI_wdata_converter = NULL;
  mp_M07_AXI_wstrb_converter = NULL;
  mp_M07_AXI_wlast_converter = NULL;
  mp_M07_AXI_wuser_converter = NULL;
  mp_M07_AXI_wvalid_converter = NULL;
  mp_M07_AXI_wready_converter = NULL;
  mp_M07_AXI_bid_converter = NULL;
  mp_M07_AXI_buser_converter = NULL;
  mp_M07_AXI_bvalid_converter = NULL;
  mp_M07_AXI_bready_converter = NULL;
  mp_M07_AXI_arid_converter = NULL;
  mp_M07_AXI_araddr_converter = NULL;
  mp_M07_AXI_arlen_converter = NULL;
  mp_M07_AXI_aruser_converter = NULL;
  mp_M07_AXI_arvalid_converter = NULL;
  mp_M07_AXI_arready_converter = NULL;
  mp_M07_AXI_rid_converter = NULL;
  mp_M07_AXI_rdata_converter = NULL;
  mp_M07_AXI_rlast_converter = NULL;
  mp_M07_AXI_ruser_converter = NULL;
  mp_M07_AXI_rvalid_converter = NULL;
  mp_M07_AXI_rready_converter = NULL;
  mp_M08_AXI_transactor = NULL;
  mp_M08_AXI_awid_converter = NULL;
  mp_M08_AXI_awaddr_converter = NULL;
  mp_M08_AXI_awlen_converter = NULL;
  mp_M08_AXI_awuser_converter = NULL;
  mp_M08_AXI_awvalid_converter = NULL;
  mp_M08_AXI_awready_converter = NULL;
  mp_M08_AXI_wdata_converter = NULL;
  mp_M08_AXI_wstrb_converter = NULL;
  mp_M08_AXI_wlast_converter = NULL;
  mp_M08_AXI_wuser_converter = NULL;
  mp_M08_AXI_wvalid_converter = NULL;
  mp_M08_AXI_wready_converter = NULL;
  mp_M08_AXI_bid_converter = NULL;
  mp_M08_AXI_buser_converter = NULL;
  mp_M08_AXI_bvalid_converter = NULL;
  mp_M08_AXI_bready_converter = NULL;
  mp_M08_AXI_arid_converter = NULL;
  mp_M08_AXI_araddr_converter = NULL;
  mp_M08_AXI_arlen_converter = NULL;
  mp_M08_AXI_aruser_converter = NULL;
  mp_M08_AXI_arvalid_converter = NULL;
  mp_M08_AXI_arready_converter = NULL;
  mp_M08_AXI_rid_converter = NULL;
  mp_M08_AXI_rdata_converter = NULL;
  mp_M08_AXI_rlast_converter = NULL;
  mp_M08_AXI_ruser_converter = NULL;
  mp_M08_AXI_rvalid_converter = NULL;
  mp_M08_AXI_rready_converter = NULL;

  // Instantiate Socket Stubs

  // configure S00_AXI_transactor
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "12");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI3");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,12,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);
  mp_S00_AXI_transactor->AWID(S00_AXI_awid);
  mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
  mp_S00_AXI_awlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_awlen_converter");
  mp_S00_AXI_awlen_converter->vector_in(S00_AXI_awlen);
  mp_S00_AXI_awlen_converter->vector_out(m_S00_AXI_awlen_converter_signal);
  mp_S00_AXI_transactor->AWLEN(m_S00_AXI_awlen_converter_signal);
  mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
  mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
  mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_awlock_converter");
  mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
  mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
  mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
  mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
  mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
  mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
  mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
  mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
  mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
  mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
  mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
  mp_S00_AXI_transactor->BID(S00_AXI_bid);
  mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
  mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
  mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
  mp_S00_AXI_transactor->ARID(S00_AXI_arid);
  mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
  mp_S00_AXI_arlen_converter = new xsc::common::vector2vector_converter<4,8>("S00_AXI_arlen_converter");
  mp_S00_AXI_arlen_converter->vector_in(S00_AXI_arlen);
  mp_S00_AXI_arlen_converter->vector_out(m_S00_AXI_arlen_converter_signal);
  mp_S00_AXI_transactor->ARLEN(m_S00_AXI_arlen_converter_signal);
  mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
  mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
  mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<2>("S00_AXI_arlock_converter");
  mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
  mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
  mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
  mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
  mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
  mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
  mp_S00_AXI_transactor->RID(S00_AXI_rid);
  mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
  mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
  mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
  mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
  mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
  mp_S00_AXI_transactor->CLK(aclk);
  mp_S00_AXI_transactor->RST(aresetn);
  // configure M00_AXI_transactor
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "9");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,9,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);
  mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
  mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
  mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
  mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
  mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
  mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
  mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
  mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
  mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
  mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
  mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
  mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
  mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
  mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
  mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
  mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
  mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
  mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
  mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
  mp_M00_AXI_transactor->CLK(aclk);
  mp_M00_AXI_transactor->RST(aresetn);
  // configure M01_AXI_transactor
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "6");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,6,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);
  mp_M01_AXI_transactor->AWADDR(M01_AXI_awaddr);
  mp_M01_AXI_transactor->AWPROT(M01_AXI_awprot);
  mp_M01_AXI_transactor->AWVALID(M01_AXI_awvalid);
  mp_M01_AXI_transactor->AWREADY(M01_AXI_awready);
  mp_M01_AXI_transactor->WDATA(M01_AXI_wdata);
  mp_M01_AXI_transactor->WSTRB(M01_AXI_wstrb);
  mp_M01_AXI_transactor->WVALID(M01_AXI_wvalid);
  mp_M01_AXI_transactor->WREADY(M01_AXI_wready);
  mp_M01_AXI_transactor->BRESP(M01_AXI_bresp);
  mp_M01_AXI_transactor->BVALID(M01_AXI_bvalid);
  mp_M01_AXI_transactor->BREADY(M01_AXI_bready);
  mp_M01_AXI_transactor->ARADDR(M01_AXI_araddr);
  mp_M01_AXI_transactor->ARPROT(M01_AXI_arprot);
  mp_M01_AXI_transactor->ARVALID(M01_AXI_arvalid);
  mp_M01_AXI_transactor->ARREADY(M01_AXI_arready);
  mp_M01_AXI_transactor->RDATA(M01_AXI_rdata);
  mp_M01_AXI_transactor->RRESP(M01_AXI_rresp);
  mp_M01_AXI_transactor->RVALID(M01_AXI_rvalid);
  mp_M01_AXI_transactor->RREADY(M01_AXI_rready);
  mp_M01_AXI_transactor->CLK(aclk);
  mp_M01_AXI_transactor->RST(aresetn);
  // configure M02_AXI_transactor
    xsc::common_cpp::properties M02_AXI_transactor_param_props;
    M02_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M02_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M02_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ADDR_WIDTH", "9");
    M02_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M02_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M02_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M02_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M02_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M02_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M02_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M02_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M02_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M02_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M02_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M02_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M02_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M02_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M02_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,9,1,1,1,1,1,1>("M02_AXI_transactor", M02_AXI_transactor_param_props);
  mp_M02_AXI_transactor->AWADDR(M02_AXI_awaddr);
  mp_M02_AXI_transactor->AWPROT(M02_AXI_awprot);
  mp_M02_AXI_transactor->AWVALID(M02_AXI_awvalid);
  mp_M02_AXI_transactor->AWREADY(M02_AXI_awready);
  mp_M02_AXI_transactor->WDATA(M02_AXI_wdata);
  mp_M02_AXI_transactor->WSTRB(M02_AXI_wstrb);
  mp_M02_AXI_transactor->WVALID(M02_AXI_wvalid);
  mp_M02_AXI_transactor->WREADY(M02_AXI_wready);
  mp_M02_AXI_transactor->BRESP(M02_AXI_bresp);
  mp_M02_AXI_transactor->BVALID(M02_AXI_bvalid);
  mp_M02_AXI_transactor->BREADY(M02_AXI_bready);
  mp_M02_AXI_transactor->ARADDR(M02_AXI_araddr);
  mp_M02_AXI_transactor->ARPROT(M02_AXI_arprot);
  mp_M02_AXI_transactor->ARVALID(M02_AXI_arvalid);
  mp_M02_AXI_transactor->ARREADY(M02_AXI_arready);
  mp_M02_AXI_transactor->RDATA(M02_AXI_rdata);
  mp_M02_AXI_transactor->RRESP(M02_AXI_rresp);
  mp_M02_AXI_transactor->RVALID(M02_AXI_rvalid);
  mp_M02_AXI_transactor->RREADY(M02_AXI_rready);
  mp_M02_AXI_transactor->CLK(aclk);
  mp_M02_AXI_transactor->RST(aresetn);
  // configure M03_AXI_transactor
    xsc::common_cpp::properties M03_AXI_transactor_param_props;
    M03_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M03_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M03_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ADDR_WIDTH", "8");
    M03_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M03_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M03_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M03_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M03_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M03_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M03_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M03_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M03_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M03_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M03_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M03_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M03_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M03_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M03_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,8,1,1,1,1,1,1>("M03_AXI_transactor", M03_AXI_transactor_param_props);
  mp_M03_AXI_transactor->AWADDR(M03_AXI_awaddr);
  mp_M03_AXI_transactor->AWPROT(M03_AXI_awprot);
  mp_M03_AXI_transactor->AWVALID(M03_AXI_awvalid);
  mp_M03_AXI_transactor->AWREADY(M03_AXI_awready);
  mp_M03_AXI_transactor->WDATA(M03_AXI_wdata);
  mp_M03_AXI_transactor->WSTRB(M03_AXI_wstrb);
  mp_M03_AXI_transactor->WVALID(M03_AXI_wvalid);
  mp_M03_AXI_transactor->WREADY(M03_AXI_wready);
  mp_M03_AXI_transactor->BRESP(M03_AXI_bresp);
  mp_M03_AXI_transactor->BVALID(M03_AXI_bvalid);
  mp_M03_AXI_transactor->BREADY(M03_AXI_bready);
  mp_M03_AXI_transactor->ARADDR(M03_AXI_araddr);
  mp_M03_AXI_transactor->ARPROT(M03_AXI_arprot);
  mp_M03_AXI_transactor->ARVALID(M03_AXI_arvalid);
  mp_M03_AXI_transactor->ARREADY(M03_AXI_arready);
  mp_M03_AXI_transactor->RDATA(M03_AXI_rdata);
  mp_M03_AXI_transactor->RRESP(M03_AXI_rresp);
  mp_M03_AXI_transactor->RVALID(M03_AXI_rvalid);
  mp_M03_AXI_transactor->RREADY(M03_AXI_rready);
  mp_M03_AXI_transactor->CLK(aclk);
  mp_M03_AXI_transactor->RST(aresetn);
  // configure M04_AXI_transactor
    xsc::common_cpp::properties M04_AXI_transactor_param_props;
    M04_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M04_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M04_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ADDR_WIDTH", "7");
    M04_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("HAS_BURST", "0");
    M04_AXI_transactor_param_props.addLong("HAS_LOCK", "0");
    M04_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M04_AXI_transactor_param_props.addLong("HAS_CACHE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_QOS", "0");
    M04_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M04_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M04_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M04_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M04_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "8");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "8");
    M04_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    M04_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_SIZE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M04_AXI_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    M04_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M04_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M04_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,7,1,1,1,1,1,1>("M04_AXI_transactor", M04_AXI_transactor_param_props);
  mp_M04_AXI_transactor->AWADDR(M04_AXI_awaddr);
  mp_M04_AXI_transactor->AWPROT(M04_AXI_awprot);
  mp_M04_AXI_transactor->AWVALID(M04_AXI_awvalid);
  mp_M04_AXI_transactor->AWREADY(M04_AXI_awready);
  mp_M04_AXI_transactor->WDATA(M04_AXI_wdata);
  mp_M04_AXI_transactor->WSTRB(M04_AXI_wstrb);
  mp_M04_AXI_transactor->WVALID(M04_AXI_wvalid);
  mp_M04_AXI_transactor->WREADY(M04_AXI_wready);
  mp_M04_AXI_transactor->BRESP(M04_AXI_bresp);
  mp_M04_AXI_transactor->BVALID(M04_AXI_bvalid);
  mp_M04_AXI_transactor->BREADY(M04_AXI_bready);
  mp_M04_AXI_transactor->ARADDR(M04_AXI_araddr);
  mp_M04_AXI_transactor->ARPROT(M04_AXI_arprot);
  mp_M04_AXI_transactor->ARVALID(M04_AXI_arvalid);
  mp_M04_AXI_transactor->ARREADY(M04_AXI_arready);
  mp_M04_AXI_transactor->RDATA(M04_AXI_rdata);
  mp_M04_AXI_transactor->RRESP(M04_AXI_rresp);
  mp_M04_AXI_transactor->RVALID(M04_AXI_rvalid);
  mp_M04_AXI_transactor->RREADY(M04_AXI_rready);
  mp_M04_AXI_transactor->CLK(aclk);
  mp_M04_AXI_transactor->RST(aresetn);
  // configure M05_AXI_transactor
    xsc::common_cpp::properties M05_AXI_transactor_param_props;
    M05_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M05_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M05_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M05_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M05_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M05_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M05_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M05_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M05_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M05_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M05_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M05_AXI_transactor_param_props.addString("PROTOCOL", "");
    M05_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M05_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M05_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M05_AXI_transactor", M05_AXI_transactor_param_props);
  mp_M05_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awid_converter");
  mp_M05_AXI_awid_converter->vector_in(m_M05_AXI_awid_converter_signal);
  mp_M05_AXI_awid_converter->scalar_out(M05_AXI_awid);
  mp_M05_AXI_transactor->AWID(m_M05_AXI_awid_converter_signal);
  mp_M05_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_awaddr_converter");
  mp_M05_AXI_awaddr_converter->vector_in(m_M05_AXI_awaddr_converter_signal);
  mp_M05_AXI_awaddr_converter->scalar_out(M05_AXI_awaddr);
  mp_M05_AXI_transactor->AWADDR(m_M05_AXI_awaddr_converter_signal);
  mp_M05_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M05_AXI_awlen_converter");
  mp_M05_AXI_awlen_converter->vector_in(m_M05_AXI_awlen_converter_signal);
  mp_M05_AXI_awlen_converter->scalar_out(M05_AXI_awlen);
  mp_M05_AXI_transactor->AWLEN(m_M05_AXI_awlen_converter_signal);
  mp_M05_AXI_transactor->AWSIZE(M05_AXI_awsize);
  mp_M05_AXI_transactor->AWBURST(M05_AXI_awburst);
  mp_M05_AXI_transactor->AWLOCK(M05_AXI_awlock);
  mp_M05_AXI_transactor->AWCACHE(M05_AXI_awcache);
  mp_M05_AXI_transactor->AWPROT(M05_AXI_awprot);
  mp_M05_AXI_transactor->AWREGION(M05_AXI_awregion);
  mp_M05_AXI_transactor->AWQOS(M05_AXI_awqos);
  mp_M05_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awuser_converter");
  mp_M05_AXI_awuser_converter->vector_in(m_M05_AXI_awuser_converter_signal);
  mp_M05_AXI_awuser_converter->scalar_out(M05_AXI_awuser);
  mp_M05_AXI_transactor->AWUSER(m_M05_AXI_awuser_converter_signal);
  mp_M05_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_awvalid_converter");
  mp_M05_AXI_awvalid_converter->scalar_in(m_M05_AXI_awvalid_converter_signal);
  mp_M05_AXI_awvalid_converter->vector_out(M05_AXI_awvalid);
  mp_M05_AXI_transactor->AWVALID(m_M05_AXI_awvalid_converter_signal);
  mp_M05_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_awready_converter");
  mp_M05_AXI_awready_converter->vector_in(M05_AXI_awready);
  mp_M05_AXI_awready_converter->scalar_out(m_M05_AXI_awready_converter_signal);
  mp_M05_AXI_transactor->AWREADY(m_M05_AXI_awready_converter_signal);
  mp_M05_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_wdata_converter");
  mp_M05_AXI_wdata_converter->vector_in(m_M05_AXI_wdata_converter_signal);
  mp_M05_AXI_wdata_converter->scalar_out(M05_AXI_wdata);
  mp_M05_AXI_transactor->WDATA(m_M05_AXI_wdata_converter_signal);
  mp_M05_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M05_AXI_wstrb_converter");
  mp_M05_AXI_wstrb_converter->vector_in(m_M05_AXI_wstrb_converter_signal);
  mp_M05_AXI_wstrb_converter->scalar_out(M05_AXI_wstrb);
  mp_M05_AXI_transactor->WSTRB(m_M05_AXI_wstrb_converter_signal);
  mp_M05_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_wlast_converter");
  mp_M05_AXI_wlast_converter->scalar_in(m_M05_AXI_wlast_converter_signal);
  mp_M05_AXI_wlast_converter->vector_out(M05_AXI_wlast);
  mp_M05_AXI_transactor->WLAST(m_M05_AXI_wlast_converter_signal);
  mp_M05_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_wuser_converter");
  mp_M05_AXI_wuser_converter->vector_in(m_M05_AXI_wuser_converter_signal);
  mp_M05_AXI_wuser_converter->scalar_out(M05_AXI_wuser);
  mp_M05_AXI_transactor->WUSER(m_M05_AXI_wuser_converter_signal);
  mp_M05_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_wvalid_converter");
  mp_M05_AXI_wvalid_converter->scalar_in(m_M05_AXI_wvalid_converter_signal);
  mp_M05_AXI_wvalid_converter->vector_out(M05_AXI_wvalid);
  mp_M05_AXI_transactor->WVALID(m_M05_AXI_wvalid_converter_signal);
  mp_M05_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_wready_converter");
  mp_M05_AXI_wready_converter->vector_in(M05_AXI_wready);
  mp_M05_AXI_wready_converter->scalar_out(m_M05_AXI_wready_converter_signal);
  mp_M05_AXI_transactor->WREADY(m_M05_AXI_wready_converter_signal);
  mp_M05_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_bid_converter");
  mp_M05_AXI_bid_converter->scalar_in(M05_AXI_bid);
  mp_M05_AXI_bid_converter->vector_out(m_M05_AXI_bid_converter_signal);
  mp_M05_AXI_transactor->BID(m_M05_AXI_bid_converter_signal);
  mp_M05_AXI_transactor->BRESP(M05_AXI_bresp);
  mp_M05_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_buser_converter");
  mp_M05_AXI_buser_converter->scalar_in(M05_AXI_buser);
  mp_M05_AXI_buser_converter->vector_out(m_M05_AXI_buser_converter_signal);
  mp_M05_AXI_transactor->BUSER(m_M05_AXI_buser_converter_signal);
  mp_M05_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_bvalid_converter");
  mp_M05_AXI_bvalid_converter->vector_in(M05_AXI_bvalid);
  mp_M05_AXI_bvalid_converter->scalar_out(m_M05_AXI_bvalid_converter_signal);
  mp_M05_AXI_transactor->BVALID(m_M05_AXI_bvalid_converter_signal);
  mp_M05_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_bready_converter");
  mp_M05_AXI_bready_converter->scalar_in(m_M05_AXI_bready_converter_signal);
  mp_M05_AXI_bready_converter->vector_out(M05_AXI_bready);
  mp_M05_AXI_transactor->BREADY(m_M05_AXI_bready_converter_signal);
  mp_M05_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_arid_converter");
  mp_M05_AXI_arid_converter->vector_in(m_M05_AXI_arid_converter_signal);
  mp_M05_AXI_arid_converter->scalar_out(M05_AXI_arid);
  mp_M05_AXI_transactor->ARID(m_M05_AXI_arid_converter_signal);
  mp_M05_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M05_AXI_araddr_converter");
  mp_M05_AXI_araddr_converter->vector_in(m_M05_AXI_araddr_converter_signal);
  mp_M05_AXI_araddr_converter->scalar_out(M05_AXI_araddr);
  mp_M05_AXI_transactor->ARADDR(m_M05_AXI_araddr_converter_signal);
  mp_M05_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M05_AXI_arlen_converter");
  mp_M05_AXI_arlen_converter->vector_in(m_M05_AXI_arlen_converter_signal);
  mp_M05_AXI_arlen_converter->scalar_out(M05_AXI_arlen);
  mp_M05_AXI_transactor->ARLEN(m_M05_AXI_arlen_converter_signal);
  mp_M05_AXI_transactor->ARSIZE(M05_AXI_arsize);
  mp_M05_AXI_transactor->ARBURST(M05_AXI_arburst);
  mp_M05_AXI_transactor->ARLOCK(M05_AXI_arlock);
  mp_M05_AXI_transactor->ARCACHE(M05_AXI_arcache);
  mp_M05_AXI_transactor->ARPROT(M05_AXI_arprot);
  mp_M05_AXI_transactor->ARREGION(M05_AXI_arregion);
  mp_M05_AXI_transactor->ARQOS(M05_AXI_arqos);
  mp_M05_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_aruser_converter");
  mp_M05_AXI_aruser_converter->vector_in(m_M05_AXI_aruser_converter_signal);
  mp_M05_AXI_aruser_converter->scalar_out(M05_AXI_aruser);
  mp_M05_AXI_transactor->ARUSER(m_M05_AXI_aruser_converter_signal);
  mp_M05_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_arvalid_converter");
  mp_M05_AXI_arvalid_converter->scalar_in(m_M05_AXI_arvalid_converter_signal);
  mp_M05_AXI_arvalid_converter->vector_out(M05_AXI_arvalid);
  mp_M05_AXI_transactor->ARVALID(m_M05_AXI_arvalid_converter_signal);
  mp_M05_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_arready_converter");
  mp_M05_AXI_arready_converter->vector_in(M05_AXI_arready);
  mp_M05_AXI_arready_converter->scalar_out(m_M05_AXI_arready_converter_signal);
  mp_M05_AXI_transactor->ARREADY(m_M05_AXI_arready_converter_signal);
  mp_M05_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_rid_converter");
  mp_M05_AXI_rid_converter->scalar_in(M05_AXI_rid);
  mp_M05_AXI_rid_converter->vector_out(m_M05_AXI_rid_converter_signal);
  mp_M05_AXI_transactor->RID(m_M05_AXI_rid_converter_signal);
  mp_M05_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M05_AXI_rdata_converter");
  mp_M05_AXI_rdata_converter->scalar_in(M05_AXI_rdata);
  mp_M05_AXI_rdata_converter->vector_out(m_M05_AXI_rdata_converter_signal);
  mp_M05_AXI_transactor->RDATA(m_M05_AXI_rdata_converter_signal);
  mp_M05_AXI_transactor->RRESP(M05_AXI_rresp);
  mp_M05_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_rlast_converter");
  mp_M05_AXI_rlast_converter->vector_in(M05_AXI_rlast);
  mp_M05_AXI_rlast_converter->scalar_out(m_M05_AXI_rlast_converter_signal);
  mp_M05_AXI_transactor->RLAST(m_M05_AXI_rlast_converter_signal);
  mp_M05_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_ruser_converter");
  mp_M05_AXI_ruser_converter->scalar_in(M05_AXI_ruser);
  mp_M05_AXI_ruser_converter->vector_out(m_M05_AXI_ruser_converter_signal);
  mp_M05_AXI_transactor->RUSER(m_M05_AXI_ruser_converter_signal);
  mp_M05_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M05_AXI_rvalid_converter");
  mp_M05_AXI_rvalid_converter->vector_in(M05_AXI_rvalid);
  mp_M05_AXI_rvalid_converter->scalar_out(m_M05_AXI_rvalid_converter_signal);
  mp_M05_AXI_transactor->RVALID(m_M05_AXI_rvalid_converter_signal);
  mp_M05_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_rready_converter");
  mp_M05_AXI_rready_converter->scalar_in(m_M05_AXI_rready_converter_signal);
  mp_M05_AXI_rready_converter->vector_out(M05_AXI_rready);
  mp_M05_AXI_transactor->RREADY(m_M05_AXI_rready_converter_signal);
  mp_M05_AXI_transactor->CLK(aclk);
  mp_M05_AXI_transactor->RST(aresetn);
  // configure M06_AXI_transactor
    xsc::common_cpp::properties M06_AXI_transactor_param_props;
    M06_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M06_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M06_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M06_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M06_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M06_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M06_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M06_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M06_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M06_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M06_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M06_AXI_transactor_param_props.addString("PROTOCOL", "");
    M06_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M06_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M06_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M06_AXI_transactor", M06_AXI_transactor_param_props);
  mp_M06_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awid_converter");
  mp_M06_AXI_awid_converter->vector_in(m_M06_AXI_awid_converter_signal);
  mp_M06_AXI_awid_converter->scalar_out(M06_AXI_awid);
  mp_M06_AXI_transactor->AWID(m_M06_AXI_awid_converter_signal);
  mp_M06_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_awaddr_converter");
  mp_M06_AXI_awaddr_converter->vector_in(m_M06_AXI_awaddr_converter_signal);
  mp_M06_AXI_awaddr_converter->scalar_out(M06_AXI_awaddr);
  mp_M06_AXI_transactor->AWADDR(m_M06_AXI_awaddr_converter_signal);
  mp_M06_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M06_AXI_awlen_converter");
  mp_M06_AXI_awlen_converter->vector_in(m_M06_AXI_awlen_converter_signal);
  mp_M06_AXI_awlen_converter->scalar_out(M06_AXI_awlen);
  mp_M06_AXI_transactor->AWLEN(m_M06_AXI_awlen_converter_signal);
  mp_M06_AXI_transactor->AWSIZE(M06_AXI_awsize);
  mp_M06_AXI_transactor->AWBURST(M06_AXI_awburst);
  mp_M06_AXI_transactor->AWLOCK(M06_AXI_awlock);
  mp_M06_AXI_transactor->AWCACHE(M06_AXI_awcache);
  mp_M06_AXI_transactor->AWPROT(M06_AXI_awprot);
  mp_M06_AXI_transactor->AWREGION(M06_AXI_awregion);
  mp_M06_AXI_transactor->AWQOS(M06_AXI_awqos);
  mp_M06_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awuser_converter");
  mp_M06_AXI_awuser_converter->vector_in(m_M06_AXI_awuser_converter_signal);
  mp_M06_AXI_awuser_converter->scalar_out(M06_AXI_awuser);
  mp_M06_AXI_transactor->AWUSER(m_M06_AXI_awuser_converter_signal);
  mp_M06_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_awvalid_converter");
  mp_M06_AXI_awvalid_converter->scalar_in(m_M06_AXI_awvalid_converter_signal);
  mp_M06_AXI_awvalid_converter->vector_out(M06_AXI_awvalid);
  mp_M06_AXI_transactor->AWVALID(m_M06_AXI_awvalid_converter_signal);
  mp_M06_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_awready_converter");
  mp_M06_AXI_awready_converter->vector_in(M06_AXI_awready);
  mp_M06_AXI_awready_converter->scalar_out(m_M06_AXI_awready_converter_signal);
  mp_M06_AXI_transactor->AWREADY(m_M06_AXI_awready_converter_signal);
  mp_M06_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_wdata_converter");
  mp_M06_AXI_wdata_converter->vector_in(m_M06_AXI_wdata_converter_signal);
  mp_M06_AXI_wdata_converter->scalar_out(M06_AXI_wdata);
  mp_M06_AXI_transactor->WDATA(m_M06_AXI_wdata_converter_signal);
  mp_M06_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M06_AXI_wstrb_converter");
  mp_M06_AXI_wstrb_converter->vector_in(m_M06_AXI_wstrb_converter_signal);
  mp_M06_AXI_wstrb_converter->scalar_out(M06_AXI_wstrb);
  mp_M06_AXI_transactor->WSTRB(m_M06_AXI_wstrb_converter_signal);
  mp_M06_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_wlast_converter");
  mp_M06_AXI_wlast_converter->scalar_in(m_M06_AXI_wlast_converter_signal);
  mp_M06_AXI_wlast_converter->vector_out(M06_AXI_wlast);
  mp_M06_AXI_transactor->WLAST(m_M06_AXI_wlast_converter_signal);
  mp_M06_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_wuser_converter");
  mp_M06_AXI_wuser_converter->vector_in(m_M06_AXI_wuser_converter_signal);
  mp_M06_AXI_wuser_converter->scalar_out(M06_AXI_wuser);
  mp_M06_AXI_transactor->WUSER(m_M06_AXI_wuser_converter_signal);
  mp_M06_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_wvalid_converter");
  mp_M06_AXI_wvalid_converter->scalar_in(m_M06_AXI_wvalid_converter_signal);
  mp_M06_AXI_wvalid_converter->vector_out(M06_AXI_wvalid);
  mp_M06_AXI_transactor->WVALID(m_M06_AXI_wvalid_converter_signal);
  mp_M06_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_wready_converter");
  mp_M06_AXI_wready_converter->vector_in(M06_AXI_wready);
  mp_M06_AXI_wready_converter->scalar_out(m_M06_AXI_wready_converter_signal);
  mp_M06_AXI_transactor->WREADY(m_M06_AXI_wready_converter_signal);
  mp_M06_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_bid_converter");
  mp_M06_AXI_bid_converter->scalar_in(M06_AXI_bid);
  mp_M06_AXI_bid_converter->vector_out(m_M06_AXI_bid_converter_signal);
  mp_M06_AXI_transactor->BID(m_M06_AXI_bid_converter_signal);
  mp_M06_AXI_transactor->BRESP(M06_AXI_bresp);
  mp_M06_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_buser_converter");
  mp_M06_AXI_buser_converter->scalar_in(M06_AXI_buser);
  mp_M06_AXI_buser_converter->vector_out(m_M06_AXI_buser_converter_signal);
  mp_M06_AXI_transactor->BUSER(m_M06_AXI_buser_converter_signal);
  mp_M06_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_bvalid_converter");
  mp_M06_AXI_bvalid_converter->vector_in(M06_AXI_bvalid);
  mp_M06_AXI_bvalid_converter->scalar_out(m_M06_AXI_bvalid_converter_signal);
  mp_M06_AXI_transactor->BVALID(m_M06_AXI_bvalid_converter_signal);
  mp_M06_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_bready_converter");
  mp_M06_AXI_bready_converter->scalar_in(m_M06_AXI_bready_converter_signal);
  mp_M06_AXI_bready_converter->vector_out(M06_AXI_bready);
  mp_M06_AXI_transactor->BREADY(m_M06_AXI_bready_converter_signal);
  mp_M06_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_arid_converter");
  mp_M06_AXI_arid_converter->vector_in(m_M06_AXI_arid_converter_signal);
  mp_M06_AXI_arid_converter->scalar_out(M06_AXI_arid);
  mp_M06_AXI_transactor->ARID(m_M06_AXI_arid_converter_signal);
  mp_M06_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M06_AXI_araddr_converter");
  mp_M06_AXI_araddr_converter->vector_in(m_M06_AXI_araddr_converter_signal);
  mp_M06_AXI_araddr_converter->scalar_out(M06_AXI_araddr);
  mp_M06_AXI_transactor->ARADDR(m_M06_AXI_araddr_converter_signal);
  mp_M06_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M06_AXI_arlen_converter");
  mp_M06_AXI_arlen_converter->vector_in(m_M06_AXI_arlen_converter_signal);
  mp_M06_AXI_arlen_converter->scalar_out(M06_AXI_arlen);
  mp_M06_AXI_transactor->ARLEN(m_M06_AXI_arlen_converter_signal);
  mp_M06_AXI_transactor->ARSIZE(M06_AXI_arsize);
  mp_M06_AXI_transactor->ARBURST(M06_AXI_arburst);
  mp_M06_AXI_transactor->ARLOCK(M06_AXI_arlock);
  mp_M06_AXI_transactor->ARCACHE(M06_AXI_arcache);
  mp_M06_AXI_transactor->ARPROT(M06_AXI_arprot);
  mp_M06_AXI_transactor->ARREGION(M06_AXI_arregion);
  mp_M06_AXI_transactor->ARQOS(M06_AXI_arqos);
  mp_M06_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_aruser_converter");
  mp_M06_AXI_aruser_converter->vector_in(m_M06_AXI_aruser_converter_signal);
  mp_M06_AXI_aruser_converter->scalar_out(M06_AXI_aruser);
  mp_M06_AXI_transactor->ARUSER(m_M06_AXI_aruser_converter_signal);
  mp_M06_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_arvalid_converter");
  mp_M06_AXI_arvalid_converter->scalar_in(m_M06_AXI_arvalid_converter_signal);
  mp_M06_AXI_arvalid_converter->vector_out(M06_AXI_arvalid);
  mp_M06_AXI_transactor->ARVALID(m_M06_AXI_arvalid_converter_signal);
  mp_M06_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_arready_converter");
  mp_M06_AXI_arready_converter->vector_in(M06_AXI_arready);
  mp_M06_AXI_arready_converter->scalar_out(m_M06_AXI_arready_converter_signal);
  mp_M06_AXI_transactor->ARREADY(m_M06_AXI_arready_converter_signal);
  mp_M06_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_rid_converter");
  mp_M06_AXI_rid_converter->scalar_in(M06_AXI_rid);
  mp_M06_AXI_rid_converter->vector_out(m_M06_AXI_rid_converter_signal);
  mp_M06_AXI_transactor->RID(m_M06_AXI_rid_converter_signal);
  mp_M06_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M06_AXI_rdata_converter");
  mp_M06_AXI_rdata_converter->scalar_in(M06_AXI_rdata);
  mp_M06_AXI_rdata_converter->vector_out(m_M06_AXI_rdata_converter_signal);
  mp_M06_AXI_transactor->RDATA(m_M06_AXI_rdata_converter_signal);
  mp_M06_AXI_transactor->RRESP(M06_AXI_rresp);
  mp_M06_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_rlast_converter");
  mp_M06_AXI_rlast_converter->vector_in(M06_AXI_rlast);
  mp_M06_AXI_rlast_converter->scalar_out(m_M06_AXI_rlast_converter_signal);
  mp_M06_AXI_transactor->RLAST(m_M06_AXI_rlast_converter_signal);
  mp_M06_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_ruser_converter");
  mp_M06_AXI_ruser_converter->scalar_in(M06_AXI_ruser);
  mp_M06_AXI_ruser_converter->vector_out(m_M06_AXI_ruser_converter_signal);
  mp_M06_AXI_transactor->RUSER(m_M06_AXI_ruser_converter_signal);
  mp_M06_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M06_AXI_rvalid_converter");
  mp_M06_AXI_rvalid_converter->vector_in(M06_AXI_rvalid);
  mp_M06_AXI_rvalid_converter->scalar_out(m_M06_AXI_rvalid_converter_signal);
  mp_M06_AXI_transactor->RVALID(m_M06_AXI_rvalid_converter_signal);
  mp_M06_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_rready_converter");
  mp_M06_AXI_rready_converter->scalar_in(m_M06_AXI_rready_converter_signal);
  mp_M06_AXI_rready_converter->vector_out(M06_AXI_rready);
  mp_M06_AXI_transactor->RREADY(m_M06_AXI_rready_converter_signal);
  mp_M06_AXI_transactor->CLK(aclk);
  mp_M06_AXI_transactor->RST(aresetn);
  // configure M07_AXI_transactor
    xsc::common_cpp::properties M07_AXI_transactor_param_props;
    M07_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M07_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M07_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M07_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M07_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M07_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M07_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M07_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M07_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M07_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M07_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M07_AXI_transactor_param_props.addString("PROTOCOL", "");
    M07_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M07_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M07_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M07_AXI_transactor", M07_AXI_transactor_param_props);
  mp_M07_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awid_converter");
  mp_M07_AXI_awid_converter->vector_in(m_M07_AXI_awid_converter_signal);
  mp_M07_AXI_awid_converter->scalar_out(M07_AXI_awid);
  mp_M07_AXI_transactor->AWID(m_M07_AXI_awid_converter_signal);
  mp_M07_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_awaddr_converter");
  mp_M07_AXI_awaddr_converter->vector_in(m_M07_AXI_awaddr_converter_signal);
  mp_M07_AXI_awaddr_converter->scalar_out(M07_AXI_awaddr);
  mp_M07_AXI_transactor->AWADDR(m_M07_AXI_awaddr_converter_signal);
  mp_M07_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M07_AXI_awlen_converter");
  mp_M07_AXI_awlen_converter->vector_in(m_M07_AXI_awlen_converter_signal);
  mp_M07_AXI_awlen_converter->scalar_out(M07_AXI_awlen);
  mp_M07_AXI_transactor->AWLEN(m_M07_AXI_awlen_converter_signal);
  mp_M07_AXI_transactor->AWSIZE(M07_AXI_awsize);
  mp_M07_AXI_transactor->AWBURST(M07_AXI_awburst);
  mp_M07_AXI_transactor->AWLOCK(M07_AXI_awlock);
  mp_M07_AXI_transactor->AWCACHE(M07_AXI_awcache);
  mp_M07_AXI_transactor->AWPROT(M07_AXI_awprot);
  mp_M07_AXI_transactor->AWREGION(M07_AXI_awregion);
  mp_M07_AXI_transactor->AWQOS(M07_AXI_awqos);
  mp_M07_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awuser_converter");
  mp_M07_AXI_awuser_converter->vector_in(m_M07_AXI_awuser_converter_signal);
  mp_M07_AXI_awuser_converter->scalar_out(M07_AXI_awuser);
  mp_M07_AXI_transactor->AWUSER(m_M07_AXI_awuser_converter_signal);
  mp_M07_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_awvalid_converter");
  mp_M07_AXI_awvalid_converter->scalar_in(m_M07_AXI_awvalid_converter_signal);
  mp_M07_AXI_awvalid_converter->vector_out(M07_AXI_awvalid);
  mp_M07_AXI_transactor->AWVALID(m_M07_AXI_awvalid_converter_signal);
  mp_M07_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_awready_converter");
  mp_M07_AXI_awready_converter->vector_in(M07_AXI_awready);
  mp_M07_AXI_awready_converter->scalar_out(m_M07_AXI_awready_converter_signal);
  mp_M07_AXI_transactor->AWREADY(m_M07_AXI_awready_converter_signal);
  mp_M07_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_wdata_converter");
  mp_M07_AXI_wdata_converter->vector_in(m_M07_AXI_wdata_converter_signal);
  mp_M07_AXI_wdata_converter->scalar_out(M07_AXI_wdata);
  mp_M07_AXI_transactor->WDATA(m_M07_AXI_wdata_converter_signal);
  mp_M07_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M07_AXI_wstrb_converter");
  mp_M07_AXI_wstrb_converter->vector_in(m_M07_AXI_wstrb_converter_signal);
  mp_M07_AXI_wstrb_converter->scalar_out(M07_AXI_wstrb);
  mp_M07_AXI_transactor->WSTRB(m_M07_AXI_wstrb_converter_signal);
  mp_M07_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_wlast_converter");
  mp_M07_AXI_wlast_converter->scalar_in(m_M07_AXI_wlast_converter_signal);
  mp_M07_AXI_wlast_converter->vector_out(M07_AXI_wlast);
  mp_M07_AXI_transactor->WLAST(m_M07_AXI_wlast_converter_signal);
  mp_M07_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_wuser_converter");
  mp_M07_AXI_wuser_converter->vector_in(m_M07_AXI_wuser_converter_signal);
  mp_M07_AXI_wuser_converter->scalar_out(M07_AXI_wuser);
  mp_M07_AXI_transactor->WUSER(m_M07_AXI_wuser_converter_signal);
  mp_M07_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_wvalid_converter");
  mp_M07_AXI_wvalid_converter->scalar_in(m_M07_AXI_wvalid_converter_signal);
  mp_M07_AXI_wvalid_converter->vector_out(M07_AXI_wvalid);
  mp_M07_AXI_transactor->WVALID(m_M07_AXI_wvalid_converter_signal);
  mp_M07_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_wready_converter");
  mp_M07_AXI_wready_converter->vector_in(M07_AXI_wready);
  mp_M07_AXI_wready_converter->scalar_out(m_M07_AXI_wready_converter_signal);
  mp_M07_AXI_transactor->WREADY(m_M07_AXI_wready_converter_signal);
  mp_M07_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_bid_converter");
  mp_M07_AXI_bid_converter->scalar_in(M07_AXI_bid);
  mp_M07_AXI_bid_converter->vector_out(m_M07_AXI_bid_converter_signal);
  mp_M07_AXI_transactor->BID(m_M07_AXI_bid_converter_signal);
  mp_M07_AXI_transactor->BRESP(M07_AXI_bresp);
  mp_M07_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_buser_converter");
  mp_M07_AXI_buser_converter->scalar_in(M07_AXI_buser);
  mp_M07_AXI_buser_converter->vector_out(m_M07_AXI_buser_converter_signal);
  mp_M07_AXI_transactor->BUSER(m_M07_AXI_buser_converter_signal);
  mp_M07_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_bvalid_converter");
  mp_M07_AXI_bvalid_converter->vector_in(M07_AXI_bvalid);
  mp_M07_AXI_bvalid_converter->scalar_out(m_M07_AXI_bvalid_converter_signal);
  mp_M07_AXI_transactor->BVALID(m_M07_AXI_bvalid_converter_signal);
  mp_M07_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_bready_converter");
  mp_M07_AXI_bready_converter->scalar_in(m_M07_AXI_bready_converter_signal);
  mp_M07_AXI_bready_converter->vector_out(M07_AXI_bready);
  mp_M07_AXI_transactor->BREADY(m_M07_AXI_bready_converter_signal);
  mp_M07_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_arid_converter");
  mp_M07_AXI_arid_converter->vector_in(m_M07_AXI_arid_converter_signal);
  mp_M07_AXI_arid_converter->scalar_out(M07_AXI_arid);
  mp_M07_AXI_transactor->ARID(m_M07_AXI_arid_converter_signal);
  mp_M07_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M07_AXI_araddr_converter");
  mp_M07_AXI_araddr_converter->vector_in(m_M07_AXI_araddr_converter_signal);
  mp_M07_AXI_araddr_converter->scalar_out(M07_AXI_araddr);
  mp_M07_AXI_transactor->ARADDR(m_M07_AXI_araddr_converter_signal);
  mp_M07_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M07_AXI_arlen_converter");
  mp_M07_AXI_arlen_converter->vector_in(m_M07_AXI_arlen_converter_signal);
  mp_M07_AXI_arlen_converter->scalar_out(M07_AXI_arlen);
  mp_M07_AXI_transactor->ARLEN(m_M07_AXI_arlen_converter_signal);
  mp_M07_AXI_transactor->ARSIZE(M07_AXI_arsize);
  mp_M07_AXI_transactor->ARBURST(M07_AXI_arburst);
  mp_M07_AXI_transactor->ARLOCK(M07_AXI_arlock);
  mp_M07_AXI_transactor->ARCACHE(M07_AXI_arcache);
  mp_M07_AXI_transactor->ARPROT(M07_AXI_arprot);
  mp_M07_AXI_transactor->ARREGION(M07_AXI_arregion);
  mp_M07_AXI_transactor->ARQOS(M07_AXI_arqos);
  mp_M07_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_aruser_converter");
  mp_M07_AXI_aruser_converter->vector_in(m_M07_AXI_aruser_converter_signal);
  mp_M07_AXI_aruser_converter->scalar_out(M07_AXI_aruser);
  mp_M07_AXI_transactor->ARUSER(m_M07_AXI_aruser_converter_signal);
  mp_M07_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_arvalid_converter");
  mp_M07_AXI_arvalid_converter->scalar_in(m_M07_AXI_arvalid_converter_signal);
  mp_M07_AXI_arvalid_converter->vector_out(M07_AXI_arvalid);
  mp_M07_AXI_transactor->ARVALID(m_M07_AXI_arvalid_converter_signal);
  mp_M07_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_arready_converter");
  mp_M07_AXI_arready_converter->vector_in(M07_AXI_arready);
  mp_M07_AXI_arready_converter->scalar_out(m_M07_AXI_arready_converter_signal);
  mp_M07_AXI_transactor->ARREADY(m_M07_AXI_arready_converter_signal);
  mp_M07_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_rid_converter");
  mp_M07_AXI_rid_converter->scalar_in(M07_AXI_rid);
  mp_M07_AXI_rid_converter->vector_out(m_M07_AXI_rid_converter_signal);
  mp_M07_AXI_transactor->RID(m_M07_AXI_rid_converter_signal);
  mp_M07_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M07_AXI_rdata_converter");
  mp_M07_AXI_rdata_converter->scalar_in(M07_AXI_rdata);
  mp_M07_AXI_rdata_converter->vector_out(m_M07_AXI_rdata_converter_signal);
  mp_M07_AXI_transactor->RDATA(m_M07_AXI_rdata_converter_signal);
  mp_M07_AXI_transactor->RRESP(M07_AXI_rresp);
  mp_M07_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_rlast_converter");
  mp_M07_AXI_rlast_converter->vector_in(M07_AXI_rlast);
  mp_M07_AXI_rlast_converter->scalar_out(m_M07_AXI_rlast_converter_signal);
  mp_M07_AXI_transactor->RLAST(m_M07_AXI_rlast_converter_signal);
  mp_M07_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_ruser_converter");
  mp_M07_AXI_ruser_converter->scalar_in(M07_AXI_ruser);
  mp_M07_AXI_ruser_converter->vector_out(m_M07_AXI_ruser_converter_signal);
  mp_M07_AXI_transactor->RUSER(m_M07_AXI_ruser_converter_signal);
  mp_M07_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M07_AXI_rvalid_converter");
  mp_M07_AXI_rvalid_converter->vector_in(M07_AXI_rvalid);
  mp_M07_AXI_rvalid_converter->scalar_out(m_M07_AXI_rvalid_converter_signal);
  mp_M07_AXI_transactor->RVALID(m_M07_AXI_rvalid_converter_signal);
  mp_M07_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_rready_converter");
  mp_M07_AXI_rready_converter->scalar_in(m_M07_AXI_rready_converter_signal);
  mp_M07_AXI_rready_converter->vector_out(M07_AXI_rready);
  mp_M07_AXI_transactor->RREADY(m_M07_AXI_rready_converter_signal);
  mp_M07_AXI_transactor->CLK(aclk);
  mp_M07_AXI_transactor->RST(aresetn);
  // configure M08_AXI_transactor
    xsc::common_cpp::properties M08_AXI_transactor_param_props;
    M08_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("FREQ_HZ", "153846161");
    M08_AXI_transactor_param_props.addLong("ID_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("WUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("BUSER_WIDTH", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M08_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M08_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M08_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M08_AXI_transactor_param_props.addLong("HAS_REGION", "1");
    M08_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M08_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M08_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    M08_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M08_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M08_AXI_transactor_param_props.addString("PROTOCOL", "");
    M08_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M08_AXI_transactor_param_props.addString("CLK_DOMAIN", "design_1_processing_system7_0_0_FCLK_CLK3");

    mp_M08_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,1,1,1,1,1,1>("M08_AXI_transactor", M08_AXI_transactor_param_props);
  mp_M08_AXI_awid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awid_converter");
  mp_M08_AXI_awid_converter->vector_in(m_M08_AXI_awid_converter_signal);
  mp_M08_AXI_awid_converter->scalar_out(M08_AXI_awid);
  mp_M08_AXI_transactor->AWID(m_M08_AXI_awid_converter_signal);
  mp_M08_AXI_awaddr_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_awaddr_converter");
  mp_M08_AXI_awaddr_converter->vector_in(m_M08_AXI_awaddr_converter_signal);
  mp_M08_AXI_awaddr_converter->scalar_out(M08_AXI_awaddr);
  mp_M08_AXI_transactor->AWADDR(m_M08_AXI_awaddr_converter_signal);
  mp_M08_AXI_awlen_converter = new xsc::common::vectorN2scalar_converter<8>("M08_AXI_awlen_converter");
  mp_M08_AXI_awlen_converter->vector_in(m_M08_AXI_awlen_converter_signal);
  mp_M08_AXI_awlen_converter->scalar_out(M08_AXI_awlen);
  mp_M08_AXI_transactor->AWLEN(m_M08_AXI_awlen_converter_signal);
  mp_M08_AXI_transactor->AWSIZE(M08_AXI_awsize);
  mp_M08_AXI_transactor->AWBURST(M08_AXI_awburst);
  mp_M08_AXI_transactor->AWLOCK(M08_AXI_awlock);
  mp_M08_AXI_transactor->AWCACHE(M08_AXI_awcache);
  mp_M08_AXI_transactor->AWPROT(M08_AXI_awprot);
  mp_M08_AXI_transactor->AWREGION(M08_AXI_awregion);
  mp_M08_AXI_transactor->AWQOS(M08_AXI_awqos);
  mp_M08_AXI_awuser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awuser_converter");
  mp_M08_AXI_awuser_converter->vector_in(m_M08_AXI_awuser_converter_signal);
  mp_M08_AXI_awuser_converter->scalar_out(M08_AXI_awuser);
  mp_M08_AXI_transactor->AWUSER(m_M08_AXI_awuser_converter_signal);
  mp_M08_AXI_awvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_awvalid_converter");
  mp_M08_AXI_awvalid_converter->scalar_in(m_M08_AXI_awvalid_converter_signal);
  mp_M08_AXI_awvalid_converter->vector_out(M08_AXI_awvalid);
  mp_M08_AXI_transactor->AWVALID(m_M08_AXI_awvalid_converter_signal);
  mp_M08_AXI_awready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_awready_converter");
  mp_M08_AXI_awready_converter->vector_in(M08_AXI_awready);
  mp_M08_AXI_awready_converter->scalar_out(m_M08_AXI_awready_converter_signal);
  mp_M08_AXI_transactor->AWREADY(m_M08_AXI_awready_converter_signal);
  mp_M08_AXI_wdata_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_wdata_converter");
  mp_M08_AXI_wdata_converter->vector_in(m_M08_AXI_wdata_converter_signal);
  mp_M08_AXI_wdata_converter->scalar_out(M08_AXI_wdata);
  mp_M08_AXI_transactor->WDATA(m_M08_AXI_wdata_converter_signal);
  mp_M08_AXI_wstrb_converter = new xsc::common::vectorN2scalar_converter<4>("M08_AXI_wstrb_converter");
  mp_M08_AXI_wstrb_converter->vector_in(m_M08_AXI_wstrb_converter_signal);
  mp_M08_AXI_wstrb_converter->scalar_out(M08_AXI_wstrb);
  mp_M08_AXI_transactor->WSTRB(m_M08_AXI_wstrb_converter_signal);
  mp_M08_AXI_wlast_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_wlast_converter");
  mp_M08_AXI_wlast_converter->scalar_in(m_M08_AXI_wlast_converter_signal);
  mp_M08_AXI_wlast_converter->vector_out(M08_AXI_wlast);
  mp_M08_AXI_transactor->WLAST(m_M08_AXI_wlast_converter_signal);
  mp_M08_AXI_wuser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_wuser_converter");
  mp_M08_AXI_wuser_converter->vector_in(m_M08_AXI_wuser_converter_signal);
  mp_M08_AXI_wuser_converter->scalar_out(M08_AXI_wuser);
  mp_M08_AXI_transactor->WUSER(m_M08_AXI_wuser_converter_signal);
  mp_M08_AXI_wvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_wvalid_converter");
  mp_M08_AXI_wvalid_converter->scalar_in(m_M08_AXI_wvalid_converter_signal);
  mp_M08_AXI_wvalid_converter->vector_out(M08_AXI_wvalid);
  mp_M08_AXI_transactor->WVALID(m_M08_AXI_wvalid_converter_signal);
  mp_M08_AXI_wready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_wready_converter");
  mp_M08_AXI_wready_converter->vector_in(M08_AXI_wready);
  mp_M08_AXI_wready_converter->scalar_out(m_M08_AXI_wready_converter_signal);
  mp_M08_AXI_transactor->WREADY(m_M08_AXI_wready_converter_signal);
  mp_M08_AXI_bid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_bid_converter");
  mp_M08_AXI_bid_converter->scalar_in(M08_AXI_bid);
  mp_M08_AXI_bid_converter->vector_out(m_M08_AXI_bid_converter_signal);
  mp_M08_AXI_transactor->BID(m_M08_AXI_bid_converter_signal);
  mp_M08_AXI_transactor->BRESP(M08_AXI_bresp);
  mp_M08_AXI_buser_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_buser_converter");
  mp_M08_AXI_buser_converter->scalar_in(M08_AXI_buser);
  mp_M08_AXI_buser_converter->vector_out(m_M08_AXI_buser_converter_signal);
  mp_M08_AXI_transactor->BUSER(m_M08_AXI_buser_converter_signal);
  mp_M08_AXI_bvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_bvalid_converter");
  mp_M08_AXI_bvalid_converter->vector_in(M08_AXI_bvalid);
  mp_M08_AXI_bvalid_converter->scalar_out(m_M08_AXI_bvalid_converter_signal);
  mp_M08_AXI_transactor->BVALID(m_M08_AXI_bvalid_converter_signal);
  mp_M08_AXI_bready_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_bready_converter");
  mp_M08_AXI_bready_converter->scalar_in(m_M08_AXI_bready_converter_signal);
  mp_M08_AXI_bready_converter->vector_out(M08_AXI_bready);
  mp_M08_AXI_transactor->BREADY(m_M08_AXI_bready_converter_signal);
  mp_M08_AXI_arid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_arid_converter");
  mp_M08_AXI_arid_converter->vector_in(m_M08_AXI_arid_converter_signal);
  mp_M08_AXI_arid_converter->scalar_out(M08_AXI_arid);
  mp_M08_AXI_transactor->ARID(m_M08_AXI_arid_converter_signal);
  mp_M08_AXI_araddr_converter = new xsc::common::vectorN2scalar_converter<32>("M08_AXI_araddr_converter");
  mp_M08_AXI_araddr_converter->vector_in(m_M08_AXI_araddr_converter_signal);
  mp_M08_AXI_araddr_converter->scalar_out(M08_AXI_araddr);
  mp_M08_AXI_transactor->ARADDR(m_M08_AXI_araddr_converter_signal);
  mp_M08_AXI_arlen_converter = new xsc::common::vectorN2scalar_converter<8>("M08_AXI_arlen_converter");
  mp_M08_AXI_arlen_converter->vector_in(m_M08_AXI_arlen_converter_signal);
  mp_M08_AXI_arlen_converter->scalar_out(M08_AXI_arlen);
  mp_M08_AXI_transactor->ARLEN(m_M08_AXI_arlen_converter_signal);
  mp_M08_AXI_transactor->ARSIZE(M08_AXI_arsize);
  mp_M08_AXI_transactor->ARBURST(M08_AXI_arburst);
  mp_M08_AXI_transactor->ARLOCK(M08_AXI_arlock);
  mp_M08_AXI_transactor->ARCACHE(M08_AXI_arcache);
  mp_M08_AXI_transactor->ARPROT(M08_AXI_arprot);
  mp_M08_AXI_transactor->ARREGION(M08_AXI_arregion);
  mp_M08_AXI_transactor->ARQOS(M08_AXI_arqos);
  mp_M08_AXI_aruser_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_aruser_converter");
  mp_M08_AXI_aruser_converter->vector_in(m_M08_AXI_aruser_converter_signal);
  mp_M08_AXI_aruser_converter->scalar_out(M08_AXI_aruser);
  mp_M08_AXI_transactor->ARUSER(m_M08_AXI_aruser_converter_signal);
  mp_M08_AXI_arvalid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_arvalid_converter");
  mp_M08_AXI_arvalid_converter->scalar_in(m_M08_AXI_arvalid_converter_signal);
  mp_M08_AXI_arvalid_converter->vector_out(M08_AXI_arvalid);
  mp_M08_AXI_transactor->ARVALID(m_M08_AXI_arvalid_converter_signal);
  mp_M08_AXI_arready_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_arready_converter");
  mp_M08_AXI_arready_converter->vector_in(M08_AXI_arready);
  mp_M08_AXI_arready_converter->scalar_out(m_M08_AXI_arready_converter_signal);
  mp_M08_AXI_transactor->ARREADY(m_M08_AXI_arready_converter_signal);
  mp_M08_AXI_rid_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_rid_converter");
  mp_M08_AXI_rid_converter->scalar_in(M08_AXI_rid);
  mp_M08_AXI_rid_converter->vector_out(m_M08_AXI_rid_converter_signal);
  mp_M08_AXI_transactor->RID(m_M08_AXI_rid_converter_signal);
  mp_M08_AXI_rdata_converter = new xsc::common::scalar2vectorN_converter<32>("M08_AXI_rdata_converter");
  mp_M08_AXI_rdata_converter->scalar_in(M08_AXI_rdata);
  mp_M08_AXI_rdata_converter->vector_out(m_M08_AXI_rdata_converter_signal);
  mp_M08_AXI_transactor->RDATA(m_M08_AXI_rdata_converter_signal);
  mp_M08_AXI_transactor->RRESP(M08_AXI_rresp);
  mp_M08_AXI_rlast_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_rlast_converter");
  mp_M08_AXI_rlast_converter->vector_in(M08_AXI_rlast);
  mp_M08_AXI_rlast_converter->scalar_out(m_M08_AXI_rlast_converter_signal);
  mp_M08_AXI_transactor->RLAST(m_M08_AXI_rlast_converter_signal);
  mp_M08_AXI_ruser_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_ruser_converter");
  mp_M08_AXI_ruser_converter->scalar_in(M08_AXI_ruser);
  mp_M08_AXI_ruser_converter->vector_out(m_M08_AXI_ruser_converter_signal);
  mp_M08_AXI_transactor->RUSER(m_M08_AXI_ruser_converter_signal);
  mp_M08_AXI_rvalid_converter = new xsc::common::vectorN2scalar_converter<1>("M08_AXI_rvalid_converter");
  mp_M08_AXI_rvalid_converter->vector_in(M08_AXI_rvalid);
  mp_M08_AXI_rvalid_converter->scalar_out(m_M08_AXI_rvalid_converter_signal);
  mp_M08_AXI_transactor->RVALID(m_M08_AXI_rvalid_converter_signal);
  mp_M08_AXI_rready_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_rready_converter");
  mp_M08_AXI_rready_converter->scalar_in(m_M08_AXI_rready_converter_signal);
  mp_M08_AXI_rready_converter->vector_out(M08_AXI_rready);
  mp_M08_AXI_transactor->RREADY(m_M08_AXI_rready_converter_signal);
  mp_M08_AXI_transactor->CLK(aclk);
  mp_M08_AXI_transactor->RST(aresetn);

  // initialize transactors stubs
  S00_AXI_transactor_target_wr_socket_stub = nullptr;
  S00_AXI_transactor_target_rd_socket_stub = nullptr;
  M00_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M00_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M01_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M01_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M02_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M02_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M03_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M03_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M04_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M04_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M05_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M05_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M06_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M06_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M07_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M07_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M08_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M08_AXI_transactor_initiator_rd_socket_stub = nullptr;

}

void design_1_smartconnect_1_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "S00_AXI_TLM_MODE") != 1)
  {
    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  
  }
  else
  {
    S00_AXI_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S00_AXI_transactor_target_wr_socket_stub->bind(*(mp_S00_AXI_transactor->wr_socket));
    S00_AXI_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S00_AXI_transactor_target_rd_socket_stub->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_S00_AXI_transactor->disable_transactor();
  }

  // configure 'M00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M00_AXI_TLM_MODE") != 1)
  {
    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  
  }
  else
  {
    M00_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M00_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M00_AXI_transactor->wr_socket));
    M00_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M00_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_M00_AXI_transactor->disable_transactor();
  }

  // configure 'M01_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M01_AXI_TLM_MODE") != 1)
  {
    mp_impl->M01_AXI_tlm_aximm_read_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->M01_AXI_tlm_aximm_write_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  
  }
  else
  {
    M01_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M01_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M01_AXI_transactor->wr_socket));
    M01_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M01_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_M01_AXI_transactor->disable_transactor();
  }

  // configure 'M02_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M02_AXI_TLM_MODE") != 1)
  {
    mp_impl->M02_AXI_tlm_aximm_read_socket->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_impl->M02_AXI_tlm_aximm_write_socket->bind(*(mp_M02_AXI_transactor->wr_socket));
  
  }
  else
  {
    M02_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M02_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M02_AXI_transactor->wr_socket));
    M02_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M02_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_M02_AXI_transactor->disable_transactor();
  }

  // configure 'M03_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M03_AXI_TLM_MODE") != 1)
  {
    mp_impl->M03_AXI_tlm_aximm_read_socket->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_impl->M03_AXI_tlm_aximm_write_socket->bind(*(mp_M03_AXI_transactor->wr_socket));
  
  }
  else
  {
    M03_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M03_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M03_AXI_transactor->wr_socket));
    M03_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M03_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_M03_AXI_transactor->disable_transactor();
  }

  // configure 'M04_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M04_AXI_TLM_MODE") != 1)
  {
    mp_impl->M04_AXI_tlm_aximm_read_socket->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_impl->M04_AXI_tlm_aximm_write_socket->bind(*(mp_M04_AXI_transactor->wr_socket));
  
  }
  else
  {
    M04_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M04_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M04_AXI_transactor->wr_socket));
    M04_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M04_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_M04_AXI_transactor->disable_transactor();
  }

  // configure 'M05_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M05_AXI_TLM_MODE") != 1)
  {
    mp_impl->M05_AXI_tlm_aximm_read_socket->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_impl->M05_AXI_tlm_aximm_write_socket->bind(*(mp_M05_AXI_transactor->wr_socket));
  
  }
  else
  {
    M05_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M05_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M05_AXI_transactor->wr_socket));
    M05_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M05_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_M05_AXI_transactor->disable_transactor();
  }

  // configure 'M06_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M06_AXI_TLM_MODE") != 1)
  {
    mp_impl->M06_AXI_tlm_aximm_read_socket->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_impl->M06_AXI_tlm_aximm_write_socket->bind(*(mp_M06_AXI_transactor->wr_socket));
  
  }
  else
  {
    M06_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M06_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M06_AXI_transactor->wr_socket));
    M06_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M06_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_M06_AXI_transactor->disable_transactor();
  }

  // configure 'M07_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M07_AXI_TLM_MODE") != 1)
  {
    mp_impl->M07_AXI_tlm_aximm_read_socket->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_impl->M07_AXI_tlm_aximm_write_socket->bind(*(mp_M07_AXI_transactor->wr_socket));
  
  }
  else
  {
    M07_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M07_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M07_AXI_transactor->wr_socket));
    M07_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M07_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_M07_AXI_transactor->disable_transactor();
  }

  // configure 'M08_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("design_1_smartconnect_1_0", "M08_AXI_TLM_MODE") != 1)
  {
    mp_impl->M08_AXI_tlm_aximm_read_socket->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_impl->M08_AXI_tlm_aximm_write_socket->bind(*(mp_M08_AXI_transactor->wr_socket));
  
  }
  else
  {
    M08_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M08_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M08_AXI_transactor->wr_socket));
    M08_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M08_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_M08_AXI_transactor->disable_transactor();
  }

}

#endif // MTI_SYSTEMC




design_1_smartconnect_1_0::~design_1_smartconnect_1_0()
{
  delete mp_S00_AXI_transactor;
  delete mp_S00_AXI_awlen_converter;
  delete mp_S00_AXI_awlock_converter;
  delete mp_S00_AXI_arlen_converter;
  delete mp_S00_AXI_arlock_converter;

  delete mp_M00_AXI_transactor;

  delete mp_M01_AXI_transactor;

  delete mp_M02_AXI_transactor;

  delete mp_M03_AXI_transactor;

  delete mp_M04_AXI_transactor;

  delete mp_M05_AXI_transactor;
  delete mp_M05_AXI_awid_converter;
  delete mp_M05_AXI_awaddr_converter;
  delete mp_M05_AXI_awlen_converter;
  delete mp_M05_AXI_awuser_converter;
  delete mp_M05_AXI_awvalid_converter;
  delete mp_M05_AXI_awready_converter;
  delete mp_M05_AXI_wdata_converter;
  delete mp_M05_AXI_wstrb_converter;
  delete mp_M05_AXI_wlast_converter;
  delete mp_M05_AXI_wuser_converter;
  delete mp_M05_AXI_wvalid_converter;
  delete mp_M05_AXI_wready_converter;
  delete mp_M05_AXI_bid_converter;
  delete mp_M05_AXI_buser_converter;
  delete mp_M05_AXI_bvalid_converter;
  delete mp_M05_AXI_bready_converter;
  delete mp_M05_AXI_arid_converter;
  delete mp_M05_AXI_araddr_converter;
  delete mp_M05_AXI_arlen_converter;
  delete mp_M05_AXI_aruser_converter;
  delete mp_M05_AXI_arvalid_converter;
  delete mp_M05_AXI_arready_converter;
  delete mp_M05_AXI_rid_converter;
  delete mp_M05_AXI_rdata_converter;
  delete mp_M05_AXI_rlast_converter;
  delete mp_M05_AXI_ruser_converter;
  delete mp_M05_AXI_rvalid_converter;
  delete mp_M05_AXI_rready_converter;

  delete mp_M06_AXI_transactor;
  delete mp_M06_AXI_awid_converter;
  delete mp_M06_AXI_awaddr_converter;
  delete mp_M06_AXI_awlen_converter;
  delete mp_M06_AXI_awuser_converter;
  delete mp_M06_AXI_awvalid_converter;
  delete mp_M06_AXI_awready_converter;
  delete mp_M06_AXI_wdata_converter;
  delete mp_M06_AXI_wstrb_converter;
  delete mp_M06_AXI_wlast_converter;
  delete mp_M06_AXI_wuser_converter;
  delete mp_M06_AXI_wvalid_converter;
  delete mp_M06_AXI_wready_converter;
  delete mp_M06_AXI_bid_converter;
  delete mp_M06_AXI_buser_converter;
  delete mp_M06_AXI_bvalid_converter;
  delete mp_M06_AXI_bready_converter;
  delete mp_M06_AXI_arid_converter;
  delete mp_M06_AXI_araddr_converter;
  delete mp_M06_AXI_arlen_converter;
  delete mp_M06_AXI_aruser_converter;
  delete mp_M06_AXI_arvalid_converter;
  delete mp_M06_AXI_arready_converter;
  delete mp_M06_AXI_rid_converter;
  delete mp_M06_AXI_rdata_converter;
  delete mp_M06_AXI_rlast_converter;
  delete mp_M06_AXI_ruser_converter;
  delete mp_M06_AXI_rvalid_converter;
  delete mp_M06_AXI_rready_converter;

  delete mp_M07_AXI_transactor;
  delete mp_M07_AXI_awid_converter;
  delete mp_M07_AXI_awaddr_converter;
  delete mp_M07_AXI_awlen_converter;
  delete mp_M07_AXI_awuser_converter;
  delete mp_M07_AXI_awvalid_converter;
  delete mp_M07_AXI_awready_converter;
  delete mp_M07_AXI_wdata_converter;
  delete mp_M07_AXI_wstrb_converter;
  delete mp_M07_AXI_wlast_converter;
  delete mp_M07_AXI_wuser_converter;
  delete mp_M07_AXI_wvalid_converter;
  delete mp_M07_AXI_wready_converter;
  delete mp_M07_AXI_bid_converter;
  delete mp_M07_AXI_buser_converter;
  delete mp_M07_AXI_bvalid_converter;
  delete mp_M07_AXI_bready_converter;
  delete mp_M07_AXI_arid_converter;
  delete mp_M07_AXI_araddr_converter;
  delete mp_M07_AXI_arlen_converter;
  delete mp_M07_AXI_aruser_converter;
  delete mp_M07_AXI_arvalid_converter;
  delete mp_M07_AXI_arready_converter;
  delete mp_M07_AXI_rid_converter;
  delete mp_M07_AXI_rdata_converter;
  delete mp_M07_AXI_rlast_converter;
  delete mp_M07_AXI_ruser_converter;
  delete mp_M07_AXI_rvalid_converter;
  delete mp_M07_AXI_rready_converter;

  delete mp_M08_AXI_transactor;
  delete mp_M08_AXI_awid_converter;
  delete mp_M08_AXI_awaddr_converter;
  delete mp_M08_AXI_awlen_converter;
  delete mp_M08_AXI_awuser_converter;
  delete mp_M08_AXI_awvalid_converter;
  delete mp_M08_AXI_awready_converter;
  delete mp_M08_AXI_wdata_converter;
  delete mp_M08_AXI_wstrb_converter;
  delete mp_M08_AXI_wlast_converter;
  delete mp_M08_AXI_wuser_converter;
  delete mp_M08_AXI_wvalid_converter;
  delete mp_M08_AXI_wready_converter;
  delete mp_M08_AXI_bid_converter;
  delete mp_M08_AXI_buser_converter;
  delete mp_M08_AXI_bvalid_converter;
  delete mp_M08_AXI_bready_converter;
  delete mp_M08_AXI_arid_converter;
  delete mp_M08_AXI_araddr_converter;
  delete mp_M08_AXI_arlen_converter;
  delete mp_M08_AXI_aruser_converter;
  delete mp_M08_AXI_arvalid_converter;
  delete mp_M08_AXI_arready_converter;
  delete mp_M08_AXI_rid_converter;
  delete mp_M08_AXI_rdata_converter;
  delete mp_M08_AXI_rlast_converter;
  delete mp_M08_AXI_ruser_converter;
  delete mp_M08_AXI_rvalid_converter;
  delete mp_M08_AXI_rready_converter;

}

#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(design_1_smartconnect_1_0);
#endif

#ifdef XM_SYSTEMC
XMSC_MODULE_EXPORT(design_1_smartconnect_1_0);
#endif

#ifdef RIVIERA
SC_MODULE_EXPORT(design_1_smartconnect_1_0);
#endif

