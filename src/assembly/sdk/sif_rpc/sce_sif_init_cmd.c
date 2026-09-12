/*
STATE: C_NON_MATCHING
SYMBOL: sceSifInitCmd
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceSifInitCmd; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sif_rpc/sce_sif_init_cmd/sceSifInitCmd.s", sceSifInitCmd);
#else
#include "rnc/assembly_sdk_sif_rpc_sce_sif_init_cmd_types.h"
#include "types.h"








extern u8 D_0011A428[];
extern u8 D_0011A448[];
extern u8 D_0012FC04[];
extern u8 D_00154D80[];
extern u8 D_00154E00[];
extern struct M2c_D_00154E40 D_00154E40;
extern u32 D_00154E54[];
extern struct M2c_D_00154E58 D_00154E58;
extern struct M2c_D_00154E80 D_00154E80;
extern u8 D_00154F80[];
extern s32 AddDmacHandler();
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 FlushCache();
extern s32 func_00119160();
extern s32 sceSifGetReg();
extern s32 sceSifSetDChain();
extern s32 sceSifSetReg();
extern void _sceSifCmdIntrHdlr();
void sceSifInitCmd(void) {
    struct M2c_var_3_42 *var_3_42;
    s32 *var_2_61;
    s32 temp_2_113;
    s32 temp_2_141;
    s32 temp_5_29;
    s32 temp_6_30;
    s32 var_16_46;
    s32 var_16_59;

    DIntr();
    if (*(s32 *)D_0012FC04 == 0) {
        goto block_3;
    }
    EnableInterrupts();
    return;
block_3:
    temp_5_29 = (s32) D_00154E00 | 0x20000000;
    temp_6_30 = (s32) D_00154D80 | 0x20000000;
    *(s32 *)D_0012FC04 = 1;
    D_00154E58.unk0 = temp_6_30;
    D_00154E58.unk1C = D_00154F80;
    D_00154E58.unk4 = temp_5_29;
    var_3_42 = &D_00154E80;
    D_00154E58.unk10 = 0x20;
    D_00154E58.unk8 = 0;
    var_16_46 = 0x1F;
    D_00154E58.unkC = &D_00154E80;
    D_00154E58.unk14 = 0;
    D_00154E58.unk18 = 0;
loop_4:
    var_3_42->unk0 = 0;
    var_16_46 -= 1;
    var_3_42->unk4 = 0;
    var_3_42 += 8;
    if (var_16_46 >= 0) {
        goto loop_4;
    }
    var_16_59 = 0x1F;
    var_2_61 = D_00154F80 + 0x7C;
loop_6:
    *var_2_61 = 0;
    var_16_59 -= 1;
    var_2_61 -= 4;
    if (var_16_59 >= 0) {
        goto loop_6;
    }
    D_00154E80.unk0 = D_0011A448;
    D_00154E80.unk8 = D_0011A428;
    D_00154E80.unkC = &D_00154E58;
    D_00154E80.unk4 = &D_00154E58;
    EnableInterrupts(&D_00154E80, temp_5_29, temp_6_30, 0x20, &D_00154E80, &D_00154E80, D_0012FC04);
    FlushCache(0);
    if (!(*(s32 *)0x1000E010 & 0x20)) {
        goto block_9;
    }
    *(volatile u32 *)0x1000E010 = 0x20;
block_9:
    if (*(s32 *)0x1000C000 & 0x100) {
        goto block_11;
    }
    sceSifSetDChain();
block_11:
    D_00154E54[0] = AddDmacHandler(5, &_sceSifCmdIntrHdlr, 0);
    func_00119160(5);
    temp_2_113 = sceSifGetReg(0x80000000);
    D_00154E58.unk8 = temp_2_113;
    if (temp_2_113 == 0) {
        goto block_14;
    }
    D_00154E40.unk10 = D_00154D80;
    sceSifSendCmd(0x80000000, &D_00154E40, 0x14, 0, 0, 0);
    return;
block_14:
loop_15:
    if (!(sceSifGetReg(4) & 0x20000)) {
        goto loop_15;
    }
    temp_2_141 = sceSifGetReg(2);
    D_00154E58.unk8 = temp_2_141;
    sceSifSetReg(0x80000000, temp_2_141);
    sceSifSetReg(0x80000001, (s32) &D_00154E58);
    D_00154E40.unk10 = D_00154D80;
    D_00154E40.unkC = 0;
    sceSifSendCmd(0x80000002, &D_00154E40, 0x14, 0, 0, 0);
    return;
}
#endif /* NON_MATCHING */
