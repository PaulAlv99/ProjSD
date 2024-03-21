`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:47:37 12/08/2022 
// Design Name: 
// Module Name:    LED_a_piscar 
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
module LED_a_piscar(
input Barreira,
input CLK,
output reg LED=0
    );
reg [2:0] Q4=0;
always @(posedge CLK or Barreira)
	begin
		if (Barreira==1)
			begin
				Q4<=Q4 == 3 ? 0: Q4+1;
			end
		if (Q4==1 | Q4==0)
			begin
			LED=1;
			end
		if (Q4==2 | Q4==3)
			begin
			LED=0;
			end
		if (Barreira ==0)
			begin
				LED=0;
				Q4=0;
			end
		
	end
endmodule
