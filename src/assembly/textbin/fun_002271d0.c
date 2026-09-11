/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002271d0
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 35.4245%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002271d0/FUN_002271d0.s", FUN_002271d0);
#else
#include "rnc/assembly_textbin_fun_002271d0_types.h"
#include "types.h"










extern struct M2c_D_00151780 D_00151780;
extern struct M2c_D_00160F00 *D_00160F00;
extern s32 func_00233980();
void FUN_002271d0(void) {
    s16 temp_17_15;
    s16 temp_18_16;
    s32 temp_16_21;
    s32 temp_2_75;
    s32 temp_3_80;
    s32 temp_4_24;
    s32 var_14_55;
    s32 var_6_85;
    s32 var_7_82;
    s64 temp_3_89;
    struct M2c_temp_15_60 *temp_15_60;
    struct M2c_temp_2_61 *temp_2_61;
    struct M2c_var_5_86 *var_5_86;

    temp_17_15 = D_00151780.unk150;
    temp_18_16 = D_00151780.unk152;
    temp_16_21 = (s16) ((temp_17_15 > -1) ? temp_17_15 : (temp_17_15 + 0x1F)) >> 5;
    func_00233980(0x42, 0x64);
    temp_4_24 = temp_16_21 + 5;
    D_00160F00->unk0 = (s32) (temp_4_24 | 0x10000000);
    D_00160F00->unk4 = 0;
    D_00160F00->unk8 = 0;
    var_14_55 = 0;
    D_00160F00->unkC = (s32) (temp_4_24 | 0x50000000);
    temp_15_60 = D_00160F00;
    temp_2_61 = ((u8 *)temp_15_60 + (0x10));
    D_00160F00 = temp_2_61;
    temp_15_60->unk10 = (s64) ((0x8000 << 0x2D) | 1);
    temp_2_61->unk48 = 0x44;
    temp_2_61->unk8 = 0xE;
    temp_2_61->unk10 = 0x31001;
    temp_2_61->unk18 = 0x47;
    temp_2_61->unk20 = (s64) ((0x9000 << 0x2E) | 0x8001);
    temp_2_61->unk28 = 0x10;
    temp_2_61->unk30 = 0x146;
    temp_2_61->unk38 = 0x7F808080;
    temp_2_61->unk40 = (s64) (temp_16_21 | 0x8000 | (0x9000 << 0x2E));
    if (temp_16_21 > 0) {
        temp_2_75 = temp_18_16 * 8;
        temp_3_80 = 0 - (temp_17_15 * 8);
        var_7_82 = temp_3_80 + 0x8000;
        var_6_85 = temp_3_80 + 0x8200;
        var_5_86 = ((u8 *)temp_15_60 + (0x60));
        do {
            temp_3_89 = var_6_85 | ((temp_2_75 + 0x7FF0) << 0x10);
            var_5_86->unk0 = (s64) (var_7_82 | ((0x8000 - temp_2_75) << 0x10));
            var_14_55 += 1;
            var_6_85 += 0x200;
            var_5_86->unk8 = temp_3_89;
            var_7_82 += 0x200;
            var_5_86 = ((u8 *)var_5_86 + (8 ))+ 8;
        } while (var_14_55 < temp_16_21);
    }
    D_00160F00 += (temp_16_21 * 0x10) + 0x50;
}
#endif /* NON_MATCHING */
