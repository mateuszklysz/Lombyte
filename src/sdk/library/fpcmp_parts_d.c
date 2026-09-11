/*
STATE: C_EXACT
SYMBOL: __fpcmp_parts_d
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

typedef struct DoubleParts {
    u32 classification;
    u32 sign;
    s32 normal_exponent;
    s32 alignment_padding;
    u64 fraction;
} DoubleParts;

static __inline__ s32 IsNaN(const DoubleParts *value)
{
    return __builtin_expect(value->classification < 2, 0);
}

static __inline__ s32 IsInfinity(const DoubleParts *value)
{
    return __builtin_expect(value->classification == 4, 0);
}

static __inline__ s32 IsZero(const DoubleParts *value)
{
    return value->classification == 2;
}

s32 CompareDoubleParts(DoubleParts *left, DoubleParts *right)
    __asm__("__fpcmp_parts_d");

s32 CompareDoubleParts(DoubleParts *left, DoubleParts *right)
{
    if (IsNaN(left) || IsNaN(right)) {
        return 1;
    }
    if (IsInfinity(left) && IsInfinity(right)) {
        return right->sign - left->sign;
    }
    if (IsInfinity(left)) {
        return left->sign ? -1 : 1;
    }
    if (IsInfinity(right)) {
        return right->sign ? 1 : -1;
    }
    if (IsZero(left) && IsZero(right)) {
        return 0;
    }
    if (IsZero(left)) {
        return right->sign ? 1 : -1;
    }
    if (IsZero(right)) {
        return left->sign ? -1 : 1;
    }
    if (left->sign != right->sign) {
        return left->sign ? -1 : 1;
    }
    if (left->normal_exponent > right->normal_exponent) {
        return left->sign ? -1 : 1;
    }
    if (left->normal_exponent < right->normal_exponent) {
        return left->sign ? 1 : -1;
    }
    if (left->fraction > right->fraction) {
        return left->sign ? -1 : 1;
    }
    if (left->fraction < right->fraction) {
        return left->sign ? 1 : -1;
    }
    return 0;
}
