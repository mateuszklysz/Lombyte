/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00231878
SCORE: code=52.544186 functions=52.544186 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00231878/FUN_00231878.s", FUN_00231878);
#else
#include "rnc/assembly_textbin_fun_00231878_types.h"
#include "types.h"










extern u8 D_00137B80[];
extern s32 D_0015EE74;
extern s32 D_0015EE78;
extern s32 D_0015EE8C;
extern struct M2c_D_001940C0 D_001940C0;
extern s32 FlushCache();
extern s32 func_00120558();
extern s32 func_0020B618();
extern s32 func_00216728();
extern s32 sceCdSync();
extern s32 sceGsExecLoadImage();
extern s32 sceGsSetDefLoadImage();
void FUN_00231878(s32 arg0, s32 arg1, s32 arg2, s64 *arg3, s64 *arg4, s64 *arg5) {    s32 sp0;
u8 sp_slot[0x130];    s32 sp10;
    s32 sp14;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp20;
    s64 *sp80;
    s64 *sp84;
    s32 *var_18_54;
    s32 var_17_70;
    s32 var_21_25;
    s32 var_2_72;
    s32 var_2_90;
    s64 temp_5_195;
    s64 temp_8_186;
    struct M2c_temp_19_42 *temp_19_42;
    struct M2c_temp_22_47 *temp_22_47;
    struct M2c_temp_23_51 *temp_23_51;
    struct M2c_temp_3_12 *temp_3_12;
    s32 *var_16_145;

    temp_3_12 = D_00137B80 + (arg0 * 8);
    var_21_25 = 0;
    sp80 = arg4;
    sp84 = arg5;
    func_00216728(D_001940C0.unk14 + 0x100000, temp_3_12->unk1388, temp_3_12->unk138C, D_001940C0.unk14);
    sceCdSync(0);
    FlushCache(0);
    func_0020B618(D_001940C0.unk14 + 0x100000, D_001940C0.unk14);
    FlushCache(0);
    temp_19_42 = D_001940C0.unk14;
    temp_22_47 = ((u8 *)temp_19_42 + ((arg2 * 4)));
    D_0015EE78 = D_0015EE8C;
    temp_23_51 = ((u8 *)temp_19_42 + ((arg1 * 4)));
    D_0015EE74 = D_0015EE8C;
    var_18_54 = sp_slot;
loop_1:
    if (var_21_25 != 0) {
        goto block_3;
    }
    sceGsSetDefLoadImage(&sp20, (s32) (D_0015EE74 << 8) >> 0x10, 1, 0, 0, 0, 0x10, 0x10);
    var_17_70 = 0x400;
    var_2_72 = temp_19_42->unk4;
    goto block_11;
block_3:
    if (var_21_25 != 1) {
        goto block_5;
    }
    sceGsSetDefLoadImage(&sp20, (s32) (D_0015EE74 << 8) >> 0x10, 1, 0x13, 0, 0, 0x40, 0x40);
    var_17_70 = 0x1000;
    var_2_90 = temp_19_42->unk4;
    goto block_13;
block_5:
    if (var_21_25 != 2) {
        goto block_7;
    }
    sceGsSetDefLoadImage(&sp20, (s32) (D_0015EE74 << 8) >> 0x10, 1, 0, 0, 0, 0x10, 0x10);
    var_17_70 = 0x400;
    var_2_72 = temp_23_51->unk8;
    goto block_11;
block_7:
    if (var_21_25 != 3) {
        goto block_9;
    }
    sceGsSetDefLoadImage(&sp20, (s32) (D_0015EE74 << 8) >> 0x10, 8, 0x13, 0, 0, 0x200, 0x40);
    var_17_70 = 0x8000;
    var_2_90 = temp_23_51->unk8;
    goto block_13;
block_9:
    if (var_21_25 != 4) {
        goto block_12;
    }
    sceGsSetDefLoadImage(&sp20, (s32) (D_0015EE74 << 8) >> 0x10, 1, 0, 0, 0, 0x10, 0x10);
    var_17_70 = 0x400;
    var_2_72 = temp_22_47->unk8;
block_11:
    var_16_145 = ((u8 *)temp_19_42 + (var_2_72 ))+ 0x20;
    goto block_14;
block_12:
    sceGsSetDefLoadImage(&sp20, (s32) (D_0015EE74 << 8) >> 0x10, 8, 0x13, 0, 0, 0x200, 0x40);
    var_17_70 = 0x8000;
    var_2_90 = temp_22_47->unk8;
block_13:
    var_16_145 = ((u8 *)temp_19_42 + (var_2_90 ))+ 0x420;
block_14:
    var_21_25 += 1;
    FlushCache(0);
    sceGsExecLoadImage(&sp20, var_16_145);
    func_00120558(0, 0);
    *var_18_54 = (s32) D_0015EE74 >> 8;
    D_0015EE74 += var_17_70;
    var_18_54 += 1;
    if (var_21_25 < 6) {
        goto loop_1;
    }
    temp_8_186 = 0xB000 << 0x13;
    temp_5_195 = -1 << 0x3F;
    *arg3 = sp4 | 0x19304000 | (((s64) sp0 << 0x25) | temp_8_186) | temp_5_195;
    *sp80 = spC | 0x25320000 | (((s64) sp8 << 0x25) | temp_8_186) | temp_5_195;
    *sp84 = sp14 | 0x25320000 | (((s64) sp10 << 0x25) | temp_8_186) | temp_5_195;
    return;
}
#endif /* NON_MATCHING */
