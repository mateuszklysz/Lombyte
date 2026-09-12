/*
STATE: C_NON_MATCHING
SYMBOL: sceOpen
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceOpen; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sceopen/sceOpen.s", sceOpen);
#else
#include "rnc/assembly_sdk_library_sceopen_types.h"
#include "types.h"




extern s32 D_0012FC94;
extern s32 D_0012FCA0;
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
extern s32 func_0011BBB8();
extern s32 new_iob();
extern s32 sceFsInit();
extern s32 sceSifCallRpc();
s32 sceOpen(u8 *arg0, s32 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp24;
    s32 sp30;
    s64 sp120;
    s64 sp128;
    s64 sp130;
    s64 sp138;
    s64 sp140;
    s64 sp148;
    s32 temp_16_103;
    s32 temp_17_129;
    s32 temp_21_91;
    s32 var_5_53;
    u8 temp_3_47;
    u8 temp_3_69;
    struct M2c_temp_2_43 *temp_2_43;

    sp120 = arg2;
    sp128 = arg3;
    sp130 = arg4;
    sp138 = arg5;
    sp140 = arg6;
    sp148 = arg7;
    _sceFsWaitS(0);
    if (D_0012FC94 != 0) {
        goto block_2;
    }
    sceFsInit();
block_2:
    if (func_0011BBB8() == 0) {
        goto block_4;
    }
    ReadQueueStatus();
    return -0x10004;
block_4:
    temp_2_43 = new_iob();
    if (temp_2_43 == NULL) {
        goto block_6;
    }
    temp_3_47 = *arg0;
    goto block_8;
block_6:
    ReadQueueStatus();
    return -0x13;
block_8:
    var_5_53 = 0;
    D_00156880.unk14 = temp_3_47;
    if ((temp_3_47 << 0x18) == 0) {
        goto block_15;
    }
    var_5_53 = 1;
loop_10:
    if (var_5_53 >= 0x400) {
        goto block_16;
    }
    temp_3_69 = *(arg0 + var_5_53);
    *(s32 *)((u8 *)(((u8 *)&D_00156880 + var_5_53)) + 0x14) = temp_3_69;
    if ((temp_3_69 << 0x18) == 0) {
        goto block_13;
    }
    var_5_53 += 1;
    goto loop_10;
block_13:
    goto block_16;
block_15:
block_16:
    if (var_5_53 != 0x400) {
        goto block_18;
    }
    D_00156880.unk413 = 0;
block_18:
    temp_21_91 = (s32) (((u8 *)temp_2_43 - (u8 *)D_00157D80)) >> 4;
    D_00156880.unkC = (s32) (arg1 & 0x6FFFFFFF);
    D_00156880.unk10 = (s32) sp120;
    sp14 = 1;
    D_00156880.unk414 = temp_21_91;
    sp18 = 0;
    sp24 = 0;
    temp_16_103 = CreateSema(&sp10, var_5_53, D_00157D80, (s32) sp120);
    D_00156880.unk4 = &sp30;
    D_00156880.unk0 = temp_16_103;
    D_00156880.unk8 = 4;
    if (sceSifCallRpc(D_00157F80, 0, 0, &D_00156880, 0x418, (s32) D_001574C0, 4, 0, 0) >= 0) {
        goto block_20;
    }
    DeleteSema(temp_16_103);
    ReadQueueStatus();
    return -0xB;
block_20:
    temp_17_129 = *(volatile u32 *)((u32) D_001574C0 | 0x20000000);
    ReadQueueStatus();
    if (temp_17_129 != 0) {
        goto block_22;
    }
    DeleteSema(temp_16_103);
    return -0xB;
block_22:
    WaitSema(temp_16_103);
    DeleteSema(temp_16_103);
    if (sp30 >= 0) {
        goto block_24;
    }
    WaitSema(D_0012FCA0);
    temp_2_43->unk4 = 0;
    SignalSema(D_0012FCA0);
    return sp30;
block_24:
    WaitSema(D_0012FCA0);
    temp_2_43->unk4 = (s32) (temp_2_43->unk4 | arg1);
    temp_2_43->unk0 = sp30;
    SignalSema(D_0012FCA0);
    return temp_21_91;
}
#endif /* NON_MATCHING */
