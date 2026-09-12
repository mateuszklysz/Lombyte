/*
STATE: C_NON_MATCHING
SYMBOL: sceCdInit
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceCdInit; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sceCdInit/sceCdInit.s", sceCdInit);
#else
#include "rnc/assembly_sdk_library_sceCdInit_types.h"
#include "types.h"


extern u32 D_001312D0[];
extern u32 D_001312E0[];
extern u8 D_001312E4[];
extern u32 D_001312E8[];
extern u32 D_001312EC[];
extern u32 D_001312F4[];
extern u32 D_001312F8[];
extern u32 D_001312FC[];
extern u32 D_00131300[];
extern u32 D_00131304[];
extern u32 D_00131308[];
extern u32 D_0013130C[];
extern u32 D_00131310[];
extern u8 D_001324C0[];
extern u8 D_00152F50[];
extern u8 D_00152F70[];
extern u32 D_00159750[];
extern struct M2c_D_00159968 D_00159968;
extern u8 D_001599C0[];
extern u8 D_FFFFF[];
extern s32 GetThreadId();
extern s32 PowerOffCB();
extern s32 cdvd_exit();
extern s32 cmd_sem_init();
extern s32 sceCdSyncS();
extern s32 scePrintf();
extern s32 sceSifBindRpc();
extern s32 sceSifCallRpc();
extern s32 sceSifInitRpc();
extern s32 sceSifWriteBackDCache();
s32 sceCdInit(s32 arg0) {
    s32 *var_2_105;
    s32 *var_2_68;
    s32 temp_2_22;
    s32 temp_2_57;
    s32 temp_4_131;
    s32 temp_5_127;
    s32 var_16_128;
    s32 var_2_18;
    s32 var_6_124;

    var_2_18 = 0;
    if (sceCdSyncS(1) != 0) {
        goto block_31;
    }
    sceSifInitRpc(0);
    temp_2_22 = GetThreadId();
    *(s32 *)D_001312E4 = 1;
    D_00159750[0] = temp_2_22;
    D_001312FC[0] = -1;
    D_00131300[0] = -1;
    D_001312F8[0] = -1;
    D_00131308[0] = -1;
    D_00131304[0] = -1;
    D_001312F4[0] = 0;
    D_00131310[0] += 1;
    D_0013130C[0] = -1;
loop_2:
    temp_2_57 = sceSifBindRpc(&D_00159968, 0x80000592, 0);
    if (temp_2_57 < 0) {
        goto block_4;
    }
    goto block_10;
block_4:
    if (D_001312D0[0] <= 0) {
        goto block_7;
    }
    scePrintf(D_00152F50, temp_2_57, D_00131310[0]);
block_7:
    var_2_68 = D_FFFFF;
loop_8:
    if (var_2_68 != (void *)-1) {
        goto loop_8;
    }
    goto loop_2;
block_10:
    if (D_00159968.unk24 == 0) {
        goto block_13;
    }
    *(s32 *)D_001599C0 = arg0;
    D_0013130C[0] = 0;
    sceSifWriteBackDCache(D_001599C0, 4);
    if (sceSifCallRpc(&D_00159968, 0, 0, D_001599C0, 4, D_001324C0, 0x10, 0, 0) >= 0) {
        goto block_16;
    }
    *(s32 *)D_001312E4 = 0;
    return 0;
block_13:
    var_2_105 = D_FFFFF;
loop_14:
    if (var_2_105 != (void *)-1) {
        goto loop_14;
    }
    goto loop_2;
block_16:
    var_6_124 = *(volatile u32 *)((u32) (D_001324C0 + 0xC) | 0x20000000);
    temp_5_127 = *(volatile u32 *)((u32) (D_001324C0 + 4) | 0x20000000);
    var_16_128 = 1;
    temp_4_131 = *(volatile u32 *)((u32) (D_001324C0 + 8) | 0x20000000);
    if (var_6_124 == 0xFF) {
        goto block_22;
    }
    var_6_124 = -1;
    if (var_6_124 != 0xFE) {
        goto block_19;
    }
    D_001312D0[0] = 1;
    goto block_22;
block_19:
    if (((s32) ((temp_5_127 > -1) ? temp_5_127 : (temp_5_127 + 0xFF)) >> 8) < 2) {
        goto block_21;
    }
    if (((s32) ((temp_4_131 > -1) ? temp_4_131 : (temp_4_131 + 0xFF)) >> 8) >= 2) {
        goto block_23;
    }
block_21:
    var_16_128 = 2;
block_22:
block_23:
    *(s32 *)D_001312E4 = 0;
    if (arg0 < 0) {
        goto block_29;
    }
    if (arg0 < 2) {
        goto block_29;
    }
    if (arg0 != 5) {
        goto block_29;
    }
    if (D_001312D0[0] <= 0) {
        goto block_28;
    }
    scePrintf(D_00152F70, temp_5_127, var_6_124);
block_28:
    cdvd_exit();
    D_001312E8[0] = -1;
    D_001312EC[0] = -1;
    D_001312E0[0] = -1;
    goto block_30;
block_29:
    cmd_sem_init(D_001312E4, temp_5_127, var_6_124);
    PowerOffCB();
block_30:
    var_2_18 = var_16_128;
block_31:
    return var_2_18;
}
#endif /* NON_MATCHING */
