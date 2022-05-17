`timescale 1ns / 1ps

module LR4_MATRIX_DISP_V10
#(
parameter
CLK_REF = 48_000_000,
CLK_CE = 1_000_000,
CLK_RELATE = CLK_REF/CLK_CE,
CLK_RELATE_8 = CLK_RELATE/8,
WIDTH_CR_8 = $clog2(CLK_RELATE_8)
)
(
	input CLK,
	input RST,
	input CE, 
	input [3:0] DAT_I,
	output reg [7:0] STR,
	output reg [7:0] CLM
);
  reg [6:0] addr;
  reg [3:0] buffer;
  reg [WIDTH_CR_8:0] cnt_8;
  reg [2:0] cnt;
  wire [7:0] out;
  reg ceo,ceo_cnt;

  LR4_MATRIX_DISP_V10_ROM rom (.X(addr),.Y(out));
 
//cnt colomns 

  always @(posedge CLK or posedge RST)
    if (RST)
      begin
        cnt_8 <= 0;  
        ceo <= 0;
      end
    else
      begin
        if (CE) 
          begin  
	  cnt_8 <= 0; 
                 ceo <= 0; 
          end
        else 
          begin
             if (cnt_8 == CLK_RELATE_8)
               begin
	  cnt_8 <= 0; 
                 ceo <= 1;
               end
             else
               begin
	  cnt_8 <= cnt_8+1; 
                 ceo <= 0;
               end 
          end
       end

  always @(posedge CLK or posedge RST)
    if (RST)
      begin
        cnt <= 0;  
        //ceo <= 0;
      end
    else
      begin
        if (ceo) 
          begin  
	  cnt <= cnt+1; 
                 //ceo <= 0;
          end
        else 
          begin
	  cnt <= cnt; 
                 //ceo <= 1; 
          end 
      end
 
//columns decoder
  always @(posedge CLK or posedge RST)
    if (RST)
      begin
        CLM <= 0;
      end
    else
      begin
        if (cnt > 7) 
          begin 
             CLM <= 2**0;
          end
        else 
          begin 
            CLM <= 2**(cnt);
          end
      end

//strings decoder
  always @(*)
    if (RST)
      begin
        addr <= 0;
        STR <= 8'hFF;
      end
    else
      begin
        if (ceo) 
          begin 
             addr <= {buffer,cnt};
             STR <= out;
          end
        else 
          begin 
            addr <= addr;             
            STR <= 8'hFF;
          end
      end
//buffer registr

  always @(posedge CLK or posedge RST)
    if (RST)
      begin
        buffer <= 0;
      end
    else
      begin
        if (ceo) 
          begin 
             buffer <= DAT_I;
          end
        else 
          begin 
            buffer <= buffer;
          end
      end
endmodule 