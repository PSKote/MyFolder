`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:19:19 11/06/2015 
// Design Name: 
// Module Name:    mux4x1 
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
module mux41(out, s, a, b, c, d);
output out;
input a, b, c, d;
input [1:0] s;
wire w1, w0;

mux21 m21 (w1, a, b, s[0]);
mux21 m22 (w0, c, d, s[0]);
mux21 m23 (out, w1, w0, s[1]);



endmodule
