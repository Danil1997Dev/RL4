`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:30:09 13/04/2022
// Design Name: 
// Module Name:    LR2_TOP 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module LR4_Top_V10#
( 
)
(
   input clk, 
	input btnCpuReset, //Сигнал сброса
	input [3:0] STEP,
	output [7:0] COLUMN,STRING,
	input btnC,
	input btnU,
              input UP
    );
	             
	reg [1:0] RST_SYNC;
	wire RST_I; //Шина с синхронизированным сигналом сброса
	wire CEO;
	wire BTN_C_CE;
	wire BTN_U_CE;
	wire [3:0] DATA;
	
	always @(posedge clk, negedge btnCpuReset) //Синхронизация сброса
		if (~btnCpuReset) RST_SYNC <= 2'b11;
		else RST_SYNC <= {RST_SYNC[0], 1'b0};
	
	assign RST_I = RST_SYNC[1];
	
	M_CLOCK_DIVIDER gce(.CLK(clk), .RST(RST_I), .CEO(CE));
	M_BTN_FILTER_V10 btnf_c(.CLK(clk), .RST(RST_I), .CE(CE), .BTN_I(btnC), .BTN_O(), .BTN_CEO(BTN_C_CE));
	M_BTN_FILTER_V10 btnf_u(.CLK(clk), .RST(RST_I), .CE(CE), .BTN_I(btnU), .BTN_O(), .BTN_CEO(BTN_U_CE));
	LR2_SEQ_GEN_FSM fsm(.CLK(clk), .RST(RST_I), .CE(BTN_C_CE), .LOAD(BTN_U_CE), .DAT_I(STEP), .UP(UP), .SEQ(DATA));
	LR4_MATRIX_DISP_V10 main(.CLK(clk), .RST(RST_I), .CE(CE), .DAT_I(DATA),  .STR(STRING),.CLM(COLUMN));

endmodule