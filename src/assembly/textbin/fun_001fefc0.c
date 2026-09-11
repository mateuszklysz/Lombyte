/*
STATE: C_NON_MATCHING
SYMBOL: LinkHudBank__FiPc
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `LinkHudBank__FiPc` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fefc0/FUN_001fefc0.s", FUN_001fefc0);
#else
#include "rnc/assembly_textbin_fun_001fefc0_types.h"
#include "types.h"


extern struct M2c_D_0019A3E8 D_0019A3E8;
void FUN_001fefc0(s32 arg0, s32 arg1) {
    s32 *temp_4_12;
    s32 *temp_4_49;
    s32 *temp_4_87;
    s32 *temp_5_55;
    s32 *temp_5_93;
    s32 temp_10_19;
    s32 temp_2_32;
    s32 temp_5_47;
    s32 temp_5_85;
    s32 temp_8_37;
    s32 temp_8_76;
    s32 var_4_27;
    s32 var_4_68;
    s32 var_7_35;
    s32 var_7_73;

    temp_4_12 = D_0019A3E8.unk18 + 0x74 + (arg0 * 4);
    if (*temp_4_12 == 0) {
        temp_10_19 = (arg1 + 0xF) & 0xFFFFFFF0;
        *temp_4_12 = temp_10_19;
        if (arg0 != 0) {
            var_4_27 = *(s32 *)((u8 *)(D_0019A3E8.unk18 + ((arg0 - 1) * 4)) + 0x14);
        } else {
            var_4_27 = 0;
        }
        temp_2_32 = arg0 * 4;
        var_7_35 = var_4_27;
        temp_8_37 = *(s32 *)((u8 *)(D_0019A3E8.unk18 + temp_2_32) + 0x14);
        if (var_7_35 < temp_8_37) {
            do {
                temp_5_47 = var_7_35 * 8;
                var_7_35 += 1;
                temp_4_49 = temp_5_47 + D_0019A3E8.unk28;
                *temp_4_49 &= 0x7FFFFFFF;
                temp_5_55 = temp_5_47 + D_0019A3E8.unk28;
                *temp_5_55 += temp_10_19;
            } while (var_7_35 < temp_8_37);
        }
        if (arg0 != 0) {
            var_4_68 = *(s32 *)((u8 *)(D_0019A3E8.unk18 + ((arg0 - 1) * 4)) + 0x34);
        } else {
            var_4_68 = 0;
        }
        var_7_73 = var_4_68;
        temp_8_76 = *(s32 *)((u8 *)(D_0019A3E8.unk18 + temp_2_32) + 0x34);
        if (var_7_73 < temp_8_76) {
            do {
                temp_5_85 = var_7_73 * 8;
                var_7_73 += 1;
                temp_4_87 = temp_5_85 + D_0019A3E8.unk24;
                *temp_4_87 &= 0x7FFFFFFF;
                temp_5_93 = temp_5_85 + D_0019A3E8.unk24;
                *temp_5_93 += temp_10_19;
            } while (var_7_73 < temp_8_76);
        }
    }
}
#endif /* NON_MATCHING */
