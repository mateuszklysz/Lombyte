/* ROLE: recovered function `DrawTexturedQuad` (game/initonce.cpp, 0xac8 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f5450/FUN_001f5450.s", FUN_001f5450);
#else
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern unsigned int D_004A5D80[];

__attribute__((section(".text.func_00155BE8")))
void FUN_001f5450(char *arg0, int arg1, int arg2) {
    unsigned long *q;
    unsigned long hi;
    unsigned long lo;

    arg0 = arg0 + arg2 * 4;
    q = *(unsigned long **)(arg0 + 0x220);
    if (arg1 >= 0) {
        arg1 = arg1 & 0xFF;
        {
            unsigned int th = *(unsigned int *)((char *)D_004A5D80 + arg1 * 8);
            lo = (unsigned int)(*(unsigned int *)((char *)D_004A5D80 + arg1 * 8 + 4) | 0x30000000);
            hi = th & 0xFFFFFFF;
        }
        q[0xA] = lo | (hi << 32);
        q[0xC] = 0x10000000;
    } else {
        q[0xA] = 0x10000000;
        q[0xC] = 0x10000000;
    }
}
#endif /* NON_MATCHING */
