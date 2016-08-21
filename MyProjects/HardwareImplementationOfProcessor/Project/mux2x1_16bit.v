`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:46 11/06/2015 
// Design Name: 
// Module Name:    mux2x1_16bit 
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
module mux_16_21(out,a, b, sel);
output [15:0]out;
input [15:0]a; input[15:0]b; input sel;

mux21 mu1 (out[0], a[0], b[0],sel);
mux21 mu2 (out[1], a[1], b[1],sel);
mux21 mu3 (out[2], a[2], b[2],sel);
mux21 mu4 (out[3], a[3], b[3],sel);
mux21 mu5 (out[4], a[4], b[4],sel);
mux21 mu6 (out[5], a[5], b[5],sel);
mux21 mu7 (out[6], a[6], b[6],sel);
mux21 mu8 (out[7], a[7], b[7],sel);
mux21 mu9 (out[8], a[8], b[8],sel);
mux21 mu10 (out[9], a[9], b[9],sel);
mux21 mu11 (out[10], a[10], b[10],sel);
mux21 mu12 (out[11], a[11], b[11],sel);
mux21 mu13 (out[12], a[12], b[12],sel);
mux21 mu14 (out[13], a[13], b[13],sel);
mux21 mu15 (out[14], a[14], b[14],sel);
mux21 mu16 (out[15], a[15], b[15],sel);
endmodule
