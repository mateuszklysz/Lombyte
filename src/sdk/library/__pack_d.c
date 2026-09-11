/*
STATE: C_EXACT
SYMBOL: __pack_d
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2
DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
BLOCKER: none
*/

/* ROLE: GCC 2.95.2 fp-bit pack_d (bitfield FLO compose) */

#include "types.h"

typedef struct FpNumber {
    s32 class;
    u32 sign;
    s32 normal_exp;
    s32 alignment_padding;
    u64 fraction;
} FpNumber;

typedef union {
    f64 value;
    struct {
        u64 fraction : 52 __attribute__((packed));
        u32 exp : 11 __attribute__((packed));
        u32 sign : 1 __attribute__((packed));
    } bits;
} FLOUnion;

f64 __pack_d(FpNumber *src)
{
    FLOUnion dst;
    u64 fraction = src->fraction;
    s32 sign = src->sign;
    s32 exp = 0;

    if (src->class == 0 || src->class == 1) {
        exp = 0x7FF;
        fraction |= 0x8000000000000ULL;
    } else if ((src->class ^ 4) == 0) {
        exp = 0x7FF;
        fraction = 0;
    } else if ((src->class ^ 2) == 0) {
        fraction = 0;
    } else if (fraction == 0) {
        exp = 0;
    } else {
        if (src->normal_exp < -0x3FE) {
            s32 shift = -0x3FE - src->normal_exp;
            exp = 0;
            if (shift > 56) {
                fraction = 0;
            } else {
                fraction >>= shift;
            }
            fraction >>= 8;
        } else if (src->normal_exp > 0x3FF) {
            exp = 0x7FF;
            fraction = 0;
        } else {
            exp = src->normal_exp + 0x3FF;
            if ((fraction & 0xFF) == 0x80) {
                if (fraction & 0x100) {
                    fraction += 0x80;
                }
            } else {
                fraction += 0x7F;
            }
            if (fraction >= 0x2000000000000000ULL) {
                fraction >>= 1;
                exp += 1;
            }
            fraction >>= 8;
        }
    }
    dst.bits.fraction = fraction;
    dst.bits.exp = exp;
    dst.bits.sign = sign;
    return dst.value;
}
