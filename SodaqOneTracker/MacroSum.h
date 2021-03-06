#ifndef MACROSUM_H_
#define MACROSUM_H_

#include "MacroOverload.h"

#define SUM(...) VFUNC(SUM, __VA_ARGS__)
#define SUM1(_1) (_1)
#define SUM2(_1,_2) (_1+_2)
#define SUM3(_1,_2,_3) (_1+_2+_3)
#define SUM4(_1,_2,_3,_4) (_1+_2+_3+_4)
#define SUM5(_1,_2,_3,_4,_5) (_1+_2+_3+_4+_5)
#define SUM6(_1,_2,_3,_4,_5,_6) (_1+_2+_3+_4+_5+_6)
#define SUM7(_1,_2,_3,_4,_5,_6,_7) (_1+_2+_3+_4+_5+_6+_7)
#define SUM8(_1,_2,_3,_4,_5,_6,_7,_8) (_1+_2+_3+_4+_5+_6+_7+_8)
#define SUM9(_1,_2,_3,_4,_5,_6,_7,_8,_9) (_1+_2+_3+_4+_5+_6+_7+_8+_9)
#define SUM10(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10) (_1+_2+_3+_4+_5+_6+_7+_8+_9+_10)
#define SUM11(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11) (_1+_2+_3+_4+_5+_6+_7+_8+_9+_10+_11)
#define SUM12(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12) (_1+_2+_3+_4+_5+_6+_7+_8+_9+_10+_11+_12)
#define SUM13(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13) (_1+_2+_3+_4+_5+_6+_7+_8+_9+_10+_11+_12+_13)
#define SUM14(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14) (_1+_2+_3+_4+_5+_6+_7+_8+_9+_10+_11+_12+_13+_14)
#define SUM15(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15) (_1+_2+_3+_4+_5+_6+_7+_8+_9+_10+_11+_12+_13+_14+_15)
#define SUM16(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16) (_1+_2+_3+_4+_5+_6+_7+_8+_9+_10+_11+_12+_13+_14+_15+_16)

#endif /* MACROSUM_H_ */
