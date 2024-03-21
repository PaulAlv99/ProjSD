`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:13:24 12/08/2022 
// Design Name: 
// Module Name:    Cont_6 
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
module Cont_6(CLK, CLR, MatrVal, Q6);
	input CLK;
	input CLR;
	input MatrVal;
	output [6:0] Q6;
	reg [6:0] Q6=-1;
	 
	always @(posedge CLK or posedge CLR)
		Q6<=Q6 == 5 ? 0: Q6+1;
endmodule
