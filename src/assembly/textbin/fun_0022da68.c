/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0022da68
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 76.4878%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022da68/FUN_0022da68.s", FUN_0022da68);
#else
#include "rnc/assembly_textbin_fun_0022da68_types.h"
#include "types.h"






extern u8 D_0013E550[];
extern s32 func_0022D7F0();
s32 FUN_0022da68(u32 arg1, u16 arg0, struct M2c_arg2 *arg2) {
    s32 temp_2_31;
    s32 temp_3_16;
    s32 var_2_12;
    struct M2c_temp_2_13 *temp_2_13;
    struct M2c_temp_3_39 *temp_3_39;

    var_2_12 = -1;
    if (arg2 == NULL) {
        goto block_12;
    }
    temp_2_13 = arg2->unk24;
    if (temp_2_13 != NULL) {
        goto block_3;
    }
    return -1;
block_3:
    temp_3_16 = temp_2_13->unk28;
    if (temp_3_16 == 0) {
        goto block_6;
    }
    goto block_8;
block_6:
block_7:
    return -1;
block_8:
    if (arg0 >= (s32) temp_2_13->unkD) {
        goto block_7;
    }
    temp_2_31 = func_0022D7F0(temp_3_16 + (arg0 << 5), arg2, 0, 0x400);
    if (temp_2_31 < 0) {
        goto block_11;
    }
    temp_3_39 = (temp_2_31 * 0x70) + D_0013E550;
    temp_3_39->unk7E = arg0;
    temp_3_39->unk88 = arg2;
block_11:
    var_2_12 = temp_2_31;
block_12:
    return var_2_12;
}
#endif /* NON_MATCHING */
