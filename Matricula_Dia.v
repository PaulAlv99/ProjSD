`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:54:20 12/08/2022 
// Design Name: 
// Module Name:    Matricula_Dia 
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
module Matricula_Dia(
input [23:0] Matricula,
output reg [3:0] F,
output reg [3:0] E,
output reg [3:0] D,
output reg [3:0] C,
output reg [3:0] B,
output reg [3:0] A
    );
always @ (Matricula)
		begin
			F = {Matricula[3:0]};
			E = {Matricula[7:4]};
			D = {Matricula[11:8]};
			C = {Matricula[15:12]};
			B = {Matricula[19:16]};
			A = {Matricula[23:20]};
		end
endmodule
