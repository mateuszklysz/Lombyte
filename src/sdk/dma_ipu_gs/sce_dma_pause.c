/*
STATE: C_EXACT
SYMBOL: sceDmaPause
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: EE-GCC 2.9 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
extern s32 DIntr();
extern s32 EnableInterrupts();
s32 sceDmaPause(volatile u32 *chcr) {
    s32 state;
    u32 ctrl;
    u32 chan;
    u32 dstat;
    u32 masked;

    state = DIntr();
    ctrl = *(volatile u32 *)0x1000F520;
    if (!(ctrl & 0x10000)) {
        *(volatile u32 *)0x1000F590 = ctrl | 0x10000;
    }
    dstat = *(volatile u32 *)0x1000E000;
    chan = *chcr;
    masked = chan & 0xFFFFFEFF;
    *chcr = masked;
    *(volatile u32 *)0x1000F590 = ctrl;
    if (state != 0) {
        EnableInterrupts(masked, dstat, ctrl, state);
    }
    return chan;
}
