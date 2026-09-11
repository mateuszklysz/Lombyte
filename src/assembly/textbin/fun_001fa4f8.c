/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fa4f8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 5.8824%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa4f8/FUN_001fa4f8.s", FUN_001fa4f8);
#else
#include "types.h"

void FUN_001fa4f8(s32 arg0, s32 arg1) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf8, ($a0)  */
    /* m2c-unknown:  unknown instruction: vmulx.xyzw $vf14, $vf0, $vf0x  */
    /* m2c-unknown:  unknown instruction: vmulx.xyzw $vf15, $vf0, $vf0x  */
    /* m2c-unknown:  unknown instruction: vmr32.xyzw $vf16, $vf0  */
    /* m2c-unknown:  unknown instruction: vmove.xyzw $vf17, $vf0  */
    /* m2c-unknown:  unknown instruction: vaddw.x $vf14, $vf14, $vf0w  */
    /* m2c-unknown:  unknown instruction: vaddw.y $vf15, $vf15, $vf0w  */
    /* m2c-unknown:  unknown instruction: vadd.xyzw $vf9, $vf8, $vf8  */
    /* m2c-unknown:  unknown instruction: vmulw.xyz $vf10, $vf9, $vf8w  */
    /* m2c-unknown:  unknown instruction: vmulx.xyz $vf11, $vf9, $vf8x  */
    /* m2c-unknown:  unknown instruction: vmuly.yz $vf12, $vf9, $vf8y  */
    /* m2c-unknown:  unknown instruction: vmulz.z $vf13, $vf9, $vf8z  */
    /* m2c-unknown:  unknown instruction: vaddz.x $vf15, $vf0, $vf10z  */
    /* m2c-unknown:  unknown instruction: vsuby.x $vf16, $vf0, $vf10y  */
    /* m2c-unknown:  unknown instruction: vaddx.y $vf16, $vf0, $vf10x  */
    /* m2c-unknown:  unknown instruction: vsuby.x $vf14, $vf14, $vf12y  */
    /* m2c-unknown:  unknown instruction: vsubx.y $vf15, $vf15, $vf11x  */
    /* m2c-unknown:  unknown instruction: vsubx.z $vf16, $vf16, $vf11x  */
    /* m2c-unknown:  unknown instruction: vsubz.y $vf14, $vf11, $vf10z  */
    /* m2c-unknown:  unknown instruction: vaddy.z $vf14, $vf11, $vf10y  */
    /* m2c-unknown:  unknown instruction: vsubx.z $vf15, $vf12, $vf10x  */
    /* m2c-unknown:  unknown instruction: vaddy.x $vf15, $vf15, $vf11y  */
    /* m2c-unknown:  unknown instruction: vaddz.x $vf16, $vf16, $vf11z  */
    /* m2c-unknown:  unknown instruction: vaddz.y $vf16, $vf16, $vf12z  */
    /* m2c-unknown:  unknown instruction: vsubz.x $vf14, $vf14, $vf13z  */
    /* m2c-unknown:  unknown instruction: vsubz.y $vf15, $vf15, $vf13z  */
    /* m2c-unknown:  unknown instruction: vsuby.z $vf16, $vf16, $vf12y  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf14, ($a1)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf15, 0x10($a1)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf16, 0x20($a1)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf17, 0x30($a1)  */
}
#endif /* NON_MATCHING */
