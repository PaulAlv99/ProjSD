`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:17:03 12/08/2022 
// Design Name: 
// Module Name:    Conta_ciclos 
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
module Barr2(
input CLK,
input MatrVal,
input [23:0] Matricula,
input [6:0] Q6,
output reg Barreira2,
output reg [6:0] conta_ciclos=-1
 );
 always @(posedge CLK)
	conta_ciclos= conta_ciclos + 1;
 always @ (CLK)
	begin
		if ((Q6)>=conta_ciclos)
			Barreira2=1;
			if (Q6==conta_ciclos)
				conta_ciclos=0;
		else
			Barreira2=0;
	end
endmodule
