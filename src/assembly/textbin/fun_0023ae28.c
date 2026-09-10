/* ROLE: recovered function `audioDecEndPut__FP9_AudioDeci` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 53.7556%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023ae28/FUN_0023ae28.s", FUN_0023ae28);
#else
#include "rnc/assembly_textbin_fun_0023ae28_types.h"
#include "types.h"


void FUN_0023ae28(struct M2c_arg0 *arg0, s32 arg1) {
    s32 temp_2_14;
    s32 temp_2_16;
    s32 temp_2_39;
    s32 temp_4_13;
    s32 temp_4_18;
    s32 temp_4_31;
    s32 var_7_8;

    var_7_8 = arg1;
    if (arg0->unk0 == 0) {
        if (arg0->unk4 != 4) {
            temp_4_13 = arg0->unk30;
            temp_2_14 = 0x28 - temp_4_13;
            temp_2_16 = (temp_2_14 >= var_7_8) ? var_7_8 : temp_2_14;
            temp_4_18 = temp_4_13 + temp_2_16;
            arg0->unk30 = temp_4_18;
            if (temp_4_18 >= 0x28) {
                arg0->unk0 = 1;
            }
            var_7_8 -= temp_2_16;
        } else {
            arg0->unk0 = 1;
        }
    }
    temp_4_31 = arg0->unk40;
    temp_2_39 = ((s32) ((temp_4_31 > -1) ? temp_4_31 : (temp_4_31 + 0x3FF)) >> 0xA) << 0xA;
    arg0->unk40 = temp_2_39;
    arg0->unk3C = (s32) (arg0->unk3C + var_7_8);
    arg0->unk44 = (s32) (arg0->unk44 + var_7_8);
    arg0->unk38 = (s32) ((s32) (arg0->unk38 + var_7_8) % temp_2_39);
}
#endif /* NON_MATCHING */
