// Verilog test fixture created from schematic C:\Users\Utilizador\Desktop\SistemasDigitais_ProjFase1_PauloAlves_E_LeonardoFerreira\ProjetoFase1\Modulo_Abertura.sch - Thu Nov 03 09:05:50 2022

`timescale 1ns / 1ps

module Modulo_Abertura_Modulo_Abertura_sch_tb();

// Inputs
   reg [3:0] A;
   reg [3:0] B;
   reg [3:0] C;
   reg [3:0] D;
   reg [3:0] E;
   reg [3:0] F;
   reg [2:0] Dia;

// Output
   wire Barreira;
   wire MatrVal;

// Bidirs

// Instantiate the UUT
   Modulo_Abertura UUT (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.E(E), 
		.F(F), 
		.Dia(Dia), 
		.Barreira(Barreira), 
		.MatrVal(MatrVal) 
   );
// Initialize Inputs
  
      initial begin
	   A = 3;
		B = 4;
		C = 'hA;
		D = 3;
		E = 6;
		F = 6;
		Dia = 1;
		#80
		A = 3;
		B = 4;
		C = 'hA;
		D = 3;
		E = 6;
		F = 6;
		Dia = 2;
		#80
		A = 3;
		B = 4;
		C = 'hA;
		D = 3;
		E = 6;
		F = 6;
		Dia = 7;
		#80
		A = 'hB;
		B = 'hB;
		C = 'hA;
		D = 'hB;
		E = 'hF;
		F = 'hF;
		Dia = 1;
		#80
		A = 'hB;
		B = 'hB;
		C = 'hA;
		D = 'hB;
		E = 'hF;
		F = 'hF;
		Dia = 2;
		#80
		A = 'hB;
		B = 'hB;
		C = 'hA;
		D = 'hB;
		E = 'hF;
		F = 'hF;
		Dia = 7;
		#80
		A = 1;
		B = 2;
		C = 3;
		D = 4;
		E = 6;
		F = 8;
		Dia = 3;
		#80
		A = 1;
		B = 2;
		C = 3;
		D = 4;
		E = 6;
		F = 8;
		Dia = 4;
		#80
		A = 1;
		B = 2;
		C = 3;
		D = 4;
		E = 6;
		F = 8;
		Dia = 7;
		#80
		A = 'hB;
		B = 'hD;
		C = 9;
		D = 7;
		E = 5;
		F = 2;
		Dia = 5;
		#80
		A = 'hB;
		B = 'hD;
		C = 9;
		D = 7;
		E = 5;
		F = 2;
		Dia = 6;
		#80
		A = 'hB;
		B = 'hD;
		C = 9;
		D = 7;
		E = 5;
		F = 2;
		Dia = 7;
   end
endmodule
