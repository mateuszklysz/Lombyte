/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0020d510
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020d510/FUN_0020d510.s", FUN_0020d510);
#else
#include "rnc/assembly_textbin_fun_0020d510_types.h"
#include "types.h"


extern u8 D_0019BDC0[];
s32 FUN_0020d510(s32 arg1, struct M2c_arg0 *arg0) {
    s32 temp_2_16;
    u64 temp_4_5;

    temp_4_5 = arg0->unk38;
    temp_2_16 = ((temp_4_5 >> 8) & 0xFF) << 6;
    if (((temp_4_5 >> 0x10) & 0xFF) <= 0) {
        /* m2c-unknown:  unknown instruction: lqc2 $vf1, 0x10($at)  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a1)  */
        return temp_2_16;
    }
    /* m2c-unknown:  unknown instruction: qmtc2.ni $v1, $vf3  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, 0x10($at)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, 0x10($v0)  */
    /* m2c-unknown:  unknown instruction: vitof12.x $vf3, $vf3  */
    /* m2c-unknown:  unknown instruction: vsubx.w $vf3, $vf0, $vf3x  */
    /* m2c-unknown:  unknown instruction: vmulaw.xyz $acc, $vf1, $vf3w  */
    /* m2c-unknown:  unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a1)  */
    return (s32) (temp_2_16 + D_0019BDC0);
}
#endif /* NON_MATCHING */
