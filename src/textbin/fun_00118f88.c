/*
STATE: C_EXACT
SYMBOL: FUN_00118f88
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

#include "types.h"

extern s32 _sceSDC();
extern s32 DIntr();
extern s32 EnableInterrupts();

void FUN_00118f88(s32 arg0, s32 arg1) {
    u32 status;

    __asm__ __volatile__("mfc0 %0, $12" : "=r"(status));
    status &= 0x10000;
    if (status != 0) {
        DIntr();
    }
    _sceSDC(arg0 & 0xFFFFFFC0, arg1 & 0xFFFFFFC0);
    if (status != 0) {
        EnableInterrupts();
    }
}
