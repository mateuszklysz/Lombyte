/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fa378
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 40.8333%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa378/FUN_001fa378.s", FUN_001fa378);
#else
#include "types.h"

void FUN_001fa378(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_7_9;
    s32 var_6_0;

    var_6_0 = arg2;
    /* m2c-unknown:  unknown instruction: lqc2 $vf4, ($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf5, 0x10($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf6, 0x20($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf7, 0x30($a1)  */
    temp_7_9 = var_6_0 + 0x40;
    do {
        /* m2c-unknown:  unknown instruction: lqc2 $vf8, ($a2)  */
        var_6_0 += 0x10;
        /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf4, $vf8x  */
        /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf5, $vf8y  */
        /* m2c-unknown:  unknown instruction: vmaddaz.xyzw $acc, $vf6, $vf8z  */
        /* m2c-unknown:  unknown instruction: vmaddw.xyzw $vf9, $vf7, $vf8w  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf9, ($a0)  */
    } while (var_6_0 != temp_7_9);
}
#endif /* NON_MATCHING */
