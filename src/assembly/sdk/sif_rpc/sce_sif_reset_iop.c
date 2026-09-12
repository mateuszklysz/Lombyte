/*
STATE: C_NON_MATCHING
SYMBOL: sceSifResetIop
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceSifResetIop; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sif_rpc/sce_sif_reset_iop/sceSifResetIop.s", sceSifResetIop);
#else
#include "rnc/assembly_sdk_sif_rpc_sce_sif_reset_iop_types.h"
#include "types.h"




extern struct M2c_D_00158440 D_00158440;
extern s32 sceSifGetReg();
extern s32 sceSifSetDma();
extern s32 sceSifSetReg();
extern s32 sceSifStopDma();
extern s32 sceSifWriteBackDCache();
s32 sceSifResetIop(s8 *arg0, s32 arg1) {
u8 sp_slot[0x40];    s32 temp_11_14;
    s32 var_9_19;
    s8 *temp_2_28;
    u8 var_4_21;
    struct M2c_temp_3_25 *temp_3_25;

    sceSifStopDma();
    temp_11_14 = sceSifGetReg(0x80000000);
    D_00158440.unk14 = arg1;
    var_9_19 = 0;
    if (*arg0 != 0) {
        var_4_21 = (u8) *arg0;
loop_2:
        temp_3_25 = ((u8 *)&D_00158440 + var_9_19);
        var_9_19 += 1;
        temp_3_25->unk18 = var_4_21;
        temp_2_28 = arg0 + var_9_19;
        if (*temp_2_28 != 0) {
            var_4_21 = (u8) *temp_2_28;
            goto loop_2;
        }
    }
    D_00158440.unk4 = 0;
    D_00158440.unk10 = var_9_19;
    D_00158440.unk8 = 0x80000003;
    D_00158440.unk0 = (s64) (D_00158440.unk0 & ((-1 << 0x20) | 0xFF));
    D_00158440.unk0 = 0x68;
    sceSifWriteBackDCache(&D_00158440, 0x68, &D_00158440, 0x68, 0x44, var_9_19, &D_00158440, temp_11_14, &D_00158440, temp_11_14, 0x68, 0x44);
    sceSifSetReg(4, 0x40000);
    if (sceSifSetDma(sp_slot, 1) != 0) {
        sceSifSetReg(4, 0x10000);
        sceSifSetReg(4, 0x20000);
        sceSifSetReg(0x80000002, 0);
        sceSifSetReg(0x80000000, 0);
        return 1;
    }
    return 0;
}
#endif /* NON_MATCHING */
