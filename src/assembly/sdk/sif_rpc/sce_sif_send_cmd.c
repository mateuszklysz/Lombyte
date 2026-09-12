/*
STATE: C_NON_MATCHING
SYMBOL: _sceSifSendCmd
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _sceSifSendCmd; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sif_rpc/sce_sif_send_cmd/_sceSifSendCmd.s", _sceSifSendCmd);
#else
#include "rnc/assembly_sdk_sif_rpc_sce_sif_send_cmd_types.h"
#include "types.h"


extern s32 D_00154E60;
extern s32 isceSifSetDma();
extern s32 sceSifSetDma();
extern s32 sceSifWriteBackDCache();
s32 _sceSifSendCmd(s32 arg0, s32 arg1, struct M2c_arg2 *arg2, s32 arg3, s32 *arg4, s32 arg5, s32 arg6) {
u8 sp_slot[0x80];    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_18_66;
    s32 temp_5_45;
    s32 var_18_23;

    if ((u32) (arg3 - 0x10) >= 0x61U) {
        return 0;
    }
    var_18_23 = 0;
    if (arg6 > 0) {
        arg2->unk4 = arg5;
        var_18_23 = 1;
        arg2->unk0 = (s32) (arg2->unk0 | (arg6 << 8));
        sp4 = arg5;
        sp8 = arg6;
        spC = 0;
        if (arg1 & 4) {
            sceSifWriteBackDCache(arg4, arg6);
        }
    } else {
        arg2->unk4 = 0;
        arg2->unk0 = (s32) arg2->unk0;
    }
    temp_5_45 = var_18_23 * 0x10;
    *(sp_slot + temp_5_45) = arg2;
    *(&sp4 + temp_5_45) = D_00154E60;
    *(&sp8 + temp_5_45) = arg3;
    arg2->unk8 = arg0;
    arg2->unk0 = (u8) arg3;
    *(&spC + temp_5_45) = 0x44;
    temp_18_66 = var_18_23 + 1;
    sceSifWriteBackDCache(arg2, arg3);
    if (arg1 & 1) {
        return isceSifSetDma(sp_slot, temp_18_66);
    }
    return sceSifSetDma(sp_slot, temp_18_66);
}
#endif /* NON_MATCHING */
