`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:34 11/06/2015 
// Design Name: 
// Module Name:    halfadder 
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
module halfadder(sum, carry, a , b);
output sum, carry;
input a, b;
wire w1, w2, w3;

NAND_gate h1 (w1, a, b);
NAND_gate h2 (w2, a, w1);
NAND_gate h3 (w3, w1, b);
NAND_gate h4 (sum, w2, w3);
NAND_gate h5 (carry, w1, w1);
endmodule
