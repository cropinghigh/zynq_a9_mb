#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/drive/data/WinCommon/Common/Programs/Vivado/Vitis/2021.1/bin:/drive/data/WinCommon/Common/Programs/Vivado/Vivado/2021.1/ids_lite/ISE/bin/lin64:/drive/data/WinCommon/Common/Programs/Vivado/Vivado/2021.1/bin
else
  PATH=/drive/data/WinCommon/Common/Programs/Vivado/Vitis/2021.1/bin:/drive/data/WinCommon/Common/Programs/Vivado/Vivado/2021.1/ids_lite/ISE/bin/lin64:/drive/data/WinCommon/Common/Programs/Vivado/Vivado/2021.1/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=
else
  LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/indir/KiCad/zynq_a9_mb/software/FPGA_VIVADO/Platform/Platform.runs/design_1_c_counter_binary_0_0_synth_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep vivado -log design_1_c_counter_binary_0_0.vds -m64 -product Vivado -mode batch -messageDb vivado.pb -notrace -source design_1_c_counter_binary_0_0.tcl
