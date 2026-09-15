/*
STATE: C_EXACT
SYMBOL: SignExtendPackedValue
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
NOTE: two-shift form kept separate by a zero-byte empty-asm barrier (dsrlv/dsll32/dsra32 retail shape)
*/

#include "types.h"

s64 SignExtendPackedValue(u64 *arg0, s32 arg1) {
    u64 w;

    w = *arg0 >> (0x40 - arg1);
    w = w << 0x20;
    __asm__ __volatile__("" : "+r"(w));
    return (s64) w >> 0x20;
}
