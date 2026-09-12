/*
STATE: C_NON_MATCHING
SYMBOL: sceMcInit
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceMcInit; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sce_mc_init/sceMcInit.s", sceMcInit);
#else
#include "rnc/assembly_sdk_sce_mc_init_types.h"
#include "types.h"




extern s32 D_00132DAC;
extern u8 D_00153450[];
extern u8 D_00153468[];
extern u8 D_00153490[];
extern struct M2c_D_00159A00 D_00159A00;
extern u8 D_00159A80[];
extern struct M2c_D_0015AFC0 D_0015AFC0;
extern u8 D_FFFFF[];
extern s32 CreateSema();
extern s32 SignalSema();
extern s32 WaitSema();
extern s32 sceMcSync();
extern s32 scePrintf();
extern s32 sceSifBindRpc();
extern s32 sceSifCallRpc();
extern s32 sceSifInitRpc();
s32 sceMcInit(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp24;
    s32 *var_2_37;
    s32 temp_16_84;

    if (D_00132DAC >= 0) {
        goto block_2;
    }
    sp24 = 0;
    sp14 = 1;
    sp18 = 1;
    D_00132DAC = CreateSema(&sp10);
block_2:
    sceMcSync(0, 0, 0);
    WaitSema(D_00132DAC);
    sceSifInitRpc(0);
    goto loop_6;
block_4:
    var_2_37 = D_FFFFF;
loop_5:
    if (var_2_37 != NULL) {
        goto loop_5;
    }
loop_6:
    if (sceSifBindRpc(&D_00159A00, 0x80000400, 0) >= 0) {
        goto block_9;
    }
    scePrintf(D_00153450);
loop_8:
    goto loop_8;
block_9:
    if (D_00159A00.unk24 == 0) {
        goto block_4;
    }
    temp_16_84 = sceSifCallRpc(&D_00159A00, 0xFE, 0, D_00159A80, 0x30, &D_0015AFC0, 0xC, 0, 0);
    SignalSema(D_00132DAC);
    if (temp_16_84 < 0) {
        goto block_12;
    }
    goto block_14;
block_12:
    D_00159A00.unk24 = 0;
    return temp_16_84 - 0x64;
block_14:
    if (D_0015AFC0.unk4 >= 0x20A) {
        goto block_16;
    }
    scePrintf(D_00153468);
    D_00159A00.unk24 = 0;
    return -0x78;
block_16:
    if (D_0015AFC0.unk8 >= 0x20E) {
        goto block_18;
    }
    scePrintf(D_00153490);
    D_00159A00.unk24 = 0;
    return -0x79;
block_18:
    return D_0015AFC0.unk0;
}
#endif /* NON_MATCHING */
