/* STATE: C_EXACT
 * SYMBOL: dptoli
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2
 * DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
 * BLOCKER: none
 * ROLE: GCC 2.95.2 fp-bit float_to_si
 * EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-11-5/final-promotion.json
 *           the private evidence archive/source-quality-audit-2026-09-11-pipeline5.json
 */

/* dptoli: fp-bit float_to_si (bitfield-era variant). */
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

s32 dptoli(u64 arg_a)
{
    FpNumber a;
    s32 tmp;

    __unpack_d((FLOUnion *)&arg_a, &a);
    if ((a.class ^ 2) == 0) {
        return 0;
    }
    if ((u32)a.class < 2) {
        return 0;
    }
    if ((a.class ^ 4) == 0) {
        return a.sign ? 0x80000000 : 0x7FFFFFFF;
    }
    if (a.normal_exp < 0) {
        return 0;
    }
    if (a.normal_exp > 30) {
        return a.sign ? 0x80000000 : 0x7FFFFFFF;
    }
    tmp = (s32)(a.fraction >> (60 - a.normal_exp));
    return a.sign ? -tmp : tmp;
}
