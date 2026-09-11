/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: FUN_0022bf94
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 9.3735%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022bf94/FUN_0022bf94.s", FUN_0022bf94);
#else
#include "rnc/assembly_textbin_fun_0022bf94_types.h"
#include "types.h"


s32 FUN_0022bf94(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 var_14_49;
    s32 var_6_0;
    s8 temp_1_74;
    s32 *var_4_0;
    struct M2c_var_5_0 *var_5_0;

    var_4_0 = arg0;
    var_5_0 = arg1;
    var_6_0 = arg2;
    /* m2c-unknown:  unknown instruction: lqc2 $vf11, 0x100($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf12, 0x110($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf13, 0x120($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf14, 0x130($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, 0x10($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf3, 0x20($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf4, 0x30($at)  */
    /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf11, $vf1x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf12, $vf1y  */
    /* m2c-unknown:  unknown instruction: vmaddaz.xyzw $acc, $vf13, $vf1z  */
    /* m2c-unknown:  unknown instruction: vmaddw.xyzw $vf1, $vf14, $vf1w  */
    /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf11, $vf2x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf12, $vf2y  */
    /* m2c-unknown:  unknown instruction: vmaddaz.xyzw $acc, $vf13, $vf2z  */
    /* m2c-unknown:  unknown instruction: vmaddw.xyzw $vf2, $vf14, $vf2w  */
    /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf11, $vf3x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf12, $vf3y  */
    /* m2c-unknown:  unknown instruction: vmaddaz.xyzw $acc, $vf13, $vf3z  */
    /* m2c-unknown:  unknown instruction: vmaddw.xyzw $vf3, $vf14, $vf3w  */
    /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf11, $vf4x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf12, $vf4y  */
    /* m2c-unknown:  unknown instruction: vmaddaz.xyzw $acc, $vf13, $vf4z  */
    /* m2c-unknown:  unknown instruction: vmaddw.xyzw $vf4, $vf14, $vf4w  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf5  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf26, 0x190($v0)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf27, 0x1a0($v0)  */
    /* m2c-unknown:  unknown instruction: vmulx.xy $vf26, $vf26, $vf5x  */
    /* m2c-unknown:  unknown instruction: vmulx.xyzw $vf15, $vf0, $vf0x  */
    /* m2c-unknown:  unknown instruction: ppacw $at, $v0, $at  */
    /* m2c-unknown:  unknown instruction: ppacw $at, $v0, $at  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf11  */
    /* m2c-unknown:  unknown instruction: vitof0.xyz $vf11, $vf11  */
    var_14_49 = 0x3F;
    /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf1, $vf11x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf2, $vf11y  */
    /* m2c-unknown:  unknown instruction: vmaddaz.xyzw $acc, $vf3, $vf11z  */
    /* m2c-unknown:  unknown instruction: vmaddw.xyzw $vf10, $vf4, $vf0w  */
    do {
        var_4_0 += 8;
        /* m2c-unknown:  unknown instruction: vdiv $q, $vf0w, $vf10w  */
        var_6_0 -= 1;
        /* m2c-unknown:  unknown instruction: ppacw $at, $v0, $at  */
        /* m2c-unknown:  unknown instruction: ppacw $at, $v0, $at  */
        /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf11  */
        /* m2c-unknown:  unknown instruction: vmulq.xyz $vf10, $vf10, $q  */
        /* m2c-unknown:  unknown instruction: vitof0.xyz $vf11, $vf11  */
        /* m2c-unknown:  unknown instruction: vmula.xyzw $acc, $vf10, $vf26  */
        /* m2c-unknown:  unknown instruction: vmaddw.xyzw $vf14, $vf27, $vf0w  */
        /* m2c-unknown:  unknown instruction: vftoi4.xyz $vf15, $vf14  */
        temp_1_74 = 0 /*  unknown instruction: cfc2.ni $at, $vi18  */ & 0x2F;
        /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf1, $vf11x  */
        /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf2, $vf11y  */
        /* m2c-unknown:  unknown instruction: vmaddaz.xyzw $acc, $vf3, $vf11z  */
        /* m2c-unknown:  unknown instruction: vmaddw.xyzw $vf10, $vf4, $vf0w  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf15, ($a1)  */
        var_5_0->unkC = (u8) *(s32 *)((u8 *)var_4_0 - 0x2);
        var_14_49 &= temp_1_74;
        var_5_0->unkF = temp_1_74;
        var_5_0 += 0x10;
    } while (var_6_0 != 0);
    return var_14_49;
}
#endif /* NON_MATCHING */
