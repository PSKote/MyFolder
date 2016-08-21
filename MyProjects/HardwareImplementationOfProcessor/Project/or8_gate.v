`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:57:55 01/09/2016 
// Design Name: 
// Module Name:    or8_gate 
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
module or8_gate(out, in);
output out;
input [7:0] in;
wire w1, w2, w3, w4, w5, w6;

or_gate o1 (w1, in[0], in[1]);
or_gate o2 (w2, w1, in[2]);
or_gate o3 (w3, w2, in[3]);
or_gate o4 (w4, w3, in[4]);
or_gate o5 (w5, w4, in[5]);
or_gate o6 (w6, w5, in[6]);
or_gate o7 (out, w6, in[7]);

endmodule
