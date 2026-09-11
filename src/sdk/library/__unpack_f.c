/* STATE: C_EXACT
 * SYMBOL: __unpack_f
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2
 * DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
 * BLOCKER: none
 * ROLE: GCC 2.95.2 fp-bit unpack_f (single)
 */

#include "types.h"

typedef struct FpSingle {
    s32 class;
    u32 sign;
    s32 normal_exp;
    u32 fraction;
} FpSingle;

typedef union {
    f32 value;
    struct {
        u32 fraction : 23 __attribute__((packed));
        u32 exp : 8 __attribute__((packed));
        u32 sign : 1 __attribute__((packed));
    } bits;
} FLOSingleUnion;

void __unpack_f(FLOSingleUnion *src, FpSingle *dst)
{
    u32 fraction = src->bits.fraction;
    s32 exp = src->bits.exp;
    s32 sign = src->bits.sign;
    dst->sign = sign;
    if (exp == 0) {
        dst->class = 2;
    } else if (exp == 0xFF) {
        if (fraction == 0) {
            dst->class = 4;
        } else {
            if (fraction & 0x100000) {
                dst->class = 1;
            } else {
                dst->class = 0;
            }
            dst->fraction = fraction;
        }
    } else {
        dst->normal_exp = exp - 0x7F;
        dst->class = 3;
        dst->fraction = (fraction << 7) | 0x40000000;
    }
}
