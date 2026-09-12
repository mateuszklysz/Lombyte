/*
STATE: C_NON_MATCHING
SYMBOL: sceCdRead
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceCdRead; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sceCdRead/sceCdRead.s", sceCdRead);
#else
#include "rnc/assembly_sdk_library_sceCdRead_types.h"
#include "types.h"




extern u8 D_00120788[];
extern u32 D_001312D0[];
extern u32 D_001312E8[];
extern u32 D_001312F0[];
extern u32 D_001312F4[];
extern u32 D_00131314[];
extern struct M2c_D_001313C0 D_001313C0;
extern u8 D_001323C0[];
extern u8 D_00132480[];
extern u8 D_00132490[];
extern u8 D_00152FC8[];
extern u8 D_00152FE0[];
extern s32 SignalSema();
extern s32 func_00120A28();
extern s32 sceCdNcmdDiskReady();
extern s32 scePrintf();
extern s32 sceSifCallRpc();
extern s32 sceSifWriteBackDCache();
s32 sceCdRead(s32 arg0, s32 arg1, s32 *arg2, struct M2c_arg3 *arg3) {
    s32 var_2_25;
    s32 var_2_53;
    s32 var_5_50;
    u8 temp_7_46;

    if (D_001312F4[0] & 1) {
        goto block_2;
    }
    var_2_25 = 0;
    if (sceCdNcmdDiskReady() == 6) {
        goto block_20;
    }
block_2:
    if (func_00120A28(4) == 0) {
        goto block_17;
    }
    D_001313C0.unk0 = arg0;
    D_001313C0.unk4 = arg1;
    D_001313C0.unk8 = arg2;
    D_001313C0.unkC = (u8) arg3->unk0;
    D_001313C0.unkD = (u8) arg3->unk1;
    D_001313C0.unk10 = D_001323C0;
    D_001313C0.unkE = (u8) arg3->unk2;
    D_001313C0.unk14 = D_00132480;
    temp_7_46 = arg3->unk2;
    if (temp_7_46 == 1) {
        goto block_7;
    }
    var_5_50 = arg1 << 0xB;
    if ((s32) temp_7_46 < 2) {
        goto block_9;
    }
    var_2_53 = 0x924;
    if (temp_7_46 == 2) {
        goto block_8;
    }
    goto block_9;
block_7:
    var_2_53 = 0x918;
block_8:
    var_5_50 = arg1 * var_2_53;
block_9:
    *(s32 *)D_00132480 = 0;
    if (D_001312F4[0] & 2) {
        goto block_11;
    }
    sceSifWriteBackDCache(arg2, var_5_50, 1, temp_7_46, D_00132480);
block_11:
    sceSifWriteBackDCache(D_001323C0, 0x90);
    sceSifWriteBackDCache(&D_001313C0, 0x18);
    sceSifWriteBackDCache(D_00132480, 4);
    if (D_001312D0[0] <= 0) {
        goto block_13;
    }
    scePrintf(D_00152FC8);
block_13:
    D_00131314[0] = 1;
    D_001312F0[0] = 1;
    if (sceSifCallRpc(D_00132490, 1, 1, &D_001313C0, 0x18, 0, 0, D_00120788, D_001323C0) < 0) {
        goto block_15;
    }
    goto block_18;
block_15:
    D_00131314[0] = 0;
    D_001312F0[0] = 0;
    SignalSema(D_001312E8[0]);
block_17:
    return 0;
block_18:
    var_2_25 = 1;
    if (D_001312D0[0] <= 0) {
        goto block_20;
    }
    scePrintf(D_00152FE0);
    var_2_25 = 1;
block_20:
    return var_2_25;
}
#endif /* NON_MATCHING */
