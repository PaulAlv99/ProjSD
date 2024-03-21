`timescale 1000ms/500ms
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:44:04 12/08/2022 
// Design Name: 
// Module Name:    Matricula 
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
module Matricula(
	input [23:0] Matricula,
    input [2:0] Dia,
	 input CLK,
	 output reg MatrVal, // 0  valido 1  invalido
	 output reg Par_Impar, // 0  par 1  impar
    output reg [3:0] Par, // conta quantos caracteres par
    output reg [3:0] Impar, // conta quantos caracteres impar
    output reg Barreira1
	 );
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
	always @ (Par_Impar or Dia or MatrVal or Matricula)
		begin
			if (((Par_Impar==0) && (MatrVal==0) && ((Dia==3'b001) || (Dia==3'b011) || (Dia==3'b101) || (Dia==3'b111))) || ((Par_Impar==1) && (MatrVal==0) && ((Dia==3'b010) || (Dia==3'b100) || (Dia==3'b110) || (Dia==3'b111))))
				Barreira1=0;
			else 
				Barreira1=1;
			if ((MatrVal==1) || (Dia==0) || (Dia>7))
				Barreira1=1;
		end 

endmodule
