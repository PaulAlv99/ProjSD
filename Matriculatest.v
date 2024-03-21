`timescale 1000ms/500ms
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:46:00 12/08/2022
// Design Name:   Matricula
// Module Name:   C:/Users/Utilizador/Desktop/1/Matriculatest.v
// Project Name:  ProjetoFase1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Matricula
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Matriculatest;

	// Inputs
	reg [23:0] Matricula;
	reg [2:0] Dia;
	reg CLK;

	// Outputs
	wire MatrVal;
	wire Par_Impar;
	wire [3:0] Par;
	wire [3:0] Impar;
	wire Barreira1;
	wire [3:0] A;
	wire [3:0] B;
	wire [3:0] C;
	wire [3:0] D;
	wire [3:0] E;
	wire [3:0] F;
	// Instantiate the Unit Under Test (UUT)
	Matricula uut (
		.Matricula(Matricula), 
		.Dia(Dia), 
		.CLK(CLK), 
		.MatrVal(MatrVal), 
		.Par_Impar(Par_Impar), 
		.Par(Par), 
		.Impar(Impar), 
		.Barreira1(Barreira1),
		.A(A),
		.B(B),
		.C(C),
		.D(D),
		.E(E),
		.F(F)
	);

	initial begin
		// Initialize Inputs
		Matricula= 'h34A366;
		Dia=3'b001;
		#1
		Matricula= 'h34A366;
		Dia=3'b010;
		#1
		Matricula= 'h34A366;
		Dia=3'b111;
		#1
		Matricula= 'hBBABFF;
		Dia=3'b001;
		#1
		Matricula= 'hBBABFF;
		Dia=3'b010;
		#1
		Matricula= 'hBBABFF;
		Dia=3'b111;
		#1
		Matricula= 'h123468;
		Dia=3'b011;
		#1
		Matricula= 'h123468;
		Dia=3'b100;
		#1
		Matricula= 'h123468;
		Dia=3'b111;
		#1
		Matricula= 'hBD9752;
		Dia=3'b101;
		#1
		Matricula= 'hBD9752;
		Dia=3'b110;
		#1
		Matricula= 'hBD9752;
		Dia=3'b111;
		#1;
        
		// Add stimulus here

	end
      
endmodule

