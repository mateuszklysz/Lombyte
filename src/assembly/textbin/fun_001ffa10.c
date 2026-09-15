/*
STATE: C_NON_MATCHING
SYMBOL: GetFrameTex__Fi
SCORE: code=49.735294 functions=49.735294 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ffa10/FUN_001ffa10.s", FUN_001ffa10);
#else
#include "rnc/assembly_textbin_fun_001ffa10_types.h"
#include "types.h"














extern s32 D_0015EE74;
extern s32 D_0015EE8C;
extern s32 D_0015F458;
extern u8 D_0018D040[];
extern struct M2c_D_0019A3E8 D_0019A3E8;
s32 FUN_001ffa10(s32 arg0) {
    s32 temp_2_28;
    s32 temp_3_115;
    s32 temp_4_90;
    s32 var_10_6;
    u8 temp_5_71;
    u8 var_4_70;
    struct M2c_temp_3_30 *temp_3_30;
    struct M2c_temp_3_59 *temp_3_59;
    struct M2c_temp_4_94 *temp_4_94;
    struct M2c_temp_4_9 *temp_4_9;
    struct M2c_temp_8_18 *temp_8_18;
    struct M2c_temp_9_14 *temp_9_14;

    var_10_6 = 0;
    temp_4_9 = (arg0 * 4) + D_0019A3E8.unk20;
    temp_9_14 = D_0019A3E8.unk28 + (temp_4_9->unk0 * 8);
    temp_8_18 = D_0019A3E8.unk24 + (temp_4_9->unk2 * 8);
    if ((temp_9_14->unk4 == 0) || (temp_8_18->unk4 == 0)) {
        temp_2_28 = D_0015F458 * 0x10;
        temp_3_30 = temp_2_28 + D_0018D040;
        temp_3_30->unk0 = (s32) temp_9_14->unk0;
        temp_3_30->unk4 = 0;
        temp_3_30->unk6 = 0x3FF0;
        *(s32 *)((u8 *)(D_0018D040 + temp_2_28) + 0x8) = (s32) temp_9_14->unk0;
        temp_3_30->unkE = 0x3FF0;
        temp_3_30->unkD = 5;
        temp_3_30->unkC = 5;
    }
    if (temp_9_14->unk4 == 0) {
        temp_9_14->unk4 = (u16) ((s32) D_0015EE74 >> 8);
        D_0015EE74 += 0x400;
        if (D_0015F458 < 0x40) {
            temp_3_59 = (D_0015F458 * 0x10) + D_0018D040;
            var_10_6 = 1;
            temp_3_59->unk0 = (s32) temp_9_14->unk0;
            temp_3_59->unk4 = 0;
            temp_3_59->unk6 = (u16) temp_9_14->unk4;
        }
    }
    if (temp_8_18->unk4 == 0) {
        var_4_70 = temp_8_18->unk7;
        temp_5_71 = temp_8_18->unk6;
        temp_8_18->unk4 = (u16) ((s32) D_0015EE74 >> 8);
        if (var_4_70 < temp_5_71) {
            var_4_70 = temp_5_71;
        }
        D_0015EE74 += 1 << (var_4_70 * 2);
        if (D_0015F458 < 0x40) {
            temp_4_90 = D_0015F458 * 0x10;
            var_10_6 = 1;
            *(s32 *)((u8 *)(D_0018D040 + temp_4_90) + 0x8) = (s32) temp_8_18->unk0;
            temp_4_94 = temp_4_90 + D_0018D040;
            temp_4_94->unkC = (u8) temp_8_18->unk6;
            temp_4_94->unkD = (u8) temp_8_18->unk7;
            temp_4_94->unkE = (u16) temp_8_18->unk4;
        }
    }
    if (var_10_6 != 0) {
        D_0015F458 += 1;
    }
    temp_3_115 = temp_8_18->unk6 - 6;
    return temp_8_18->unk4 | ((1 << ((temp_3_115 <= -1) ? 0 : temp_3_115)) << 0xE) | ((((s32) temp_8_18->unk4 < ((s32) D_0015EE8C >> 8)) ? 0x1B : 0x13) << 0x14) | ((s64) temp_8_18->unk6 << 0x1A) | ((s64) temp_8_18->unk7 << 0x1E) | (((s64) temp_9_14->unk4 << 0x25) | (0x8000 << 0x13)) | (-1 << 0x3F);
}
#endif /* NON_MATCHING */
