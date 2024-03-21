`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 15:01:40 10/27/2022
// Design Name:
// Module Name: Projeto
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
module Projeto(
input [3:0] A, // de 0 a 15 em Hexadecimal
input [3:0] B, // de 0 a 15 em Hexadecimal
input [3:0] C, // de 0 a 15 em Hexadecimal
input [3:0] D, // de 0 a 15 em Hexadecimal
input [3:0] E, // de 0 a 15 em Hexadecimal
input [3:0] F, // de 0 a 15 em Hexadecimal
input [2:0] Dia, // dias da semana sendo que vai de 3'b001-segunda at domingo-3'b111
output reg Barreira1, // 0  aberto, 1  fechado
output reg MatrVal // 0  valido 1  invalido
);
reg Par_Impar; // 0  par 1  impar
reg [3:0] Par; // conta quantos caracteres par
reg [3:0] Impar; // conta quantos caracteres impar

	always @ (A or B or C or D or E or F or MatrVal)
		begin
			MatrVal=1;
			if ((((A)<=4'b1001) && ((B)<=4'b1001)) || (((A)>4'b1001) && ((B)>4'b1001)))
					MatrVal=0;
			else MatrVal=1;
			if (((((C)<=4'b1001) && ((D)<=4'b1001)) && MatrVal==0) || (((C)>4'b1001) && ((D)>4'b1001) && MatrVal==0))
					MatrVal=0;
			else MatrVal=1;
			if (((((E)<=4'b1001) && ((F)<=4'b1001)) && MatrVal==0) || (((E)>4'b1001) && ((F)>4'b1001) && MatrVal==0))
					MatrVal=0;
			else MatrVal=1;
			if (A>4'b1001 && B>4'b1001 && C>4'b1001 && D>4'b1001 && E>4'b1001 && F>4'b1001)
					MatrVal=1;
		end	
		
	always @ (A or B or C or D or E or F)
		begin
			Par=3'b000;
			Impar=3'b000;
			if (A%2!=0)
				begin
					Impar=Impar+1;
				end
			else if (A%2==0)
				begin
					Par=Par+1;
				end
			if (B%2!=0)
				begin
					Impar=Impar+1;
				end
			else if (B%2==0)
				begin
					Par=Par+1;
				end
			if (C%2!=0)
				begin
					Impar=Impar+1;
				end
			else if (C%2==0)
				begin
					Par=Par+1;
				end
			if (D%2!=0)
				begin
					Impar=Impar+1;
				end
			else if (D%2==0)
				begin
					Par=Par+1;
				end
			if (E%2!=0)
				begin
					Impar=Impar+1;
				end
			else if (E%2==0)
				begin
					Par=Par+1;
				end
			if (F%2!=0)
				begin
					Impar=Impar+1;
				end
			else if (F%2==0)
				begin
					Par=Par+1;
				end
		end
	always @ (Par or Impar)
		begin
			if (Par>=3)
				Par_Impar=0;
			else if (Impar>3)
				Par_Impar=1;
		end
	always @ (Par_Impar or Dia or MatrVal)
		begin
			if (((Par_Impar==0) && (MatrVal==0) && ((Dia==3'b001) || (Dia==3'b011) || (Dia==3'b101) || (Dia==3'b111))) || ((Par_Impar==1) && (MatrVal==0) && ((Dia==3'b010) || (Dia==3'b100) || (Dia==3'b110) || (Dia==3'b111))))
				Barreira1=0;
			else 
				Barreira1=1;
		end
endmodule