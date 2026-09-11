/*
STATE: C_NON_MATCHING
SYMBOL: Hud_SendResidentBank__FiPcb
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `Hud_SendResidentBank__FiPcb`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 57.1538%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/hud_send_resident_bank/FUN_001ff128.s", FUN_001ff128);
#else
#include "rnc/assembly_textbin_fun_001ff128_types.h"
#include "types.h"




extern s32 D_0015EE88;
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern s32 func_001FEFC0();
extern s32 func_00200B10();
void FUN_001ff128(s32 arg1, s32 arg0, s32 arg2) {
    struct M2c_temp_2_57 *temp_2_57;
    s32 temp_17_54;
    s32 temp_18_55;
    s32 temp_21_47;
    s32 var_19_43;
    s32 var_20_30;
    s32 var_2_39;
    u8 temp_16_59;
    u8 temp_8_61;

    if (*(s32 *)((u8 *)(D_0019A3E8.unk18 + (arg0 * 4)) + 0x74) == 0) {
        func_001FEFC0(0);
    }
    var_20_30 = D_0015EE88;
    if (arg0 != 0) {
        var_2_39 = *(s32 *)((u8 *)(D_0019A3E8.unk18 + ((arg0 - 1) * 4)) + 0x34);
    } else {
        var_2_39 = 0;
    }
    var_19_43 = var_2_39;
    temp_21_47 = *(s32 *)((u8 *)(D_0019A3E8.unk18 + (arg0 * 4)) + 0x34);
    if (var_19_43 < temp_21_47) {
        do {
            temp_17_54 = var_19_43 * 8;
            temp_18_55 = var_20_30 >> 8;
            temp_2_57 = temp_17_54 + D_0019A3E8.unk24;
            temp_16_59 = temp_2_57->unk6;
            temp_8_61 = temp_2_57->unk7;
            var_19_43 += 1;
            func_00200B10(temp_2_57->unk0, temp_18_55, 0x1B, temp_16_59, temp_8_61, arg2);
            var_20_30 += (1 << (temp_16_59 + temp_8_61)) * 4;
            *(s32 *)((u8 *)(temp_17_54 + D_0019A3E8.unk24) + 0x4) = (s16) temp_18_55;
        } while (var_19_43 < temp_21_47);
    }
}
#endif /* NON_MATCHING */
