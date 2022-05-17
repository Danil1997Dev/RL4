`timescale 1ns / 1ps

module LR4_MATRIX_DISP_V10_ROM(
input [6:0] X,
output reg [7:0] Y 
);
 
  wire [7:0] SYM_ROM [7'h00:7'h7F];

  always @(X)
    begin 
      Y = SYM_ROM[X];
    end

assign SYM_ROM[7'h00] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h01] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h02] = 8'b0_1_1_1_1_1_1_0; // Column-2
assign SYM_ROM[7'h03] = 8'b1_0_0_0_0_0_0_1; // Column-3
assign SYM_ROM[7'h04] = 8'b1_0_0_0_0_0_0_1; // Column-4
assign SYM_ROM[7'h05] = 8'b0_1_1_1_1_1_1_0; // Column-5
assign SYM_ROM[7'h06] = 8'b0_0_0_0_0_0_0_0; // Column-6
assign SYM_ROM[7'h07] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h08] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h09] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h0A] = 8'b0_0_0_0_0_1_0_0; // Column-2
assign SYM_ROM[7'h0B] = 8'b1_0_0_0_0_0_1_0; // Column-3
assign SYM_ROM[7'h0C] = 8'b1_1_1_1_1_1_1_1; // Column-4
assign SYM_ROM[7'h0D] = 8'b1_1_1_1_1_1_1_1; // Column-5
assign SYM_ROM[7'h0E] = 8'b1_0_0_0_0_0_0_0; // Column-6
assign SYM_ROM[7'h0F] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h10] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h11] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h12] = 8'b1_1_1_0_0_0_1_0; // Column-2
assign SYM_ROM[7'h13] = 8'b1_0_0_1_0_0_0_1; // Column-3
assign SYM_ROM[7'h14] = 8'b1_0_0_0_1_0_0_1; // Column-4
assign SYM_ROM[7'h15] = 8'b1_0_0_0_0_1_1_0; // Column-5
assign SYM_ROM[7'h16] = 8'b0_0_0_0_0_0_0_0; // Column-6
assign SYM_ROM[7'h17] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h18] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h19] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h1A] = 8'b0_1_0_0_0_0_1_0; // Column-2
assign SYM_ROM[7'h1B] = 8'b1_0_0_1_1_0_0_1; // Column-3
assign SYM_ROM[7'h1C] = 8'b1_0_0_1_1_0_0_1; // Column-4
assign SYM_ROM[7'h1D] = 8'b0_1_1_0_0_1_1_0; // Column-5
assign SYM_ROM[7'h1E] = 8'b0_0_0_0_0_0_0_0; // Column-6
assign SYM_ROM[7'h1F] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h20] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h21] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h22] = 8'b0_0_0_0_0_0_0_0; // Column-2
assign SYM_ROM[7'h23] = 8'b0_0_0_1_1_1_1_1; // Column-3
assign SYM_ROM[7'h24] = 8'b0_0_0_1_0_0_0_0; // Column-4
assign SYM_ROM[7'h25] = 8'b0_0_0_1_0_0_0_0; // Column-5
assign SYM_ROM[7'h26] = 8'b1_1_1_1_1_1_1_1; // Column-6
assign SYM_ROM[7'h27] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h28] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h29] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h2A] = 8'b0_1_0_0_0_1_1_1; // Column-2
assign SYM_ROM[7'h2B] = 8'b1_0_0_0_1_0_0_1; // Column-3
assign SYM_ROM[7'h2C] = 8'b1_0_0_0_1_0_0_1; // Column-4
assign SYM_ROM[7'h2D] = 8'b0_1_1_1_0_0_0_1; // Column-5
assign SYM_ROM[7'h2E] = 8'b0_0_0_0_0_0_0_0; // Column-6
assign SYM_ROM[7'h2F] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h30] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h31] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h32] = 8'b0_1_1_0_0_0_1_0; // Column-2
assign SYM_ROM[7'h33] = 8'b1_0_0_1_0_0_0_1; // Column-3
assign SYM_ROM[7'h34] = 8'b1_0_0_1_0_0_0_1; // Column-4
assign SYM_ROM[7'h35] = 8'b1_0_0_1_0_0_1_0; // Column-5
assign SYM_ROM[7'h36] = 8'b0_1_1_1_1_1_1_0; // Column-6
assign SYM_ROM[7'h37] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h38] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h39] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h3A] = 8'b1_1_1_0_0_0_0_1; // Column-2
assign SYM_ROM[7'h3B] = 8'b0_0_0_1_0_0_1_1; // Column-3
assign SYM_ROM[7'h3C] = 8'b0_0_0_0_1_0_0_1; // Column-4
assign SYM_ROM[7'h3D] = 8'b0_0_0_0_0_1_1_1; // Column-5
assign SYM_ROM[7'h3E] = 8'b0_0_0_0_0_0_0_0; // Column-6
assign SYM_ROM[7'h3F] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h40] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h41] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h42] = 8'b0_1_1_0_0_1_1_0; // Column-2
assign SYM_ROM[7'h43] = 8'b1_0_0_1_1_0_0_1; // Column-3
assign SYM_ROM[7'h44] = 8'b1_0_0_1_1_0_0_1; // Column-4
assign SYM_ROM[7'h45] = 8'b1_0_0_1_1_0_0_1; // Column-5
assign SYM_ROM[7'h46] = 8'b0_1_1_0_0_1_1_0; // Column-6
assign SYM_ROM[7'h47] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h48] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h49] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h4A] = 8'b0_1_0_0_1_1_0_0; // Column-2
assign SYM_ROM[7'h4B] = 8'b1_0_0_1_0_0_1_0; // Column-3
assign SYM_ROM[7'h4C] = 8'b1_0_0_1_0_0_0_1; // Column-4
assign SYM_ROM[7'h4D] = 8'b0_1_0_1_0_0_1_0; // Column-5
assign SYM_ROM[7'h4E] = 8'b0_0_1_1_1_1_0_0; // Column-6
assign SYM_ROM[7'h4F] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h50] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h51] = 8'b1_1_1_1_1_1_0_0; // Column-1
assign SYM_ROM[7'h52] = 8'b0_0_0_1_0_0_1_0; // Column-2
assign SYM_ROM[7'h53] = 8'b0_0_0_1_0_0_0_1; // Column-3
assign SYM_ROM[7'h54] = 8'b0_0_0_1_0_0_0_1; // Column-4
assign SYM_ROM[7'h55] = 8'b0_0_0_1_0_0_1_0; // Column-5
assign SYM_ROM[7'h56] = 8'b1_1_1_1_1_1_0_0; // Column-6
assign SYM_ROM[7'h57] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h58] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h59] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h5A] = 8'b1_1_1_1_1_1_1_1; // Column-2
assign SYM_ROM[7'h5B] = 8'b1_0_0_1_1_0_0_1; // Column-3
assign SYM_ROM[7'h5C] = 8'b1_0_0_1_1_0_0_1; // Column-4
assign SYM_ROM[7'h5D] = 8'b0_1_1_0_0_1_1_0; // Column-5
assign SYM_ROM[7'h5E] = 8'b0_0_0_0_0_0_0_0; // Column-6
assign SYM_ROM[7'h5F] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h60] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h61] = 8'b0_0_1_1_1_1_0_0; // Column-1
assign SYM_ROM[7'h62] = 8'b0_1_0_0_0_0_1_0; // Column-2
assign SYM_ROM[7'h63] = 8'b1_0_0_0_0_0_0_1; // Column-3
assign SYM_ROM[7'h64] = 8'b1_0_0_0_0_0_0_1; // Column-4
assign SYM_ROM[7'h65] = 8'b0_1_0_0_0_0_1_0; // Column-5
assign SYM_ROM[7'h66] = 8'b0_0_1_0_0_1_0_0; // Column-6
assign SYM_ROM[7'h67] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h68] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h69] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h6A] = 8'b1_1_1_1_1_1_1_1; // Column-2
assign SYM_ROM[7'h6B] = 8'b1_0_0_0_0_0_0_1; // Column-3
assign SYM_ROM[7'h6C] = 8'b1_0_0_0_0_0_0_1; // Column-4
assign SYM_ROM[7'h6D] = 8'b0_1_0_0_0_0_1_0; // Column-5
assign SYM_ROM[7'h6E] = 8'b0_0_1_1_1_1_0_0; // Column-6
assign SYM_ROM[7'h6F] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h70] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h71] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h72] = 8'b1_1_1_1_1_1_1_1; // Column-2
assign SYM_ROM[7'h73] = 8'b1_0_0_0_1_0_0_1; // Column-3
assign SYM_ROM[7'h74] = 8'b1_0_0_0_1_0_0_1; // Column-4
assign SYM_ROM[7'h75] = 8'b1_0_0_0_1_0_0_1; // Column-5
assign SYM_ROM[7'h76] = 8'b0_0_0_0_0_0_0_0; // Column-6
assign SYM_ROM[7'h77] = 8'b0_0_0_0_0_0_0_0; // Column-7

assign SYM_ROM[7'h78] = 8'b0_0_0_0_0_0_0_0; // Column-0
assign SYM_ROM[7'h79] = 8'b0_0_0_0_0_0_0_0; // Column-1
assign SYM_ROM[7'h7A] = 8'b1_1_1_1_1_1_1_1; // Column-2
assign SYM_ROM[7'h7B] = 8'b0_0_0_0_1_0_0_1; // Column-3
assign SYM_ROM[7'h7C] = 8'b0_0_0_0_1_0_0_1; // Column-4
assign SYM_ROM[7'h7D] = 8'b0_0_0_0_1_0_0_1; // Column-5
assign SYM_ROM[7'h7E] = 8'b0_0_0_0_0_0_0_0; // Column-6
assign SYM_ROM[7'h7F] = 8'b0_0_0_0_0_0_0_0; // Column-7


endmodule 