/*
STATE: C_EXACT
SYMBOL: ftoi
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
BLOCKER: none
*/

/* ftoi b2 */
#include "types.h"

s64 ftoi(s64 arg) {
    register s64 input __asm__("$5");
    register u64 t __asm__("$2");
    s64 exp;
    u64 v;
    input = arg;
    exp = (s64)(((u64)input << 1) >> 0x35);
    exp -= 0x433;
    if (exp < -0x35) {
        return 0;
    }
    if (exp >= 0xD) {
        return 0x270F;
    }
    t = ((u64)input) << 0xC;
    input = t >> 0xC;
    v = input | ((u64)0x8000 << 0x25);
    if (exp < 0) {
        exp = -exp;
        v = v >> (exp - 2);
        if ((v & 3) == 3) {
            v = (v >> 2) + 1;
        } else {
            v = (v >> 2);
        }
    } else {
        v = v << exp;
    }
    {
        u64 w = v << 0x20;
        __asm__ __volatile__("" : "+r"(w));
        return (s64)w >> 0x20;
    }
}
