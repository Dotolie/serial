/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_HOME_YWKIM_AVR_SRC_AVRDUDE_7_3_BUILD_LINUX_CONFIG_GRAM_H_INCLUDED
# define YY_YY_HOME_YWKIM_AVR_SRC_AVRDUDE_7_3_BUILD_LINUX_CONFIG_GRAM_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    K_NULL = 258,
    K_READ = 259,
    K_WRITE = 260,
    K_READ_LO = 261,
    K_READ_HI = 262,
    K_WRITE_LO = 263,
    K_WRITE_HI = 264,
    K_LOADPAGE_LO = 265,
    K_LOADPAGE_HI = 266,
    K_LOAD_EXT_ADDR = 267,
    K_WRITEPAGE = 268,
    K_CHIP_ERASE = 269,
    K_PGM_ENABLE = 270,
    K_MEMORY = 271,
    K_PAGE_SIZE = 272,
    K_ALIAS = 273,
    K_ALLOW_SUBSHELLS = 274,
    K_AVRDUDE_CONF_VERSION = 275,
    K_BUFF = 276,
    K_CONNTYPE = 277,
    K_DEDICATED = 278,
    K_DEFAULT_BAUDRATE = 279,
    K_DEFAULT_BITCLOCK = 280,
    K_DEFAULT_PARALLEL = 281,
    K_DEFAULT_PROGRAMMER = 282,
    K_DEFAULT_SERIAL = 283,
    K_DEFAULT_SPI = 284,
    K_DEFAULT_LINUXGPIO = 285,
    K_HVUPDI_SUPPORT = 286,
    K_DEVICECODE = 287,
    K_EEPROM = 288,
    K_ERRLED = 289,
    K_FLASH = 290,
    K_ID = 291,
    K_IO = 292,
    K_LINUXGPIO = 293,
    K_LOADPAGE = 294,
    K_SDI = 295,
    K_SDO = 296,
    K_PARALLEL = 297,
    K_PARENT = 298,
    K_PART = 299,
    K_PGMLED = 300,
    K_PROGRAMMER = 301,
    K_RDYLED = 302,
    K_READBACK = 303,
    K_READMEM = 304,
    K_RESET = 305,
    K_RETRY_PULSE = 306,
    K_SERIAL = 307,
    K_SPI = 308,
    K_SCK = 309,
    K_SIGNATURE = 310,
    K_SIZE = 311,
    K_TCK = 312,
    K_TDI = 313,
    K_TDO = 314,
    K_TMS = 315,
    K_USB = 316,
    K_USBPID = 317,
    K_TYPE = 318,
    K_VARIANTS = 319,
    K_VCC = 320,
    K_VFYLED = 321,
    K_PP_CONTROLSTACK = 322,
    K_HVSP_CONTROLSTACK = 323,
    K_ALLOWFULLPAGEBITSTREAM = 324,
    K_ENABLEPAGEPROGRAMMING = 325,
    K_HAS_JTAG = 326,
    K_HAS_DW = 327,
    K_HAS_PDI = 328,
    K_HAS_UPDI = 329,
    K_HAS_TPI = 330,
    K_IS_AT90S1200 = 331,
    K_IS_AVR32 = 332,
    K_FLASH_INSTR = 333,
    K_EEPROM_INSTR = 334,
    TKN_COMMA = 335,
    TKN_EQUAL = 336,
    TKN_SEMI = 337,
    TKN_LEFT_PAREN = 338,
    TKN_RIGHT_PAREN = 339,
    TKN_NUMBER = 340,
    TKN_NUMBER_REAL = 341,
    TKN_STRING = 342,
    TKN_COMPONENT = 343,
    OP_OR = 344,
    OP_XOR = 345,
    OP_AND = 346,
    OP_PLUS = 347,
    OP_MINUS = 348,
    OP_TIMES = 349,
    OP_DIVIDE = 350,
    OP_MODULO = 351,
    OP_TILDE = 352,
    UNARY = 353
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_YWKIM_AVR_SRC_AVRDUDE_7_3_BUILD_LINUX_CONFIG_GRAM_H_INCLUDED  */
