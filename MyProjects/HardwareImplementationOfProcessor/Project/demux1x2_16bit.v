`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:27:11 11/06/2015 
// Design Name: 
// Module Name:    demux1x2_16bit 
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
module demux_16_21(a, b, in, sel);
output [15:0]a; output[15:0]b;
input [15:0]in; input sel;

demux12 du1 (a[0], b[0], in[0], sel);
demux12 du2 (a[1], b[1], in[1], sel);
demux12 du3 (a[2], b[2], in[2], sel);
demux12 du4 (a[3], b[3], in[3], sel);
demux12 du5 (a[4], b[4], in[4], sel);
demux12 du6 (a[5], b[5], in[5], sel);
demux12 du7 (a[6], b[6], in[6], sel);
demux12 du8 (a[7], b[7], in[7], sel);
demux12 du9 (a[8], b[8], in[8], sel);
demux12 du10 (a[9], b[9], in[9], sel);
demux12 du11 (a[10], b[10], in[10], sel);
demux12 du12 (a[11], b[11], in[11], sel);
demux12 du13 (a[12], b[12], in[12], sel);
demux12 du14 (a[13], b[13], in[13], sel);
demux12 du15 (a[14], b[14], in[14], sel);
demux12 du16 (a[15], b[15], in[15], sel);
endmodule
