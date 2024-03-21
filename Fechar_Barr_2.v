`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:37:10 12/08/2022 
// Design Name: 
// Module Name:    Fechar_Barr_2 
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
module Fechar_Barr_2(
input [6:0] conta_ciclos,
input [23:0] Matricula,
input MatrVal,
input [6:0] ciclos_fechado,
output reg Barreira2
    );
always @(conta_ciclos)
	begin
		if (ciclos_fechado>=conta_ciclos)
			Barreira2=1;
	end

endmodule
