/*
STATE: C_NON_MATCHING
SYMBOL: sceFsInit
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceFsInit; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sceFsInit/sceFsInit.s", sceFsInit);
#else
#include "rnc/assembly_sdk_library_sceFsInit_types.h"
#include "types.h"








extern u8 D_0011B980[];
extern s32 D_0012FC94;
extern s32 D_0012FC98;
extern s32 D_0012FCA0;
extern struct M2c_D_00156840 D_00156840;
extern u8 D_001574C0[];
extern u8 D_00157500[];
extern u8 D_00157D80[];
extern struct M2c_D_00157F80 D_00157F80;
extern s32 D_00157FA8;
extern u8 D_00157FC0[];
extern struct M2c_D_00158000 D_00158000;
extern u8 D_FFFFF[];
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 SignalSema();
extern s32 WaitSema();
extern s32 _sceFsIobSemaMK();
extern s32 sceSifAddCmdHandler();
extern s32 sceSifBindRpc();
extern s32 sceSifCallRpc();
extern s32 sceSifInitRpc();
extern void _sceFs_Rcv_Intr();
s32 sceFsInit(void) {
u8 *sp10;
    s32 *var_2_41;
    struct M2c_var_3_66 *var_3_66;
    s32 temp_16_20;
u8 *temp_3_120;
    s32 var_2_57;
    s32 *temp_4_67;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    sceSifInitRpc(0);
    D_00158000.unk4 = 0;
    D_00158000.unk0 = 0;
    temp_16_20 = DIntr();
    sceSifAddCmdHandler(0x80000011, &_sceFs_Rcv_Intr, D_00157FC0);
    sceSifAddCmdHandler(0x80000013, D_0011B980, &D_00158000);
    if (temp_16_20 == 0) {
        goto block_4;
    }
    EnableInterrupts();
    goto block_5;
block_2:
loop_3:
    if (var_2_41 != (void *)-1) {
        goto loop_3;
    }
block_4:
block_5:
    var_2_57 = -1;
    if (sceSifBindRpc(&D_00157F80, 0x80000001, 0) < 0) {
        goto block_15;
    }
    var_2_41 = D_FFFFF;
    if (D_00157F80.unk24 == 0) {
        goto block_2;
    }
    _sceFsIobSemaMK();
    WaitSema(D_0012FCA0);
    var_3_66 = D_00157D80;
    temp_4_67 = D_00157D80 + 0x200;
    if ((u32) D_00157D80 >= (u32) temp_4_67) {
        goto block_11;
    }
loop_9:
    var_3_66->unk4 = 0;
    var_3_66 += 0x10;
    if ((u32) var_3_66 < (u32) temp_4_67) {
        goto loop_9;
    }
    goto block_12;
block_11:
block_12:
    SignalSema(D_0012FCA0);
    D_00156840.unk0 = D_00157500;
    D_00156840.unk4 = (void *) (D_00157500 + 0x440);
    if (sceSifCallRpc(&D_00157F80, 0xFF, 0, &D_00156840, 8, (s32) D_001574C0, 8, 0, 0) >= 0) {
        goto block_14;
    }
    return 0xFFFEFFFF;
block_14:
    D_00157FA8 = (s32 *) *(s32 *)((u8 *)((s32) D_001574C0 | 0x20000000) + 0x0);
    temp_3_120 = (s32 *) *(s32 *)((u8 *)((s32) (D_001574C0 + 4) | 0x20000000) + 0x0);
    sp10 = temp_3_120;
    D_0012FC94 = 1;
    var_2_57 = 0;
    D_0012FC98 = temp_3_120 == 2;
block_15:
    return var_2_57;
}
#endif /* NON_MATCHING */
