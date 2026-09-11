/* STATE: C_EXACT
 * SYMBOL: __floatdidf
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2
 * DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
 * BLOCKER: none
 * ROLE: GCC 2.95.2 libgcc2 DI-to-DF conversion
 */

/* __floatdidf: libgcc2 L_floatdidf (WORD_SIZE 32), arithmetic left to the compiler. */
#include "types.h"

f64 __floatdidf(s64 u)
{
    f64 d;

    d = (s32)(u >> 32);
    d *= 65536.0;
    d *= 65536.0;
    d += (u32)(u & 0xFFFFFFFF);
    return d;
}
