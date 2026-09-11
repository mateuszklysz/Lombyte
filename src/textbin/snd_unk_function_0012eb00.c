/*
STATE: C_EXACT
SYMBOL: snd_UnkFunction_0012eb00
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `snd_UnkFunction_0012eb00`. */

#include "types.h"
extern s32 D_0015ECC4;
extern s32 FUN_0012dc80();
void FUN_0012eb00(s32 arg0) {
    D_0015ECC4 = 0;
    FUN_0012dc80();
}

extern void func_0012EB00(s32 arg0) __attribute__((alias("FUN_0012eb00")));

/* Recovered original symbol name. */
extern __typeof__(FUN_0012eb00) snd_UnkFunction_0012eb00 __attribute__((alias("FUN_0012eb00")));
