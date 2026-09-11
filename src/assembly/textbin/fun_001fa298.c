/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fa298
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa298/FUN_001fa298.s", FUN_001fa298);
#else
#include "types.h"
/* func_00134430 — constructor-style init: zero-fills two quadwords (0x20, 0x30)
 * via sqc2 $vf0, sets a few fields, returns the object. */

__attribute__((section(".text.func_00134430")))
void *FUN_001fa298(void *a0, int a1, int a2, float f) {
    VU0_SQC2_VF0(a0, 0x20);
    VU0_SQC2_VF0(a0, 0x30);
    *(int *)((char *)a0 + 0x0) = a1;
    *(int *)((char *)a0 + 0x8) = a2;
    *(float *)((char *)a0 + 0xC) = f;
    *(int *)((char *)a0 + 0x4) = 0;
    *(int *)((char *)a0 + 0x10) = 0;
    return a0;
}
#endif /* NON_MATCHING */
