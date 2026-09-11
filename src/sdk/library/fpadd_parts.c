/* STATE: C_EXACT
 * SYMBOL: _fpadd_parts
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2
 * DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
 * BLOCKER: none
 * ROLE: GCC 2.95.2 fp-bit add/sub core
 */

/* _fpadd_parts: stock GCC 2.95.2 fp-bit.c body; `thenan` is the SDK's global
 * data object at 0x1596F0 (config name D_001596F0). */
#include "types.h"

typedef struct FpNumber {
    s32 class;
    u32 sign;
    s32 normal_exp;
    s32 alignment_padding;
    u64 fraction;
} FpNumber;

extern FpNumber D_001596F0;

#define LSHIFT(a) { a = (a & 1) | (a >> 1); }
#define IMPLICIT_1 0x1000000000000000ULL
#define IMPLICIT_2 0x2000000000000000ULL

FpNumber *_fpadd_parts(FpNumber *a, FpNumber *b, FpNumber *tmp)
{
    s64 tfraction;
    s32 a_normal_exp;
    s32 b_normal_exp;
    u64 a_fraction;
    u64 b_fraction;

    if ((u32)a->class < 2) {
        return a;
    }
    if ((u32)b->class < 2) {
        return b;
    }
    if ((a->class ^ 4) == 0) {
        if ((b->class ^ 4) == 0 && a->sign != b->sign) {
            return &D_001596F0;
        }
        return a;
    }
    if ((b->class ^ 4) == 0) {
        return b;
    }
    if ((b->class ^ 2) == 0) {
        if ((a->class ^ 2) == 0) {
            *tmp = *a;
            tmp->sign = a->sign & b->sign;
            return tmp;
        }
        return a;
    }
    if ((a->class ^ 2) == 0) {
        return b;
    }

    a_normal_exp = a->normal_exp;
    b_normal_exp = b->normal_exp;
    a_fraction = a->fraction;
    b_fraction = b->fraction;

    {
        s32 diff;

        diff = a_normal_exp - b_normal_exp;
        if (diff < 0) {
            diff = -diff;
        }
        if (diff < 64) {
            while (a_normal_exp > b_normal_exp) {
                b_normal_exp++;
                LSHIFT(b_fraction);
            }
            while (b_normal_exp > a_normal_exp) {
                a_normal_exp++;
                LSHIFT(a_fraction);
            }
        } else {
            if (a_normal_exp > b_normal_exp) {
                b_normal_exp = a_normal_exp;
                b_fraction = 0;
            } else {
                a_normal_exp = b_normal_exp;
                a_fraction = 0;
            }
        }
    }

    if (a->sign != b->sign) {
        if (a->sign) {
            tfraction = -a_fraction + b_fraction;
        } else {
            tfraction = a_fraction - b_fraction;
        }
        if (tfraction >= 0) {
            tmp->sign = 0;
            tmp->normal_exp = a_normal_exp;
            tmp->fraction = tfraction;
        } else {
            tmp->sign = 1;
            tmp->normal_exp = a_normal_exp;
            tmp->fraction = -tfraction;
        }
        while (tmp->fraction < IMPLICIT_1 && tmp->fraction) {
            tmp->fraction <<= 1;
            tmp->normal_exp--;
        }
    } else {
        tmp->sign = a->sign;
        tmp->normal_exp = a_normal_exp;
        tmp->fraction = a_fraction + b_fraction;
    }
    tmp->class = 3;
    if (tmp->fraction >= IMPLICIT_2) {
        LSHIFT(tmp->fraction);
        tmp->normal_exp++;
    }
    return tmp;
}
