/* ROLE: recovered function `FastBSphereCheck` starts here. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 14.9839%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa728/FUN_001fa728.s", FUN_001fa728);
#else
#include "types.h"

s32 FUN_001fa728(s32 arg0, f32 fparg0) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a0)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf24, 0x30($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf25, ($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf26, 0x10($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf27, 0x20($at)  */
    /* m2c-unknown:  unknown instruction: vadd.x $vf19, $vf0, $vf0  */
    /* m2c-unknown:  unknown instruction: vmulw.xyzw $vf1, $vf1, $vf24w  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf20, 0x40($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf21, 0x50($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf22, 0x60($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf23, 0x70($at)  */
    /* m2c-unknown:  unknown instruction: vsub.xyz $vf2, $vf1, $vf24  */
    /* m2c-unknown:  unknown instruction: vaddw.x $vf3, $vf0, $vf1w  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $v0, $vf4  */
    /* m2c-unknown:  unknown instruction: vsubw.y $vf3, $vf0, $vf1w  */
    /* m2c-unknown:  unknown instruction: vmulax.xyz $acc, $vf25, $vf2x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyz $acc, $vf26, $vf2y  */
    /* m2c-unknown:  unknown instruction: vmaddz.xyz $vf2, $vf27, $vf2z  */
    /* m2c-unknown:  unknown instruction: vmulw.y $vf19, $vf4, $vf24w  */
    /* m2c-unknown:  unknown instruction: vmulw.xy $vf8, $vf22, $vf1w  */
    /* m2c-unknown:  unknown instruction: vaddz.xy $vf1, $vf3, $vf2z  */
    /* m2c-unknown:  unknown instruction: vmulz.xy $vf5, $vf20, $vf2z  */
    /* m2c-unknown:  unknown instruction: vabs.xy $vf2, $vf2  */
    /* m2c-unknown:  unknown instruction: vmulz.xy $vf7, $vf8, $vf22z  */
    /* m2c-unknown:  unknown instruction: vsub.xy $vf3, $vf19, $vf1  */
    /* m2c-unknown:  unknown instruction: vmul.xy $vf9, $vf5, $vf21  */
    /* m2c-unknown:  unknown instruction: vsub.xy $vf6, $vf2, $vf8  */
    /* m2c-unknown:  unknown instruction: vadd.xy $vf8, $vf2, $vf7  */
    /* m2c-unknown:  unknown instruction: vsub.xy $vf4, $vf1, $vf23  */
    /* m2c-unknown:  unknown instruction: vsub.xy $vf7, $vf5, $vf6  */
    /* m2c-unknown:  unknown instruction: vsub.xy $vf8, $vf9, $vf8  */
    /* m2c-unknown:  unknown instruction: qmfc2.ni $a0, $vf4  */
    if (0 /*  unknown instruction: qmfc2.ni $at, $vf3  */ >= 0) {
        // Error: negative shift count
        // At instruction: bgez $v0, .L001FA818
        if (M2C_ERROR() && (0 /*  unknown instruction: qmfc2.ni $v0, $vf7  */ >= 0)) {
            // Error: negative shift count
            // At instruction: bltz $v0, .L001FA818
            if (M2C_ERROR()) {
                if (0 /*  unknown instruction: qmfc2.ni $v1, $vf8  */ >= 0) {
                    // Error: negative shift count
                    // At instruction: bltz $v1, .L001FA810
                    if (M2C_ERROR()) {
                        return 1;
                    }
                }
                return 0;
            }
        }
    }
    return -1;
}
#endif /* NON_MATCHING */
