/*                              34 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │  0   1   2   3   4 │  5   6   7   8   9 │ │ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
  │ 10  11  12  13  14 │ 15  16  17  18  19 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
  │ 20  21  22  23  24 │ 25  26  27  28  29 │ │ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
  ╰───────────╮ 30  31 │ 32  33 ╭───────────╯ ╰───────────╮ LH1 LH0 │ RH0 RH1 ╭───────────╯
              ╰────────┴────────╯                         ╰─────────┴─────────╯             */

#pragma once

#define LT0  4   // left top row, innermost (T)
#define LT1  3   //                         (R)
#define LT2  2   //                         (E)
#define LT3  1   //                         (W)
#define LT4  0   // left top row, outermost (Q)

#define RT0  5   // right top row, innermost (Y)
#define RT1  6   //                          (U)
#define RT2  7   //                          (I)
#define RT3  8   //                          (O)
#define RT4  9   // right top row, outermost (P)

#define LM0 14   // left home row, innermost (G)
#define LM1 13   //                          (F)
#define LM2 12   //                          (D)
#define LM3 11   //                          (S)
#define LM4 10   // left home row, outermost (A)

#define RM0 15   // right home row, innermost (H)
#define RM1 16   //                           (J)
#define RM2 17   //                           (K)
#define RM3 18   //                           (L)
#define RM4 19   // right home row, outermost (;)

#define LB0 24   // left bottom row, innermost (B)
#define LB1 23   //                            (V)
#define LB2 22   //                            (C)
#define LB3 21   //                            (X)
#define LB4 20   // left bottom row, outermost (Z)

#define RB0 25   // right bottom row, innermost (N)
#define RB1 26   //                             (M)
#define RB2 27   //                             (,)
#define RB3 28   //                             (.)
#define RB4 29   // right bottom row, outermost (/)

#define LH1 30   // left thumb, outer (TAB)
#define LH0 31   // left thumb, inner (SPACE)

#define RH0 32   // right thumb, inner (BSPC)
#define RH1 33   // right thumb, outer (RET)

#define LAYER_FROM34( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
    t00, t01, t02, t03 \
) \
    k00 k01 k02 k03 k04 k05 k06 k07 k08 k09 \
    k10 k11 k12 k13 k14 k15 k16 k17 k18 k19 \
    k20 k21 k22 k23 k24 k25 k26 k27 k28 k29 \
    t00 t01 t02 t03
