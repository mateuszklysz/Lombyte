/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f4fb8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 33.1354%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f4fb8/FUN_001f4fb8.s", FUN_001f4fb8);
#else
#include "rnc/assembly_textbin_fun_001f4fb8_types.h"
#include "types.h"










extern struct M2c_D_00151780 D_00151780;
extern struct M2c_D_0015F350 *D_0015F350;
extern s32 func_001F52A0();
extern s32 func_00233980();
void FUN_001f4fb8(void) {
    s16 temp_17_18;
    s16 temp_3_59;
    s16 temp_3_84;
    s16 temp_5_61;
    s16 temp_5_86;
    s32 temp_16_73;
    s32 temp_19_43;
    s32 temp_8_28;
    s32 temp_8_54;
    s32 temp_8_79;
    s32 var_16_11;
    s64 temp_2_16;
    s64 temp_5_46;
    s64 temp_5_71;
    struct M2c_temp_2_44 *temp_2_44;
    struct M2c_temp_3_15 *temp_3_15;
    struct M2c_temp_3_52 *temp_3_52;

    var_16_11 = 0;
    temp_3_15 = D_0015F350;
    temp_2_16 = temp_3_15->unk8;
    temp_17_18 = D_00151780.unk152;
    if (temp_2_16 != 0) {
        func_00233980(0x42, temp_2_16 & ((0xFF00 << 0x18) | 0xFF));
    }
    temp_8_28 = temp_3_15->unk4;
    if (temp_8_28 & 0xFF000000) {
        func_001F52A0(0, temp_17_18, 0, D_00151780.unk150, (u64) ((s64) temp_8_28 << 0x20) >> 0x20);
    }
    if (temp_17_18 > 0) {
        temp_19_43 = (0xFF00 << 0x18) | 0xFF;
        temp_2_44 = D_0015F350;
        do {
            temp_5_46 = temp_2_44->unk18;
            if (temp_5_46 != 0) {
                func_00233980(0x42, temp_5_46 & temp_19_43);
            }
            temp_3_52 = D_0015F350;
            temp_8_54 = temp_3_52->unk14;
            if (temp_8_54 & 0xFF000000) {
                temp_3_59 = temp_17_18 - 1;
                temp_5_61 = var_16_11 + temp_3_52->unk10;
                func_001F52A0(var_16_11, (temp_5_61 >= temp_3_59) ? temp_3_59 : temp_5_61, 0, D_00151780.unk150, (u64) ((s64) temp_8_54 << 0x20) >> 0x20);
            }
            temp_5_71 = temp_3_52->unk28;
            temp_16_73 = var_16_11 + temp_3_52->unk10;
            if (temp_5_71 != 0) {
                func_00233980(0x42, temp_5_71 & temp_19_43);
            }
            temp_8_79 = D_0015F350->unk24;
            if (temp_8_79 & 0xFF000000) {
                temp_3_84 = temp_17_18 - 1;
                temp_5_86 = temp_16_73 + D_0015F350->unk20;
                func_001F52A0(temp_16_73, (temp_5_86 >= temp_3_84) ? temp_3_84 : temp_5_86, 0, D_00151780.unk150, (u64) ((s64) temp_8_79 << 0x20) >> 0x20);
            }
            var_16_11 = temp_16_73 + D_0015F350->unk20;
        } while (var_16_11 < temp_17_18);
    }
}
#endif /* NON_MATCHING */
