/*
STATE: C_EXACT
SYMBOL: VSync2
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-10-4/tasks/assembly_sdk_library_VSync2/probes/score/a0cdcfaa35bb4ba88630141344fa8c90/000-s6/seed.c; patha-verify byte-equal
*/
#include "types.h"

extern s32 DIntr();
extern s32 EnableInterrupts();
extern void SetVSyncFlag(s32 *flag, s64 *result);

s64 VSync2(void) {
    volatile s32 flag;
    volatile s64 result;

    s32 old;

    flag = 0;
    SetVSyncFlag((s32 *)&flag, &result);
    old = DIntr();
    *(volatile u32 *)0x1000F000 = 4;
    __asm__ __volatile__("sync");
    if (old != 0) {
        EnableInterrupts();
    }
    while ((*(volatile u32 *)0x1000F000 & 4) == 0 && flag == 0) {
    }
    old = DIntr();
    *(volatile u32 *)0x1000F000 = 4;
    __asm__ __volatile__("sync");
    if (old != 0) {
        EnableInterrupts();
    }
    return result;
}
