`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:11:14 11/06/2015 
// Design Name: 
// Module Name:    or_gate 
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
module or_gate (out, a, b);
output out;
input a, b;
wire w1, w2;

NAND_gate o1 ( w1, a, a);
NAND_gate o2 (w2, b, b);
NAND_gate o3 (out, w1, w2);
endmodule
