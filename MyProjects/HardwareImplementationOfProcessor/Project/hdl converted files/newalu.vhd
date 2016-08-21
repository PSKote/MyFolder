----------------------------------------------------------------------------------------------
--
-- Generated by X-HDL Verilog Translator - Version 4.2.5 May 28, 2012
-- Fri Feb 19 2016 15:52:32
--
--      Input file      : 
--      Component name  : newalu
--      Author          : 
--      Company         : 
--
--      Description     : 
--
--
----------------------------------------------------------------------------------------------

LIBRARY ieee;
   USE ieee.std_logic_1164.all;

ENTITY newalu IS
   PORT (
      out_xhdl2  : OUT STD_LOGIC_VECTOR(15 DOWNTO 0);
      zr         : OUT STD_LOGIC;
      ng         : OUT STD_LOGIC;
      c          : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
      x          : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
      y          : IN STD_LOGIC_VECTOR(15 DOWNTO 0)
   );
END newalu;

ARCHITECTURE trans OF newalu IS
   COMPONENT fa_16 IS
      PORT (
         sum        : OUT STD_LOGIC_VECTOR(15 DOWNTO 0);
         cout       : OUT STD_LOGIC;
         a          : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
         b          : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
         cin        : IN STD_LOGIC
      );
   END COMPONENT;
   
   COMPONENT mux21 IS
      PORT (
         out_xhdl1  : OUT STD_LOGIC;
         a          : IN STD_LOGIC;
         b          : IN STD_LOGIC;
         sel        : IN STD_LOGIC
      );
   END COMPONENT;
   
   COMPONENT and_16 IS
      PORT (
         y          : OUT STD_LOGIC_VECTOR(15 DOWNTO 0);
         a          : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
         b          : IN STD_LOGIC_VECTOR(15 DOWNTO 0)
      );
   END COMPONENT;
   
   SIGNAL zz        : STD_LOGIC;
   SIGNAL xx        : STD_LOGIC;
   SIGNAL yy        : STD_LOGIC;
   SIGNAL cz        : STD_LOGIC;
   SIGNAL s         : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL aa        : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL r         : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL notr      : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL l         : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL notl      : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL n         : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL notn      : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL m         : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL o         : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL p         : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL q         : STD_LOGIC_VECTOR(15 DOWNTO 0);
   
   -- Declare intermediate signals for referenced outputs
   SIGNAL out_xhdl1 : STD_LOGIC_VECTOR(15 DOWNTO 0);
   SIGNAL zr_xhdl3  : STD_LOGIC;
   SIGNAL ng_xhdl0  : STD_LOGIC;
BEGIN
   -- Drive referenced outputs
   out_xhdl2 <= out_xhdl1;
   zr <= zr_xhdl3;
   ng <= ng_xhdl0;
   
   
   
   m1 : mux_16_21
      PORT MAP (
         l,
         x,
         "0000000000000000",
         c(0)
      );
   
   
   
   n1 : notgate_16
      PORT MAP (
         notl,
         l
      );
   
   
   
   m2 : mux_16_21
      PORT MAP (
         m,
         l,
         notl,
         c(1)
      );
   
   
   
   m3 : mux_16_21
      PORT MAP (
         n,
         y,
         "0000000000000000",
         c(2)
      );
   
   
   
   n2 : notgate_16
      PORT MAP (
         notn,
         n
      );
   
   
   
   m4 : mux_16_21
      PORT MAP (
         o,
         n,
         notn,
         c(3)
      );
   
   
   
   a1 : and_16
      PORT MAP (
         p,
         m,
         o
      );
   
   
   
   f1 : fa_16
      PORT MAP (
         q,
         cz,
         m,
         o,
         '0'
      );
   
   
   
   m5 : mux_16_21
      PORT MAP (
         r,
         p,
         q,
         c(4)
      );
   
   
   
   n3 : notgate_16
      PORT MAP (
         notr,
         r
      );
   
   
   
   m6 : mux_16_21
      PORT MAP (
         out_xhdl1,
         r,
         notr,
         c(5)
      );
   
   
   
   m7 : mux_16_21
      PORT MAP (
         s,
         r,
         notr,
         c(5)
      );
   
   
   
   m8 : mux21
      PORT MAP (
         ng_xhdl0,
         '1',
         '0',
         s(15)
      );
   
   
   
   m9 : mux_16_21
      PORT MAP (
         aa,
         r,
         notr,
         c(5)
      );
   
   
   
   o1 : or8_gate
      PORT MAP (
         xx,
         aa(7 DOWNTO 0)
      );
   
   
   
   o2 : or8_gate
      PORT MAP (
         zz,
         aa(15 DOWNTO 8)
      );
   
   
   
   o3 : or_gate
      PORT MAP (
         yy,
         xx,
         zz
      );
   
   
   
   ng1 : NAND_gate
      PORT MAP (
         zr_xhdl3,
         yy,
         yy
      );
   
END trans;

