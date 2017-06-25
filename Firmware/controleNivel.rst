                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.6 #9917 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module controleNivel
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _Tit2
                                     12 	.globl _Tit1
                                     13 	.globl _setLCD4
                                     14 	.globl _main
                                     15 	.globl _ajustPID
                                     16 	.globl _ext_1
                                     17 	.globl _int2Ser
                                     18 	.globl _char2Ser
                                     19 	.globl _int2ascii
                                     20 	.globl _algs2ser
                                     21 	.globl _serial
                                     22 	.globl _inic
                                     23 	.globl _iniLCD4
                                     24 	.globl _char2LCD
                                     25 	.globl _wrLCD4
                                     26 	.globl _wrLCD8
                                     27 	.globl _timer_0
                                     28 	.globl _ext_0
                                     29 	.globl _TrigPin
                                     30 	.globl _RW
                                     31 	.globl _DC
                                     32 	.globl _adcDt
                                     33 	.globl _adcCk
                                     34 	.globl _adcCS
                                     35 	.globl _lcdCS
                                     36 	.globl _S2D2
                                     37 	.globl _S1D1
                                     38 	.globl _SwInt
                                     39 	.globl _TxBip
                                     40 	.globl _RxLed
                                     41 	.globl _CY
                                     42 	.globl _AC
                                     43 	.globl _F0
                                     44 	.globl _RS1
                                     45 	.globl _RS0
                                     46 	.globl _OV
                                     47 	.globl _F1
                                     48 	.globl _P
                                     49 	.globl _PS
                                     50 	.globl _PT1
                                     51 	.globl _PX1
                                     52 	.globl _PT0
                                     53 	.globl _PX0
                                     54 	.globl _RD
                                     55 	.globl _WR
                                     56 	.globl _T1
                                     57 	.globl _T0
                                     58 	.globl _INT1
                                     59 	.globl _INT0
                                     60 	.globl _TXD
                                     61 	.globl _RXD
                                     62 	.globl _P3_7
                                     63 	.globl _P3_6
                                     64 	.globl _P3_5
                                     65 	.globl _P3_4
                                     66 	.globl _P3_3
                                     67 	.globl _P3_2
                                     68 	.globl _P3_1
                                     69 	.globl _P3_0
                                     70 	.globl _EA
                                     71 	.globl _ES
                                     72 	.globl _ET1
                                     73 	.globl _EX1
                                     74 	.globl _ET0
                                     75 	.globl _EX0
                                     76 	.globl _P2_7
                                     77 	.globl _P2_6
                                     78 	.globl _P2_5
                                     79 	.globl _P2_4
                                     80 	.globl _P2_3
                                     81 	.globl _P2_2
                                     82 	.globl _P2_1
                                     83 	.globl _P2_0
                                     84 	.globl _SM0
                                     85 	.globl _SM1
                                     86 	.globl _SM2
                                     87 	.globl _REN
                                     88 	.globl _TB8
                                     89 	.globl _RB8
                                     90 	.globl _TI
                                     91 	.globl _RI
                                     92 	.globl _P1_7
                                     93 	.globl _P1_6
                                     94 	.globl _P1_5
                                     95 	.globl _P1_4
                                     96 	.globl _P1_3
                                     97 	.globl _P1_2
                                     98 	.globl _P1_1
                                     99 	.globl _P1_0
                                    100 	.globl _TF1
                                    101 	.globl _TR1
                                    102 	.globl _TF0
                                    103 	.globl _TR0
                                    104 	.globl _IE1
                                    105 	.globl _IT1
                                    106 	.globl _IE0
                                    107 	.globl _IT0
                                    108 	.globl _P0_7
                                    109 	.globl _P0_6
                                    110 	.globl _P0_5
                                    111 	.globl _P0_4
                                    112 	.globl _P0_3
                                    113 	.globl _P0_2
                                    114 	.globl _P0_1
                                    115 	.globl _P0_0
                                    116 	.globl _LCD
                                    117 	.globl _CLKREG
                                    118 	.globl _B
                                    119 	.globl _ACC
                                    120 	.globl _PSW
                                    121 	.globl _IP
                                    122 	.globl _P3
                                    123 	.globl _IE
                                    124 	.globl _P2
                                    125 	.globl _SBUF
                                    126 	.globl _SCON
                                    127 	.globl _P1
                                    128 	.globl _TH1
                                    129 	.globl _TH0
                                    130 	.globl _TL1
                                    131 	.globl _TL0
                                    132 	.globl _TMOD
                                    133 	.globl _TCON
                                    134 	.globl _PCON
                                    135 	.globl _DPH
                                    136 	.globl _DPL
                                    137 	.globl _SP
                                    138 	.globl _P0
                                    139 	.globl _sensor
                                    140 	.globl _wrLCD4_PARM_1
                                    141 	.globl _wrLCD8_PARM_1
                                    142 	.globl _useBuf
                                    143 	.globl _Ch01
                                    144 	.globl _ad2On
                                    145 	.globl _ad1On
                                    146 	.globl _Txing
                                    147 	.globl _TxFlag
                                    148 	.globl _RxFlag
                                    149 	.globl _tip
                                    150 	.globl _bip
                                    151 	.globl _som
                                    152 	.globl _umSeg
                                    153 	.globl _malha
                                    154 	.globl _pwm
                                    155 	.globl _pid
                                    156 	.globl _TrigCont
                                    157 	.globl _Echo
                                    158 	.globl _int2Ser_PARM_3
                                    159 	.globl _int2Ser_PARM_2
                                    160 	.globl _char2Ser_PARM_3
                                    161 	.globl _char2Ser_PARM_2
                                    162 	.globl _algs2ser_PARM_3
                                    163 	.globl _algs2ser_PARM_2
                                    164 	.globl _char2LCD_PARM_3
                                    165 	.globl _char2LCD_PARM_2
                                    166 	.globl _algs
                                    167 	.globl _TxB
                                    168 	.globl _RxB
                                    169 	.globl _wTxB
                                    170 	.globl _rTxB
                                    171 	.globl _wRxB
                                    172 	.globl _rRxB
                                    173 	.globl _TxByte
                                    174 	.globl _RxByte
                                    175 	.globl _freq
                                    176 	.globl _x50us
                                    177 	.globl _cnt200
                                    178 	.globl _cnt100
                                    179 	.globl _disp2
                                    180 	.globl _disp1
                                    181 	.globl _cont
                                    182 	.globl _S2
                                    183 	.globl _S1
                                    184 	.globl _delay50
                                    185 	.globl _RTproc_1
                                    186 	.globl _RTproc_2
                                    187 ;--------------------------------------------------------
                                    188 ; special function registers
                                    189 ;--------------------------------------------------------
                                    190 	.area RSEG    (ABS,DATA)
      000000                        191 	.org 0x0000
                           000080   192 G$P0$0$0 == 0x0080
                           000080   193 _P0	=	0x0080
                           000081   194 G$SP$0$0 == 0x0081
                           000081   195 _SP	=	0x0081
                           000082   196 G$DPL$0$0 == 0x0082
                           000082   197 _DPL	=	0x0082
                           000083   198 G$DPH$0$0 == 0x0083
                           000083   199 _DPH	=	0x0083
                           000087   200 G$PCON$0$0 == 0x0087
                           000087   201 _PCON	=	0x0087
                           000088   202 G$TCON$0$0 == 0x0088
                           000088   203 _TCON	=	0x0088
                           000089   204 G$TMOD$0$0 == 0x0089
                           000089   205 _TMOD	=	0x0089
                           00008A   206 G$TL0$0$0 == 0x008a
                           00008A   207 _TL0	=	0x008a
                           00008B   208 G$TL1$0$0 == 0x008b
                           00008B   209 _TL1	=	0x008b
                           00008C   210 G$TH0$0$0 == 0x008c
                           00008C   211 _TH0	=	0x008c
                           00008D   212 G$TH1$0$0 == 0x008d
                           00008D   213 _TH1	=	0x008d
                           000090   214 G$P1$0$0 == 0x0090
                           000090   215 _P1	=	0x0090
                           000098   216 G$SCON$0$0 == 0x0098
                           000098   217 _SCON	=	0x0098
                           000099   218 G$SBUF$0$0 == 0x0099
                           000099   219 _SBUF	=	0x0099
                           0000A0   220 G$P2$0$0 == 0x00a0
                           0000A0   221 _P2	=	0x00a0
                           0000A8   222 G$IE$0$0 == 0x00a8
                           0000A8   223 _IE	=	0x00a8
                           0000B0   224 G$P3$0$0 == 0x00b0
                           0000B0   225 _P3	=	0x00b0
                           0000B8   226 G$IP$0$0 == 0x00b8
                           0000B8   227 _IP	=	0x00b8
                           0000D0   228 G$PSW$0$0 == 0x00d0
                           0000D0   229 _PSW	=	0x00d0
                           0000E0   230 G$ACC$0$0 == 0x00e0
                           0000E0   231 _ACC	=	0x00e0
                           0000F0   232 G$B$0$0 == 0x00f0
                           0000F0   233 _B	=	0x00f0
                           00008F   234 G$CLKREG$0$0 == 0x008f
                           00008F   235 _CLKREG	=	0x008f
                           000090   236 G$LCD$0$0 == 0x0090
                           000090   237 _LCD	=	0x0090
                                    238 ;--------------------------------------------------------
                                    239 ; special function bits
                                    240 ;--------------------------------------------------------
                                    241 	.area RSEG    (ABS,DATA)
      000000                        242 	.org 0x0000
                           000080   243 G$P0_0$0$0 == 0x0080
                           000080   244 _P0_0	=	0x0080
                           000081   245 G$P0_1$0$0 == 0x0081
                           000081   246 _P0_1	=	0x0081
                           000082   247 G$P0_2$0$0 == 0x0082
                           000082   248 _P0_2	=	0x0082
                           000083   249 G$P0_3$0$0 == 0x0083
                           000083   250 _P0_3	=	0x0083
                           000084   251 G$P0_4$0$0 == 0x0084
                           000084   252 _P0_4	=	0x0084
                           000085   253 G$P0_5$0$0 == 0x0085
                           000085   254 _P0_5	=	0x0085
                           000086   255 G$P0_6$0$0 == 0x0086
                           000086   256 _P0_6	=	0x0086
                           000087   257 G$P0_7$0$0 == 0x0087
                           000087   258 _P0_7	=	0x0087
                           000088   259 G$IT0$0$0 == 0x0088
                           000088   260 _IT0	=	0x0088
                           000089   261 G$IE0$0$0 == 0x0089
                           000089   262 _IE0	=	0x0089
                           00008A   263 G$IT1$0$0 == 0x008a
                           00008A   264 _IT1	=	0x008a
                           00008B   265 G$IE1$0$0 == 0x008b
                           00008B   266 _IE1	=	0x008b
                           00008C   267 G$TR0$0$0 == 0x008c
                           00008C   268 _TR0	=	0x008c
                           00008D   269 G$TF0$0$0 == 0x008d
                           00008D   270 _TF0	=	0x008d
                           00008E   271 G$TR1$0$0 == 0x008e
                           00008E   272 _TR1	=	0x008e
                           00008F   273 G$TF1$0$0 == 0x008f
                           00008F   274 _TF1	=	0x008f
                           000090   275 G$P1_0$0$0 == 0x0090
                           000090   276 _P1_0	=	0x0090
                           000091   277 G$P1_1$0$0 == 0x0091
                           000091   278 _P1_1	=	0x0091
                           000092   279 G$P1_2$0$0 == 0x0092
                           000092   280 _P1_2	=	0x0092
                           000093   281 G$P1_3$0$0 == 0x0093
                           000093   282 _P1_3	=	0x0093
                           000094   283 G$P1_4$0$0 == 0x0094
                           000094   284 _P1_4	=	0x0094
                           000095   285 G$P1_5$0$0 == 0x0095
                           000095   286 _P1_5	=	0x0095
                           000096   287 G$P1_6$0$0 == 0x0096
                           000096   288 _P1_6	=	0x0096
                           000097   289 G$P1_7$0$0 == 0x0097
                           000097   290 _P1_7	=	0x0097
                           000098   291 G$RI$0$0 == 0x0098
                           000098   292 _RI	=	0x0098
                           000099   293 G$TI$0$0 == 0x0099
                           000099   294 _TI	=	0x0099
                           00009A   295 G$RB8$0$0 == 0x009a
                           00009A   296 _RB8	=	0x009a
                           00009B   297 G$TB8$0$0 == 0x009b
                           00009B   298 _TB8	=	0x009b
                           00009C   299 G$REN$0$0 == 0x009c
                           00009C   300 _REN	=	0x009c
                           00009D   301 G$SM2$0$0 == 0x009d
                           00009D   302 _SM2	=	0x009d
                           00009E   303 G$SM1$0$0 == 0x009e
                           00009E   304 _SM1	=	0x009e
                           00009F   305 G$SM0$0$0 == 0x009f
                           00009F   306 _SM0	=	0x009f
                           0000A0   307 G$P2_0$0$0 == 0x00a0
                           0000A0   308 _P2_0	=	0x00a0
                           0000A1   309 G$P2_1$0$0 == 0x00a1
                           0000A1   310 _P2_1	=	0x00a1
                           0000A2   311 G$P2_2$0$0 == 0x00a2
                           0000A2   312 _P2_2	=	0x00a2
                           0000A3   313 G$P2_3$0$0 == 0x00a3
                           0000A3   314 _P2_3	=	0x00a3
                           0000A4   315 G$P2_4$0$0 == 0x00a4
                           0000A4   316 _P2_4	=	0x00a4
                           0000A5   317 G$P2_5$0$0 == 0x00a5
                           0000A5   318 _P2_5	=	0x00a5
                           0000A6   319 G$P2_6$0$0 == 0x00a6
                           0000A6   320 _P2_6	=	0x00a6
                           0000A7   321 G$P2_7$0$0 == 0x00a7
                           0000A7   322 _P2_7	=	0x00a7
                           0000A8   323 G$EX0$0$0 == 0x00a8
                           0000A8   324 _EX0	=	0x00a8
                           0000A9   325 G$ET0$0$0 == 0x00a9
                           0000A9   326 _ET0	=	0x00a9
                           0000AA   327 G$EX1$0$0 == 0x00aa
                           0000AA   328 _EX1	=	0x00aa
                           0000AB   329 G$ET1$0$0 == 0x00ab
                           0000AB   330 _ET1	=	0x00ab
                           0000AC   331 G$ES$0$0 == 0x00ac
                           0000AC   332 _ES	=	0x00ac
                           0000AF   333 G$EA$0$0 == 0x00af
                           0000AF   334 _EA	=	0x00af
                           0000B0   335 G$P3_0$0$0 == 0x00b0
                           0000B0   336 _P3_0	=	0x00b0
                           0000B1   337 G$P3_1$0$0 == 0x00b1
                           0000B1   338 _P3_1	=	0x00b1
                           0000B2   339 G$P3_2$0$0 == 0x00b2
                           0000B2   340 _P3_2	=	0x00b2
                           0000B3   341 G$P3_3$0$0 == 0x00b3
                           0000B3   342 _P3_3	=	0x00b3
                           0000B4   343 G$P3_4$0$0 == 0x00b4
                           0000B4   344 _P3_4	=	0x00b4
                           0000B5   345 G$P3_5$0$0 == 0x00b5
                           0000B5   346 _P3_5	=	0x00b5
                           0000B6   347 G$P3_6$0$0 == 0x00b6
                           0000B6   348 _P3_6	=	0x00b6
                           0000B7   349 G$P3_7$0$0 == 0x00b7
                           0000B7   350 _P3_7	=	0x00b7
                           0000B0   351 G$RXD$0$0 == 0x00b0
                           0000B0   352 _RXD	=	0x00b0
                           0000B1   353 G$TXD$0$0 == 0x00b1
                           0000B1   354 _TXD	=	0x00b1
                           0000B2   355 G$INT0$0$0 == 0x00b2
                           0000B2   356 _INT0	=	0x00b2
                           0000B3   357 G$INT1$0$0 == 0x00b3
                           0000B3   358 _INT1	=	0x00b3
                           0000B4   359 G$T0$0$0 == 0x00b4
                           0000B4   360 _T0	=	0x00b4
                           0000B5   361 G$T1$0$0 == 0x00b5
                           0000B5   362 _T1	=	0x00b5
                           0000B6   363 G$WR$0$0 == 0x00b6
                           0000B6   364 _WR	=	0x00b6
                           0000B7   365 G$RD$0$0 == 0x00b7
                           0000B7   366 _RD	=	0x00b7
                           0000B8   367 G$PX0$0$0 == 0x00b8
                           0000B8   368 _PX0	=	0x00b8
                           0000B9   369 G$PT0$0$0 == 0x00b9
                           0000B9   370 _PT0	=	0x00b9
                           0000BA   371 G$PX1$0$0 == 0x00ba
                           0000BA   372 _PX1	=	0x00ba
                           0000BB   373 G$PT1$0$0 == 0x00bb
                           0000BB   374 _PT1	=	0x00bb
                           0000BC   375 G$PS$0$0 == 0x00bc
                           0000BC   376 _PS	=	0x00bc
                           0000D0   377 G$P$0$0 == 0x00d0
                           0000D0   378 _P	=	0x00d0
                           0000D1   379 G$F1$0$0 == 0x00d1
                           0000D1   380 _F1	=	0x00d1
                           0000D2   381 G$OV$0$0 == 0x00d2
                           0000D2   382 _OV	=	0x00d2
                           0000D3   383 G$RS0$0$0 == 0x00d3
                           0000D3   384 _RS0	=	0x00d3
                           0000D4   385 G$RS1$0$0 == 0x00d4
                           0000D4   386 _RS1	=	0x00d4
                           0000D5   387 G$F0$0$0 == 0x00d5
                           0000D5   388 _F0	=	0x00d5
                           0000D6   389 G$AC$0$0 == 0x00d6
                           0000D6   390 _AC	=	0x00d6
                           0000D7   391 G$CY$0$0 == 0x00d7
                           0000D7   392 _CY	=	0x00d7
                           0000B0   393 G$RxLed$0$0 == 0x00b0
                           0000B0   394 _RxLed	=	0x00b0
                           0000B1   395 G$TxBip$0$0 == 0x00b1
                           0000B1   396 _TxBip	=	0x00b1
                           0000B2   397 G$SwInt$0$0 == 0x00b2
                           0000B2   398 _SwInt	=	0x00b2
                           000090   399 G$S1D1$0$0 == 0x0090
                           000090   400 _S1D1	=	0x0090
                           000091   401 G$S2D2$0$0 == 0x0091
                           000091   402 _S2D2	=	0x0091
      0000B7                        403 	.org 0x00B7
                           0000B7   404 G$lcdCS$0$0==.
      0000B7                        405 _lcdCS::
      0000B7                        406 	.ds 1
                           000093   407 G$adcCS$0$0 == 0x0093
                           000093   408 _adcCS	=	0x0093
                           0000B4   409 G$adcCk$0$0 == 0x00b4
                           0000B4   410 _adcCk	=	0x00b4
                           0000B5   411 G$adcDt$0$0 == 0x00b5
                           0000B5   412 _adcDt	=	0x00b5
                           0000B4   413 G$DC$0$0 == 0x00b4
                           0000B4   414 _DC	=	0x00b4
                           0000B5   415 G$RW$0$0 == 0x00b5
                           0000B5   416 _RW	=	0x00b5
                           000092   417 G$TrigPin$0$0 == 0x0092
                           000092   418 _TrigPin	=	0x0092
                                    419 ;--------------------------------------------------------
                                    420 ; overlayable register banks
                                    421 ;--------------------------------------------------------
                                    422 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        423 	.ds 8
                                    424 ;--------------------------------------------------------
                                    425 ; internal ram data
                                    426 ;--------------------------------------------------------
                                    427 	.area DSEG    (DATA)
                           000000   428 G$S1$0$0==.
      000022                        429 _S1::
      000022                        430 	.ds 1
                           000001   431 G$S2$0$0==.
      000023                        432 _S2::
      000023                        433 	.ds 1
                           000002   434 G$cont$0$0==.
      000024                        435 _cont::
      000024                        436 	.ds 1
                           000003   437 G$disp1$0$0==.
      000025                        438 _disp1::
      000025                        439 	.ds 1
                           000004   440 G$disp2$0$0==.
      000026                        441 _disp2::
      000026                        442 	.ds 1
                           000005   443 G$cnt100$0$0==.
      000027                        444 _cnt100::
      000027                        445 	.ds 1
                           000006   446 G$cnt200$0$0==.
      000028                        447 _cnt200::
      000028                        448 	.ds 1
                           000007   449 G$x50us$0$0==.
      000029                        450 _x50us::
      000029                        451 	.ds 1
                           000008   452 G$freq$0$0==.
      00002A                        453 _freq::
      00002A                        454 	.ds 1
                           000009   455 G$RxByte$0$0==.
      00002B                        456 _RxByte::
      00002B                        457 	.ds 1
                           00000A   458 G$TxByte$0$0==.
      00002C                        459 _TxByte::
      00002C                        460 	.ds 1
                           00000B   461 G$rRxB$0$0==.
      00002D                        462 _rRxB::
      00002D                        463 	.ds 1
                           00000C   464 G$wRxB$0$0==.
      00002E                        465 _wRxB::
      00002E                        466 	.ds 1
                           00000D   467 G$rTxB$0$0==.
      00002F                        468 _rTxB::
      00002F                        469 	.ds 1
                           00000E   470 G$wTxB$0$0==.
      000030                        471 _wTxB::
      000030                        472 	.ds 1
                           00000F   473 G$RxB$0$0==.
      000031                        474 _RxB::
      000031                        475 	.ds 16
                           00001F   476 G$TxB$0$0==.
      000041                        477 _TxB::
      000041                        478 	.ds 16
                           00002F   479 G$algs$0$0==.
      000051                        480 _algs::
      000051                        481 	.ds 5
                           000034   482 LcontroleNivel.char2LCD$val$1$12==.
      000056                        483 _char2LCD_PARM_2:
      000056                        484 	.ds 1
                           000035   485 LcontroleNivel.char2LCD$dot$1$12==.
      000057                        486 _char2LCD_PARM_3:
      000057                        487 	.ds 1
                           000036   488 LcontroleNivel.algs2ser$asc0$1$25==.
      000058                        489 _algs2ser_PARM_2:
      000058                        490 	.ds 2
                           000038   491 LcontroleNivel.algs2ser$dot$1$25==.
      00005A                        492 _algs2ser_PARM_3:
      00005A                        493 	.ds 1
                           000039   494 LcontroleNivel.char2Ser$val$1$34==.
      00005B                        495 _char2Ser_PARM_2:
      00005B                        496 	.ds 1
                           00003A   497 LcontroleNivel.char2Ser$dot$1$34==.
      00005C                        498 _char2Ser_PARM_3:
      00005C                        499 	.ds 1
                           00003B   500 LcontroleNivel.int2Ser$val$1$36==.
      00005D                        501 _int2Ser_PARM_2:
      00005D                        502 	.ds 2
                           00003D   503 LcontroleNivel.int2Ser$dot$1$36==.
      00005F                        504 _int2Ser_PARM_3:
      00005F                        505 	.ds 1
                           00003E   506 G$Echo$0$0==.
      000060                        507 _Echo::
      000060                        508 	.ds 2
                           000040   509 G$TrigCont$0$0==.
      000062                        510 _TrigCont::
      000062                        511 	.ds 1
                           000041   512 G$pid$0$0==.
      000063                        513 _pid::
      000063                        514 	.ds 3
                           000044   515 G$pwm$0$0==.
      000066                        516 _pwm::
      000066                        517 	.ds 1
                           000045   518 G$malha$0$0==.
      000067                        519 _malha::
      000067                        520 	.ds 1
                           000046   521 LcontroleNivel.main$setup$1$49==.
      000068                        522 _main_setup_1_49:
      000068                        523 	.ds 1
                           000047   524 LcontroleNivel.main$tempC$1$49==.
      000069                        525 _main_tempC_1_49:
      000069                        526 	.ds 1
                           000048   527 LcontroleNivel.main$errAt$1$49==.
      00006A                        528 _main_errAt_1_49:
      00006A                        529 	.ds 1
                           000049   530 LcontroleNivel.main$ctrlAt$1$49==.
      00006B                        531 _main_ctrlAt_1_49:
      00006B                        532 	.ds 2
                           00004B   533 LcontroleNivel.main$P$1$49==.
      00006D                        534 _main_P_1_49:
      00006D                        535 	.ds 2
                           00004D   536 LcontroleNivel.main$I$1$49==.
      00006F                        537 _main_I_1_49:
      00006F                        538 	.ds 2
                           00004F   539 LcontroleNivel.main$tempo$1$49==.
      000071                        540 _main_tempo_1_49:
      000071                        541 	.ds 2
                           000051   542 LcontroleNivel.main$contSetup$1$49==.
      000073                        543 _main_contSetup_1_49:
      000073                        544 	.ds 1
                           000052   545 LcontroleNivel.main$setupR$1$49==.
      000074                        546 _main_setupR_1_49:
      000074                        547 	.ds 3
                           000055   548 LcontroleNivel.main$number$1$49==.
      000077                        549 _main_number_1_49:
      000077                        550 	.ds 1
                                    551 ;--------------------------------------------------------
                                    552 ; overlayable items in internal ram 
                                    553 ;--------------------------------------------------------
                                    554 ;--------------------------------------------------------
                                    555 ; Stack segment in internal ram 
                                    556 ;--------------------------------------------------------
                                    557 	.area	SSEG
      0000B8                        558 __start__stack:
      0000B8                        559 	.ds	1
                                    560 
                                    561 ;--------------------------------------------------------
                                    562 ; indirectly addressable internal ram data
                                    563 ;--------------------------------------------------------
                                    564 	.area ISEG    (DATA)
                                    565 ;--------------------------------------------------------
                                    566 ; absolute internal ram data
                                    567 ;--------------------------------------------------------
                                    568 	.area IABS    (ABS,DATA)
                                    569 	.area IABS    (ABS,DATA)
                                    570 ;--------------------------------------------------------
                                    571 ; bit data
                                    572 ;--------------------------------------------------------
                                    573 	.area BSEG    (BIT)
                           000000   574 G$umSeg$0$0==.
      000000                        575 _umSeg::
      000000                        576 	.ds 1
                           000001   577 G$som$0$0==.
      000001                        578 _som::
      000001                        579 	.ds 1
                           000002   580 G$bip$0$0==.
      000002                        581 _bip::
      000002                        582 	.ds 1
                           000003   583 G$tip$0$0==.
      000003                        584 _tip::
      000003                        585 	.ds 1
                           000004   586 G$RxFlag$0$0==.
      000004                        587 _RxFlag::
      000004                        588 	.ds 1
                           000005   589 G$TxFlag$0$0==.
      000005                        590 _TxFlag::
      000005                        591 	.ds 1
                           000006   592 G$Txing$0$0==.
      000006                        593 _Txing::
      000006                        594 	.ds 1
                           000007   595 G$ad1On$0$0==.
      000007                        596 _ad1On::
      000007                        597 	.ds 1
                           000008   598 G$ad2On$0$0==.
      000008                        599 _ad2On::
      000008                        600 	.ds 1
                           000009   601 G$Ch01$0$0==.
      000009                        602 _Ch01::
      000009                        603 	.ds 1
                           00000A   604 G$useBuf$0$0==.
      00000A                        605 _useBuf::
      00000A                        606 	.ds 1
                           00000B   607 LcontroleNivel.wrLCD8$rs$1$8==.
      00000B                        608 _wrLCD8_PARM_1:
      00000B                        609 	.ds 1
                           00000C   610 LcontroleNivel.wrLCD8$sloc0$1$0==.
      00000C                        611 _wrLCD8_sloc0_1_0:
      00000C                        612 	.ds 1
                           00000D   613 LcontroleNivel.wrLCD4$rs$1$10==.
      00000D                        614 _wrLCD4_PARM_1:
      00000D                        615 	.ds 1
                           00000E   616 G$sensor$0$0==.
      00000E                        617 _sensor::
      00000E                        618 	.ds 1
                           00000F   619 LcontroleNivel.ajustPID$ajust$1$43==.
      00000F                        620 _ajustPID_ajust_1_43:
      00000F                        621 	.ds 1
                                    622 ;--------------------------------------------------------
                                    623 ; paged external ram data
                                    624 ;--------------------------------------------------------
                                    625 	.area PSEG    (PAG,XDATA)
                                    626 ;--------------------------------------------------------
                                    627 ; external ram data
                                    628 ;--------------------------------------------------------
                                    629 	.area XSEG    (XDATA)
                                    630 ;--------------------------------------------------------
                                    631 ; absolute external ram data
                                    632 ;--------------------------------------------------------
                                    633 	.area XABS    (ABS,XDATA)
                                    634 ;--------------------------------------------------------
                                    635 ; external initialized ram data
                                    636 ;--------------------------------------------------------
                                    637 	.area XISEG   (XDATA)
                                    638 	.area HOME    (CODE)
                                    639 	.area GSINIT0 (CODE)
                                    640 	.area GSINIT1 (CODE)
                                    641 	.area GSINIT2 (CODE)
                                    642 	.area GSINIT3 (CODE)
                                    643 	.area GSINIT4 (CODE)
                                    644 	.area GSINIT5 (CODE)
                                    645 	.area GSINIT  (CODE)
                                    646 	.area GSFINAL (CODE)
                                    647 	.area CSEG    (CODE)
                                    648 ;--------------------------------------------------------
                                    649 ; interrupt vector 
                                    650 ;--------------------------------------------------------
                                    651 	.area HOME    (CODE)
      000000                        652 __interrupt_vect:
      000000 02 00 29         [24]  653 	ljmp	__sdcc_gsinit_startup
      000003 02 00 D4         [24]  654 	ljmp	_ext_0
      000006                        655 	.ds	5
      00000B 02 00 F4         [24]  656 	ljmp	_timer_0
      00000E                        657 	.ds	5
      000013 02 04 27         [24]  658 	ljmp	_ext_1
      000016                        659 	.ds	5
      00001B 32               [24]  660 	reti
      00001C                        661 	.ds	7
      000023 02 02 AA         [24]  662 	ljmp	_serial
                                    663 ;--------------------------------------------------------
                                    664 ; global & static initialisations
                                    665 ;--------------------------------------------------------
                                    666 	.area HOME    (CODE)
                                    667 	.area GSINIT  (CODE)
                                    668 	.area GSFINAL (CODE)
                                    669 	.area GSINIT  (CODE)
                                    670 	.globl __sdcc_gsinit_startup
                                    671 	.globl __sdcc_program_startup
                                    672 	.globl __start__stack
                                    673 	.globl __mcs51_genXINIT
                                    674 	.globl __mcs51_genXRAMCLEAR
                                    675 	.globl __mcs51_genRAMCLEAR
                           000000   676 	C$uRTOS_2.21.h$38$1$49 ==.
                                    677 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:38: unsigned char S1=0;             //R1 estado de S1
      000082 75 22 00         [24]  678 	mov	_S1,#0x00
                           000003   679 	C$uRTOS_2.21.h$39$1$49 ==.
                                    680 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:39: unsigned char S2=0;             //R2 estado de S2
      000085 75 23 00         [24]  681 	mov	_S2,#0x00
                           000006   682 	C$uRTOS_2.21.h$40$1$49 ==.
                                    683 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:40: unsigned char cont=0;           //R3 N x 50µs
      000088 75 24 00         [24]  684 	mov	_cont,#0x00
                           000009   685 	C$uRTOS_2.21.h$41$1$49 ==.
                                    686 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:41: unsigned char disp1=0xFF;       //R4 7seg MSD
      00008B 75 25 FF         [24]  687 	mov	_disp1,#0xff
                           00000C   688 	C$uRTOS_2.21.h$42$1$49 ==.
                                    689 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:42: unsigned char disp2=0xFF;       //R5 7seg LSD
      00008E 75 26 FF         [24]  690 	mov	_disp2,#0xff
                           00000F   691 	C$uRTOS_2.21.h$43$1$49 ==.
                                    692 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:43: unsigned char cnt100=100;       //R6 100x10ms=1s
      000091 75 27 64         [24]  693 	mov	_cnt100,#0x64
                           000012   694 	C$uRTOS_2.21.h$44$1$49 ==.
                                    695 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:44: unsigned char cnt200=200;       //R7 200 int's
      000094 75 28 C8         [24]  696 	mov	_cnt200,#0xc8
                           000015   697 	C$uRTOS_2.21.h$46$1$49 ==.
                                    698 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:46: unsigned char freq=8;           //R9 fBip=1/(2*50*freq)
      000097 75 2A 08         [24]  699 	mov	_freq,#0x08
                           000018   700 	C$uRTOS_2.21.h$49$1$49 ==.
                                    701 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:49: unsigned char rRxB=0;           //tag leitura RxB
      00009A 75 2D 00         [24]  702 	mov	_rRxB,#0x00
                           00001B   703 	C$uRTOS_2.21.h$50$1$49 ==.
                                    704 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:50: unsigned char wRxB=0;           //tag escrita RxB
      00009D 75 2E 00         [24]  705 	mov	_wRxB,#0x00
                           00001E   706 	C$uRTOS_2.21.h$51$1$49 ==.
                                    707 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:51: unsigned char rTxB=0;           //tag leitura TxB
      0000A0 75 2F 00         [24]  708 	mov	_rTxB,#0x00
                           000021   709 	C$uRTOS_2.21.h$52$1$49 ==.
                                    710 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:52: unsigned char wTxB=0;           //tag escrita TxB
      0000A3 75 30 00         [24]  711 	mov	_wTxB,#0x00
                           000024   712 	C$controleNivel.c$10$1$49 ==.
                                    713 ;	controleNivel.c:10: unsigned int Echo=0x00;
      0000A6 E4               [12]  714 	clr	a
      0000A7 F5 60            [12]  715 	mov	_Echo,a
      0000A9 F5 61            [12]  716 	mov	(_Echo + 1),a
                           000029   717 	C$controleNivel.c$11$1$49 ==.
                                    718 ;	controleNivel.c:11: unsigned char TrigCont=100;
      0000AB 75 62 64         [24]  719 	mov	_TrigCont,#0x64
                           00002C   720 	C$controleNivel.c$12$1$49 ==.
                                    721 ;	controleNivel.c:12: unsigned char pid[3]={0,0,0};
                                    722 ;	1-genFromRTrack replaced	mov	_pid,#0x00
      0000AE F5 63            [12]  723 	mov	_pid,a
                                    724 ;	1-genFromRTrack replaced	mov	(_pid + 0x0001),#0x00
      0000B0 F5 64            [12]  725 	mov	(_pid + 0x0001),a
                                    726 ;	1-genFromRTrack replaced	mov	(_pid + 0x0002),#0x00
      0000B2 F5 65            [12]  727 	mov	(_pid + 0x0002),a
                           000032   728 	C$controleNivel.c$13$1$49 ==.
                                    729 ;	controleNivel.c:13: unsigned char pwm=0;
                                    730 ;	1-genFromRTrack replaced	mov	_pwm,#0x00
      0000B4 F5 66            [12]  731 	mov	_pwm,a
                           000034   732 	C$controleNivel.c$14$1$49 ==.
                                    733 ;	controleNivel.c:14: unsigned char malha = 1;
      0000B6 75 67 01         [24]  734 	mov	_malha,#0x01
                           000037   735 	C$uRTOS_2.21.h$27$1$49 ==.
                                    736 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:27: volatile __bit umSeg=0;         //1seg completo
                                    737 ;	assignBit
      0000B9 C2 00            [12]  738 	clr	_umSeg
                           000039   739 	C$uRTOS_2.21.h$28$1$49 ==.
                                    740 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:28: __bit som=0;                    //som ligado
                                    741 ;	assignBit
      0000BB C2 01            [12]  742 	clr	_som
                           00003B   743 	C$uRTOS_2.21.h$29$1$49 ==.
                                    744 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:29: __bit bip=0;                    //bip ligado
                                    745 ;	assignBit
      0000BD C2 02            [12]  746 	clr	_bip
                           00003D   747 	C$uRTOS_2.21.h$30$1$49 ==.
                                    748 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:30: __bit tip=0;                    //trava do bip1
                                    749 ;	assignBit
      0000BF C2 03            [12]  750 	clr	_tip
                           00003F   751 	C$uRTOS_2.21.h$31$1$49 ==.
                                    752 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:31: __bit RxFlag=0;                 //rxBuff vazio
                                    753 ;	assignBit
      0000C1 C2 04            [12]  754 	clr	_RxFlag
                           000041   755 	C$uRTOS_2.21.h$32$1$49 ==.
                                    756 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:32: __bit TxFlag=1;                 //txBuff vazio
                                    757 ;	assignBit
      0000C3 D2 05            [12]  758 	setb	_TxFlag
                           000043   759 	C$uRTOS_2.21.h$33$1$49 ==.
                                    760 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:33: __bit Txing=0;                  //enviando do buffer
                                    761 ;	assignBit
      0000C5 C2 06            [12]  762 	clr	_Txing
                           000045   763 	C$uRTOS_2.21.h$34$1$49 ==.
                                    764 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:34: __bit ad1On=0;                  //ADC1 habilitado
                                    765 ;	assignBit
      0000C7 C2 07            [12]  766 	clr	_ad1On
                           000047   767 	C$uRTOS_2.21.h$35$1$49 ==.
                                    768 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:35: __bit ad2On=0;                  //ADC2 habilitado
                                    769 ;	assignBit
      0000C9 C2 08            [12]  770 	clr	_ad2On
                           000049   771 	C$uRTOS_2.21.h$37$1$49 ==.
                                    772 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:37: __bit useBuf=0;                 //=1 usa RxB
                                    773 ;	assignBit
      0000CB C2 0A            [12]  774 	clr	_useBuf
                           00004B   775 	C$controleNivel.c$15$1$49 ==.
                                    776 ;	controleNivel.c:15: __bit sensor=1;
                                    777 ;	assignBit
      0000CD D2 0E            [12]  778 	setb	_sensor
                           00004D   779 	C$uRTOS_2.21.h$20$1$49 ==.
                                    780 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:20: volatile __sbit __at (0xB7) lcdCS=0;//P3.7 CS   LCD
                                    781 ;	assignBit
      0000CF C2 B7            [12]  782 	clr	_lcdCS
                                    783 	.area GSFINAL (CODE)
      0000D1 02 00 26         [24]  784 	ljmp	__sdcc_program_startup
                                    785 ;--------------------------------------------------------
                                    786 ; Home
                                    787 ;--------------------------------------------------------
                                    788 	.area HOME    (CODE)
                                    789 	.area HOME    (CODE)
      000026                        790 __sdcc_program_startup:
      000026 02 05 05         [24]  791 	ljmp	_main
                                    792 ;	return from main will return to caller
                                    793 ;--------------------------------------------------------
                                    794 ; code
                                    795 ;--------------------------------------------------------
                                    796 	.area CSEG    (CODE)
                                    797 ;------------------------------------------------------------
                                    798 ;Allocation info for local variables in function 'ext_0'
                                    799 ;------------------------------------------------------------
                           000000   800 	G$ext_0$0$0 ==.
                           000000   801 	C$uRTOS_2.21.h$76$0$0 ==.
                                    802 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:76: void ext_0 (void) __interrupt(0){
                                    803 ;	-----------------------------------------
                                    804 ;	 function ext_0
                                    805 ;	-----------------------------------------
      0000D4                        806 _ext_0:
                           000007   807 	ar7 = 0x07
                           000006   808 	ar6 = 0x06
                           000005   809 	ar5 = 0x05
                           000004   810 	ar4 = 0x04
                           000003   811 	ar3 = 0x03
                           000002   812 	ar2 = 0x02
                           000001   813 	ar1 = 0x01
                           000000   814 	ar0 = 0x00
      0000D4 C0 E0            [24]  815 	push	acc
      0000D6 C0 D0            [24]  816 	push	psw
                           000004   817 	C$uRTOS_2.21.h$77$1$2 ==.
                                    818 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:77: EX0=0;
                                    819 ;	assignBit
      0000D8 C2 A8            [12]  820 	clr	_EX0
                           000006   821 	C$uRTOS_2.21.h$78$1$2 ==.
                                    822 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:78: if(!S1D1){
      0000DA 20 90 0A         [24]  823 	jb	_S1D1,00106$
                           000009   824 	C$uRTOS_2.21.h$79$2$3 ==.
                                    825 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:79: if (S1<2) S1++;
      0000DD 74 FE            [12]  826 	mov	a,#0x100 - 0x02
      0000DF 25 22            [12]  827 	add	a,_S1
      0000E1 40 0C            [24]  828 	jc	00108$
      0000E3 05 22            [12]  829 	inc	_S1
      0000E5 80 08            [24]  830 	sjmp	00108$
      0000E7                        831 00106$:
                           000013   832 	C$uRTOS_2.21.h$82$2$4 ==.
                                    833 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:82: if (S2<2) S2++;
      0000E7 74 FE            [12]  834 	mov	a,#0x100 - 0x02
      0000E9 25 23            [12]  835 	add	a,_S2
      0000EB 40 02            [24]  836 	jc	00108$
      0000ED 05 23            [12]  837 	inc	_S2
      0000EF                        838 00108$:
      0000EF D0 D0            [24]  839 	pop	psw
      0000F1 D0 E0            [24]  840 	pop	acc
                           00001F   841 	C$uRTOS_2.21.h$84$1$2 ==.
                           00001F   842 	XG$ext_0$0$0 ==.
      0000F3 32               [24]  843 	reti
                                    844 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    845 ;	eliminated unneeded push/pop dpl
                                    846 ;	eliminated unneeded push/pop dph
                                    847 ;	eliminated unneeded push/pop b
                                    848 ;------------------------------------------------------------
                                    849 ;Allocation info for local variables in function 'timer_0'
                                    850 ;------------------------------------------------------------
                           000020   851 	G$timer_0$0$0 ==.
                           000020   852 	C$uRTOS_2.21.h$89$1$2 ==.
                                    853 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:89: void timer_0(void) __interrupt(1) __naked{
                                    854 ;	-----------------------------------------
                                    855 ;	 function timer_0
                                    856 ;	-----------------------------------------
      0000F4                        857 _timer_0:
                                    858 ;	naked function: no prologue.
                           000020   859 	C$uRTOS_2.21.h$129$1$6 ==.
                                    860 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:129: __endasm;
      0000F4 C0 E0            [24]  861 	push	acc ;salva contexto
      0000F6 C0 D0            [24]  862 	push	PSW ;
      0000F8 D5 24 0B         [24]  863 	djnz	_cont, Cala ;gerar audio?
      0000FB 20 01 03         [24]  864 	jb	_som, Bipa ;tem som?
      0000FE 30 02 05         [24]  865 	jnb	_bip, Cala ;tem bip?
      000101                        866 	Bipa:
      000101 85 2A 24         [24]  867 	mov _cont, _freq ;tempo ½ ciclo
      000104 B2 B1            [12]  868 	cpl	_TxBip ;½ ciclo som
      000106                        869 	Cala:
      000106 D5 28 3F         [24]  870 	djnz _cnt200, RT1 ;10mS completo?
      000109 75 28 C8         [24]  871 	mov	_cnt200, #200 ;200*50us
      00010C D5 27 05         [24]  872 	djnz	_cnt100, Bip1 ;1 seg?
      00010F 75 27 64         [24]  873 	mov	_cnt100, #100 ;recarga 100
      000112 D2 00            [12]  874 	setb	_umSeg ;sim, cmpl 1s
      000114                        875 	Bip1:
      000114 30 02 07         [24]  876 	jnb _bip, Mux ;se bip ligado
      000117 B2 03            [12]  877 	cpl	_tip ;|gera de 10ms|
      000119 20 03 02         [24]  878 	jb	_tip, Mux ;|a 19.95ms de|
      00011C C2 02            [12]  879 	clr	_bip ;|2*freq*50us.|
      00011E                        880 	Mux:
      00011E 20 90 11         [24]  881 	jb _S1D1, D2 ;disp1 ligado?
      000121                        882 	D1:
      000121 74 02            [12]  883 	mov a, #0x02 ;2=filtrada
      000123 B5 22 06         [24]  884 	cjne	a, _S1, D1a ;filtrada?
      000126 30 B2 03         [24]  885 	jnb	_SwInt, D1a ;liberada?
      000129 75 22 03         [24]  886 	mov	_S1, #0x03 ;sim,sobe flag
      00012C                        887 	D1a:
      00012C D2 90            [12]  888 	setb _S1D1 ;S1 deshab
      00012E C2 91            [12]  889 	clr	_S2D2 ;S2 hab
      000130 80 0F            [24]  890 	sjmp	RT2 ;recarga/sai
      000132                        891 	D2:
      000132 74 02            [12]  892 	mov a, #0x02
      000134 B5 23 06         [24]  893 	cjne	a, _S2, D2a ;filtrada?
      000137 30 B2 03         [24]  894 	jnb	_SwInt, D2a ;liberada?
      00013A 75 23 03         [24]  895 	mov	_S2, #0x03 ;sim,sobe flag
      00013D                        896 	D2a:
      00013D D2 91            [12]  897 	setb _S2D2 ;S2 deshab
      00013F C2 90            [12]  898 	clr	_S1D1 ;S1 hab
                                    899 ;
      000141                        900 	RT2:
      000141 D2 A8            [12]  901 	setb _EX0 ;hab. chaves
      000143 12 03 FD         [24]  902 	lcall	_RTproc_2 ;a cada 10ms
      000146 80 03            [24]  903 	sjmp	SAI
      000148                        904 	RT1:
      000148 12 03 F5         [24]  905 	lcall _RTproc_1 ;a cada 50µs
      00014B                        906 	SAI:
      00014B D0 D0            [24]  907 	pop PSW ;recup. contexto
      00014D D0 E0            [24]  908 	pop	acc ;
      00014F 32               [24]  909 	reti
                                    910 ;	naked function: no epilogue.
                           00007C   911 	C$uRTOS_2.21.h$130$1$6 ==.
                           00007C   912 	XG$timer_0$0$0 ==.
                                    913 ;------------------------------------------------------------
                                    914 ;Allocation info for local variables in function 'delay50'
                                    915 ;------------------------------------------------------------
                           00007C   916 	G$delay50$0$0 ==.
                           00007C   917 	C$uRTOS_2.21.h$134$1$6 ==.
                                    918 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:134: void delay50() __naked{
                                    919 ;	-----------------------------------------
                                    920 ;	 function delay50
                                    921 ;	-----------------------------------------
      000150                        922 _delay50:
                                    923 ;	naked function: no prologue.
                           00007C   924 	C$uRTOS_2.21.h$148$1$7 ==.
                                    925 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:148: __endasm;
      000150 C0 E0            [24]  926 	push	acc ;salva contexto
      000152 C0 D0            [24]  927 	push	PSW ;
      000154 E5 28            [12]  928 	mov	a, _cnt200 ;tempo atual
      000156 C3               [12]  929 	clr	c
      000157 95 29            [12]  930 	subb	a, _x50us ;prox tempo
      000159 50 02            [24]  931 	jnc	Po ;negativo?
      00015B 24 C8            [12]  932 	add	a, #200 ;soma 200
      00015D                        933 	Po:
      00015D 04               [12]  934 	inc a ;nunca zero
      00015E                        935 	Ps:
      00015E B5 28 FD         [24]  936 	cjne a, _cnt200, Ps ;espera chegar
      000161 D0 D0            [24]  937 	pop	PSW ;recup. contexto
      000163 D0 E0            [24]  938 	pop	acc ;
      000165 22               [24]  939 	ret
                                    940 ;	naked function: no epilogue.
                           000092   941 	C$uRTOS_2.21.h$149$1$7 ==.
                           000092   942 	XG$delay50$0$0 ==.
                                    943 ;------------------------------------------------------------
                                    944 ;Allocation info for local variables in function 'wrLCD8'
                                    945 ;------------------------------------------------------------
                                    946 ;val                       Allocated to registers r7 
                                    947 ;------------------------------------------------------------
                           000092   948 	G$wrLCD8$0$0 ==.
                           000092   949 	C$uRTOS_2.21.h$153$1$7 ==.
                                    950 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:153: void wrLCD8(__bit rs, char val){//comando p/ LCD
                                    951 ;	-----------------------------------------
                                    952 ;	 function wrLCD8
                                    953 ;	-----------------------------------------
      000166                        954 _wrLCD8:
      000166 AF 82            [24]  955 	mov	r7,dpl
                           000094   956 	C$uRTOS_2.21.h$154$1$9 ==.
                                    957 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:154: DC=rs; RW=0;                //1dado 0cmd, escrever
                                    958 ;	assignBit
      000168 A2 0B            [12]  959 	mov	c,_wrLCD8_PARM_1
      00016A 92 B4            [24]  960 	mov	_DC,c
                                    961 ;	assignBit
      00016C C2 B5            [12]  962 	clr	_RW
                           00009A   963 	C$uRTOS_2.21.h$155$1$9 ==.
                                    964 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:155: P1_4=(val&0x10); P1_5=(val&0x20);
      00016E EF               [12]  965 	mov	a,r7
      00016F A2 E4            [12]  966 	mov	c,acc[4]
                                    967 ;	assignBit
      000171 92 0C            [24]  968 	mov  _wrLCD8_sloc0_1_0,c
      000173 92 94            [24]  969 	mov	_P1_4,c
      000175 EF               [12]  970 	mov	a,r7
      000176 A2 E5            [12]  971 	mov	c,acc[5]
                                    972 ;	assignBit
      000178 92 0C            [24]  973 	mov  _wrLCD8_sloc0_1_0,c
      00017A 92 95            [24]  974 	mov	_P1_5,c
                           0000A8   975 	C$uRTOS_2.21.h$156$1$9 ==.
                                    976 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:156: P1_6=(val&0x40); P1_7=(val&0x80);
      00017C EF               [12]  977 	mov	a,r7
      00017D A2 E6            [12]  978 	mov	c,acc[6]
                                    979 ;	assignBit
      00017F 92 0C            [24]  980 	mov  _wrLCD8_sloc0_1_0,c
      000181 92 96            [24]  981 	mov	_P1_6,c
      000183 EF               [12]  982 	mov	a,r7
      000184 33               [12]  983 	rlc	a
                                    984 ;	assignBit
      000185 92 0C            [24]  985 	mov  _wrLCD8_sloc0_1_0,c
      000187 92 97            [24]  986 	mov	_P1_7,c
                           0000B5   987 	C$uRTOS_2.21.h$157$1$9 ==.
                                    988 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:157: x50us=2; delay50();         //Tas=100us
      000189 75 29 02         [24]  989 	mov	_x50us,#0x02
      00018C 12 01 50         [24]  990 	lcall	_delay50
                           0000BB   991 	C$uRTOS_2.21.h$158$1$9 ==.
                                    992 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:158: lcdCS=1;                    //para gravar
                                    993 ;	assignBit
      00018F D2 B7            [12]  994 	setb	_lcdCS
                           0000BD   995 	C$uRTOS_2.21.h$159$1$9 ==.
                                    996 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:159: x50us=8; delay50();         //PWeh=400us
      000191 75 29 08         [24]  997 	mov	_x50us,#0x08
      000194 12 01 50         [24]  998 	lcall	_delay50
                           0000C3   999 	C$uRTOS_2.21.h$160$1$9 ==.
                                   1000 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:160: lcdCS=0;                    //grava
                                   1001 ;	assignBit
      000197 C2 B7            [12] 1002 	clr	_lcdCS
                           0000C5  1003 	C$uRTOS_2.21.h$161$1$9 ==.
                                   1004 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:161: x50us=4; delay50();         //Tah=200us
      000199 75 29 04         [24] 1005 	mov	_x50us,#0x04
      00019C 12 01 50         [24] 1006 	lcall	_delay50
                           0000CB  1007 	C$uRTOS_2.21.h$162$1$9 ==.
                                   1008 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:162: RW=1; DC=1;                 //linhas ADC em 1
                                   1009 ;	assignBit
      00019F D2 B5            [12] 1010 	setb	_RW
                                   1011 ;	assignBit
      0001A1 D2 B4            [12] 1012 	setb	_DC
                           0000CF  1013 	C$uRTOS_2.21.h$163$1$9 ==.
                           0000CF  1014 	XG$wrLCD8$0$0 ==.
      0001A3 22               [24] 1015 	ret
                                   1016 ;------------------------------------------------------------
                                   1017 ;Allocation info for local variables in function 'wrLCD4'
                                   1018 ;------------------------------------------------------------
                                   1019 ;val                       Allocated to registers r7 
                                   1020 ;temp                      Allocated to registers r6 
                                   1021 ;------------------------------------------------------------
                           0000D0  1022 	G$wrLCD4$0$0 ==.
                           0000D0  1023 	C$uRTOS_2.21.h$167$1$9 ==.
                                   1024 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:167: void wrLCD4(__bit rs, char val){//comando p/ LCD
                                   1025 ;	-----------------------------------------
                                   1026 ;	 function wrLCD4
                                   1027 ;	-----------------------------------------
      0001A4                       1028 _wrLCD4:
      0001A4 AF 82            [24] 1029 	mov	r7,dpl
                           0000D2  1030 	C$uRTOS_2.21.h$169$1$11 ==.
                                   1031 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:169: temp=(val&0xF0);
      0001A6 74 F0            [12] 1032 	mov	a,#0xf0
      0001A8 5F               [12] 1033 	anl	a,r7
      0001A9 FE               [12] 1034 	mov	r6,a
                           0000D6  1035 	C$uRTOS_2.21.h$170$1$11 ==.
                                   1036 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:170: wrLCD8(rs, temp);           //repassa p wrLCD8
                                   1037 ;	assignBit
      0001AA A2 0D            [12] 1038 	mov	c,_wrLCD4_PARM_1
      0001AC 92 0B            [24] 1039 	mov	_wrLCD8_PARM_1,c
      0001AE 8E 82            [24] 1040 	mov	dpl,r6
      0001B0 C0 07            [24] 1041 	push	ar7
      0001B2 12 01 66         [24] 1042 	lcall	_wrLCD8
      0001B5 D0 07            [24] 1043 	pop	ar7
                           0000E3  1044 	C$uRTOS_2.21.h$171$1$11 ==.
                                   1045 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:171: temp=((val<<4)&0xF0);       //pega low nible
      0001B7 EF               [12] 1046 	mov	a,r7
      0001B8 C4               [12] 1047 	swap	a
      0001B9 54 F0            [12] 1048 	anl	a,#0xf0
      0001BB FF               [12] 1049 	mov	r7,a
      0001BC 74 F0            [12] 1050 	mov	a,#0xf0
      0001BE 5F               [12] 1051 	anl	a,r7
      0001BF FE               [12] 1052 	mov	r6,a
                           0000EC  1053 	C$uRTOS_2.21.h$172$1$11 ==.
                                   1054 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:172: wrLCD8(rs, temp);           //repassa p wrLCD8
                                   1055 ;	assignBit
      0001C0 A2 0D            [12] 1056 	mov	c,_wrLCD4_PARM_1
      0001C2 92 0B            [24] 1057 	mov	_wrLCD8_PARM_1,c
      0001C4 8E 82            [24] 1058 	mov	dpl,r6
      0001C6 12 01 66         [24] 1059 	lcall	_wrLCD8
                           0000F5  1060 	C$uRTOS_2.21.h$173$1$11 ==.
                           0000F5  1061 	XG$wrLCD4$0$0 ==.
      0001C9 22               [24] 1062 	ret
                                   1063 ;------------------------------------------------------------
                                   1064 ;Allocation info for local variables in function 'char2LCD'
                                   1065 ;------------------------------------------------------------
                                   1066 ;val                       Allocated with name '_char2LCD_PARM_2'
                                   1067 ;dot                       Allocated with name '_char2LCD_PARM_3'
                                   1068 ;ddRam                     Allocated to registers r7 
                                   1069 ;i                         Allocated to registers r7 
                                   1070 ;------------------------------------------------------------
                           0000F6  1071 	G$char2LCD$0$0 ==.
                           0000F6  1072 	C$uRTOS_2.21.h$178$1$11 ==.
                                   1073 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:178: void char2LCD(char ddRam, unsigned char val, char dot){
                                   1074 ;	-----------------------------------------
                                   1075 ;	 function char2LCD
                                   1076 ;	-----------------------------------------
      0001CA                       1077 _char2LCD:
      0001CA AF 82            [24] 1078 	mov	r7,dpl
                           0000F8  1079 	C$uRTOS_2.21.h$180$1$13 ==.
                                   1080 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:180: wrLCD4(comand,ddRam);           //posição número
                                   1081 ;	assignBit
      0001CC C2 0D            [12] 1082 	clr	_wrLCD4_PARM_1
      0001CE 8F 82            [24] 1083 	mov	dpl,r7
      0001D0 12 01 A4         [24] 1084 	lcall	_wrLCD4
                           0000FF  1085 	C$uRTOS_2.21.h$181$1$13 ==.
                                   1086 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:181: algs[0]=0x30+(val/100);
      0001D3 75 F0 64         [24] 1087 	mov	b,#0x64
      0001D6 E5 56            [12] 1088 	mov	a,_char2LCD_PARM_2
      0001D8 84               [48] 1089 	div	ab
      0001D9 24 30            [12] 1090 	add	a,#0x30
      0001DB F5 51            [12] 1091 	mov	_algs,a
                           000109  1092 	C$uRTOS_2.21.h$182$1$13 ==.
                                   1093 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:182: val=val%100;
      0001DD 75 F0 64         [24] 1094 	mov	b,#0x64
      0001E0 E5 56            [12] 1095 	mov	a,_char2LCD_PARM_2
      0001E2 84               [48] 1096 	div	ab
      0001E3 85 F0 56         [24] 1097 	mov	_char2LCD_PARM_2,b
                           000112  1098 	C$uRTOS_2.21.h$183$1$13 ==.
                                   1099 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:183: algs[1]=0x30+(val/10);
      0001E6 75 F0 0A         [24] 1100 	mov	b,#0x0a
      0001E9 E5 56            [12] 1101 	mov	a,_char2LCD_PARM_2
      0001EB 84               [48] 1102 	div	ab
      0001EC 24 30            [12] 1103 	add	a,#0x30
      0001EE F5 52            [12] 1104 	mov	(_algs + 0x0001),a
                           00011C  1105 	C$uRTOS_2.21.h$184$1$13 ==.
                                   1106 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:184: algs[2]=0x30+(val%10);
      0001F0 75 F0 0A         [24] 1107 	mov	b,#0x0a
      0001F3 E5 56            [12] 1108 	mov	a,_char2LCD_PARM_2
      0001F5 84               [48] 1109 	div	ab
      0001F6 E5 F0            [12] 1110 	mov	a,b
      0001F8 24 30            [12] 1111 	add	a,#0x30
      0001FA F5 53            [12] 1112 	mov	(_algs + 0x0002),a
                           000128  1113 	C$uRTOS_2.21.h$185$2$14 ==.
                                   1114 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:185: for(i=0;i<3;i++){
      0001FC 7F 00            [12] 1115 	mov	r7,#0x00
      0001FE                       1116 00104$:
                           00012A  1117 	C$uRTOS_2.21.h$186$3$15 ==.
                                   1118 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:186: if(i==dot)wrLCD4(letra, 46);
      0001FE EF               [12] 1119 	mov	a,r7
      0001FF B5 57 0C         [24] 1120 	cjne	a,_char2LCD_PARM_3,00102$
                                   1121 ;	assignBit
      000202 D2 0D            [12] 1122 	setb	_wrLCD4_PARM_1
      000204 75 82 2E         [24] 1123 	mov	dpl,#0x2e
      000207 C0 07            [24] 1124 	push	ar7
      000209 12 01 A4         [24] 1125 	lcall	_wrLCD4
      00020C D0 07            [24] 1126 	pop	ar7
      00020E                       1127 00102$:
                           00013A  1128 	C$uRTOS_2.21.h$187$3$15 ==.
                                   1129 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:187: wrLCD4(letra, algs[i]);     //coloca número
      00020E EF               [12] 1130 	mov	a,r7
      00020F 24 51            [12] 1131 	add	a,#_algs
      000211 F9               [12] 1132 	mov	r1,a
      000212 87 82            [24] 1133 	mov	dpl,@r1
                                   1134 ;	assignBit
      000214 D2 0D            [12] 1135 	setb	_wrLCD4_PARM_1
      000216 C0 07            [24] 1136 	push	ar7
      000218 12 01 A4         [24] 1137 	lcall	_wrLCD4
      00021B D0 07            [24] 1138 	pop	ar7
                           000149  1139 	C$uRTOS_2.21.h$185$2$14 ==.
                                   1140 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:185: for(i=0;i<3;i++){
      00021D 0F               [12] 1141 	inc	r7
      00021E BF 03 00         [24] 1142 	cjne	r7,#0x03,00116$
      000221                       1143 00116$:
      000221 40 DB            [24] 1144 	jc	00104$
                           00014F  1145 	C$uRTOS_2.21.h$189$2$14 ==.
                           00014F  1146 	XG$char2LCD$0$0 ==.
      000223 22               [24] 1147 	ret
                                   1148 ;------------------------------------------------------------
                                   1149 ;Allocation info for local variables in function 'iniLCD4'
                                   1150 ;------------------------------------------------------------
                                   1151 ;i                         Allocated to registers r7 
                                   1152 ;cmD                       Allocated to registers r6 
                                   1153 ;BF                        Allocated to registers 
                                   1154 ;------------------------------------------------------------
                           000150  1155 	G$iniLCD4$0$0 ==.
                           000150  1156 	C$uRTOS_2.21.h$193$2$14 ==.
                                   1157 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:193: void iniLCD4(){                 //inicializa LCD
                                   1158 ;	-----------------------------------------
                                   1159 ;	 function iniLCD4
                                   1160 ;	-----------------------------------------
      000224                       1161 _iniLCD4:
                           000150  1162 	C$uRTOS_2.21.h$197$1$16 ==.
                                   1163 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:197: lcdCS=0;                    //seleciona LCD
                                   1164 ;	assignBit
      000224 C2 B7            [12] 1165 	clr	_lcdCS
                           000152  1166 	C$uRTOS_2.21.h$198$1$16 ==.
                                   1167 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:198: umSeg=0; cnt100=100;        //reinicia umSeg
                                   1168 ;	assignBit
      000226 C2 00            [12] 1169 	clr	_umSeg
      000228 75 27 64         [24] 1170 	mov	_cnt100,#0x64
                           000157  1171 	C$uRTOS_2.21.h$199$1$16 ==.
                                   1172 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:199: while(!umSeg);              //para acomodar LCD
      00022B                       1173 00101$:
                           000157  1174 	C$uRTOS_2.21.h$200$1$16 ==.
                                   1175 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:200: umSeg=0;
                                   1176 ;	assignBit
      00022B 10 00 02         [24] 1177 	jbc	_umSeg,00163$
      00022E 80 FB            [24] 1178 	sjmp	00101$
      000230                       1179 00163$:
                           00015C  1180 	C$uRTOS_2.21.h$201$1$16 ==.
                                   1181 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:201: wrLCD8(comand, 0x30);       //inicia em 8 bits
                                   1182 ;	assignBit
      000230 C2 0B            [12] 1183 	clr	_wrLCD8_PARM_1
      000232 75 82 30         [24] 1184 	mov	dpl,#0x30
      000235 12 01 66         [24] 1185 	lcall	_wrLCD8
                           000164  1186 	C$uRTOS_2.21.h$202$1$16 ==.
                                   1187 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:202: while(S1D1); while(S2D2);	//garante 10ms
      000238                       1188 00104$:
      000238 20 90 FD         [24] 1189 	jb	_S1D1,00104$
      00023B                       1190 00107$:
      00023B 20 91 FD         [24] 1191 	jb	_S2D2,00107$
                           00016A  1192 	C$uRTOS_2.21.h$203$1$16 ==.
                                   1193 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:203: wrLCD8(comand, 0x30);       //inicia em 8 bits
                                   1194 ;	assignBit
      00023E C2 0B            [12] 1195 	clr	_wrLCD8_PARM_1
      000240 75 82 30         [24] 1196 	mov	dpl,#0x30
      000243 12 01 66         [24] 1197 	lcall	_wrLCD8
                           000172  1198 	C$uRTOS_2.21.h$204$1$16 ==.
                                   1199 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:204: while(S1D1); while(S2D2);	//garante 10ms
      000246                       1200 00110$:
      000246 20 90 FD         [24] 1201 	jb	_S1D1,00110$
      000249                       1202 00113$:
      000249 20 91 FD         [24] 1203 	jb	_S2D2,00113$
                           000178  1204 	C$uRTOS_2.21.h$205$1$16 ==.
                                   1205 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:205: wrLCD8(comand, 0x30);       //inicia em 8 bits
                                   1206 ;	assignBit
      00024C C2 0B            [12] 1207 	clr	_wrLCD8_PARM_1
      00024E 75 82 30         [24] 1208 	mov	dpl,#0x30
      000251 12 01 66         [24] 1209 	lcall	_wrLCD8
                           000180  1210 	C$uRTOS_2.21.h$206$1$16 ==.
                                   1211 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:206: x50us=4; delay50();         //delay 200us
      000254 75 29 04         [24] 1212 	mov	_x50us,#0x04
      000257 12 01 50         [24] 1213 	lcall	_delay50
                           000186  1214 	C$uRTOS_2.21.h$207$1$16 ==.
                                   1215 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:207: wrLCD8(comand, 0x20);       //inicia em 8 bits
                                   1216 ;	assignBit
      00025A C2 0B            [12] 1217 	clr	_wrLCD8_PARM_1
      00025C 75 82 20         [24] 1218 	mov	dpl,#0x20
      00025F 12 01 66         [24] 1219 	lcall	_wrLCD8
                           00018E  1220 	C$uRTOS_2.21.h$208$1$16 ==.
                                   1221 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:208: x50us=4; delay50();         //delay 200us
      000262 75 29 04         [24] 1222 	mov	_x50us,#0x04
      000265 12 01 50         [24] 1223 	lcall	_delay50
                           000194  1224 	C$uRTOS_2.21.h$209$2$17 ==.
                                   1225 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:209: for(i=0;i<4;i++){           //cmd's 0 a 8'
      000268 7F 00            [12] 1226 	mov	r7,#0x00
      00026A                       1227 00123$:
                           000196  1228 	C$uRTOS_2.21.h$210$3$18 ==.
                                   1229 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:210: cmD=setLCD4[i];         // seleciona comando
      00026A EF               [12] 1230 	mov	a,r7
      00026B 90 09 6C         [24] 1231 	mov	dptr,#_setLCD4
      00026E 93               [24] 1232 	movc	a,@a+dptr
      00026F FE               [12] 1233 	mov	r6,a
                           00019C  1234 	C$uRTOS_2.21.h$211$3$18 ==.
                                   1235 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:211: wrLCD4(comand, cmD);
                                   1236 ;	assignBit
      000270 C2 0D            [12] 1237 	clr	_wrLCD4_PARM_1
      000272 8E 82            [24] 1238 	mov	dpl,r6
      000274 C0 07            [24] 1239 	push	ar7
      000276 12 01 A4         [24] 1240 	lcall	_wrLCD4
      000279 D0 07            [24] 1241 	pop	ar7
                           0001A7  1242 	C$uRTOS_2.21.h$212$3$18 ==.
                                   1243 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:212: while(S1D1);
      00027B                       1244 00116$:
      00027B 20 90 FD         [24] 1245 	jb	_S1D1,00116$
                           0001AA  1246 	C$uRTOS_2.21.h$213$3$18 ==.
                                   1247 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:213: while(S2D2);            //garante 10ms
      00027E                       1248 00119$:
      00027E 20 91 FD         [24] 1249 	jb	_S2D2,00119$
                           0001AD  1250 	C$uRTOS_2.21.h$209$2$17 ==.
                                   1251 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:209: for(i=0;i<4;i++){           //cmd's 0 a 8'
      000281 0F               [12] 1252 	inc	r7
      000282 BF 04 00         [24] 1253 	cjne	r7,#0x04,00170$
      000285                       1254 00170$:
      000285 40 E3            [24] 1255 	jc	00123$
                           0001B3  1256 	C$uRTOS_2.21.h$215$2$17 ==.
                           0001B3  1257 	XG$iniLCD4$0$0 ==.
      000287 22               [24] 1258 	ret
                                   1259 ;------------------------------------------------------------
                                   1260 ;Allocation info for local variables in function 'inic'
                                   1261 ;------------------------------------------------------------
                           0001B4  1262 	G$inic$0$0 ==.
                           0001B4  1263 	C$uRTOS_2.21.h$219$2$17 ==.
                                   1264 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:219: void inic(void){
                                   1265 ;	-----------------------------------------
                                   1266 ;	 function inic
                                   1267 ;	-----------------------------------------
      000288                       1268 _inic:
                           0001B4  1269 	C$uRTOS_2.21.h$220$1$20 ==.
                                   1270 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:220: PT0=1;                  //prioridade TC0
                                   1271 ;	assignBit
      000288 D2 B9            [12] 1272 	setb	_PT0
                           0001B6  1273 	C$uRTOS_2.21.h$221$1$20 ==.
                                   1274 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:221: IE=0x93;                //EA+ES+ET0+EX0
      00028A 75 A8 93         [24] 1275 	mov	_IE,#0x93
                           0001B9  1276 	C$uRTOS_2.21.h$222$1$20 ==.
                                   1277 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:222: TMOD=0x22;              //TC0=TC1=modo2
      00028D 75 89 22         [24] 1278 	mov	_TMOD,#0x22
                           0001BC  1279 	C$uRTOS_2.21.h$223$1$20 ==.
                                   1280 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:223: TL0=206;                //conta 50
      000290 75 8A CE         [24] 1281 	mov	_TL0,#0xce
                           0001BF  1282 	C$uRTOS_2.21.h$224$1$20 ==.
                                   1283 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:224: TH0=206;                //recarrega
      000293 75 8C CE         [24] 1284 	mov	_TH0,#0xce
                           0001C2  1285 	C$uRTOS_2.21.h$225$1$20 ==.
                                   1286 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:225: TL1=243;                //conta 13
      000296 75 8B F3         [24] 1287 	mov	_TL1,#0xf3
                           0001C5  1288 	C$uRTOS_2.21.h$226$1$20 ==.
                                   1289 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:226: TH1=243;                //recarrega
      000299 75 8D F3         [24] 1290 	mov	_TH1,#0xf3
                           0001C8  1291 	C$uRTOS_2.21.h$227$1$20 ==.
                                   1292 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:227: PCON=0x80;              //serial x2 (/16)
      00029C 75 87 80         [24] 1293 	mov	_PCON,#0x80
                           0001CB  1294 	C$uRTOS_2.21.h$228$1$20 ==.
                                   1295 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:228: SCON=0xC8;              //serial modo 3
      00029F 75 98 C8         [24] 1296 	mov	_SCON,#0xc8
                           0001CE  1297 	C$uRTOS_2.21.h$229$1$20 ==.
                                   1298 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:229: TR0=1;                  //liga tc0
                                   1299 ;	assignBit
      0002A2 D2 8C            [12] 1300 	setb	_TR0
                           0001D0  1301 	C$uRTOS_2.21.h$230$1$20 ==.
                                   1302 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:230: TR1=1;                  //liga tc1
                                   1303 ;	assignBit
      0002A4 D2 8E            [12] 1304 	setb	_TR1
                           0001D2  1305 	C$uRTOS_2.21.h$231$1$20 ==.
                                   1306 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:231: iniLCD4();              //inicializa LCD
      0002A6 12 02 24         [24] 1307 	lcall	_iniLCD4
                           0001D5  1308 	C$uRTOS_2.21.h$232$1$20 ==.
                           0001D5  1309 	XG$inic$0$0 ==.
      0002A9 22               [24] 1310 	ret
                                   1311 ;------------------------------------------------------------
                                   1312 ;Allocation info for local variables in function 'serial'
                                   1313 ;------------------------------------------------------------
                           0001D6  1314 	G$serial$0$0 ==.
                           0001D6  1315 	C$serialInt_1.2.h$8$1$20 ==.
                                   1316 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:8: void serial (void) __interrupt(4){
                                   1317 ;	-----------------------------------------
                                   1318 ;	 function serial
                                   1319 ;	-----------------------------------------
      0002AA                       1320 _serial:
                           0001D6  1321 	C$serialInt_1.2.h$9$1$22 ==.
                                   1322 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:9: if(RI){
                           0001D6  1323 	C$serialInt_1.2.h$10$2$23 ==.
                                   1324 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:10: RI=0;			//zera flag rx
                                   1325 ;	assignBit
      0002AA 10 98 02         [24] 1326 	jbc	_RI,00109$
      0002AD 80 07            [24] 1327 	sjmp	00102$
      0002AF                       1328 00109$:
                           0001DB  1329 	C$serialInt_1.2.h$11$2$23 ==.
                                   1330 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:11: RxByte=SBUF;            //recebe do buffer
      0002AF 85 99 2B         [24] 1331 	mov	_RxByte,_SBUF
                           0001DE  1332 	C$serialInt_1.2.h$12$2$23 ==.
                                   1333 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:12: RxFlag=1;               //sinaliza recebido
                                   1334 ;	assignBit
      0002B2 D2 04            [12] 1335 	setb	_RxFlag
      0002B4 80 04            [24] 1336 	sjmp	00104$
      0002B6                       1337 00102$:
                           0001E2  1338 	C$serialInt_1.2.h$15$2$24 ==.
                                   1339 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:15: TI=0;
                                   1340 ;	assignBit
      0002B6 C2 99            [12] 1341 	clr	_TI
                           0001E4  1342 	C$serialInt_1.2.h$16$2$24 ==.
                                   1343 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:16: TxFlag=1;
                                   1344 ;	assignBit
      0002B8 D2 05            [12] 1345 	setb	_TxFlag
      0002BA                       1346 00104$:
                           0001E6  1347 	C$serialInt_1.2.h$18$1$22 ==.
                           0001E6  1348 	XG$serial$0$0 ==.
      0002BA 32               [24] 1349 	reti
                                   1350 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1351 ;	eliminated unneeded push/pop psw
                                   1352 ;	eliminated unneeded push/pop dpl
                                   1353 ;	eliminated unneeded push/pop dph
                                   1354 ;	eliminated unneeded push/pop b
                                   1355 ;	eliminated unneeded push/pop acc
                                   1356 ;------------------------------------------------------------
                                   1357 ;Allocation info for local variables in function 'algs2ser'
                                   1358 ;------------------------------------------------------------
                                   1359 ;asc0                      Allocated with name '_algs2ser_PARM_2'
                                   1360 ;dot                       Allocated with name '_algs2ser_PARM_3'
                                   1361 ;spc                       Allocated to registers r7 
                                   1362 ;i                         Allocated to registers r6 
                                   1363 ;------------------------------------------------------------
                           0001E7  1364 	G$algs2ser$0$0 ==.
                           0001E7  1365 	C$serialInt_1.2.h$22$1$22 ==.
                                   1366 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:22: void algs2ser(char spc, int asc0, char dot){
                                   1367 ;	-----------------------------------------
                                   1368 ;	 function algs2ser
                                   1369 ;	-----------------------------------------
      0002BB                       1370 _algs2ser:
      0002BB AF 82            [24] 1371 	mov	r7,dpl
                           0001E9  1372 	C$serialInt_1.2.h$23$1$22 ==.
                                   1373 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:23: char i=0;
      0002BD 7E 00            [12] 1374 	mov	r6,#0x00
                           0001EB  1375 	C$serialInt_1.2.h$24$1$26 ==.
                                   1376 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:24: while(i<spc){
      0002BF                       1377 00104$:
      0002BF C3               [12] 1378 	clr	c
      0002C0 EE               [12] 1379 	mov	a,r6
      0002C1 9F               [12] 1380 	subb	a,r7
      0002C2 50 0B            [24] 1381 	jnc	00106$
                           0001F0  1382 	C$serialInt_1.2.h$25$2$27 ==.
                                   1383 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:25: while(!TxFlag); TxFlag=0;   //aguarda serial
      0002C4                       1384 00101$:
                                   1385 ;	assignBit
      0002C4 10 05 02         [24] 1386 	jbc	_TxFlag,00149$
      0002C7 80 FB            [24] 1387 	sjmp	00101$
      0002C9                       1388 00149$:
                           0001F5  1389 	C$serialInt_1.2.h$26$2$27 ==.
                                   1390 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:26: SBUF=32; i++;               //envia espa�os
      0002C9 75 99 20         [24] 1391 	mov	_SBUF,#0x20
      0002CC 0E               [12] 1392 	inc	r6
      0002CD 80 F0            [24] 1393 	sjmp	00104$
      0002CF                       1394 00106$:
                           0001FB  1395 	C$serialInt_1.2.h$28$2$28 ==.
                                   1396 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:28: for(i=asc0;i<5;i++){
      0002CF AE 58            [24] 1397 	mov	r6,_algs2ser_PARM_2
      0002D1                       1398 00117$:
      0002D1 BE 05 00         [24] 1399 	cjne	r6,#0x05,00150$
      0002D4                       1400 00150$:
      0002D4 50 1A            [24] 1401 	jnc	00119$
                           000202  1402 	C$serialInt_1.2.h$29$3$29 ==.
                                   1403 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:29: if(i==dot){
      0002D6 EE               [12] 1404 	mov	a,r6
      0002D7 B5 5A 08         [24] 1405 	cjne	a,_algs2ser_PARM_3,00112$
                           000206  1406 	C$serialInt_1.2.h$30$4$30 ==.
                                   1407 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:30: while(!TxFlag);TxFlag=0;//aguarda serial
      0002DA                       1408 00107$:
                                   1409 ;	assignBit
      0002DA 10 05 02         [24] 1410 	jbc	_TxFlag,00154$
      0002DD 80 FB            [24] 1411 	sjmp	00107$
      0002DF                       1412 00154$:
                           00020B  1413 	C$serialInt_1.2.h$31$4$30 ==.
                                   1414 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:31: SBUF=46;                //envia '.'
      0002DF 75 99 2E         [24] 1415 	mov	_SBUF,#0x2e
                           00020E  1416 	C$serialInt_1.2.h$33$3$29 ==.
                                   1417 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:33: while(!TxFlag); TxFlag=0;   //aguarda serial
      0002E2                       1418 00112$:
                                   1419 ;	assignBit
      0002E2 10 05 02         [24] 1420 	jbc	_TxFlag,00155$
      0002E5 80 FB            [24] 1421 	sjmp	00112$
      0002E7                       1422 00155$:
                           000213  1423 	C$serialInt_1.2.h$34$3$29 ==.
                                   1424 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:34: SBUF=(algs[i]);             //envia n�mero
      0002E7 EE               [12] 1425 	mov	a,r6
      0002E8 24 51            [12] 1426 	add	a,#_algs
      0002EA F9               [12] 1427 	mov	r1,a
      0002EB 87 99            [24] 1428 	mov	_SBUF,@r1
                           000219  1429 	C$serialInt_1.2.h$28$2$28 ==.
                                   1430 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:28: for(i=asc0;i<5;i++){
      0002ED 0E               [12] 1431 	inc	r6
      0002EE 80 E1            [24] 1432 	sjmp	00117$
      0002F0                       1433 00119$:
                           00021C  1434 	C$serialInt_1.2.h$36$2$28 ==.
                           00021C  1435 	XG$algs2ser$0$0 ==.
      0002F0 22               [24] 1436 	ret
                                   1437 ;------------------------------------------------------------
                                   1438 ;Allocation info for local variables in function 'int2ascii'
                                   1439 ;------------------------------------------------------------
                                   1440 ;val                       Allocated to registers r6 r7 
                                   1441 ;------------------------------------------------------------
                           00021D  1442 	G$int2ascii$0$0 ==.
                           00021D  1443 	C$serialInt_1.2.h$40$2$28 ==.
                                   1444 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:40: void int2ascii(unsigned int val){
                                   1445 ;	-----------------------------------------
                                   1446 ;	 function int2ascii
                                   1447 ;	-----------------------------------------
      0002F1                       1448 _int2ascii:
      0002F1 AE 82            [24] 1449 	mov	r6,dpl
      0002F3 AF 83            [24] 1450 	mov	r7,dph
                           000221  1451 	C$serialInt_1.2.h$41$1$32 ==.
                                   1452 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:41: algs[0]=32; algs[1]=32;
      0002F5 75 51 20         [24] 1453 	mov	_algs,#0x20
      0002F8 75 52 20         [24] 1454 	mov	(_algs + 0x0001),#0x20
                           000227  1455 	C$serialInt_1.2.h$42$1$32 ==.
                                   1456 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:42: if(val>999){
      0002FB C3               [12] 1457 	clr	c
      0002FC 74 E7            [12] 1458 	mov	a,#0xe7
      0002FE 9E               [12] 1459 	subb	a,r6
      0002FF 74 03            [12] 1460 	mov	a,#0x03
      000301 9F               [12] 1461 	subb	a,r7
      000302 50 56            [24] 1462 	jnc	00102$
                           000230  1463 	C$serialInt_1.2.h$43$1$32 ==.
                                   1464 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:43: algs[0]=0x30+(val/10000);
      000304 75 08 10         [24] 1465 	mov	__divuint_PARM_2,#0x10
      000307 75 09 27         [24] 1466 	mov	(__divuint_PARM_2 + 1),#0x27
      00030A 8E 82            [24] 1467 	mov	dpl,r6
      00030C 8F 83            [24] 1468 	mov	dph,r7
      00030E C0 07            [24] 1469 	push	ar7
      000310 C0 06            [24] 1470 	push	ar6
      000312 12 08 9D         [24] 1471 	lcall	__divuint
      000315 AC 82            [24] 1472 	mov	r4,dpl
      000317 D0 06            [24] 1473 	pop	ar6
      000319 D0 07            [24] 1474 	pop	ar7
      00031B 74 30            [12] 1475 	mov	a,#0x30
      00031D 2C               [12] 1476 	add	a,r4
      00031E F5 51            [12] 1477 	mov	_algs,a
                           00024C  1478 	C$serialInt_1.2.h$44$1$32 ==.
                                   1479 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:44: val=val%10000;
      000320 75 08 10         [24] 1480 	mov	__moduint_PARM_2,#0x10
      000323 75 09 27         [24] 1481 	mov	(__moduint_PARM_2 + 1),#0x27
      000326 8E 82            [24] 1482 	mov	dpl,r6
      000328 8F 83            [24] 1483 	mov	dph,r7
      00032A 12 08 E3         [24] 1484 	lcall	__moduint
                           000259  1485 	C$serialInt_1.2.h$45$1$32 ==.
                                   1486 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:45: algs[1]=0x30+(val/1000);
      00032D AE 82            [24] 1487 	mov	r6,dpl
      00032F AF 83            [24] 1488 	mov	r7,dph
      000331 75 08 E8         [24] 1489 	mov	__divuint_PARM_2,#0xe8
      000334 75 09 03         [24] 1490 	mov	(__divuint_PARM_2 + 1),#0x03
      000337 C0 07            [24] 1491 	push	ar7
      000339 C0 06            [24] 1492 	push	ar6
      00033B 12 08 9D         [24] 1493 	lcall	__divuint
      00033E AC 82            [24] 1494 	mov	r4,dpl
      000340 D0 06            [24] 1495 	pop	ar6
      000342 D0 07            [24] 1496 	pop	ar7
      000344 74 30            [12] 1497 	mov	a,#0x30
      000346 2C               [12] 1498 	add	a,r4
      000347 F5 52            [12] 1499 	mov	(_algs + 0x0001),a
                           000275  1500 	C$serialInt_1.2.h$46$1$32 ==.
                                   1501 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:46: val=val%1000;
      000349 75 08 E8         [24] 1502 	mov	__moduint_PARM_2,#0xe8
      00034C 75 09 03         [24] 1503 	mov	(__moduint_PARM_2 + 1),#0x03
      00034F 8E 82            [24] 1504 	mov	dpl,r6
      000351 8F 83            [24] 1505 	mov	dph,r7
      000353 12 08 E3         [24] 1506 	lcall	__moduint
      000356 AE 82            [24] 1507 	mov	r6,dpl
      000358 AF 83            [24] 1508 	mov	r7,dph
      00035A                       1509 00102$:
                           000286  1510 	C$serialInt_1.2.h$48$1$32 ==.
                                   1511 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:48: algs[2]=0x30+(val/100);
      00035A 75 08 64         [24] 1512 	mov	__divuint_PARM_2,#0x64
      00035D 75 09 00         [24] 1513 	mov	(__divuint_PARM_2 + 1),#0x00
      000360 8E 82            [24] 1514 	mov	dpl,r6
      000362 8F 83            [24] 1515 	mov	dph,r7
      000364 C0 07            [24] 1516 	push	ar7
      000366 C0 06            [24] 1517 	push	ar6
      000368 12 08 9D         [24] 1518 	lcall	__divuint
      00036B AC 82            [24] 1519 	mov	r4,dpl
      00036D D0 06            [24] 1520 	pop	ar6
      00036F D0 07            [24] 1521 	pop	ar7
      000371 74 30            [12] 1522 	mov	a,#0x30
      000373 2C               [12] 1523 	add	a,r4
      000374 F5 53            [12] 1524 	mov	(_algs + 0x0002),a
                           0002A2  1525 	C$serialInt_1.2.h$49$1$32 ==.
                                   1526 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:49: val=val%100;
      000376 75 08 64         [24] 1527 	mov	__moduint_PARM_2,#0x64
      000379 75 09 00         [24] 1528 	mov	(__moduint_PARM_2 + 1),#0x00
      00037C 8E 82            [24] 1529 	mov	dpl,r6
      00037E 8F 83            [24] 1530 	mov	dph,r7
      000380 12 08 E3         [24] 1531 	lcall	__moduint
                           0002AF  1532 	C$serialInt_1.2.h$50$1$32 ==.
                                   1533 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:50: algs[3]=0x30+(val/10);
      000383 AE 82            [24] 1534 	mov	r6,dpl
      000385 AF 83            [24] 1535 	mov	r7,dph
      000387 75 08 0A         [24] 1536 	mov	__divuint_PARM_2,#0x0a
      00038A 75 09 00         [24] 1537 	mov	(__divuint_PARM_2 + 1),#0x00
      00038D C0 07            [24] 1538 	push	ar7
      00038F C0 06            [24] 1539 	push	ar6
      000391 12 08 9D         [24] 1540 	lcall	__divuint
      000394 AC 82            [24] 1541 	mov	r4,dpl
      000396 D0 06            [24] 1542 	pop	ar6
      000398 D0 07            [24] 1543 	pop	ar7
      00039A 74 30            [12] 1544 	mov	a,#0x30
      00039C 2C               [12] 1545 	add	a,r4
      00039D F5 54            [12] 1546 	mov	(_algs + 0x0003),a
                           0002CB  1547 	C$serialInt_1.2.h$51$1$32 ==.
                                   1548 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:51: algs[4]=0x30+(val%10);
      00039F 75 08 0A         [24] 1549 	mov	__moduint_PARM_2,#0x0a
      0003A2 75 09 00         [24] 1550 	mov	(__moduint_PARM_2 + 1),#0x00
      0003A5 8E 82            [24] 1551 	mov	dpl,r6
      0003A7 8F 83            [24] 1552 	mov	dph,r7
      0003A9 12 08 E3         [24] 1553 	lcall	__moduint
      0003AC AE 82            [24] 1554 	mov	r6,dpl
      0003AE 74 30            [12] 1555 	mov	a,#0x30
      0003B0 2E               [12] 1556 	add	a,r6
      0003B1 F5 55            [12] 1557 	mov	(_algs + 0x0004),a
                           0002DF  1558 	C$serialInt_1.2.h$52$1$32 ==.
                           0002DF  1559 	XG$int2ascii$0$0 ==.
      0003B3 22               [24] 1560 	ret
                                   1561 ;------------------------------------------------------------
                                   1562 ;Allocation info for local variables in function 'char2Ser'
                                   1563 ;------------------------------------------------------------
                                   1564 ;val                       Allocated with name '_char2Ser_PARM_2'
                                   1565 ;dot                       Allocated with name '_char2Ser_PARM_3'
                                   1566 ;spc                       Allocated to registers r7 
                                   1567 ;------------------------------------------------------------
                           0002E0  1568 	G$char2Ser$0$0 ==.
                           0002E0  1569 	C$serialInt_1.2.h$57$1$32 ==.
                                   1570 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:57: void char2Ser(char spc, unsigned char val, char dot){
                                   1571 ;	-----------------------------------------
                                   1572 ;	 function char2Ser
                                   1573 ;	-----------------------------------------
      0003B4                       1574 _char2Ser:
      0003B4 AF 82            [24] 1575 	mov	r7,dpl
                           0002E2  1576 	C$serialInt_1.2.h$58$1$35 ==.
                                   1577 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:58: int2ascii(val);
      0003B6 AD 5B            [24] 1578 	mov	r5,_char2Ser_PARM_2
      0003B8 7E 00            [12] 1579 	mov	r6,#0x00
      0003BA 8D 82            [24] 1580 	mov	dpl,r5
      0003BC 8E 83            [24] 1581 	mov	dph,r6
      0003BE C0 07            [24] 1582 	push	ar7
      0003C0 12 02 F1         [24] 1583 	lcall	_int2ascii
      0003C3 D0 07            [24] 1584 	pop	ar7
                           0002F1  1585 	C$serialInt_1.2.h$59$1$35 ==.
                                   1586 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:59: dot=dot+2;
      0003C5 05 5C            [12] 1587 	inc	_char2Ser_PARM_3
      0003C7 05 5C            [12] 1588 	inc	_char2Ser_PARM_3
                           0002F5  1589 	C$serialInt_1.2.h$60$1$35 ==.
                                   1590 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:60: algs2ser(spc, 2, dot);
      0003C9 75 58 02         [24] 1591 	mov	_algs2ser_PARM_2,#0x02
      0003CC 75 59 00         [24] 1592 	mov	(_algs2ser_PARM_2 + 1),#0x00
      0003CF 85 5C 5A         [24] 1593 	mov	_algs2ser_PARM_3,_char2Ser_PARM_3
      0003D2 8F 82            [24] 1594 	mov	dpl,r7
      0003D4 12 02 BB         [24] 1595 	lcall	_algs2ser
                           000303  1596 	C$serialInt_1.2.h$61$1$35 ==.
                           000303  1597 	XG$char2Ser$0$0 ==.
      0003D7 22               [24] 1598 	ret
                                   1599 ;------------------------------------------------------------
                                   1600 ;Allocation info for local variables in function 'int2Ser'
                                   1601 ;------------------------------------------------------------
                                   1602 ;val                       Allocated with name '_int2Ser_PARM_2'
                                   1603 ;dot                       Allocated with name '_int2Ser_PARM_3'
                                   1604 ;spc                       Allocated to registers r7 
                                   1605 ;------------------------------------------------------------
                           000304  1606 	G$int2Ser$0$0 ==.
                           000304  1607 	C$serialInt_1.2.h$65$1$35 ==.
                                   1608 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:65: void int2Ser(char spc, unsigned int val, char dot){
                                   1609 ;	-----------------------------------------
                                   1610 ;	 function int2Ser
                                   1611 ;	-----------------------------------------
      0003D8                       1612 _int2Ser:
      0003D8 AF 82            [24] 1613 	mov	r7,dpl
                           000306  1614 	C$serialInt_1.2.h$66$1$37 ==.
                                   1615 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:66: int2ascii(val);
      0003DA 85 5D 82         [24] 1616 	mov	dpl,_int2Ser_PARM_2
      0003DD 85 5E 83         [24] 1617 	mov	dph,(_int2Ser_PARM_2 + 1)
      0003E0 C0 07            [24] 1618 	push	ar7
      0003E2 12 02 F1         [24] 1619 	lcall	_int2ascii
      0003E5 D0 07            [24] 1620 	pop	ar7
                           000313  1621 	C$serialInt_1.2.h$67$1$37 ==.
                                   1622 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:67: algs2ser(spc, 0, dot);
      0003E7 E4               [12] 1623 	clr	a
      0003E8 F5 58            [12] 1624 	mov	_algs2ser_PARM_2,a
      0003EA F5 59            [12] 1625 	mov	(_algs2ser_PARM_2 + 1),a
      0003EC 85 5F 5A         [24] 1626 	mov	_algs2ser_PARM_3,_int2Ser_PARM_3
      0003EF 8F 82            [24] 1627 	mov	dpl,r7
      0003F1 12 02 BB         [24] 1628 	lcall	_algs2ser
                           000320  1629 	C$serialInt_1.2.h$68$1$37 ==.
                           000320  1630 	XG$int2Ser$0$0 ==.
      0003F4 22               [24] 1631 	ret
                                   1632 ;------------------------------------------------------------
                                   1633 ;Allocation info for local variables in function 'RTproc_1'
                                   1634 ;------------------------------------------------------------
                           000321  1635 	G$RTproc_1$0$0 ==.
                           000321  1636 	C$controleNivel.c$17$1$37 ==.
                                   1637 ;	controleNivel.c:17: void RTproc_1(){
                                   1638 ;	-----------------------------------------
                                   1639 ;	 function RTproc_1
                                   1640 ;	-----------------------------------------
      0003F5                       1641 _RTproc_1:
                           000321  1642 	C$controleNivel.c$18$1$38 ==.
                                   1643 ;	controleNivel.c:18: if(cnt200==pwm) P1_3=1;
      0003F5 E5 66            [12] 1644 	mov	a,_pwm
      0003F7 B5 28 02         [24] 1645 	cjne	a,_cnt200,00103$
                                   1646 ;	assignBit
      0003FA D2 93            [12] 1647 	setb	_P1_3
      0003FC                       1648 00103$:
                           000328  1649 	C$controleNivel.c$19$1$38 ==.
                           000328  1650 	XG$RTproc_1$0$0 ==.
      0003FC 22               [24] 1651 	ret
                                   1652 ;------------------------------------------------------------
                                   1653 ;Allocation info for local variables in function 'RTproc_2'
                                   1654 ;------------------------------------------------------------
                           000329  1655 	G$RTproc_2$0$0 ==.
                           000329  1656 	C$controleNivel.c$20$1$38 ==.
                                   1657 ;	controleNivel.c:20: void RTproc_2(){
                                   1658 ;	-----------------------------------------
                                   1659 ;	 function RTproc_2
                                   1660 ;	-----------------------------------------
      0003FD                       1661 _RTproc_2:
                           000329  1662 	C$controleNivel.c$21$1$39 ==.
                                   1663 ;	controleNivel.c:21: P1_3=0;
                                   1664 ;	assignBit
      0003FD C2 93            [12] 1665 	clr	_P1_3
                           00032B  1666 	C$controleNivel.c$22$1$39 ==.
                                   1667 ;	controleNivel.c:22: if(cnt100==99){
      0003FF 74 63            [12] 1668 	mov	a,#0x63
      000401 B5 27 22         [24] 1669 	cjne	a,_cnt100,00106$
                           000330  1670 	C$controleNivel.c$23$2$40 ==.
                                   1671 ;	controleNivel.c:23: sensor=1;
                                   1672 ;	assignBit
      000404 D2 0E            [12] 1673 	setb	_sensor
                           000332  1674 	C$controleNivel.c$24$2$40 ==.
                                   1675 ;	controleNivel.c:24: REN=0;
                                   1676 ;	assignBit
      000406 C2 9C            [12] 1677 	clr	_REN
                           000334  1678 	C$controleNivel.c$25$2$40 ==.
                                   1679 ;	controleNivel.c:25: TMOD=0x92;
      000408 75 89 92         [24] 1680 	mov	_TMOD,#0x92
                           000337  1681 	C$controleNivel.c$26$2$40 ==.
                                   1682 ;	controleNivel.c:26: IT1=1;
                                   1683 ;	assignBit
      00040B D2 8A            [12] 1684 	setb	_IT1
                           000339  1685 	C$controleNivel.c$27$2$40 ==.
                                   1686 ;	controleNivel.c:27: EX1=1;
                                   1687 ;	assignBit
      00040D D2 AA            [12] 1688 	setb	_EX1
                           00033B  1689 	C$controleNivel.c$28$2$40 ==.
                                   1690 ;	controleNivel.c:28: TL1=0x00;
      00040F 75 8B 00         [24] 1691 	mov	_TL1,#0x00
                           00033E  1692 	C$controleNivel.c$29$2$40 ==.
                                   1693 ;	controleNivel.c:29: TH1=0x00;
      000412 75 8D 00         [24] 1694 	mov	_TH1,#0x00
                           000341  1695 	C$controleNivel.c$31$2$40 ==.
                                   1696 ;	controleNivel.c:31: TrigPin=1;
                                   1697 ;	assignBit
      000415 D2 92            [12] 1698 	setb	_TrigPin
                           000343  1699 	C$controleNivel.c$32$2$40 ==.
                                   1700 ;	controleNivel.c:32: TrigCont=4;
      000417 75 62 04         [24] 1701 	mov	_TrigCont,#0x04
                           000346  1702 	C$controleNivel.c$33$2$40 ==.
                                   1703 ;	controleNivel.c:33: while(TrigCont)TrigCont--;
      00041A                       1704 00101$:
      00041A E5 62            [12] 1705 	mov	a,_TrigCont
      00041C 60 04            [24] 1706 	jz	00103$
      00041E 15 62            [12] 1707 	dec	_TrigCont
      000420 80 F8            [24] 1708 	sjmp	00101$
      000422                       1709 00103$:
                           00034E  1710 	C$controleNivel.c$34$2$40 ==.
                                   1711 ;	controleNivel.c:34: TrigPin=0;
                                   1712 ;	assignBit
      000422 C2 92            [12] 1713 	clr	_TrigPin
                           000350  1714 	C$controleNivel.c$35$2$40 ==.
                                   1715 ;	controleNivel.c:35: sensor=0;
                                   1716 ;	assignBit
      000424 C2 0E            [12] 1717 	clr	_sensor
      000426                       1718 00106$:
                           000352  1719 	C$controleNivel.c$39$1$39 ==.
                           000352  1720 	XG$RTproc_2$0$0 ==.
      000426 22               [24] 1721 	ret
                                   1722 ;------------------------------------------------------------
                                   1723 ;Allocation info for local variables in function 'ext_1'
                                   1724 ;------------------------------------------------------------
                           000353  1725 	G$ext_1$0$0 ==.
                           000353  1726 	C$controleNivel.c$41$1$39 ==.
                                   1727 ;	controleNivel.c:41: void ext_1 (void) __interrupt(2){
                                   1728 ;	-----------------------------------------
                                   1729 ;	 function ext_1
                                   1730 ;	-----------------------------------------
      000427                       1731 _ext_1:
      000427 C0 E0            [24] 1732 	push	acc
      000429 C0 07            [24] 1733 	push	ar7
      00042B C0 06            [24] 1734 	push	ar6
      00042D C0 D0            [24] 1735 	push	psw
      00042F 75 D0 00         [24] 1736 	mov	psw,#0x00
                           00035E  1737 	C$controleNivel.c$43$1$42 ==.
                                   1738 ;	controleNivel.c:43: Echo=TH1<<8;
      000432 AE 8D            [24] 1739 	mov	r6,_TH1
      000434 7F 00            [12] 1740 	mov	r7,#0x00
      000436 8E 61            [24] 1741 	mov	(_Echo + 1),r6
                                   1742 ;	1-genFromRTrack replaced	mov	_Echo,#0x00
      000438 8F 60            [24] 1743 	mov	_Echo,r7
                           000366  1744 	C$controleNivel.c$44$1$42 ==.
                                   1745 ;	controleNivel.c:44: Echo=Echo+TL1;
      00043A AE 8B            [24] 1746 	mov	r6,_TL1
      00043C 7F 00            [12] 1747 	mov	r7,#0x00
      00043E EE               [12] 1748 	mov	a,r6
      00043F 25 60            [12] 1749 	add	a,_Echo
      000441 F5 60            [12] 1750 	mov	_Echo,a
      000443 EF               [12] 1751 	mov	a,r7
      000444 35 61            [12] 1752 	addc	a,(_Echo + 1)
      000446 F5 61            [12] 1753 	mov	(_Echo + 1),a
                           000374  1754 	C$controleNivel.c$46$1$42 ==.
                                   1755 ;	controleNivel.c:46: sensor=0;
                                   1756 ;	assignBit
      000448 C2 0E            [12] 1757 	clr	_sensor
                           000376  1758 	C$controleNivel.c$47$1$42 ==.
                                   1759 ;	controleNivel.c:47: IE=0x93;
      00044A 75 A8 93         [24] 1760 	mov	_IE,#0x93
                           000379  1761 	C$controleNivel.c$48$1$42 ==.
                                   1762 ;	controleNivel.c:48: TMOD=0x22;
      00044D 75 89 22         [24] 1763 	mov	_TMOD,#0x22
                           00037C  1764 	C$controleNivel.c$49$1$42 ==.
                                   1765 ;	controleNivel.c:49: TL1=243;                /*conta 13*/
      000450 75 8B F3         [24] 1766 	mov	_TL1,#0xf3
                           00037F  1767 	C$controleNivel.c$50$1$42 ==.
                                   1768 ;	controleNivel.c:50: TH1=243;                /*recarrega*/
      000453 75 8D F3         [24] 1769 	mov	_TH1,#0xf3
                           000382  1770 	C$controleNivel.c$51$1$42 ==.
                                   1771 ;	controleNivel.c:51: SCON=0xC8;              /*serial modo 3*/
      000456 75 98 C8         [24] 1772 	mov	_SCON,#0xc8
                           000385  1773 	C$controleNivel.c$52$1$42 ==.
                                   1774 ;	controleNivel.c:52: TR1=1;                  /*liga tc1*/
                                   1775 ;	assignBit
      000459 D2 8E            [12] 1776 	setb	_TR1
                           000387  1777 	C$controleNivel.c$53$1$42 ==.
                                   1778 ;	controleNivel.c:53: EX1=0;
                                   1779 ;	assignBit
      00045B C2 AA            [12] 1780 	clr	_EX1
                           000389  1781 	C$controleNivel.c$54$1$42 ==.
                                   1782 ;	controleNivel.c:54: REN=1;
                                   1783 ;	assignBit
      00045D D2 9C            [12] 1784 	setb	_REN
      00045F D0 D0            [24] 1785 	pop	psw
      000461 D0 06            [24] 1786 	pop	ar6
      000463 D0 07            [24] 1787 	pop	ar7
      000465 D0 E0            [24] 1788 	pop	acc
                           000393  1789 	C$controleNivel.c$56$1$42 ==.
                           000393  1790 	XG$ext_1$0$0 ==.
      000467 32               [24] 1791 	reti
                                   1792 ;	eliminated unneeded push/pop dpl
                                   1793 ;	eliminated unneeded push/pop dph
                                   1794 ;	eliminated unneeded push/pop b
                                   1795 ;------------------------------------------------------------
                                   1796 ;Allocation info for local variables in function 'ajustPID'
                                   1797 ;------------------------------------------------------------
                                   1798 ;Kx                        Allocated to registers r7 
                                   1799 ;------------------------------------------------------------
                           000394  1800 	G$ajustPID$0$0 ==.
                           000394  1801 	C$controleNivel.c$57$1$42 ==.
                                   1802 ;	controleNivel.c:57: void ajustPID(){
                                   1803 ;	-----------------------------------------
                                   1804 ;	 function ajustPID
                                   1805 ;	-----------------------------------------
      000468                       1806 _ajustPID:
                           000394  1807 	C$controleNivel.c$58$1$42 ==.
                                   1808 ;	controleNivel.c:58: unsigned char Kx=0;
      000468 7F 00            [12] 1809 	mov	r7,#0x00
                           000396  1810 	C$controleNivel.c$59$1$42 ==.
                                   1811 ;	controleNivel.c:59: __bit ajust=1;
                                   1812 ;	assignBit
      00046A D2 0F            [12] 1813 	setb	_ajustPID_ajust_1_43
                           000398  1814 	C$controleNivel.c$60$1$43 ==.
                                   1815 ;	controleNivel.c:60: pwm=0;
      00046C 75 66 00         [24] 1816 	mov	_pwm,#0x00
                           00039B  1817 	C$controleNivel.c$61$3$45 ==.
                                   1818 ;	controleNivel.c:61: while(ajust){
      00046F                       1819 00123$:
      00046F 20 0F 03         [24] 1820 	jb	_ajustPID_ajust_1_43,00170$
      000472 02 05 04         [24] 1821 	ljmp	00126$
      000475                       1822 00170$:
                           0003A1  1823 	C$controleNivel.c$62$2$44 ==.
                                   1824 ;	controleNivel.c:62: if(S1==3){
      000475 74 03            [12] 1825 	mov	a,#0x03
      000477 B5 22 0B         [24] 1826 	cjne	a,_S1,00102$
                           0003A6  1827 	C$controleNivel.c$63$3$45 ==.
                                   1828 ;	controleNivel.c:63: S1=0;
      00047A 75 22 00         [24] 1829 	mov	_S1,#0x00
                           0003A9  1830 	C$controleNivel.c$64$3$45 ==.
                                   1831 ;	controleNivel.c:64: pid[Kx]++;
      00047D EF               [12] 1832 	mov	a,r7
      00047E 24 63            [12] 1833 	add	a,#_pid
      000480 F9               [12] 1834 	mov	r1,a
      000481 E7               [12] 1835 	mov	a,@r1
      000482 FE               [12] 1836 	mov	r6,a
      000483 04               [12] 1837 	inc	a
      000484 F7               [12] 1838 	mov	@r1,a
      000485                       1839 00102$:
                           0003B1  1840 	C$controleNivel.c$66$2$44 ==.
                                   1841 ;	controleNivel.c:66: if(S2==3){
      000485 74 03            [12] 1842 	mov	a,#0x03
      000487 B5 23 0B         [24] 1843 	cjne	a,_S2,00104$
                           0003B6  1844 	C$controleNivel.c$67$3$46 ==.
                                   1845 ;	controleNivel.c:67: S2=0;
      00048A 75 23 00         [24] 1846 	mov	_S2,#0x00
                           0003B9  1847 	C$controleNivel.c$68$3$46 ==.
                                   1848 ;	controleNivel.c:68: pid[Kx]--;
      00048D EF               [12] 1849 	mov	a,r7
      00048E 24 63            [12] 1850 	add	a,#_pid
      000490 F9               [12] 1851 	mov	r1,a
      000491 E7               [12] 1852 	mov	a,@r1
      000492 FE               [12] 1853 	mov	r6,a
      000493 14               [12] 1854 	dec	a
      000494 F7               [12] 1855 	mov	@r1,a
      000495                       1856 00104$:
                           0003C1  1857 	C$controleNivel.c$70$2$44 ==.
                                   1858 ;	controleNivel.c:70: if(Kx==0) char2LCD(0x81, pid[0], 2);
      000495 EF               [12] 1859 	mov	a,r7
      000496 70 10            [24] 1860 	jnz	00106$
      000498 85 63 56         [24] 1861 	mov	_char2LCD_PARM_2,_pid
      00049B 75 57 02         [24] 1862 	mov	_char2LCD_PARM_3,#0x02
      00049E 75 82 81         [24] 1863 	mov	dpl,#0x81
      0004A1 C0 07            [24] 1864 	push	ar7
      0004A3 12 01 CA         [24] 1865 	lcall	_char2LCD
      0004A6 D0 07            [24] 1866 	pop	ar7
      0004A8                       1867 00106$:
                           0003D4  1868 	C$controleNivel.c$71$2$44 ==.
                                   1869 ;	controleNivel.c:71: if(Kx==1) char2LCD(0x86, pid[1], 2);
      0004A8 BF 01 10         [24] 1870 	cjne	r7,#0x01,00108$
      0004AB 85 64 56         [24] 1871 	mov	_char2LCD_PARM_2,(_pid + 0x0001)
      0004AE 75 57 02         [24] 1872 	mov	_char2LCD_PARM_3,#0x02
      0004B1 75 82 86         [24] 1873 	mov	dpl,#0x86
      0004B4 C0 07            [24] 1874 	push	ar7
      0004B6 12 01 CA         [24] 1875 	lcall	_char2LCD
      0004B9 D0 07            [24] 1876 	pop	ar7
      0004BB                       1877 00108$:
                           0003E7  1878 	C$controleNivel.c$72$2$44 ==.
                                   1879 ;	controleNivel.c:72: if(Kx==2) char2LCD(0x8B, pid[2], 2);
      0004BB BF 02 10         [24] 1880 	cjne	r7,#0x02,00110$
      0004BE 85 65 56         [24] 1881 	mov	_char2LCD_PARM_2,(_pid + 0x0002)
      0004C1 75 57 02         [24] 1882 	mov	_char2LCD_PARM_3,#0x02
      0004C4 75 82 8B         [24] 1883 	mov	dpl,#0x8b
      0004C7 C0 07            [24] 1884 	push	ar7
      0004C9 12 01 CA         [24] 1885 	lcall	_char2LCD
      0004CC D0 07            [24] 1886 	pop	ar7
      0004CE                       1887 00110$:
                           0003FA  1888 	C$controleNivel.c$73$2$44 ==.
                                   1889 ;	controleNivel.c:73: umSeg=0; cnt100=255;
                                   1890 ;	assignBit
      0004CE C2 00            [12] 1891 	clr	_umSeg
      0004D0 75 27 FF         [24] 1892 	mov	_cnt100,#0xff
                           0003FF  1893 	C$controleNivel.c$74$2$44 ==.
                                   1894 ;	controleNivel.c:74: while(S1==2);
      0004D3                       1895 00111$:
      0004D3 74 02            [12] 1896 	mov	a,#0x02
      0004D5 B5 22 02         [24] 1897 	cjne	a,_S1,00180$
      0004D8 80 F9            [24] 1898 	sjmp	00111$
      0004DA                       1899 00180$:
                           000406  1900 	C$controleNivel.c$75$2$44 ==.
                                   1901 ;	controleNivel.c:75: if(umSeg){S1=0;
      0004DA 30 00 0B         [24] 1902 	jnb	_umSeg,00117$
      0004DD 75 22 00         [24] 1903 	mov	_S1,#0x00
                           00040C  1904 	C$controleNivel.c$76$3$47 ==.
                                   1905 ;	controleNivel.c:76: umSeg=0; Kx++;
                                   1906 ;	assignBit
      0004E0 C2 00            [12] 1907 	clr	_umSeg
      0004E2 0F               [12] 1908 	inc	r7
                           00040F  1909 	C$controleNivel.c$77$3$47 ==.
                                   1910 ;	controleNivel.c:77: if(Kx==3) Kx=0;
      0004E3 BF 03 02         [24] 1911 	cjne	r7,#0x03,00117$
      0004E6 7F 00            [12] 1912 	mov	r7,#0x00
      0004E8                       1913 00117$:
                           000414  1914 	C$controleNivel.c$79$2$44 ==.
                                   1915 ;	controleNivel.c:79: umSeg=0; cnt100=255;
                                   1916 ;	assignBit
      0004E8 C2 00            [12] 1917 	clr	_umSeg
      0004EA 75 27 FF         [24] 1918 	mov	_cnt100,#0xff
                           000419  1919 	C$controleNivel.c$80$2$44 ==.
                                   1920 ;	controleNivel.c:80: while(S2==2);
      0004ED                       1921 00118$:
      0004ED 74 02            [12] 1922 	mov	a,#0x02
      0004EF B5 23 02         [24] 1923 	cjne	a,_S2,00184$
      0004F2 80 F9            [24] 1924 	sjmp	00118$
      0004F4                       1925 00184$:
                           000420  1926 	C$controleNivel.c$81$2$44 ==.
                                   1927 ;	controleNivel.c:81: if(umSeg){S2=0;
      0004F4 20 00 03         [24] 1928 	jb	_umSeg,00185$
      0004F7 02 04 6F         [24] 1929 	ljmp	00123$
      0004FA                       1930 00185$:
      0004FA 75 23 00         [24] 1931 	mov	_S2,#0x00
                           000429  1932 	C$controleNivel.c$82$3$48 ==.
                                   1933 ;	controleNivel.c:82: umSeg=0; ajust=0;
                                   1934 ;	assignBit
      0004FD C2 00            [12] 1935 	clr	_umSeg
                                   1936 ;	assignBit
      0004FF C2 0F            [12] 1937 	clr	_ajustPID_ajust_1_43
      000501 02 04 6F         [24] 1938 	ljmp	00123$
      000504                       1939 00126$:
                           000430  1940 	C$controleNivel.c$84$1$43 ==.
                           000430  1941 	XG$ajustPID$0$0 ==.
      000504 22               [24] 1942 	ret
                                   1943 ;------------------------------------------------------------
                                   1944 ;Allocation info for local variables in function 'main'
                                   1945 ;------------------------------------------------------------
                                   1946 ;setup                     Allocated with name '_main_setup_1_49'
                                   1947 ;tempC                     Allocated with name '_main_tempC_1_49'
                                   1948 ;tempD                     Allocated to registers r6 
                                   1949 ;errAt                     Allocated with name '_main_errAt_1_49'
                                   1950 ;erAnt                     Allocated to registers r5 
                                   1951 ;ctrlAt                    Allocated with name '_main_ctrlAt_1_49'
                                   1952 ;ctlAnt                    Allocated to registers 
                                   1953 ;P                         Allocated with name '_main_P_1_49'
                                   1954 ;I                         Allocated with name '_main_I_1_49'
                                   1955 ;D                         Allocated to registers r5 r7 
                                   1956 ;tempo                     Allocated with name '_main_tempo_1_49'
                                   1957 ;i                         Allocated to registers r5 
                                   1958 ;contSetup                 Allocated with name '_main_contSetup_1_49'
                                   1959 ;setupR                    Allocated with name '_main_setupR_1_49'
                                   1960 ;number                    Allocated with name '_main_number_1_49'
                                   1961 ;------------------------------------------------------------
                           000431  1962 	G$main$0$0 ==.
                           000431  1963 	C$controleNivel.c$86$1$43 ==.
                                   1964 ;	controleNivel.c:86: void main (){
                                   1965 ;	-----------------------------------------
                                   1966 ;	 function main
                                   1967 ;	-----------------------------------------
      000505                       1968 _main:
                           000431  1969 	C$controleNivel.c$87$1$43 ==.
                                   1970 ;	controleNivel.c:87: unsigned char setup=25;
      000505 75 68 19         [24] 1971 	mov	_main_setup_1_49,#0x19
                           000434  1972 	C$controleNivel.c$88$1$43 ==.
                                   1973 ;	controleNivel.c:88: unsigned char tempC=0;
                           000434  1974 	C$controleNivel.c$90$1$43 ==.
                                   1975 ;	controleNivel.c:90: signed char errAt=0;
                           000434  1976 	C$controleNivel.c$92$1$43 ==.
                                   1977 ;	controleNivel.c:92: signed int ctrlAt=0;
      000508 E4               [12] 1978 	clr	a
      000509 F5 69            [12] 1979 	mov	_main_tempC_1_49,a
      00050B F5 6A            [12] 1980 	mov	_main_errAt_1_49,a
      00050D F5 6B            [12] 1981 	mov	_main_ctrlAt_1_49,a
      00050F F5 6C            [12] 1982 	mov	(_main_ctrlAt_1_49 + 1),a
                           00043D  1983 	C$controleNivel.c$95$1$43 ==.
                                   1984 ;	controleNivel.c:95: unsigned int tempo=0;
      000511 F5 71            [12] 1985 	mov	_main_tempo_1_49,a
      000513 F5 72            [12] 1986 	mov	(_main_tempo_1_49 + 1),a
                           000441  1987 	C$controleNivel.c$97$1$43 ==.
                                   1988 ;	controleNivel.c:97: unsigned char contSetup=0;
                                   1989 ;	1-genFromRTrack replaced	mov	_main_contSetup_1_49,#0x00
      000515 F5 73            [12] 1990 	mov	_main_contSetup_1_49,a
                           000443  1991 	C$controleNivel.c$98$1$43 ==.
                                   1992 ;	controleNivel.c:98: unsigned char setupR[3]={0,0,0};
                                   1993 ;	1-genFromRTrack replaced	mov	_main_setupR_1_49,#0x00
      000517 F5 74            [12] 1994 	mov	_main_setupR_1_49,a
                                   1995 ;	1-genFromRTrack replaced	mov	(_main_setupR_1_49 + 0x0001),#0x00
      000519 F5 75            [12] 1996 	mov	(_main_setupR_1_49 + 0x0001),a
                                   1997 ;	1-genFromRTrack replaced	mov	(_main_setupR_1_49 + 0x0002),#0x00
      00051B F5 76            [12] 1998 	mov	(_main_setupR_1_49 + 0x0002),a
                           000449  1999 	C$controleNivel.c$99$1$43 ==.
                                   2000 ;	controleNivel.c:99: unsigned char number=0;
                                   2001 ;	1-genFromRTrack replaced	mov	_main_number_1_49,#0x00
      00051D F5 77            [12] 2002 	mov	_main_number_1_49,a
                           00044B  2003 	C$controleNivel.c$101$1$49 ==.
                                   2004 ;	controleNivel.c:101: TrigPin=0;
                                   2005 ;	assignBit
      00051F C2 92            [12] 2006 	clr	_TrigPin
                           00044D  2007 	C$controleNivel.c$103$1$49 ==.
                                   2008 ;	controleNivel.c:103: inic();
      000521 12 02 88         [24] 2009 	lcall	_inic
                           000450  2010 	C$controleNivel.c$104$1$49 ==.
                                   2011 ;	controleNivel.c:104: TMOD=0x92;
      000524 75 89 92         [24] 2012 	mov	_TMOD,#0x92
                           000453  2013 	C$controleNivel.c$105$1$49 ==.
                                   2014 ;	controleNivel.c:105: IT1=1;
                                   2015 ;	assignBit
      000527 D2 8A            [12] 2016 	setb	_IT1
                           000455  2017 	C$controleNivel.c$106$1$49 ==.
                                   2018 ;	controleNivel.c:106: EX1=1;
                                   2019 ;	assignBit
      000529 D2 AA            [12] 2020 	setb	_EX1
                           000457  2021 	C$controleNivel.c$107$1$49 ==.
                                   2022 ;	controleNivel.c:107: P1_3=0;
                                   2023 ;	assignBit
      00052B C2 93            [12] 2024 	clr	_P1_3
                           000459  2025 	C$controleNivel.c$109$1$49 ==.
                                   2026 ;	controleNivel.c:109: wrLCD4(comand,0x80);
                                   2027 ;	assignBit
      00052D C2 0D            [12] 2028 	clr	_wrLCD4_PARM_1
      00052F 75 82 80         [24] 2029 	mov	dpl,#0x80
      000532 12 01 A4         [24] 2030 	lcall	_wrLCD4
                           000461  2031 	C$controleNivel.c$110$2$50 ==.
                                   2032 ;	controleNivel.c:110: for(i=0;i<12;i++){
      000535 7D 00            [12] 2033 	mov	r5,#0x00
      000537                       2034 00164$:
                           000463  2035 	C$controleNivel.c$111$3$51 ==.
                                   2036 ;	controleNivel.c:111: wrLCD4(letra, Tit1[i]);
      000537 ED               [12] 2037 	mov	a,r5
      000538 90 09 70         [24] 2038 	mov	dptr,#_Tit1
      00053B 93               [24] 2039 	movc	a,@a+dptr
      00053C FA               [12] 2040 	mov	r2,a
                                   2041 ;	assignBit
      00053D D2 0D            [12] 2042 	setb	_wrLCD4_PARM_1
      00053F 8A 82            [24] 2043 	mov	dpl,r2
      000541 C0 05            [24] 2044 	push	ar5
      000543 12 01 A4         [24] 2045 	lcall	_wrLCD4
      000546 D0 05            [24] 2046 	pop	ar5
                           000474  2047 	C$controleNivel.c$110$2$50 ==.
                                   2048 ;	controleNivel.c:110: for(i=0;i<12;i++){
      000548 0D               [12] 2049 	inc	r5
      000549 BD 0C 00         [24] 2050 	cjne	r5,#0x0c,00275$
      00054C                       2051 00275$:
      00054C 40 E9            [24] 2052 	jc	00164$
                           00047A  2053 	C$controleNivel.c$113$1$49 ==.
                                   2054 ;	controleNivel.c:113: wrLCD4(comand,0xC0);
                                   2055 ;	assignBit
      00054E C2 0D            [12] 2056 	clr	_wrLCD4_PARM_1
      000550 75 82 C0         [24] 2057 	mov	dpl,#0xc0
      000553 12 01 A4         [24] 2058 	lcall	_wrLCD4
                           000482  2059 	C$controleNivel.c$114$2$52 ==.
                                   2060 ;	controleNivel.c:114: for(i=0;i<12;i++){
      000556 7D 00            [12] 2061 	mov	r5,#0x00
      000558                       2062 00166$:
                           000484  2063 	C$controleNivel.c$115$3$53 ==.
                                   2064 ;	controleNivel.c:115: wrLCD4(letra, Tit2[i]);
      000558 ED               [12] 2065 	mov	a,r5
      000559 90 09 7D         [24] 2066 	mov	dptr,#_Tit2
      00055C 93               [24] 2067 	movc	a,@a+dptr
      00055D FA               [12] 2068 	mov	r2,a
                                   2069 ;	assignBit
      00055E D2 0D            [12] 2070 	setb	_wrLCD4_PARM_1
      000560 8A 82            [24] 2071 	mov	dpl,r2
      000562 C0 05            [24] 2072 	push	ar5
      000564 12 01 A4         [24] 2073 	lcall	_wrLCD4
      000567 D0 05            [24] 2074 	pop	ar5
                           000495  2075 	C$controleNivel.c$114$2$52 ==.
                                   2076 ;	controleNivel.c:114: for(i=0;i<12;i++){
      000569 0D               [12] 2077 	inc	r5
      00056A BD 0C 00         [24] 2078 	cjne	r5,#0x0c,00277$
      00056D                       2079 00277$:
      00056D 40 E9            [24] 2080 	jc	00166$
                           00049B  2081 	C$controleNivel.c$117$1$49 ==.
                                   2082 ;	controleNivel.c:117: wrLCD4(comand,0xC4);
                                   2083 ;	assignBit
      00056F C2 0D            [12] 2084 	clr	_wrLCD4_PARM_1
      000571 75 82 C4         [24] 2085 	mov	dpl,#0xc4
      000574 12 01 A4         [24] 2086 	lcall	_wrLCD4
                           0004A3  2087 	C$controleNivel.c$118$1$49 ==.
                                   2088 ;	controleNivel.c:118: wrLCD4(letra, setup);
                                   2089 ;	assignBit
      000577 D2 0D            [12] 2090 	setb	_wrLCD4_PARM_1
      000579 75 82 19         [24] 2091 	mov	dpl,#0x19
      00057C 12 01 A4         [24] 2092 	lcall	_wrLCD4
                           0004AB  2093 	C$controleNivel.c$119$1$49 ==.
                                   2094 ;	controleNivel.c:119: ajustPID();
      00057F 12 04 68         [24] 2095 	lcall	_ajustPID
                           0004AE  2096 	C$controleNivel.c$120$1$49 ==.
                                   2097 ;	controleNivel.c:120: while(1){
      000582                       2098 00162$:
                           0004AE  2099 	C$controleNivel.c$122$2$54 ==.
                                   2100 ;	controleNivel.c:122: if(S1==3){
      000582 74 03            [12] 2101 	mov	a,#0x03
      000584 B5 22 05         [24] 2102 	cjne	a,_S1,00104$
                           0004B3  2103 	C$controleNivel.c$123$3$55 ==.
                                   2104 ;	controleNivel.c:123: S1=0; setup++;
      000587 75 22 00         [24] 2105 	mov	_S1,#0x00
      00058A 05 68            [12] 2106 	inc	_main_setup_1_49
      00058C                       2107 00104$:
                           0004B8  2108 	C$controleNivel.c$125$2$54 ==.
                                   2109 ;	controleNivel.c:125: if(S2==3){
      00058C 74 03            [12] 2110 	mov	a,#0x03
      00058E B5 23 05         [24] 2111 	cjne	a,_S2,00106$
                           0004BD  2112 	C$controleNivel.c$126$3$56 ==.
                                   2113 ;	controleNivel.c:126: S2=0; setup--;
      000591 75 23 00         [24] 2114 	mov	_S2,#0x00
      000594 15 68            [12] 2115 	dec	_main_setup_1_49
      000596                       2116 00106$:
                           0004C2  2117 	C$controleNivel.c$128$2$54 ==.
                                   2118 ;	controleNivel.c:128: if((S1==2)&&(S2==2)){
      000596 74 02            [12] 2119 	mov	a,#0x02
      000598 B5 22 11         [24] 2120 	cjne	a,_S1,00108$
      00059B 74 02            [12] 2121 	mov	a,#0x02
      00059D B5 23 0C         [24] 2122 	cjne	a,_S2,00108$
                           0004CC  2123 	C$controleNivel.c$129$3$57 ==.
                                   2124 ;	controleNivel.c:129: S1=0; S2=0; tempo=0;
      0005A0 E4               [12] 2125 	clr	a
      0005A1 F5 22            [12] 2126 	mov	_S1,a
      0005A3 F5 23            [12] 2127 	mov	_S2,a
      0005A5 F5 71            [12] 2128 	mov	_main_tempo_1_49,a
      0005A7 F5 72            [12] 2129 	mov	(_main_tempo_1_49 + 1),a
                           0004D5  2130 	C$controleNivel.c$130$3$57 ==.
                                   2131 ;	controleNivel.c:130: ajustPID();
      0005A9 12 04 68         [24] 2132 	lcall	_ajustPID
      0005AC                       2133 00108$:
                           0004D8  2134 	C$controleNivel.c$133$2$54 ==.
                                   2135 ;	controleNivel.c:133: char2LCD(0xCC, tempC, 3);
      0005AC 85 69 56         [24] 2136 	mov	_char2LCD_PARM_2,_main_tempC_1_49
      0005AF 75 57 03         [24] 2137 	mov	_char2LCD_PARM_3,#0x03
      0005B2 75 82 CC         [24] 2138 	mov	dpl,#0xcc
      0005B5 12 01 CA         [24] 2139 	lcall	_char2LCD
                           0004E4  2140 	C$controleNivel.c$135$2$54 ==.
                                   2141 ;	controleNivel.c:135: if(!sensor){
      0005B8 30 0E 03         [24] 2142 	jnb	_sensor,00287$
      0005BB 02 06 F7         [24] 2143 	ljmp	00144$
      0005BE                       2144 00287$:
                           0004EA  2145 	C$controleNivel.c$136$3$58 ==.
                                   2146 ;	controleNivel.c:136: if(RxFlag){ RxFlag=0;
                                   2147 ;	assignBit
      0005BE 10 04 02         [24] 2148 	jbc	_RxFlag,00288$
      0005C1 80 02            [24] 2149 	sjmp	00111$
      0005C3                       2150 00288$:
                           0004EF  2151 	C$controleNivel.c$137$4$59 ==.
                                   2152 ;	controleNivel.c:137: contSetup++;
      0005C3 05 73            [12] 2153 	inc	_main_contSetup_1_49
      0005C5                       2154 00111$:
                           0004F1  2155 	C$controleNivel.c$140$3$58 ==.
                                   2156 ;	controleNivel.c:140: if(TxFlag){
      0005C5 20 05 03         [24] 2157 	jb	_TxFlag,00289$
      0005C8 02 06 F7         [24] 2158 	ljmp	00144$
      0005CB                       2159 00289$:
                           0004F7  2160 	C$controleNivel.c$142$4$60 ==.
                                   2161 ;	controleNivel.c:142: if(RxByte == 102){  /* Letra f */
      0005CB 74 66            [12] 2162 	mov	a,#0x66
      0005CD B5 2B 16         [24] 2163 	cjne	a,_RxByte,00113$
                           0004FC  2164 	C$controleNivel.c$143$5$61 ==.
                                   2165 ;	controleNivel.c:143: wrLCD4(comand,0xCF);
                                   2166 ;	assignBit
      0005D0 C2 0D            [12] 2167 	clr	_wrLCD4_PARM_1
      0005D2 75 82 CF         [24] 2168 	mov	dpl,#0xcf
      0005D5 12 01 A4         [24] 2169 	lcall	_wrLCD4
                           000504  2170 	C$controleNivel.c$144$5$61 ==.
                                   2171 ;	controleNivel.c:144: wrLCD4(letra, 'F');
                                   2172 ;	assignBit
      0005D8 D2 0D            [12] 2173 	setb	_wrLCD4_PARM_1
      0005DA 75 82 46         [24] 2174 	mov	dpl,#0x46
      0005DD 12 01 A4         [24] 2175 	lcall	_wrLCD4
                           00050C  2176 	C$controleNivel.c$145$5$61 ==.
                                   2177 ;	controleNivel.c:145: malha=1;
      0005E0 75 67 01         [24] 2178 	mov	_malha,#0x01
                           00050F  2179 	C$controleNivel.c$146$5$61 ==.
                                   2180 ;	controleNivel.c:146: contSetup=0;
      0005E3 75 73 00         [24] 2181 	mov	_main_contSetup_1_49,#0x00
      0005E6                       2182 00113$:
                           000512  2183 	C$controleNivel.c$148$4$60 ==.
                                   2184 ;	controleNivel.c:148: if(RxByte == 97){  /* Letra a */
      0005E6 74 61            [12] 2185 	mov	a,#0x61
      0005E8 B5 2B 16         [24] 2186 	cjne	a,_RxByte,00115$
                           000517  2187 	C$controleNivel.c$149$5$62 ==.
                                   2188 ;	controleNivel.c:149: wrLCD4(comand,0xCF);
                                   2189 ;	assignBit
      0005EB C2 0D            [12] 2190 	clr	_wrLCD4_PARM_1
      0005ED 75 82 CF         [24] 2191 	mov	dpl,#0xcf
      0005F0 12 01 A4         [24] 2192 	lcall	_wrLCD4
                           00051F  2193 	C$controleNivel.c$150$5$62 ==.
                                   2194 ;	controleNivel.c:150: wrLCD4(letra, 'A');
                                   2195 ;	assignBit
      0005F3 D2 0D            [12] 2196 	setb	_wrLCD4_PARM_1
      0005F5 75 82 41         [24] 2197 	mov	dpl,#0x41
      0005F8 12 01 A4         [24] 2198 	lcall	_wrLCD4
                           000527  2199 	C$controleNivel.c$151$5$62 ==.
                                   2200 ;	controleNivel.c:151: malha=0;
      0005FB 75 67 00         [24] 2201 	mov	_malha,#0x00
                           00052A  2202 	C$controleNivel.c$152$5$62 ==.
                                   2203 ;	controleNivel.c:152: contSetup=0;
      0005FE 75 73 00         [24] 2204 	mov	_main_contSetup_1_49,#0x00
      000601                       2205 00115$:
                           00052D  2206 	C$controleNivel.c$156$4$60 ==.
                                   2207 ;	controleNivel.c:156: if(RxByte == 32 || RxByte == 112 || RxByte == 105 || RxByte == 100 || RxByte == 109){
      000601 74 20            [12] 2208 	mov	a,#0x20
      000603 B5 2B 02         [24] 2209 	cjne	a,_RxByte,00294$
      000606 80 1F            [24] 2210 	sjmp	00134$
      000608                       2211 00294$:
      000608 74 70            [12] 2212 	mov	a,#0x70
      00060A B5 2B 02         [24] 2213 	cjne	a,_RxByte,00295$
      00060D 80 18            [24] 2214 	sjmp	00134$
      00060F                       2215 00295$:
      00060F 74 69            [12] 2216 	mov	a,#0x69
      000611 B5 2B 02         [24] 2217 	cjne	a,_RxByte,00296$
      000614 80 11            [24] 2218 	sjmp	00134$
      000616                       2219 00296$:
      000616 74 64            [12] 2220 	mov	a,#0x64
      000618 B5 2B 02         [24] 2221 	cjne	a,_RxByte,00297$
      00061B 80 0A            [24] 2222 	sjmp	00134$
      00061D                       2223 00297$:
      00061D 74 6D            [12] 2224 	mov	a,#0x6d
      00061F B5 2B 02         [24] 2225 	cjne	a,_RxByte,00298$
      000622 80 03            [24] 2226 	sjmp	00299$
      000624                       2227 00298$:
      000624 02 06 EF         [24] 2228 	ljmp	00135$
      000627                       2229 00299$:
      000627                       2230 00134$:
                           000553  2231 	C$controleNivel.c$158$5$63 ==.
                                   2232 ;	controleNivel.c:158: if(contSetup-1 == 1){
      000627 AA 73            [24] 2233 	mov	r2,_main_contSetup_1_49
      000629 7D 00            [12] 2234 	mov	r5,#0x00
      00062B EA               [12] 2235 	mov	a,r2
      00062C 24 FF            [12] 2236 	add	a,#0xff
      00062E FC               [12] 2237 	mov	r4,a
      00062F ED               [12] 2238 	mov	a,r5
      000630 34 FF            [12] 2239 	addc	a,#0xff
      000632 FE               [12] 2240 	mov	r6,a
      000633 BC 01 0B         [24] 2241 	cjne	r4,#0x01,00122$
      000636 BE 00 08         [24] 2242 	cjne	r6,#0x00,00122$
                           000565  2243 	C$controleNivel.c$159$6$64 ==.
                                   2244 ;	controleNivel.c:159: number = setupR[0]-48;
      000639 E5 74            [12] 2245 	mov	a,_main_setupR_1_49
      00063B 24 D0            [12] 2246 	add	a,#0xd0
      00063D F5 77            [12] 2247 	mov	_main_number_1_49,a
      00063F 80 45            [24] 2248 	sjmp	00123$
      000641                       2249 00122$:
                           00056D  2250 	C$controleNivel.c$160$5$63 ==.
                                   2251 ;	controleNivel.c:160: }else if(contSetup-1 == 2){
      000641 EA               [12] 2252 	mov	a,r2
      000642 24 FF            [12] 2253 	add	a,#0xff
      000644 FC               [12] 2254 	mov	r4,a
      000645 ED               [12] 2255 	mov	a,r5
      000646 34 FF            [12] 2256 	addc	a,#0xff
      000648 FE               [12] 2257 	mov	r6,a
      000649 BC 02 15         [24] 2258 	cjne	r4,#0x02,00119$
      00064C BE 00 12         [24] 2259 	cjne	r6,#0x00,00119$
                           00057B  2260 	C$controleNivel.c$161$6$65 ==.
                                   2261 ;	controleNivel.c:161: number = ((setupR[0]-48)*10)+(setupR[1]-48);
      00064F E5 74            [12] 2262 	mov	a,_main_setupR_1_49
      000651 24 D0            [12] 2263 	add	a,#0xd0
      000653 75 F0 0A         [24] 2264 	mov	b,#0x0a
      000656 A4               [48] 2265 	mul	ab
      000657 FE               [12] 2266 	mov	r6,a
      000658 E5 75            [12] 2267 	mov	a,(_main_setupR_1_49 + 0x0001)
      00065A 24 D0            [12] 2268 	add	a,#0xd0
      00065C 2E               [12] 2269 	add	a,r6
      00065D F5 77            [12] 2270 	mov	_main_number_1_49,a
      00065F 80 25            [24] 2271 	sjmp	00123$
      000661                       2272 00119$:
                           00058D  2273 	C$controleNivel.c$163$5$63 ==.
                                   2274 ;	controleNivel.c:163: }else if(contSetup-1 == 3){
      000661 1A               [12] 2275 	dec	r2
      000662 BA FF 01         [24] 2276 	cjne	r2,#0xff,00304$
      000665 1D               [12] 2277 	dec	r5
      000666                       2278 00304$:
      000666 BA 03 1D         [24] 2279 	cjne	r2,#0x03,00123$
      000669 BD 00 1A         [24] 2280 	cjne	r5,#0x00,00123$
                           000598  2281 	C$controleNivel.c$164$6$66 ==.
                                   2282 ;	controleNivel.c:164: number = ((setupR[0]-48)*100)+((setupR[1]-48)*10)+((setupR[2]-48));
      00066C E5 74            [12] 2283 	mov	a,_main_setupR_1_49
      00066E 24 D0            [12] 2284 	add	a,#0xd0
      000670 75 F0 64         [24] 2285 	mov	b,#0x64
      000673 A4               [48] 2286 	mul	ab
      000674 FE               [12] 2287 	mov	r6,a
      000675 E5 75            [12] 2288 	mov	a,(_main_setupR_1_49 + 0x0001)
      000677 24 D0            [12] 2289 	add	a,#0xd0
      000679 75 F0 0A         [24] 2290 	mov	b,#0x0a
      00067C A4               [48] 2291 	mul	ab
      00067D 2E               [12] 2292 	add	a,r6
      00067E FE               [12] 2293 	mov	r6,a
      00067F E5 76            [12] 2294 	mov	a,(_main_setupR_1_49 + 0x0002)
      000681 24 D0            [12] 2295 	add	a,#0xd0
      000683 2E               [12] 2296 	add	a,r6
      000684 F5 77            [12] 2297 	mov	_main_number_1_49,a
      000686                       2298 00123$:
                           0005B2  2299 	C$controleNivel.c$166$5$63 ==.
                                   2300 ;	controleNivel.c:166: if(RxByte == 109){ /* Se Rxbyte == m */
      000686 74 6D            [12] 2301 	mov	a,#0x6d
      000688 B5 2B 06         [24] 2302 	cjne	a,_RxByte,00125$
                           0005B7  2303 	C$controleNivel.c$167$6$67 ==.
                                   2304 ;	controleNivel.c:167: pwm = number;
      00068B 85 77 66         [24] 2305 	mov	_pwm,_main_number_1_49
                           0005BA  2306 	C$controleNivel.c$168$6$67 ==.
                                   2307 ;	controleNivel.c:168: contSetup = 0;
      00068E 75 73 00         [24] 2308 	mov	_main_contSetup_1_49,#0x00
      000691                       2309 00125$:
                           0005BD  2310 	C$controleNivel.c$170$5$63 ==.
                                   2311 ;	controleNivel.c:170: if(RxByte == 32){ /* Se RxByte == espaÃ§o */
      000691 74 20            [12] 2312 	mov	a,#0x20
      000693 B5 2B 12         [24] 2313 	cjne	a,_RxByte,00127$
                           0005C2  2314 	C$controleNivel.c$171$6$68 ==.
                                   2315 ;	controleNivel.c:171: setup = number;
      000696 85 77 68         [24] 2316 	mov	_main_setup_1_49,_main_number_1_49
                           0005C5  2317 	C$controleNivel.c$172$6$68 ==.
                                   2318 ;	controleNivel.c:172: contSetup = 0;
      000699 75 73 00         [24] 2319 	mov	_main_contSetup_1_49,#0x00
                           0005C8  2320 	C$controleNivel.c$173$6$68 ==.
                                   2321 ;	controleNivel.c:173: char2LCD(0xC4, setup, 3);
      00069C 85 77 56         [24] 2322 	mov	_char2LCD_PARM_2,_main_number_1_49
      00069F 75 57 03         [24] 2323 	mov	_char2LCD_PARM_3,#0x03
      0006A2 75 82 C4         [24] 2324 	mov	dpl,#0xc4
      0006A5 12 01 CA         [24] 2325 	lcall	_char2LCD
      0006A8                       2326 00127$:
                           0005D4  2327 	C$controleNivel.c$175$5$63 ==.
                                   2328 ;	controleNivel.c:175: if(RxByte == 112 ){ /* Se RxByte == p */
      0006A8 74 70            [12] 2329 	mov	a,#0x70
      0006AA B5 2B 12         [24] 2330 	cjne	a,_RxByte,00129$
                           0005D9  2331 	C$controleNivel.c$176$6$69 ==.
                                   2332 ;	controleNivel.c:176: pid[0] = number;
      0006AD 85 77 63         [24] 2333 	mov	_pid,_main_number_1_49
                           0005DC  2334 	C$controleNivel.c$177$6$69 ==.
                                   2335 ;	controleNivel.c:177: contSetup = 0;
      0006B0 75 73 00         [24] 2336 	mov	_main_contSetup_1_49,#0x00
                           0005DF  2337 	C$controleNivel.c$178$6$69 ==.
                                   2338 ;	controleNivel.c:178: char2LCD(0x81, pid[0], 2);
      0006B3 85 77 56         [24] 2339 	mov	_char2LCD_PARM_2,_main_number_1_49
      0006B6 75 57 02         [24] 2340 	mov	_char2LCD_PARM_3,#0x02
      0006B9 75 82 81         [24] 2341 	mov	dpl,#0x81
      0006BC 12 01 CA         [24] 2342 	lcall	_char2LCD
      0006BF                       2343 00129$:
                           0005EB  2344 	C$controleNivel.c$180$5$63 ==.
                                   2345 ;	controleNivel.c:180: if(RxByte == 105){ /* Se RxByte == i */
      0006BF 74 69            [12] 2346 	mov	a,#0x69
      0006C1 B5 2B 12         [24] 2347 	cjne	a,_RxByte,00131$
                           0005F0  2348 	C$controleNivel.c$181$6$70 ==.
                                   2349 ;	controleNivel.c:181: pid[1] = number;
      0006C4 85 77 64         [24] 2350 	mov	(_pid + 0x0001),_main_number_1_49
                           0005F3  2351 	C$controleNivel.c$182$6$70 ==.
                                   2352 ;	controleNivel.c:182: contSetup = 0;
      0006C7 75 73 00         [24] 2353 	mov	_main_contSetup_1_49,#0x00
                           0005F6  2354 	C$controleNivel.c$183$6$70 ==.
                                   2355 ;	controleNivel.c:183: char2LCD(0x86, pid[1], 2);
      0006CA 85 77 56         [24] 2356 	mov	_char2LCD_PARM_2,_main_number_1_49
      0006CD 75 57 02         [24] 2357 	mov	_char2LCD_PARM_3,#0x02
      0006D0 75 82 86         [24] 2358 	mov	dpl,#0x86
      0006D3 12 01 CA         [24] 2359 	lcall	_char2LCD
      0006D6                       2360 00131$:
                           000602  2361 	C$controleNivel.c$185$5$63 ==.
                                   2362 ;	controleNivel.c:185: if(RxByte == 100){ /* Se RxByte == d */
      0006D6 74 64            [12] 2363 	mov	a,#0x64
      0006D8 B5 2B 1C         [24] 2364 	cjne	a,_RxByte,00144$
                           000607  2365 	C$controleNivel.c$186$6$71 ==.
                                   2366 ;	controleNivel.c:186: pid[2] = number;
      0006DB 85 77 65         [24] 2367 	mov	(_pid + 0x0002),_main_number_1_49
                           00060A  2368 	C$controleNivel.c$187$6$71 ==.
                                   2369 ;	controleNivel.c:187: contSetup = 0;
      0006DE 75 73 00         [24] 2370 	mov	_main_contSetup_1_49,#0x00
                           00060D  2371 	C$controleNivel.c$188$6$71 ==.
                                   2372 ;	controleNivel.c:188: char2LCD(0x8B, pid[2], 2);
      0006E1 85 77 56         [24] 2373 	mov	_char2LCD_PARM_2,_main_number_1_49
      0006E4 75 57 02         [24] 2374 	mov	_char2LCD_PARM_3,#0x02
      0006E7 75 82 8B         [24] 2375 	mov	dpl,#0x8b
      0006EA 12 01 CA         [24] 2376 	lcall	_char2LCD
      0006ED 80 08            [24] 2377 	sjmp	00144$
      0006EF                       2378 00135$:
                           00061B  2379 	C$controleNivel.c$191$5$72 ==.
                                   2380 ;	controleNivel.c:191: setupR[contSetup-1] = RxByte;
      0006EF E5 73            [12] 2381 	mov	a,_main_contSetup_1_49
      0006F1 14               [12] 2382 	dec	a
      0006F2 24 74            [12] 2383 	add	a,#_main_setupR_1_49
      0006F4 F8               [12] 2384 	mov	r0,a
      0006F5 A6 2B            [24] 2385 	mov	@r0,_RxByte
      0006F7                       2386 00144$:
                           000623  2387 	C$controleNivel.c$196$2$54 ==.
                                   2388 ;	controleNivel.c:196: if(malha == 0){
      0006F7 E5 67            [12] 2389 	mov	a,_malha
                           000625  2390 	C$controleNivel.c$197$3$73 ==.
                                   2391 ;	controleNivel.c:197: char2Ser(0,pwm,3);
      0006F9 70 26            [24] 2392 	jnz	00146$
      0006FB 85 66 5B         [24] 2393 	mov	_char2Ser_PARM_2,_pwm
      0006FE 75 5C 03         [24] 2394 	mov	_char2Ser_PARM_3,#0x03
      000701 F5 82            [12] 2395 	mov	dpl,a
      000703 12 03 B4         [24] 2396 	lcall	_char2Ser
                           000632  2397 	C$controleNivel.c$198$3$73 ==.
                                   2398 ;	controleNivel.c:198: char2Ser(2,tempC,3);
      000706 85 69 5B         [24] 2399 	mov	_char2Ser_PARM_2,_main_tempC_1_49
      000709 75 5C 03         [24] 2400 	mov	_char2Ser_PARM_3,#0x03
      00070C 75 82 02         [24] 2401 	mov	dpl,#0x02
      00070F 12 03 B4         [24] 2402 	lcall	_char2Ser
                           00063E  2403 	C$controleNivel.c$199$3$73 ==.
                                   2404 ;	controleNivel.c:199: int2Ser(2, tempo,5);
      000712 85 71 5D         [24] 2405 	mov	_int2Ser_PARM_2,_main_tempo_1_49
      000715 85 72 5E         [24] 2406 	mov	(_int2Ser_PARM_2 + 1),(_main_tempo_1_49 + 1)
      000718 75 5F 05         [24] 2407 	mov	_int2Ser_PARM_3,#0x05
      00071B 75 82 02         [24] 2408 	mov	dpl,#0x02
      00071E 12 03 D8         [24] 2409 	lcall	_int2Ser
      000721                       2410 00146$:
                           00064D  2411 	C$controleNivel.c$201$2$54 ==.
                                   2412 ;	controleNivel.c:201: if(malha == 1){
      000721 74 01            [12] 2413 	mov	a,#0x01
      000723 B5 67 42         [24] 2414 	cjne	a,_malha,00149$
                           000652  2415 	C$controleNivel.c$202$3$74 ==.
                                   2416 ;	controleNivel.c:202: char2Ser(0,errAt,3);
      000726 85 6A 5B         [24] 2417 	mov	_char2Ser_PARM_2,_main_errAt_1_49
      000729 75 5C 03         [24] 2418 	mov	_char2Ser_PARM_3,#0x03
      00072C 75 82 00         [24] 2419 	mov	dpl,#0x00
      00072F 12 03 B4         [24] 2420 	lcall	_char2Ser
                           00065E  2421 	C$controleNivel.c$203$3$74 ==.
                                   2422 ;	controleNivel.c:203: int2Ser(2,ctrlAt,5);
      000732 85 6B 5D         [24] 2423 	mov	_int2Ser_PARM_2,_main_ctrlAt_1_49
      000735 85 6C 5E         [24] 2424 	mov	(_int2Ser_PARM_2 + 1),(_main_ctrlAt_1_49 + 1)
      000738 75 5F 05         [24] 2425 	mov	_int2Ser_PARM_3,#0x05
      00073B 75 82 02         [24] 2426 	mov	dpl,#0x02
      00073E 12 03 D8         [24] 2427 	lcall	_int2Ser
                           00066D  2428 	C$controleNivel.c$204$3$74 ==.
                                   2429 ;	controleNivel.c:204: char2Ser(2,pwm,3);
      000741 85 66 5B         [24] 2430 	mov	_char2Ser_PARM_2,_pwm
      000744 75 5C 03         [24] 2431 	mov	_char2Ser_PARM_3,#0x03
      000747 75 82 02         [24] 2432 	mov	dpl,#0x02
      00074A 12 03 B4         [24] 2433 	lcall	_char2Ser
                           000679  2434 	C$controleNivel.c$205$3$74 ==.
                                   2435 ;	controleNivel.c:205: char2Ser(2,tempC,3);
      00074D 85 69 5B         [24] 2436 	mov	_char2Ser_PARM_2,_main_tempC_1_49
      000750 75 5C 03         [24] 2437 	mov	_char2Ser_PARM_3,#0x03
      000753 75 82 02         [24] 2438 	mov	dpl,#0x02
      000756 12 03 B4         [24] 2439 	lcall	_char2Ser
                           000685  2440 	C$controleNivel.c$206$3$74 ==.
                                   2441 ;	controleNivel.c:206: int2Ser(2, tempo,5);
      000759 85 71 5D         [24] 2442 	mov	_int2Ser_PARM_2,_main_tempo_1_49
      00075C 85 72 5E         [24] 2443 	mov	(_int2Ser_PARM_2 + 1),(_main_tempo_1_49 + 1)
      00075F 75 5F 05         [24] 2444 	mov	_int2Ser_PARM_3,#0x05
      000762 75 82 02         [24] 2445 	mov	dpl,#0x02
      000765 12 03 D8         [24] 2446 	lcall	_int2Ser
                           000694  2447 	C$controleNivel.c$208$2$54 ==.
                                   2448 ;	controleNivel.c:208: while(!TxFlag); TxFlag=0;
      000768                       2449 00149$:
                                   2450 ;	assignBit
      000768 10 05 02         [24] 2451 	jbc	_TxFlag,00320$
      00076B 80 FB            [24] 2452 	sjmp	00149$
      00076D                       2453 00320$:
                           000699  2454 	C$controleNivel.c$209$2$54 ==.
                                   2455 ;	controleNivel.c:209: SBUF=13;
      00076D 75 99 0D         [24] 2456 	mov	_SBUF,#0x0d
                           00069C  2457 	C$controleNivel.c$210$2$54 ==.
                                   2458 ;	controleNivel.c:210: sensor=0;
                                   2459 ;	assignBit
      000770 C2 0E            [12] 2460 	clr	_sensor
                           00069E  2461 	C$controleNivel.c$211$1$49 ==.
                                   2462 ;	controleNivel.c:211: tempC=Echo/58;
      000772 75 08 3A         [24] 2463 	mov	__divuint_PARM_2,#0x3a
      000775 75 09 00         [24] 2464 	mov	(__divuint_PARM_2 + 1),#0x00
      000778 85 60 82         [24] 2465 	mov	dpl,_Echo
      00077B 85 61 83         [24] 2466 	mov	dph,(_Echo + 1)
      00077E 12 08 9D         [24] 2467 	lcall	__divuint
      000781 AD 82            [24] 2468 	mov	r5,dpl
      000783 8D 69            [24] 2469 	mov	_main_tempC_1_49,r5
                           0006B1  2470 	C$controleNivel.c$213$2$54 ==.
                                   2471 ;	controleNivel.c:213: tempD=30-tempC;
      000785 74 1E            [12] 2472 	mov	a,#0x1e
      000787 C3               [12] 2473 	clr	c
      000788 95 69            [12] 2474 	subb	a,_main_tempC_1_49
      00078A FE               [12] 2475 	mov	r6,a
                           0006B7  2476 	C$controleNivel.c$215$2$54 ==.
                                   2477 ;	controleNivel.c:215: if(malha == 1){
      00078B 74 01            [12] 2478 	mov	a,#0x01
      00078D B5 67 02         [24] 2479 	cjne	a,_malha,00321$
      000790 80 03            [24] 2480 	sjmp	00322$
      000792                       2481 00321$:
      000792 02 08 8C         [24] 2482 	ljmp	00158$
      000795                       2483 00322$:
                           0006C1  2484 	C$controleNivel.c$217$3$75 ==.
                                   2485 ;	controleNivel.c:217: erAnt=errAt;
      000795 AD 6A            [24] 2486 	mov	r5,_main_errAt_1_49
                           0006C3  2487 	C$controleNivel.c$218$3$75 ==.
                                   2488 ;	controleNivel.c:218: errAt=setup-tempD;
      000797 E5 68            [12] 2489 	mov	a,_main_setup_1_49
      000799 C3               [12] 2490 	clr	c
      00079A 9E               [12] 2491 	subb	a,r6
                           0006C7  2492 	C$controleNivel.c$220$3$75 ==.
                                   2493 ;	controleNivel.c:220: P=errAt; I=erAnt; D=errAt-erAnt;
      00079B F5 6A            [12] 2494 	mov	_main_errAt_1_49,a
      00079D 85 6A 6D         [24] 2495 	mov	_main_P_1_49,_main_errAt_1_49
      0007A0 33               [12] 2496 	rlc	a
      0007A1 95 E0            [12] 2497 	subb	a,acc
      0007A3 F5 6E            [12] 2498 	mov	(_main_P_1_49 + 1),a
      0007A5 AA 6D            [24] 2499 	mov	r2,_main_P_1_49
      0007A7 AB 6E            [24] 2500 	mov	r3,(_main_P_1_49 + 1)
      0007A9 ED               [12] 2501 	mov	a,r5
      0007AA F5 6F            [12] 2502 	mov	_main_I_1_49,a
      0007AC 33               [12] 2503 	rlc	a
      0007AD 95 E0            [12] 2504 	subb	a,acc
      0007AF F5 70            [12] 2505 	mov	(_main_I_1_49 + 1),a
      0007B1 AE 6F            [24] 2506 	mov	r6,_main_I_1_49
      0007B3 AC 70            [24] 2507 	mov	r4,(_main_I_1_49 + 1)
      0007B5 E5 6D            [12] 2508 	mov	a,_main_P_1_49
      0007B7 C3               [12] 2509 	clr	c
      0007B8 95 6F            [12] 2510 	subb	a,_main_I_1_49
      0007BA FD               [12] 2511 	mov	r5,a
      0007BB E5 6E            [12] 2512 	mov	a,(_main_P_1_49 + 1)
      0007BD 95 70            [12] 2513 	subb	a,(_main_I_1_49 + 1)
      0007BF FF               [12] 2514 	mov	r7,a
                           0006EC  2515 	C$controleNivel.c$221$3$75 ==.
                                   2516 ;	controleNivel.c:221: P=(P*pid[0])/10; I=(I*pid[1])/10; D=(D*pid[2])/10;
      0007C0 85 63 08         [24] 2517 	mov	__mulint_PARM_2,_pid
      0007C3 75 09 00         [24] 2518 	mov	(__mulint_PARM_2 + 1),#0x00
      0007C6 8A 82            [24] 2519 	mov	dpl,r2
      0007C8 8B 83            [24] 2520 	mov	dph,r3
      0007CA C0 07            [24] 2521 	push	ar7
      0007CC C0 06            [24] 2522 	push	ar6
      0007CE C0 05            [24] 2523 	push	ar5
      0007D0 C0 04            [24] 2524 	push	ar4
      0007D2 12 08 C6         [24] 2525 	lcall	__mulint
      0007D5 75 08 0A         [24] 2526 	mov	__divsint_PARM_2,#0x0a
      0007D8 75 09 00         [24] 2527 	mov	(__divsint_PARM_2 + 1),#0x00
      0007DB 12 09 30         [24] 2528 	lcall	__divsint
      0007DE AA 82            [24] 2529 	mov	r2,dpl
      0007E0 AB 83            [24] 2530 	mov	r3,dph
      0007E2 D0 04            [24] 2531 	pop	ar4
      0007E4 D0 05            [24] 2532 	pop	ar5
      0007E6 D0 06            [24] 2533 	pop	ar6
      0007E8 85 64 08         [24] 2534 	mov	__mulint_PARM_2,(_pid + 0x0001)
      0007EB 75 09 00         [24] 2535 	mov	(__mulint_PARM_2 + 1),#0x00
      0007EE 8E 82            [24] 2536 	mov	dpl,r6
      0007F0 8C 83            [24] 2537 	mov	dph,r4
      0007F2 C0 05            [24] 2538 	push	ar5
      0007F4 C0 03            [24] 2539 	push	ar3
      0007F6 C0 02            [24] 2540 	push	ar2
      0007F8 12 08 C6         [24] 2541 	lcall	__mulint
      0007FB 75 08 0A         [24] 2542 	mov	__divsint_PARM_2,#0x0a
      0007FE 75 09 00         [24] 2543 	mov	(__divsint_PARM_2 + 1),#0x00
      000801 12 09 30         [24] 2544 	lcall	__divsint
      000804 AE 82            [24] 2545 	mov	r6,dpl
      000806 AC 83            [24] 2546 	mov	r4,dph
      000808 D0 02            [24] 2547 	pop	ar2
      00080A D0 03            [24] 2548 	pop	ar3
      00080C D0 05            [24] 2549 	pop	ar5
      00080E D0 07            [24] 2550 	pop	ar7
      000810 85 65 08         [24] 2551 	mov	__mulint_PARM_2,(_pid + 0x0002)
      000813 75 09 00         [24] 2552 	mov	(__mulint_PARM_2 + 1),#0x00
      000816 8D 82            [24] 2553 	mov	dpl,r5
      000818 8F 83            [24] 2554 	mov	dph,r7
      00081A C0 06            [24] 2555 	push	ar6
      00081C C0 04            [24] 2556 	push	ar4
      00081E C0 03            [24] 2557 	push	ar3
      000820 C0 02            [24] 2558 	push	ar2
      000822 12 08 C6         [24] 2559 	lcall	__mulint
      000825 75 08 0A         [24] 2560 	mov	__divsint_PARM_2,#0x0a
      000828 75 09 00         [24] 2561 	mov	(__divsint_PARM_2 + 1),#0x00
      00082B 12 09 30         [24] 2562 	lcall	__divsint
      00082E AD 82            [24] 2563 	mov	r5,dpl
      000830 AF 83            [24] 2564 	mov	r7,dph
      000832 D0 02            [24] 2565 	pop	ar2
      000834 D0 03            [24] 2566 	pop	ar3
      000836 D0 04            [24] 2567 	pop	ar4
      000838 D0 06            [24] 2568 	pop	ar6
                           000766  2569 	C$controleNivel.c$223$3$75 ==.
                                   2570 ;	controleNivel.c:223: ctrlAt=ctlAnt+P+I+D;
      00083A EA               [12] 2571 	mov	a,r2
      00083B 25 6B            [12] 2572 	add	a,_main_ctrlAt_1_49
      00083D FA               [12] 2573 	mov	r2,a
      00083E EB               [12] 2574 	mov	a,r3
      00083F 35 6C            [12] 2575 	addc	a,(_main_ctrlAt_1_49 + 1)
      000841 FB               [12] 2576 	mov	r3,a
      000842 EE               [12] 2577 	mov	a,r6
      000843 2A               [12] 2578 	add	a,r2
      000844 FE               [12] 2579 	mov	r6,a
      000845 EC               [12] 2580 	mov	a,r4
      000846 3B               [12] 2581 	addc	a,r3
      000847 FC               [12] 2582 	mov	r4,a
      000848 ED               [12] 2583 	mov	a,r5
      000849 2E               [12] 2584 	add	a,r6
      00084A F5 6B            [12] 2585 	mov	_main_ctrlAt_1_49,a
      00084C EF               [12] 2586 	mov	a,r7
      00084D 3C               [12] 2587 	addc	a,r4
      00084E F5 6C            [12] 2588 	mov	(_main_ctrlAt_1_49 + 1),a
                           00077C  2589 	C$controleNivel.c$224$3$75 ==.
                                   2590 ;	controleNivel.c:224: if(ctrlAt>255) ctrlAt=255;
      000850 C3               [12] 2591 	clr	c
      000851 74 FF            [12] 2592 	mov	a,#0xff
      000853 95 6B            [12] 2593 	subb	a,_main_ctrlAt_1_49
      000855 74 80            [12] 2594 	mov	a,#(0x00 ^ 0x80)
      000857 85 6C F0         [24] 2595 	mov	b,(_main_ctrlAt_1_49 + 1)
      00085A 63 F0 80         [24] 2596 	xrl	b,#0x80
      00085D 95 F0            [12] 2597 	subb	a,b
      00085F 50 06            [24] 2598 	jnc	00153$
      000861 75 6B FF         [24] 2599 	mov	_main_ctrlAt_1_49,#0xff
      000864 75 6C 00         [24] 2600 	mov	(_main_ctrlAt_1_49 + 1),#0x00
      000867                       2601 00153$:
                           000793  2602 	C$controleNivel.c$225$3$75 ==.
                                   2603 ;	controleNivel.c:225: if(ctrlAt<0) ctrlAt=0;
      000867 E5 6C            [12] 2604 	mov	a,(_main_ctrlAt_1_49 + 1)
      000869 30 E7 05         [24] 2605 	jnb	acc.7,00155$
      00086C E4               [12] 2606 	clr	a
      00086D F5 6B            [12] 2607 	mov	_main_ctrlAt_1_49,a
      00086F F5 6C            [12] 2608 	mov	(_main_ctrlAt_1_49 + 1),a
      000871                       2609 00155$:
                           00079D  2610 	C$controleNivel.c$226$1$49 ==.
                                   2611 ;	controleNivel.c:226: pwm=ctrlAt*199/255;
      000871 85 6B 08         [24] 2612 	mov	__mulint_PARM_2,_main_ctrlAt_1_49
      000874 85 6C 09         [24] 2613 	mov	(__mulint_PARM_2 + 1),(_main_ctrlAt_1_49 + 1)
      000877 90 00 C7         [24] 2614 	mov	dptr,#0x00c7
      00087A 12 08 C6         [24] 2615 	lcall	__mulint
      00087D 75 08 FF         [24] 2616 	mov	__divsint_PARM_2,#0xff
      000880 75 09 00         [24] 2617 	mov	(__divsint_PARM_2 + 1),#0x00
      000883 12 09 30         [24] 2618 	lcall	__divsint
      000886 AE 82            [24] 2619 	mov	r6,dpl
      000888 AF 83            [24] 2620 	mov	r7,dph
      00088A 8E 66            [24] 2621 	mov	_pwm,r6
                           0007B8  2622 	C$controleNivel.c$229$2$54 ==.
                                   2623 ;	controleNivel.c:229: while(!umSeg); umSeg=0; tempo++;
      00088C                       2624 00158$:
                                   2625 ;	assignBit
      00088C 10 00 02         [24] 2626 	jbc	_umSeg,00325$
      00088F 80 FB            [24] 2627 	sjmp	00158$
      000891                       2628 00325$:
      000891 05 71            [12] 2629 	inc	_main_tempo_1_49
      000893 E4               [12] 2630 	clr	a
      000894 B5 71 02         [24] 2631 	cjne	a,_main_tempo_1_49,00326$
      000897 05 72            [12] 2632 	inc	(_main_tempo_1_49 + 1)
      000899                       2633 00326$:
      000899 02 05 82         [24] 2634 	ljmp	00162$
                           0007C8  2635 	C$controleNivel.c$233$1$49 ==.
                           0007C8  2636 	XG$main$0$0 ==.
      00089C 22               [24] 2637 	ret
                                   2638 	.area CSEG    (CODE)
                                   2639 	.area CONST   (CODE)
                           000000  2640 G$setLCD4$0$0 == .
      00096C                       2641 _setLCD4:
      00096C 28                    2642 	.db #0x28	; 40
      00096D 06                    2643 	.db #0x06	; 6
      00096E 0E                    2644 	.db #0x0e	; 14
      00096F 01                    2645 	.db #0x01	; 1
                           000004  2646 G$Tit1$0$0 == .
      000970                       2647 _Tit1:
      000970 70 20 20 20 20 69 20  2648 	.ascii "p    i    d "
             20 20 20 64 20
      00097C 00                    2649 	.db 0x00
                           000011  2650 G$Tit2$0$0 == .
      00097D                       2651 _Tit2:
      00097D 53 65 74 70 20 20 20  2652 	.ascii "Setp    Dist"
             20 44 69 73 74
      000989 00                    2653 	.db 0x00
                                   2654 	.area XINIT   (CODE)
                                   2655 	.area CABS    (ABS,CODE)
