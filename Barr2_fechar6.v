`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:05:07 12/08/2022 
// Design Name: 
// Module Name:    Barr2_fechar6 
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
module Barr2_fechar6(
input MatrVal,
input CLK,
output reg Barreira2,
reg [2:0] Q6=0
    );

/*
initial begin
	Q6=0;
end*/


always @ (posedge CLK)
	begin
		Q6=Q6 + 1 ;
	end



always @(MatrVal)
	begin
		if ((MatrVal ==1 && Q6>=6) || (MatrVal == 0 && Q6>=6) || (MatrVal == 0 && Q6==0))
			Barreira2=0;
	end
	
always @(posedge MatrVal or negedge MatrVal or posedge CLK)
	begin
		if (MatrVal==1)
		begin
			Q6=1;
			Barreira2=1;
		end
		else if (MatrVal==0 && Q6>=6)
			Barreira2=0;
	end


	
	
//oficial
/*
always @(CLK or MatrVal)
	begin
		if (MatrVal==1)
			begin
				Q6=0;
				while (Q6 < 6)
					begin
						Barreira2=1;
						#1 Q6= Q6 +1;
					end
				
			end
		else if (MatrVal==0)
			begin
				Barreira2=0;
			end
		
	end
	
	*/
endmodule
