/* STATE: C_EXACT
 * SYMBOL: dptoul
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2
 * DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
 * BLOCKER: none
 * ROLE: GCC 2.95.2 fp-bit float_to_usi
 * EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-11-5/final-promotion.json
 *           the private evidence archive/source-quality-audit-2026-09-11-pipeline5.json
 */

/* dptoul: fp-bit float_to_usi (bitfield-era variant), else-if chain as in the era source. */
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
    u64 value_raw;
} FLOUnion;

void __unpack_d(FLOUnion *src, FpNumber *dst);

u32 dptoul(u64 arg_a)
{
    FpNumber a;

    __unpack_d((FLOUnion *)&arg_a, &a);
    if ((a.class ^ 2) == 0) {
        return 0;
    }
    if ((u32)a.class < 2) {
        return 0;
    }
    if (a.sign) {
        return 0;
    }
    if ((a.class ^ 4) == 0) {
        return 0xFFFFFFFF;
    }
    if (a.normal_exp < 0) {
        return 0;
    }
    if (a.normal_exp > 31) {
        return 0xFFFFFFFF;
    } else if (a.normal_exp > 60) {
        return (s32)(a.fraction << (a.normal_exp - 60));
    } else {
        return (s32)(a.fraction >> (60 - a.normal_exp));
    }
}
