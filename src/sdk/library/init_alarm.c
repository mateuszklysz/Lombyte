/*
STATE: C_EXACT
SYMBOL: InitAlarm
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

/* InitAlarm a11: apply the timer/syscall patches when needed.
 * Hypothesis: declaring the return-ignored patch installer void frees v0
 * for the loop-test sltiu (retail v0; a2 ties at v1). */

#include "types.h"

extern void Rfu116SetSyscallTail();
extern s32 Rfu091Tail();
extern void InvokeKernelSyscall005A_RfuTail(void *addr, void *table, s32 size);
extern void FlushCache(s32 mode);

typedef struct PatchPair {
    u32 a;
    u32 b;
} PatchPair;

extern PatchPair D_00131258[];
extern u8 D_00130AF0[];
extern u8 D_00131230[];

void InitAlarm(void) {
    u32 i;

    if ((*(volatile u32 *)0x10001810 & 0x100) == 0) {
        Rfu116SetSyscallTail(D_00131258[0].a, D_00131258[0].b);
        InvokeKernelSyscall005A_RfuTail((void *)0x80076000, D_00130AF0, 0x740);
        InvokeKernelSyscall005A_RfuTail((void *)0x00082000, D_00131230, 0x28);
        FlushCache(0);
        FlushCache(2);
        Rfu116SetSyscallTail(D_00131258[1].a, D_00131258[1].b);
        for (i = 2; i < 8; i++) {
            Rfu116SetSyscallTail(D_00131258[i].a, Rfu091Tail(D_00131258[i].a));
        }
    }
}
