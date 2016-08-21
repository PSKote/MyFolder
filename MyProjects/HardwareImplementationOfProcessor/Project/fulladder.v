`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:17:09 11/06/2015 
// Design Name: 
// Module Name:    fulladder 
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
module fulladder(sum, carry, a , b, c);
output sum, carry;
input a, b, c;
wire w1, w2, w3;

halfadder f1 (w1, w3, a, b);
halfadder f2 (sum, w2, w1, c);
or_gate f3(carry, w3, w2);
endmodule
