// Verilog test fixture created from schematic C:\Users\Utilizador\Desktop\1\ProjetoFase2.sch - Thu Dec 08 22:42:05 2022

`timescale 1ns / 1ps

module ProjetoFase2_ProjetoFase2_sch_tb();

// Inputs
   reg [2:0] Dia;
   reg [23:0] Matricula;

// Output
   wire Barreira1;
   wire Barreira;
   wire CLK;
   wire MatrVal;
   wire Barreira2;

// Bidirs

// Instantiate the UUT
   ProjetoFase2 UUT (
		.Dia(Dia), 
		.Barreira1(Barreira1), 
		.Barreira(Barreira), 
		.Matricula(Matricula), 
		.CLK(CLK), 
		.MatrVal(MatrVal), 
		.Barreira2(Barreira2)
   );
// Initialize Inputs
   `ifdef auto_init
       initial begin
		Dia = 0;
		Matricula = 0;
   `endif
endmodule
