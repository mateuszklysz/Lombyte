/*
STATE: C_NON_MATCHING
SYMBOL: sceLseek
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceLseek; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sce_lseek/sceLseek.s", sceLseek);
#else
#include "rnc/assembly_sdk_library_sce_lseek_types.h"
#include "types.h"




extern u8 D_0012FC10[];
extern u32 D_0012FC94[];
extern u32 D_0012FCA4[];
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
s32 sceLseek(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp24;
    s32 sp30;
    s32 *var_16_72;
    s32 *temp_5_86;
    s32 temp_16_126;
    s32 temp_18_54;
    s32 temp_19_31;
    s32 var_6_80;
    struct M2c_temp_16_17 *temp_16_17;

    temp_16_17 = get_iob();
    _sceFsWaitS(4);
    if (D_0012FC94[0] == 0) {
        ReadQueueStatus();
        return -1;
    }
    if ((temp_16_17 == NULL) || (temp_19_31 = temp_16_17->unk4, (temp_19_31 == 0))) {
        ReadQueueStatus();
        return -9;
    }
    D_00156880.unk10 = arg1;
    D_00156880.unkC = (s32) temp_16_17->unk0;
    D_00156880.unk14 = arg2;
    D_00156880.unk18 = (s32) ((s32) (((u8 *)temp_16_17 - (u8 *)D_00157D80)) >> 4);
    sp14 = 1;
    sp18 = 0;
    sp24 = 0;
    temp_18_54 = CreateSema(&sp10, 1);
    D_00156880.unk8 = 4;
    D_00156880.unk4 = &sp30;
    D_00156880.unk0 = temp_18_54;
    if (temp_19_31 & 0x8000) {
        WaitSema(D_0012FCA4[0]);
        if (*(s32 *)D_0012FC10 == -1) {
            var_16_72 = (void *)0x150000;
            *(s32 *)D_0012FC10 = D_00156880.unk0;
            D_00156880.unk0 = (s32) -D_00156880.unk0;
        } else {
            var_16_72 = D_001574C0;
            var_6_80 = 1;
loop_10:
            if (var_6_80 < 0x20) {
                temp_5_86 = ((s32 *)D_0012FC10 + var_6_80);
                var_6_80 += 1;
                if (*temp_5_86 == -1) {
                    *temp_5_86 = D_00156880.unk0;
                    D_00156880.unk0 = (s32) -D_00156880.unk0;
                } else {
                    goto loop_10;
                }
            }
        }
        SignalSema(D_0012FCA4[0]);
    } else {
        var_16_72 = D_001574C0;
    }
    if (sceSifCallRpc(D_00157F80, 4, 0, &D_00156880, 0x1C, (s32) var_16_72, 4, 0, 0) < 0) {
        DeleteSema(temp_18_54);
        ReadQueueStatus();
        return -0xB;
    }
    temp_16_126 = *(volatile u32 *)((u32) var_16_72 | 0x20000000);
    ReadQueueStatus();
    if (temp_16_126 == 0) {
        DeleteSema(temp_18_54);
        return -0xB;
    }
    if (temp_19_31 & 0x8000) {
        DeleteSema(temp_18_54);
        return 0;
    }
    WaitSema(temp_18_54);
    DeleteSema(temp_18_54);
    return sp30;
}
#endif /* NON_MATCHING */
