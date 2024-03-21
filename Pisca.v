`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:06:57 12/08/2022 
// Design Name: 
// Module Name:    Pisca 
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
module Pisca(
input Barreira,
input CLK,
output reg LED=0
    );
initial begin
	if (Barreira==1)
		LED=1;
end 