`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:02:17 01/09/2016 
// Design Name: 
// Module Name:    mux16_21 
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
module mux16_21(out,s,a,b);
input [15:0]a;input [15:0]b;
input s;
output [15:0]out;
mux21 mx1 (out[0],a[0],b[0],s);
mux21 mx2 (out[1],a[1],b[1],s);
mux21 mx3 (out[2],a[2],b[2],s);
mux21 mx4 (out[3],a[3],b[3],s);
mux21 mx5 (out[4],a[4],b[4],s);
mux21 mx6 (out[5],a[5],b[5],s);
mux21 mx7 (out[6],a[6],b[6],s);
mux21 mx8 (out[7],a[7],b[7],s);
mux21 mx9 (out[8],a[8],b[8],s);
mux21 mx10 (out[9],a[9],b[9],s);
mux21 mx11 (out[10],a[10],b[10],s);
mux21 mx12(out[11],a[11],b[11],s);
mux21 mx13 (out[12],a[12],b[12],s);
mux21 mx14 (out[13],a[13],b[13],s);
mux21 mx15 (out[14],a[14],b[14],s);
mux21 mx16 (out[15],a[15],b[15],s);
endmodule
   



