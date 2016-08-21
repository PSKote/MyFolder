`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:40:09 01/11/2016 
// Design Name: 
// Module Name:    demux 
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

module demux_14(a,b,c,d,s,in);
output a,b,c,d;
input [1:0]s;
input in;
wire w1,w2;

demux_12 d1 ( w1,w2,in,s[1]);
demux_12 d2 ( a,b,w1,s[0]);
demux_12 d3 ( c,d,w2,s[0]);

endmodule