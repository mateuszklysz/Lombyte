/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: SkyBsphereCheck
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

/* ROLE: recovered function `SkyBsphereCheck` starts here. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022c4c8/FUN_0022c4c8.s", FUN_0022c4c8);
#else
#include "types.h"

void FUN_0022c4c8(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_5_0;
    s32 *var_6_0;

    var_5_0 = arg1;
    var_6_0 = arg2;
    /* m2c-unknown:  unknown instruction: lqc2 $vf24, 0x30($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf6, ($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf7, 0x10($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf8, 0x20($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf20, 0x40($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf21, 0x50($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf22, 0x60($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf23, 0x70($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf11, ($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf12, 0x10($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf13, 0x20($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf14, 0x30($at)  */
    /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf6, $vf11x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf7, $vf11y  */
    /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf25, $vf8, $vf11z  */
    /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf6, $vf12x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf7, $vf12y  */
    /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf26, $vf8, $vf12z  */
    /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf6, $vf13x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf7, $vf13y  */
    /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf27, $vf8, $vf13z  */
loop_1:
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a0)  */
    /* m2c-unknown:  unknown instruction: vmulw.xyzw $vf1, $vf1, $vf24w  */
    /* m2c-unknown:  unknown instruction: vmove.xyz $vf2, $vf1  */
    var_5_0 -= 1;
    /* m2c-unknown:  unknown instruction: vaddw.x $vf3, $vf0, $vf1w  */
    /* m2c-unknown:  unknown instruction: vsubw.y $vf3, $vf0, $vf1w  */
    /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf25, $vf2x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf26, $vf2y  */
    /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf2, $vf27, $vf2z  */
    var_6_0 += 1;
    /* m2c-unknown:  unknown instruction: vmulw.xy $vf8, $vf22, $vf1w  */
    /* m2c-unknown:  unknown instruction: vmulz.xy $vf5, $vf20, $vf2z  */
    /* m2c-unknown:  unknown instruction: vabs.xy $vf2, $vf2  */
    /* m2c-unknown:  unknown instruction: vsub.xy $vf6, $vf2, $vf8  */
    /* m2c-unknown:  unknown instruction: vsub.xy $vf7, $vf5, $vf6  */
    if (0 /*  unknown instruction: qmfc2.ni $v0, $vf7  */ >= 0) {
        // Error: negative shift count
        // At instruction: bltz $v0, .L0022C598
        if (M2C_ERROR()) {
            *(s32 *)((u8 *)var_6_0 - 0x1) = 1;
            if (var_5_0 == 0) {
                return;
            }
            goto loop_1;
        }
    }
    *(s32 *)((u8 *)var_6_0 - 0x1) = 0;
    if (var_5_0 == 0) {
        return;
    }
    goto loop_1;
}
#endif /* NON_MATCHING */
