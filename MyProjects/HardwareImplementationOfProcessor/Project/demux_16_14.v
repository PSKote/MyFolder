`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:18:39 01/09/2016 
// Design Name: 
// Module Name:    demux_16_14 
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
module demux_16_14(a,b,c,d,s,in);
output [15:0]a,b,c,d;
input [1:0]s;
input [15:0]in;
wire [15:0]w1,w2;

demux_16_21 d1 ( w1,w2,in,s[1]);
demux_16_21 d2 ( a,b,w1,s[0]);
demux_16_21 d3 ( c,d,w2,s[0]);




 endmodule
