`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:52:42 12/08/2022 
// Design Name: 
// Module Name:    OR
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
module OR(
    input Barreira1,
    input Barreira2,
    output Barreira
    );
	or	(Barreira, Barreira1, Barreira2);

endmodule
