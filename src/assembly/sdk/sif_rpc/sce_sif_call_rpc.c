/*
STATE: C_NON_MATCHING
SYMBOL: sceSifCallRpc
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceSifCallRpc; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sif_rpc/sce_sif_call_rpc/sceSifCallRpc.s", sceSifCallRpc);
#else
#include "rnc/assembly_sdk_sif_rpc_sce_sif_call_rpc_types.h"
#include "types.h"




extern u8 D_00156800[];
extern s32 CreateSema();
extern s32 DeleteSema();
extern s32 WaitSema();
extern s32 func_0011ACE8();
extern s32 func_0011AD90();
extern s32 sceSifSendCmd();
extern s32 sceSifWriteBackDCache();
s32 sceSifCallRpc(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0) {    s32 arg_sp0;
u8 sp_slot[0xD0];    s32 temp_2_91;
    s32 var_2_27;
    struct M2c_temp_2_23 *temp_2_23;

    temp_2_23 = func_0011ACE8(D_00156800);
    var_2_27 = -1;
    if (temp_2_23 == NULL) {
        goto block_22;
    }
    arg0->unk20 = arg_sp0;
    arg0->unk0 = temp_2_23;
    arg0->unk4 = (s32) temp_2_23->unk18;
    arg0->unk1C = arg7;
    temp_2_23->unk20 = arg1;
    temp_2_23->unk24 = arg4;
    temp_2_23->unk28 = arg5;
    temp_2_23->unk2C = arg6;
    temp_2_23->unk14 = temp_2_23;
    temp_2_23->unk1C = arg0;
    temp_2_23->unk34 = (s32) arg0->unk24;
    if (arg2 & 2) {
        goto block_8;
    }
    if (arg3 != arg5) {
        goto block_4;
    }
    sceSifWriteBackDCache(arg3, (arg4 >= arg6) ? arg4 : arg6);
    goto block_8;
block_4:
    if (arg4 <= 0) {
        goto block_6;
    }
    sceSifWriteBackDCache(arg3, arg4);
block_6:
    if (arg6 <= 0) {
        goto block_8;
    }
    sceSifWriteBackDCache(arg5, arg6);
block_8:
    if (arg2 & 1) {
        goto block_10;
    }
    goto block_16;
block_10:
    if (arg7 != 0) {
        goto block_13;
    }
    temp_2_23->unk30 = 0;
    goto block_14;
block_13:
    temp_2_23->unk30 = 1;
block_14:
    arg0->unk8 = -1;
    var_2_27 = 0;
    if (sceSifSendCmd(0x8000000A, temp_2_23, 0x40, arg3, arg0->unk14, arg4) != 0) {
        goto block_22;
    }
    goto block_20;
block_16:
    temp_2_91 = CreateSema(sp_slot, 1, 0);
    arg0->unk8 = temp_2_91;
    if (temp_2_91 >= 0) {
        goto block_18;
    }
    func_0011AD90(temp_2_23);
    return -3;
block_18:
    temp_2_23->unk30 = 1;
    if (sceSifSendCmd(0x8000000A, temp_2_23, 0x40, arg3, arg0->unk14, arg4) != 0) {
        goto block_21;
    }
    DeleteSema(arg0->unk8);
block_20:
    func_0011AD90(temp_2_23);
    return -2;
block_21:
    WaitSema(arg0->unk8);
    DeleteSema(arg0->unk8);
    var_2_27 = 0;
block_22:
    return var_2_27;
}
#endif /* NON_MATCHING */
