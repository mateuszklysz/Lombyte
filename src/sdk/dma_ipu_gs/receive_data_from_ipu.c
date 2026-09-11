/*
STATE: C_EXACT
SYMBOL: receiveDataFromIPU
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: Himuro -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
extern s32 DIntr();
extern void EnableInterrupts();
void receiveDataFromIPU(s32 arg0, s32 arg1) {
    s32 old;

    old = DIntr();
    *(volatile u32 *)0x1000B010 = (arg0 & 0x0FFFFFFF) | 0x80000000;
    *(volatile u32 *)0x1000B020 = arg1 >> 4;
    *(volatile u32 *)0x1000B000 = 0x100;
    if (old != 0) {
        EnableInterrupts(0x100);
    }
}
