#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* The original routine is a compiler-runtime-style IEEE-754 veneer. */
INCLUDE_ASM("config/us/expected/asm/assembly/math/classify_float_bits/ClassifyDoubleNaN.s", ClassifyDoubleNaN);
#else
#include "types.h"
s32 ClassifyDoubleNaN(s64 arg0) {
    s32 low;
    s32 high;
    low = (s32)arg0;
    high = (s32)(arg0 >> 0x20);
    return (u32)(0x7FF00000 - ((high & 0x7FFFFFFF) | ((u32)(low | -low) >> 0x1F))) >> 0x1F;
}
#endif /* NON_MATCHING */
