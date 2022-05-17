#!/bin/sh
# 
# PlanAhead(TM)
# runme.sh: PlanAhead-generated Script for launching ISim application
# Copyright 1986-1999, 2001-2013 Xilinx, Inc. All Rights Reserved.
# 
if [ -z "$PATH" ]; then
  PATH=%XILINX%\lib\%PLATFORM%;%XILINX%\bin\%PLATFORM%:K:/XilinxFPGA/14.7/ISE_DS/EDK/bin/nt64;K:/XilinxFPGA/14.7/ISE_DS/EDK/lib/nt64;K:/XilinxFPGA/14.7/ISE_DS/ISE/bin/nt64;K:/XilinxFPGA/14.7/ISE_DS/ISE/lib/nt64;K:/XilinxFPGA/14.7/ISE_DS/common/bin/nt64;K:/XilinxFPGA/14.7/ISE_DS/common/lib/nt64
else
  PATH=%XILINX%\lib\%PLATFORM%;%XILINX%\bin\%PLATFORM%:K:/XilinxFPGA/14.7/ISE_DS/EDK/bin/nt64;K:/XilinxFPGA/14.7/ISE_DS/EDK/lib/nt64;K:/XilinxFPGA/14.7/ISE_DS/ISE/bin/nt64;K:/XilinxFPGA/14.7/ISE_DS/ISE/lib/nt64;K:/XilinxFPGA/14.7/ISE_DS/common/bin/nt64;K:/XilinxFPGA/14.7/ISE_DS/common/lib/nt64:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=:
else
  LD_LIBRARY_PATH=::$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

#
# Setup env for Xilinx simulation libraries
#
XILINX_PLANAHEAD=K:/XilinxFPGA/14.7/ISE_DS/PlanAhead
export XILINX_PLANAHEAD
ExecStep()
{
   "$@"
   RETVAL=$?
   if [ $RETVAL -ne 0 ]
   then
       exit $RETVAL
   fi
}


ExecStep fuse -intstyle pa -incremental -L work -L unisims_ver -L unimacro_ver -L xilinxcorelib_ver -L secureip -o TB.exe --prj D:/intelFPGA/18.1/Lab_Verilog/LR4/project_1/project_1.sim/sim_1/behav/TB.prj -top work.TB -top work.glbl
