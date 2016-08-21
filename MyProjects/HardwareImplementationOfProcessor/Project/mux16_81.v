`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:46:30 01/09/2016 
// Design Name: 
// Module Name:    mux16_81 
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
module mux16_81(out, s, a, b, c, d, e, f, g, h);
input [15:0]a, b, c, d, e,f ,g, h;
input [2:0] s;
output [15:0] out;
wire [15:0] w1, w2;

mux_16_41 m1 (w1, s[1:0], a, b, c, d);
mux_16_41 m2 (w2, s[1:0], e, f, g, h);
mux16_21 m3 (out, s[2], w1, w2); 

endmodule
