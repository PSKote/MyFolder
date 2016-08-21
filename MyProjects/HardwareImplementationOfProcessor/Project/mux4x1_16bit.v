`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:23:21 11/06/2015 
// Design Name: 
// Module Name:    mux4x1_16bit 
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
module mux_16_41(out, s, a, b, c, d);
output [15:0]out; 
input [1:0] s; input [15:0]a; input [15:0]b; input [15:0]c; input [15:0]d;

mux41 mx1 (out[0], s, a[0], b[0], c[0], d[0]);
mux41 mx2 (out[1], s, a[1], b[1], c[1], d[1]);
mux41 mx3 (out[2], s, a[2], b[2], c[2], d[2]);
mux41 mx4 (out[3], s, a[3], b[3], c[3], d[3]);
mux41 mx5 (out[4], s, a[4], b[4], c[4], d[4]);
mux41 mx6 (out[5], s, a[5], b[5], c[5], d[5]);
mux41 mx7 (out[6], s, a[6], b[6], c[6], d[6]);
mux41 mx8 (out[7], s, a[7], b[7], c[7], d[7]);
mux41 mx9 (out[8], s, a[8], b[8], c[8], d[8]);
mux41 mx10 (out[9], s, a[9], b[9], c[9], d[9]);
mux41 mx11 (out[10], s, a[10], b[10], c[10], d[10]);
mux41 mx12 (out[11], s, a[11], b[11], c[11], d[11]);
mux41 mx13 (out[12], s, a[12], b[12], c[12], d[12]);
mux41 mx14 (out[13], s, a[13], b[13], c[13], d[13]);
mux41 mx15 (out[14], s, a[14], b[14], c[14], d[14]);
mux41 mx16 (out[15], s, a[15], b[15], c[15], d[15]);

endmodule
