/*
STATE: C_EXACT
SYMBOL: EnableInterrupts
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted
BLOCKER: none
*/

#include "types.h"

s32 EnableInterrupts(void) {
    u32 status;

    __asm__ __volatile__("mfc0 %0, $12" : "=r"(status));
    status &= 0x10000;
    __asm__ __volatile__("ei");
    return status != 0;
}
