/*
STATE: C_NON_MATCHING
SYMBOL: sceWrite
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceWrite; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/scewrite/sceWrite.s", sceWrite);
#else
#include "rnc/assembly_sdk_library_scewrite_types.h"
#include "types.h"




extern u8 D_0012FC10[];
extern s32 D_0012FC94;
extern s32 D_0012FCA4;
extern struct M2c_D_00156880 D_00156880;
extern u8 D_001574C0[];
extern u8 D_00157D80[];
extern u8 D_00157F80[];
extern s32 CreateSema();
extern s32 DeleteSema();
extern s32 ReadQueueStatus();
extern s32 SignalSema();
extern s32 WaitSema();
extern s32 _sceFsWaitS();
extern s32 get_iob();
extern s32 sceSifCallRpc();
extern s32 sceSifWriteBackDCache();
s32 sceWrite(s32 arg0, u32 arg1, s32 arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp24;
    s32 sp30;
    s32 *var_30_74;
    s32 *temp_5_88;
    s32 temp_16_119;
    s32 temp_16_163;
    s32 temp_20_56;
    s32 temp_22_33;
    s32 var_16_109;
    s32 var_16_72;
    s32 var_5_127;
    s32 var_6_82;
    u8 *temp_4_132;
    u8 temp_3_133;
    struct M2c_temp_16_19 *temp_16_19;

    temp_16_19 = get_iob();
    _sceFsWaitS(3);
    if (D_0012FC94 != 0) {
        goto block_2;
    }
    ReadQueueStatus();
    return -1;
block_2:
    if (temp_16_19 == NULL) {
        goto block_6;
    }
    temp_22_33 = temp_16_19->unk4;
    if (temp_22_33 == 0) {
        goto block_5;
    }
    goto block_7;
block_5:
block_6:
    ReadQueueStatus();
    return -9;
block_7:
    D_00156880.unkC = (s32) temp_16_19->unk0;
    sp14 = 1;
    D_00156880.unk2C = (s32) ((s32) (((u8 *)temp_16_19 - (u8 *)D_00157D80)) >> 4);
    D_00156880.unk14 = arg2;
    D_00156880.unk10 = arg1;
    sp18 = 0;
    sp24 = 0;
    temp_20_56 = CreateSema(&sp10);
    D_00156880.unk8 = 4;
    D_00156880.unk4 = &sp30;
    D_00156880.unk0 = temp_20_56;
    if (!(temp_22_33 & 0x8000)) {
        goto block_16;
    }
    WaitSema(D_0012FCA4);
    var_16_72 = arg1 & 0xF;
    if (*(s32 *)D_0012FC10 != -1) {
        goto block_11;
    }
    var_30_74 = (void *)0x150000;
    *(s32 *)D_0012FC10 = D_00156880.unk0;
    D_00156880.unk0 = (s32) -D_00156880.unk0;
    goto block_15;
block_11:
    var_30_74 = (void *)0x150000;
    var_6_82 = 1;
loop_12:
    if (var_6_82 >= 0x20) {
        goto block_15;
    }
    temp_5_88 = ((s32 *)D_0012FC10 + var_6_82);
    var_6_82 += 1;
    if (*temp_5_88 != -1) {
        goto loop_12;
    }
    *temp_5_88 = D_00156880.unk0;
    D_00156880.unk0 = (s32) -D_00156880.unk0;
block_15:
    SignalSema(D_0012FCA4);
    goto block_17;
block_16:
    var_16_72 = arg1 & 0xF;
    var_30_74 = D_001574C0;
block_17:
    if (var_16_72 != 0) {
        goto block_19;
    }
    var_16_109 = 0;
    goto block_20;
block_19:
    var_16_109 = ((arg1 >> 4) * 0x10) - (arg1 - 0x10);
block_20:
    temp_16_119 = (arg2 < var_16_109) ? arg2 : var_16_109;
    if (temp_22_33 & 0x20000000) {
        goto block_22;
    }
    sceSifWriteBackDCache(arg1, arg2);
block_22:
    D_00156880.unk18 = temp_16_119;
    var_5_127 = 0;
    if (temp_16_119 <= 0) {
        goto block_25;
    }
loop_24:
    temp_4_132 = ((u8 *)&D_00156880 + 0x1C + var_5_127);
    temp_3_133 = *(volatile u8 *)((arg1 | 0x20000000) + var_5_127);
    var_5_127 += 1;
    *temp_4_132 = temp_3_133;
    if (var_5_127 < temp_16_119) {
        goto loop_24;
    }
block_25:
    if (sceSifCallRpc(D_00157F80, 3, 0, &D_00156880, 0x30, (s32) var_30_74, 4, 0, 0) >= 0) {
        goto block_27;
    }
    DeleteSema(temp_20_56);
    ReadQueueStatus();
    return -0xB;
block_27:
    temp_16_163 = *(volatile u32 *)((u32) var_30_74 | 0x20000000);
    ReadQueueStatus();
    if (temp_16_163 != 0) {
        goto block_29;
    }
    DeleteSema(temp_20_56);
    return -0xB;
block_29:
    if (!(temp_22_33 & 0x8000)) {
        goto block_31;
    }
    DeleteSema(temp_20_56);
    return 0;
block_31:
    WaitSema(temp_20_56);
    DeleteSema(temp_20_56);
    return sp30;
}
#endif /* NON_MATCHING */
