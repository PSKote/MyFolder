----------------------------------------------------------------------------------------------
--
-- Generated by X-HDL Verilog Translator - Version 4.2.5 May 28, 2012
-- Fri Feb 19 2016 15:39:28
--
--      Input file      : 
--      Component name  : mux41
--      Author          : 
--      Company         : 
--
--      Description     : 
--
--
----------------------------------------------------------------------------------------------

LIBRARY ieee;
   USE ieee.std_logic_1164.all;

ENTITY mux41 IS
   PORT (
      out_xhdl1  : OUT STD_LOGIC;
      s          : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      a          : IN STD_LOGIC;
      b          : IN STD_LOGIC;
      c          : IN STD_LOGIC;
      d          : IN STD_LOGIC
   );
END mux41;

ARCHITECTURE trans OF mux41 IS
   COMPONENT mux21 IS
      PORT (
         out_xhdl1  : OUT STD_LOGIC;
         a          : IN STD_LOGIC;
         b          : IN STD_LOGIC;
         sel        : IN STD_LOGIC
      );
   END COMPONENT;
   
   SIGNAL w1        : STD_LOGIC;
   SIGNAL w0        : STD_LOGIC;
   
   -- Declare intermediate signals for referenced outputs
   SIGNAL out_xhdl0 : STD_LOGIC;
BEGIN
   -- Drive referenced outputs
   out_xhdl1 <= out_xhdl0;
   
   
   
   m21 : mux21
      PORT MAP (
         w1,
         a,
         b,
         s(0)
      );
   
   
   m22 : mux21
      PORT MAP (
         w0,
         c,
         d,
         s(0)
      );
   
   
   m23 : mux21
      PORT MAP (
         out_xhdl0,
         w1,
         w0,
         s(1)
      );
   
END trans;




