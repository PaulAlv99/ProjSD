`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:28:49 12/08/2022 
// Design Name: 
// Module Name:    Barr6s 
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
module Barr6s(
input [6:0] conta_ciclos,
input [23:0] Matricula,
input MatrVal,
output reg [6:0] ciclos_fechado=7'd0
    );
always @ (conta_ciclos)
	begin
		if ((MatrVal==1))
			begin
				ciclos_fechado = (conta_ciclos) + 1'd6;
				
			end
	end
endmodule
