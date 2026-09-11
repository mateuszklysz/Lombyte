/*
STATE: C_EXACT
SYMBOL: litodp
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2
DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
BLOCKER: none
*/

/* ROLE: GCC 2.95.2 fp-bit si_to_float */

/* litodp: fp-bit si_to_float (bitfield-era variant); composes via __pack_d. */

#include "types.h"

typedef struct FpNumber {
    s32 class;
    u32 sign;
    s32 normal_exp;
    s32 alignment_padding;
    u64 fraction;
} FpNumber;

u64 __pack_d(FpNumber *src);

u64 litodp(s32 arg_a)
{
    FpNumber in;

    in.class = 3;
    in.sign = arg_a < 0;
    if (!arg_a) {
        in.class = 2;
    } else {
        in.normal_exp = 60;
        if (in.sign) {
            if (arg_a == 0x80000000) {
                return 0xC1E0000000000000ULL;
            }
            in.fraction = -arg_a;
        } else {
            in.fraction = arg_a;
        }
        while (in.fraction < 0x1000000000000000ULL) {
            in.fraction <<= 1;
            in.normal_exp -= 1;
        }
    }
    return __pack_d(&in);
}
