/* STATE: C_EXACT
 * SYMBOL: __fixunsdfdi
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2
 * DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
 * BLOCKER: none
 * ROLE: GCC 2.95.2 libgcc2 DF-to-UDI conversion
 */

/* __fixunsdfdi: libgcc2 L_fixunsdfdi, verbatim arithmetic. */
#include "types.h"

u64 __fixunsdfdi(f64 a)
{
    f64 b;
    u64 v;
    u64 high_word_coeff;

    high_word_coeff = 1ULL << 32;
    if (a < 0.0) {
        return 0;
    }
    b = a / 4294967296.0;
    v = (u32)b;
    v <<= 32;
    a -= (f64)v;
    if (a < 0.0) {
        v -= (u32)(-a);
    } else {
        v += (u32)a;
    }
    return v;
}
