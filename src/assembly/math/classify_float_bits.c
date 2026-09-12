/*
STATE: C_NON_MATCHING
SYMBOL: ClassifyDoubleNaN
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* The original routine is a compiler-runtime-style IEEE-754 veneer. */
INCLUDE_ASM("config/us/expected/asm/assembly/math/classify_float_bits/ClassifyDoubleNaN.s", ClassifyDoubleNaN);
#else
#include "types.h"

u32 ClassifyDoubleNaN(s64 arg0) {
    s64 temp_2_4;

    temp_2_4 = (s64) (arg0 << 0x20) >> 0x20;
    return (u32) (0x7FF00000 - (((arg0 >> 0x20) & 0x7FFFFFFF) | ((u32) (temp_2_4 | -temp_2_4) >> 0x1F))) >> 0x1F;
}
#endif /* NON_MATCHING */
