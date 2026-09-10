/* ROLE: recovered function `GetFrameTex__Fi` (hud.cpp, 0x1100 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 46.6912%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
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
    s32 temp_2_30;
    s32 temp_3_117;
    s32 temp_4_92;
    s32 var_10_8;
    u8 temp_5_73;
    u8 var_4_72;
    struct M2c_temp_3_32 *temp_3_32;
    struct M2c_temp_3_61 *temp_3_61;
    struct M2c_temp_4_11 *temp_4_11;
    struct M2c_temp_4_96 *temp_4_96;
    struct M2c_temp_8_20 *temp_8_20;
    struct M2c_temp_9_16 *temp_9_16;

    var_10_8 = 0;
    temp_4_11 = (arg0 * 4) + D_0019A3E8.unk20;
    temp_9_16 = D_0019A3E8.unk28 + (temp_4_11->unk0 * 8);
    temp_8_20 = D_0019A3E8.unk24 + (temp_4_11->unk2 * 8);
    if ((temp_9_16->unk4 == 0) || (temp_8_20->unk4 == 0)) {
        temp_2_30 = D_0015F458 * 0x10;
        temp_3_32 = temp_2_30 + D_0018D040;
        temp_3_32->unk0 = (s32) temp_9_16->unk0;
        temp_3_32->unk4 = 0;
        temp_3_32->unk6 = 0x3FF0;
        *(s32 *)((u8 *)(D_0018D040 + temp_2_30) + 0x8) = (s32) temp_9_16->unk0;
        temp_3_32->unkE = 0x3FF0;
        temp_3_32->unkD = 5;
        temp_3_32->unkC = 5;
    }
    if (temp_9_16->unk4 == 0) {
        temp_9_16->unk4 = (u16) ((s32) D_0015EE74 >> 8);
        D_0015EE74 += 0x400;
        if (D_0015F458 < 0x40) {
            temp_3_61 = (D_0015F458 * 0x10) + D_0018D040;
            var_10_8 = 1;
            temp_3_61->unk0 = (s32) temp_9_16->unk0;
            temp_3_61->unk4 = 0;
            temp_3_61->unk6 = (u16) temp_9_16->unk4;
        }
    }
    if (temp_8_20->unk4 == 0) {
        var_4_72 = temp_8_20->unk7;
        temp_5_73 = temp_8_20->unk6;
        temp_8_20->unk4 = (u16) ((s32) D_0015EE74 >> 8);
        if (var_4_72 < temp_5_73) {
            var_4_72 = temp_5_73;
        }
        D_0015EE74 += 1 << (var_4_72 * 2);
        if (D_0015F458 < 0x40) {
            temp_4_92 = D_0015F458 * 0x10;
            var_10_8 = 1;
            *(s32 *)((u8 *)(D_0018D040 + temp_4_92) + 0x8) = (s32) temp_8_20->unk0;
            temp_4_96 = temp_4_92 + D_0018D040;
            temp_4_96->unkC = (u8) temp_8_20->unk6;
            temp_4_96->unkD = (u8) temp_8_20->unk7;
            temp_4_96->unkE = (u16) temp_8_20->unk4;
        }
    }
    if (var_10_8 != 0) {
        D_0015F458 += 1;
    }
    temp_3_117 = temp_8_20->unk6 - 6;
    return temp_8_20->unk4 | ((1 << ((temp_3_117 <= -1) ? 0 : temp_3_117)) << 0xE) | ((((s32) temp_8_20->unk4 < ((s32) D_0015EE8C >> 8)) ? 0x1B : 0x13) << 0x14) | ((s64) temp_8_20->unk6 << 0x1A) | ((s64) temp_8_20->unk7 << 0x1E) | (((s64) temp_9_16->unk4 << 0x25) | (0x8000 << 0x13)) | (-1 << 0x3F);
}
#endif /* NON_MATCHING */
