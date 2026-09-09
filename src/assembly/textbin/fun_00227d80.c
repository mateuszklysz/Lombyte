/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 9.8916%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00227d80/FUN_00227d80.s", FUN_00227d80);
#else
#include "rnc/assembly_textbin_fun_00227d80_types.h"
#include "types.h"


extern s32 D_001603A0;
void FUN_00227d80(struct M2c_arg0 *arg0) {
    s32 var_11_11;
    s32 var_12_5;

    var_12_5 = arg0->unk4;
    /* m2c-unknown:  unknown instruction: lqc2 $vf27, 0x10($a0)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf28, ($at)  */
    var_11_11 = 0;
    /* m2c-unknown:  unknown instruction: lqc2 $vf30, ($at)  */
    /* m2c-unknown:  unknown instruction: vsub.xyz $vf30, $vf0, $vf30  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf1  */
    /* m2c-unknown:  unknown instruction: vcallms 0xc90  */
    /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
    /* m2c-unknown:  unknown instruction: vaddx.x $vf31, $vf0, $vf1x  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf1  */
    /* m2c-unknown:  unknown instruction: vcallms 0xc80  */
    /* m2c-unknown:  unknown instruction: qmfc2.i $at, $vf1  */
    /* m2c-unknown:  unknown instruction: vaddx.y $vf31, $vf0, $vf1x  */
    /* m2c-unknown:  unknown instruction: vsuby.w $vf31, $vf0, $vf31y  */
    /* m2c-unknown:  unknown instruction: vmulx.xyz $vf29, $vf30, $vf31x  */
    /* m2c-unknown:  unknown instruction: vmulx.x $vf1, $vf30, $vf30x  */
    /* m2c-unknown:  unknown instruction: vmulw.x $vf1, $vf1, $vf31w  */
    /* m2c-unknown:  unknown instruction: vaddy.x $vf1, $vf1, $vf31y  */
    /* m2c-unknown:  unknown instruction: vmulx.y $vf1, $vf30, $vf30x  */
    /* m2c-unknown:  unknown instruction: vmulw.y $vf1, $vf1, $vf31w  */
    /* m2c-unknown:  unknown instruction: vsubz.y $vf1, $vf1, $vf29z  */
    /* m2c-unknown:  unknown instruction: vmulx.z $vf1, $vf30, $vf30x  */
    /* m2c-unknown:  unknown instruction: vmulw.z $vf1, $vf1, $vf31w  */
    /* m2c-unknown:  unknown instruction: vaddy.z $vf1, $vf1, $vf29y  */
    /* m2c-unknown:  unknown instruction: vmuly.x $vf2, $vf30, $vf30y  */
    /* m2c-unknown:  unknown instruction: vmulw.x $vf2, $vf2, $vf31w  */
    /* m2c-unknown:  unknown instruction: vaddz.x $vf2, $vf2, $vf29z  */
    /* m2c-unknown:  unknown instruction: vmuly.y $vf2, $vf30, $vf30y  */
    /* m2c-unknown:  unknown instruction: vmulw.y $vf2, $vf2, $vf31w  */
    /* m2c-unknown:  unknown instruction: vaddy.y $vf2, $vf2, $vf31y  */
    /* m2c-unknown:  unknown instruction: vmuly.z $vf2, $vf30, $vf30y  */
    /* m2c-unknown:  unknown instruction: vmulw.z $vf2, $vf2, $vf31w  */
    /* m2c-unknown:  unknown instruction: vsubx.z $vf2, $vf2, $vf29x  */
    /* m2c-unknown:  unknown instruction: vmulz.x $vf3, $vf30, $vf30z  */
    /* m2c-unknown:  unknown instruction: vmulw.x $vf3, $vf3, $vf31w  */
    /* m2c-unknown:  unknown instruction: vsuby.x $vf3, $vf3, $vf29y  */
    /* m2c-unknown:  unknown instruction: vmulz.y $vf3, $vf30, $vf30z  */
    /* m2c-unknown:  unknown instruction: vmulw.y $vf3, $vf3, $vf31w  */
    /* m2c-unknown:  unknown instruction: vaddx.y $vf3, $vf3, $vf29x  */
    /* m2c-unknown:  unknown instruction: vmulz.z $vf3, $vf30, $vf30z  */
    /* m2c-unknown:  unknown instruction: vmulw.z $vf3, $vf3, $vf31w  */
    /* m2c-unknown:  unknown instruction: vaddy.z $vf3, $vf3, $vf31y  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf26, ($at)  */
    /* m2c-unknown:  unknown instruction: vmulw.xyz $vf26, $vf26, $vf27w  */
    do {
        /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf1, $vf26x  */
        /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf2, $vf26y  */
        /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf26, $vf3, $vf26z  */
        /* m2c-unknown:  unknown instruction: vadd.xyz $vf5, $vf26, $vf27  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf5, ($a6)  */
        /* m2c-unknown:  unknown instruction: vadd.xyz $vf5, $vf5, $vf28  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf5, 0x10($a6)  */
        var_12_5 -= 1;
        var_11_11 += 1;
    } while (var_12_5 != 0);
    /* m2c-unknown:  unknown instruction: lqc2 $vf5, ($at)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf5, ($a6)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf5, 0x10($at)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf5, 0x10($a6)  */
    D_001603A0 = var_11_11 + 1;
}
#endif /* NON_MATCHING */
