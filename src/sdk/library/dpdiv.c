/* STATE: C_EXACT
 * SYMBOL: dpdiv
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2
 * DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
 * BLOCKER: none
 * ROLE: GCC 2.95.2 fp-bit double division
 * EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-11-5/final-promotion.json
 *           the private evidence archive/source-quality-audit-2026-09-11-pipeline5.json
 */

/* dpdiv: fp-bit divide (bitfield-era variant) with _fpdiv_parts inlined. */
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

extern FpNumber D_001596F0;
static __inline__ int IsNaN(FpNumber *x) { return (u32)x->class < 2; }
static __inline__ int IsInf(FpNumber *x) { return (x->class ^ 4) == 0; }
static __inline__ int IsZero(FpNumber *x) { return (x->class ^ 2) == 0; }

void __unpack_d(FLOUnion *src, FpNumber *dst);
u64 __pack_d(FpNumber *src);

static __inline__ FpNumber *divide_parts(FpNumber *a, FpNumber *b)
{
    u64 bit;
    u64 numerator;
    u64 denominator;
    u64 quotient;

    if (IsNaN(a)) {
        return a;
    }
    if (IsNaN(b)) {
        return b;
    }
    a->sign = a->sign ^ b->sign;
    if (IsInf(a) || IsZero(a)) {
        if (a->class == b->class) {
            return &D_001596F0;
        }
        return a;
    }
    if (IsInf(b)) {
        a->fraction = 0;
        a->normal_exp = 0;
        return a;
    }
    if (IsZero(b)) {
        a->class = 4;
        return a;
    }
    a->normal_exp = a->normal_exp - b->normal_exp;
    numerator = a->fraction;
    denominator = b->fraction;
    if (numerator < denominator) {
        numerator *= 2;
        a->normal_exp--;
    }
    bit = 0x1000000000000000ULL;
    quotient = 0;
    while (bit) {
        if (numerator >= denominator) {
            quotient |= bit;
            numerator -= denominator;
        }
        bit >>= 1;
        numerator *= 2;
    }
    if ((quotient & 0xFF) == 0x80) {
        if (quotient & 0x100) {
            quotient += 0x80;
        } else if (numerator) {
            quotient += 0x80;
        }
    }
    a->fraction = quotient;
    return a;
}

u64 dpdiv(u64 arg_a, u64 arg_b)
{
    FpNumber a;
    FpNumber b;
    FpNumber *res;

    __unpack_d((FLOUnion *)&arg_a, &a);
    __unpack_d((FLOUnion *)&arg_b, &b);
    res = divide_parts(&a, &b);
    return __pack_d(res);
}
