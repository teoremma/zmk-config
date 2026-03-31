/*                              48 KEY MATRIX / 34 KEY LOGICAL LAYOUT MAPPING
  Keys in [brackets] are always &trans.

  ╭──────────────────────────────────────────────────╮
  │  0   1   2   3   4  [5   6]  7   8   9  10  11   │  LT4 LT3 LT2 LT1 LT0  RT0 RT1 RT2 RT3 RT4
  │ 12  13  14  15  16 [17  18] 19  20  21  22  23   │  LM4 LM3 LM2 LM1 LM0  RM0 RM1 RM2 RM3 RM4
  │ 24  25  26  27  28 [29  30] 31  32  33  34  35   │  LB4 LB3 LB2 LB1 LB0  RB0 RB1 RB2 RB3 RB4
  │[36  37  38] 39  40 [41  42] 43  44 [45  46  47]  │              LH1 LH0   RH0 RH1
  ╰──────────────────────────────────────────────────╯                                              */

#pragma once

#define LT0  4   // left top row, innermost (T)
#define LT1  3   //                         (R)
#define LT2  2   //                         (E)
#define LT3  1   //                         (W)
#define LT4  0   // left top row, outermost (Q)

#define RT0  7   // right top row, innermost (Y)
#define RT1  8   //                          (U)
#define RT2  9   //                          (I)
#define RT3 10   //                          (O)
#define RT4 11   // right top row, outermost (P)

#define LM0 16   // left home row, innermost (G)
#define LM1 15   //                          (F)
#define LM2 14   //                          (D)
#define LM3 13   //                          (S)
#define LM4 12   // left home row, outermost (A)

#define RM0 19   // right home row, innermost (H)
#define RM1 20   //                           (J)
#define RM2 21   //                           (K)
#define RM3 22   //                           (L)
#define RM4 23   // right home row, outermost (;)

#define LB0 28   // left bottom row, innermost (B)
#define LB1 27   //                            (V)
#define LB2 26   //                            (C)
#define LB3 25   //                            (X)
#define LB4 24   // left bottom row, outermost (Z)

#define RB0 31   // right bottom row, innermost (N)
#define RB1 32   //                             (M)
#define RB2 33   //                             (,)
#define RB3 34   //                             (.)
#define RB4 35   // right bottom row, outermost (/)

#define LH1 39   // left thumb, outer (TAB)
#define LH0 40   // left thumb, inner (SPACE)

#define RH0 43   // right thumb, inner (BSPC)
#define RH1 44   // right thumb, outer (RET)

#define LAYER_FROM34( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
    t00, t01, t02, t03 \
) \
    k00  k01  k02  k03  k04  &trans &trans k05  k06  k07  k08  k09  \
    k10  k11  k12  k13  k14  &trans &trans k15  k16  k17  k18  k19  \
    k20  k21  k22  k23  k24  &trans &trans k25  k26  k27  k28  k29  \
    &trans &trans &trans t00  t01  &trans &trans t02  t03  &trans &trans &trans
