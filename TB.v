`timescale 1ns / 1ps

module TB#(
parameter
CLK_REF = 48_000_000,
CLK_CE = 1_000_000,
CLK_RELATE = CLK_REF/CLK_CE,
CLK_RELATE_8 = CLK_RELATE/8,
WIDTH_CR_8 = $clog2(CLK_RELATE_8),
PERIOD_CLK = 20.8,// 20.8ns
DUTY_CYCLE_CLK = 0.4 
)();

    // Inputs
    reg CLK;
    reg RST;
    reg CE; 
    reg LOAD; 
    reg UP;
    reg [3:0] DAT_I;
    wire [7:0] STRING,COLUMN;
 

    // Instantiate the Unit Under Test (UUT)
    LR4_Top_V10 uut (
        .clk(CLK), 
        .btnCpuReset(RST),
        .btnC(CE),  
        .btnU(LOAD), 
        .STEP(DAT_I),  
        .UP(UP),
        .STRING(STRING),
        .COLUMN(COLUMN)
    );

    initial begin
        // Initialize Inputs
        DAT_I = 4'h0;
		  RST = 0; 
		  CE = 0;
		  #40;
		  RST = 1; 
        CE = 0;
        DAT_I = 4'h0; 
        UP = 0;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 1;
        DAT_I = 4'h0; 
        UP = 1;
        LOAD = 1;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 0;
        DAT_I = 4'h0; 
        UP = 1;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 1;
        DAT_I = 4'h0; 
        UP = 1;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 0;
        DAT_I = 4'h0; 
        UP = 1;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 1;
        DAT_I = 4'h0; 
        UP = 1;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 0;
        DAT_I = 4'h0; 
        UP = 1;
        LOAD = 0;

        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 1;
        DAT_I = 4'h0; 
        UP = 0;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 0;
        DAT_I = 4'h0; 
        UP = 1;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 1;
        DAT_I = 4'h0; 
        UP = 0;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 0;
        DAT_I = 4'h0; 
        UP = 1;
        LOAD = 0;

        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 1;
        DAT_I = 4'h3; 
        UP = 1;
        LOAD = 1;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 0;
        DAT_I = 4'h3; 
        UP = 1;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 1;
        DAT_I = 4'h3; 
        UP = 1;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 0;
        DAT_I = 4'h3; 
        UP = 1;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 1;
        DAT_I = 4'h3; 
        UP = 1;
        LOAD = 0;
        repeat (50*CLK_RELATE) @(posedge CLK); 
        CE = 0;
        DAT_I = 4'h3; 
        UP = 1;
        LOAD = 0;
        #100000 $stop;
    end
 
 initial
 forever
 begin
 CLK = 1'b0;
 #(PERIOD_CLK-(PERIOD_CLK*DUTY_CYCLE_CLK)) CLK = 1'b1;
 #(PERIOD_CLK*DUTY_CYCLE_CLK);
 end

endmodule

