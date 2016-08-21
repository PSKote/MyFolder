`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:14:26 11/06/2015 
// Design Name: 
// Module Name:    demux1x2 
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
module demux_12(a ,b, in, sel);
output a,b;
input in, sel;
wire w1, w2, w3;

NAND_gate d1 (w1, sel, sel);
NAND_gate d2 (w2, in, w1);
NAND_gate d3 (w3, in, sel);
NAND_gate d4 (a, w2, w2);
NAND_gate d5 (b, w3, w3);
endmodule
