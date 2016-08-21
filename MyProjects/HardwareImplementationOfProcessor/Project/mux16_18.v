`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:43:06 01/09/2016 
// Design Name: 
// Module Name:    mux16_18 
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
module demux16_18(a,b,c,d,e,f,g,h,s,in);
input [15:0]in; input [2:0]s;
output [15:0]a,b,c,d,e,f,g,h;
wire [15:0]w1,w2;

demux_16_21 d1 (w1,w2,in,s[2]);
demux_16_14 d2 (a,b,c,d,s[1:0],w1);
demux_16_14 d3 (e,f,g,h,s[1:0],w2);

endmodule
