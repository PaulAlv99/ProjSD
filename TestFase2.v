// Verilog test fixture created from schematic C:\Users\Utilizador\Desktop\1\ProjetoFase2.sch - Thu Dec 08 19:38:34 2022

`timescale 1ns/1ps

module ProjetoFase2_ProjetoFase2_sch_tb();

// Inputs
   reg [23:0] Matricula;
   reg [2:0] Dia;

// Output
   wire MatrVal;
	wire CLK;
	wire LED;
   wire Barreira;
	wire [23:0] matricula1;
	wire [23:0] matricula2;
// Bidirs

// Instantiate the UUT
   ProjetoFase2 UUT (
		.Matricula(Matricula), 
		.Dia(Dia), 
		.MatrVal(MatrVal), 
		.CLK(CLK),
		.LED(LED),
		.Barreira(Barreira),
		.matricula1(matricula1),
		.matricula2(matricula2)
   );
// Initialize Inputs
      initial begin
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
		#1
		Matricula= 'hBD9b52;
		Dia=3'b111;
		#1
		Matricula= 'hBD9752;
		Dia=3'b111;
		#1
		Matricula= 'hfD9d52;
		Dia=3'b111;
		end
endmodule
