`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:49:13 01/11/2016 
// Design Name: 
// Module Name:    demux18 
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

module demux_18(a,b,c,d,e,f,g,h,s,in);
input in; input [2:0]s;
output a,b,c,d,e,f,g,h;
wire w1,w2;

demux_12 d1 (w1,w2,in,s[2]);
demux_14 d2 (a,b,c,d,s[1:0],w1);
demux_14 d3 (e,f,g,h,s[1:0],w2);

endmodule
