/*
STATE: C_EXACT
SYMBOL: __unpack_d
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Descriptive C recovery of the GCC fp-bit __unpack_d runtime helper. */

#include "types.h"

typedef struct FpNumber {
    s32 class;
    u32 sign;
    s32 normal_exp;
    s32 alignment_padding;
    u64 fraction;
} FpNumber;

typedef union {
    double value;
    u64 value_raw;
} FLOUnion;

void __unpack_d(FLOUnion *src, FpNumber *dst);

void __unpack_d(FLOUnion *src, FpNumber *dst)
{
    u64 fraction = src->value_raw & 0x000FFFFFFFFFFFFFULL;
    s32 exp = ((s32)(src->value_raw >> 52)) & 0x7FF;
    s32 sign = ((s32)(src->value_raw >> 63)) & 1;
    dst->sign = sign;
    if (exp == 0) {
        do { } while (0);
        dst->class = 2;
    } else if (exp == 0x7FF) {
        if (fraction == 0) {
            dst->class = 4;
        } else {
            if (fraction & 0x8000000000000ULL) {
                dst->class = 1;
            } else {
                dst->class = 0;
            }
            dst->fraction = fraction;
        }
    } else {
        dst->normal_exp = exp - 1023;
        dst->class = 3;
        dst->fraction = (fraction << 8) | 0x1000000000000000ULL;
    }
}
