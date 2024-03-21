`timescale 1000ms/500ms

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:29:34 10/30/2022
// Design Name:   Projeto
// Module Name:   C:/Users/Utilizador/Desktop/Projeto 1 Validador-feito/Projeto.v
// Project Name:  Projeto1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Projeto
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Projeto_test;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg [3:0] C;
	reg [3:0] D;
	reg [3:0] E;
	reg [3:0] F;
	reg [2:0] Dia;

	// Outputs
	wire Barreira1;
	wire MatrVal;
	// Instantiate the Unit Under Test (UUT)
	Projeto uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.E(E), 
		.F(F), 
		.Dia(Dia), 
		.Barreira1(Barreira1), 
		.MatrVal(MatrVal)
	);

	initial begin
		// Initialize Inputs
		A = 3;
		B = 4;
		C = 'hA;
		D = 3;
		E = 6;
		F = 6;
		Dia = 1;
		#3
		A = 3;
		B = 4;
		C = 'hA;
		D = 3;
		E = 6;
		F = 6;
		Dia = 2;
		#3
		A = 3;
		B = 4;
		C = 'hA;
		D = 3;
		E = 6;
		F = 6;
		Dia = 7;
		#3
		A = 'hB;
		B = 'hB;
		C = 'hA;
		D = 'hB;
		E = 'hF;
		F = 'hF;
		Dia = 1;
		#3
		A = 'hB;
		B = 'hB;
		C = 'hA;
		D = 'hB;
		E = 'hF;
		F = 'hF;
		Dia = 2;
		#3
		A = 'hB;
		B = 'hB;
		C = 'hA;
		D = 'hB;
		E = 'hF;
		F = 'hF;
		Dia = 7;
		#3
		A = 1;
		B = 2;
		C = 3;
		D = 4;
		E = 6;
		F = 8;
		Dia = 3;
		#3
		A = 1;
		B = 2;
		C = 3;
		D = 4;
		E = 6;
		F = 8;
		Dia = 4;
		#3
		A = 1;
		B = 2;
		C = 3;
		D = 4;
		E = 6;
		F = 8;
		Dia = 7;
		#3
		A = 'hB;
		B = 'hD;
		C = 9;
		D = 7;
		E = 5;
		F = 2;
		Dia = 5;
		#3
		A = 'hB;
		B = 'hD;
		C = 9;
		D = 7;
		E = 5;
		F = 2;
		Dia = 6;
		#3
		A = 'hB;
		B = 'hD;
		C = 9;
		D = 7;
		E = 5;
		F = 2;
		Dia = 7;
		// Wait 100 ns for global reset to finish
		#3000;
        
		// Add stimulus here

	end
      
endmodule

