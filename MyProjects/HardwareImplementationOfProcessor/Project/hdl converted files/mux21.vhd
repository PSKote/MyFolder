----------------------------------------------------------------------------------------------
--
-- Generated by X-HDL Verilog Translator - Version 4.2.5 May 28, 2012
-- Fri Feb 19 2016 15:37:55
--
--      Input file      : 
--      Component name  : mux21
--      Author          : 
--      Company         : 
--
--      Description     : 
--
--
----------------------------------------------------------------------------------------------

LIBRARY ieee;
   USE ieee.std_logic_1164.all;

ENTITY mux21 IS
   PORT (
      out_xhdl1  : OUT STD_LOGIC;
      a          : IN STD_LOGIC;
      b          : IN STD_LOGIC;
      sel        : IN STD_LOGIC
   );
END mux21;

ARCHITECTURE trans OF mux21 IS
   SIGNAL w1        : STD_LOGIC;
   SIGNAL w2        : STD_LOGIC;
   SIGNAL w3        : STD_LOGIC;
   
   -- Declare intermediate signals for referenced outputs
   SIGNAL out_xhdl0 : STD_LOGIC;
BEGIN
   -- Drive referenced outputs
   out_xhdl1 <= out_xhdl0;
   
   
   
   m1 : NAND_gate
      PORT MAP (
         w1,
         sel,
         sel
      );
   
   
   m2 : NAND_gate
      PORT MAP (
         w2,
         a,
         w1
      );
   
   
   m3 : NAND_gate
      PORT MAP (
         w3,
         b,
         sel
      );
   
   
   m4 : NAND_gate
      PORT MAP (
         out_xhdl0,
         w2,
         w3
      );
   
END trans;


