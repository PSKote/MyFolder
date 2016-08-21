`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:06:17 11/06/2015 
// Design Name: 
// Module Name:    AND_gate 
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

module and_gate(out, a, b);
output out;
input a,b;
wire w1;

NAND_gate n1 (w1, a, b);
NAND_gate n2 (out, w1, w1);

endmodule
