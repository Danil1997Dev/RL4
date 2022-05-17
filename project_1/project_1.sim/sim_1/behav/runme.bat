@echo off


rem  PlanAhead(TM)
rem  runme.bat: a PlanAhead-generated ISim simulation Script
rem  Copyright 1986-1999, 2001-2013 Xilinx, Inc. All Rights Reserved.


set PATH=%XILINX%\lib\%PLATFORM%;%XILINX%\bin\%PLATFORM%;K:/XilinxFPGA/14.7/ISE_DS/EDK/bin/nt64;K:/XilinxFPGA/14.7/ISE_DS/EDK/lib/nt64;K:/XilinxFPGA/14.7/ISE_DS/ISE/bin/nt64;K:/XilinxFPGA/14.7/ISE_DS/ISE/lib/nt64;K:/XilinxFPGA/14.7/ISE_DS/common/bin/nt64;K:/XilinxFPGA/14.7/ISE_DS/common/lib/nt64;K:/XilinxFPGA/14.7/ISE_DS/PlanAhead/bin;%PATH%

set XILINX_PLANAHEAD=K:/XilinxFPGA/14.7/ISE_DS/PlanAhead

fuse -intstyle pa -incremental -L work -L unisims_ver -L unimacro_ver -L xilinxcorelib_ver -L secureip -o TB.exe --prj D:/intelFPGA/18.1/Lab_Verilog/LR4/project_1/project_1.sim/sim_1/behav/TB.prj -top work.TB -top work.glbl
if errorlevel 1 (
   cmd /c exit /b %errorlevel%
)
