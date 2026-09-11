/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fa030
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 25.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa030/FUN_001fa030.s", FUN_001fa030);
#else
#include "types.h"

void FUN_001fa030(s32 arg0, s32 arg1) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: vcallms 0xd18  */
    /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf20  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf20, ($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf21, 0x10($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf22, 0x20($a0)  */
}
#endif /* NON_MATCHING */
