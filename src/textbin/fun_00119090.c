/*
STATE: C_EXACT
SYMBOL: EnableIntc
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

/* ROLE: EnableIntc: interrupt-guarded public wrapper over the `_EnableIntc` kernel entry (callee and guard-pattern evidence). */


#include "types.h"

extern s32 _EnableIntc();
extern s32 DIntr();
extern s32 EnableInterrupts();

s32 FUN_00119090(s32 arg0) {
    u32 status;
    s32 result;

    __asm__ __volatile__("mfc0 %0, \$12" : "=r"(status));
    status &= 0x10000;
    if (status != 0) {
        DIntr();
    }
    result = _EnableIntc(arg0);
    __asm__ __volatile__("sync");
    if (status != 0) {
        EnableInterrupts();
    }
    return result;
}

/* Recovered original symbol name. */
extern __typeof__(FUN_00119090) EnableIntc __attribute__((alias("FUN_00119090")));
