/*
STATE: C_EXACT
SYMBOL: kputchar
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

#include "types.h"

s32 kputchar(s32 arg0) {
    register volatile u32 *status __asm__("v1") = (u32 *)0x1000F130;
    register u8 *output __asm__("v1");
loop_1:
    if (*status & 0x8000) {
        goto loop_1;
    }
    output = (u8 *)0x1000F180;
    __asm__("" : "+r"(output));
    *output = (u8)arg0;
    return arg0;
}
