`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:18:39 12/09/2022 
// Design Name: 
// Module Name:    Guarda_matriculas 
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
module Guarda_matriculas(
    input [23:0] Matricula,
    input MatrVal,
	 output reg [23:0] matricula1,
    output reg [23:0] matricula2,
	 input CLK
	);
reg [23:0] MatrAnterior;	 
	

initial begin
	matricula1 = 0;
	matricula2 = 0;
	MatrAnterior = 0;
end
	 
//always @(posedge CLK)
always @(Matricula)
begin
	#0.001;//espera um pouco de forma a que o estado da matricula (MatrVal) seja atualizado
	if (MatrVal==1 && MatrAnterior != Matricula) 
	begin 
		matricula2=matricula1;
		matricula1=Matricula;
		MatrAnterior=Matricula;
	end
end

endmodule
/*	 output reg [23:0] matricula1,
    output reg [23:0] matricula2,
    input [23:0] Matricula,
    input MatrVal,
	 input CLK
    );
initial begin
	matricula1 = 0;
	matricula2 = 0;
end
	 
always @(MatrVal or posedge CLK)
begin
	if ((MatrVal==1) && (matricula2 != Matricula)) 
	begin
		if (matricula1==0)
			matricula1 = Matricula;
		else
		begin
			if (matricula2==0)
				matricula2 = Matricula;
			else 
			begin
				matricula1 = matricula2;
				matricula2 = Matricula;
			end
		end	
	end
end
endmodule*/