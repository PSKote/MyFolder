`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:12:51 11/06/2015 
// Design Name: 
// Module Name:    mux2x1 
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
module mux21(out, a ,b, sel);
output out;
input a, b, sel;
wire w1, w2, w3;

NAND_gate m1 ( w1, sel, sel);
NAND_gate m2 (w2, a, w1);
NAND_gate m3 ( w3, b, sel);
NAND_gate m4 (out, w2, w3);
endmodule
