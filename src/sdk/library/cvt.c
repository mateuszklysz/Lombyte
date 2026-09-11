/* STATE: C_EXACT
 * SYMBOL: cvt
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2
 * DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
 * BLOCKER: none
 * ROLE: newlib-2000-02-17 vfprintf float conversion helper
 * EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-11-5/final-promotion.json
 *           the private evidence archive/source-quality-audit-2026-09-11-pipeline5.json
 */

/* cvt: newlib-2000-02-17 vfprintf.c floating-point conversion helper. */
#include "types.h"

struct _reent;

typedef union {
    f64 d;
    u32 i[2];
} double_union;

#define word0(x) ((x).i[1])
#define Sign_bit 0x80000000U
#define ALT 0x001

extern s8 *_dtoa_r(struct _reent *ptr, f64 _d, s32 mode, s32 ndigits,
                   s32 *decpt, s32 *sign, s8 **rve);

static s8 *cvt(struct _reent *data, f64 value, s32 ndigits, s32 flags, s8 *sign, s32 *decpt, s32 ch, s32 *length)
{
    s32 mode, dsgn;
    s8 *digits, *bp, *rve;
    double_union tmp;

    if (ch == 'f') {
        mode = 3;
    } else {
        if (ch == 'e' || ch == 'E') {
            ndigits++;
        }
        mode = 2;
    }
    tmp.d = value;
    if (word0(tmp) & Sign_bit) {
        value = -value;
        *sign = '-';
    } else {
        *sign = '\000';
    }
    digits = _dtoa_r(data, value, mode, ndigits, decpt, &dsgn, &rve);
    if ((ch != 'g' && ch != 'G') || (flags & ALT)) {
        bp = digits + ndigits;
        if (ch == 'f') {
            if (*digits == '0' && value) {
                *decpt = -ndigits + 1;
            }
            bp += *decpt;
        }
        if (value == 0) {
            rve = bp;
        }
        while (rve < bp) {
            *rve++ = '0';
        }
    }
    *length = (s32)(rve - digits);
    return digits;
}
