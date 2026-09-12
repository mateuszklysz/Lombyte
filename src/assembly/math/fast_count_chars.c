/*
STATE: C_NON_MATCHING
SYMBOL: FastCountChars__FPvi
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `FastCountChars__FPvi`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/math/fast_count_chars/ComputeByteStringHash.s", ComputeByteStringHash);
#else
#include "types.h"

void ComputeByteStringHash(s32 arg0, s32 arg1) {
    s32 var_5_0;

    var_5_0 = arg1;
    do {
        var_5_0 -= 2;
    } while (var_5_0 > 0);
}
#endif /* NON_MATCHING */

