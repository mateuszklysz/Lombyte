/*
STATE: C_NON_MATCHING
SYMBOL: scePad2GetState
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit scePad2GetState; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sce_pad2_get_state/scePad2GetState.s", scePad2GetState);
#else
#include "rnc/assembly_sdk_sce_pad2_get_state_types.h"
#include "types.h"


extern u8 D_0015B540[];
extern s32 sceDbcReceiveData();
extern s32 scePad2CheckDma();
extern s32 scePad2GetSide();
extern s32 scePad2LinkDriver();
u8 scePad2GetState(s32 arg0) {    s32 saved_reg_s0;
u8 sp_slot[0x50];    u8 sp0;
    s32 sp4;
    u8 var_2_20;
    struct M2c_temp_2_26 *temp_2_26;

    if (*(s32 *)((u8 *)(D_0015B540 + (arg0 * 0x330)) + 0x4) == 0) {
        var_2_20 = 0;
        if (scePad2LinkDriver(arg0) >= 0) {
            goto block_2;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return var_2_20;
    }
block_2:
    if (scePad2CheckDma(arg0) != 0) {
        temp_2_26 = scePad2GetSide(arg0);
        if (temp_2_26->unk4 != 0) {
            goto block_10;
        }
        if (scePad2LinkDriver(arg0) >= 0) {
block_10:
            sp0 = temp_2_26->unk0;
            var_2_20 = sp0;
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return var_2_20;
        }
        *(s32 *)((u8 *)(D_0015B540 + (arg0 * 0x330)) + 0x4) = 0;
        return 0U;
    }
    var_2_20 = sp0;
    if (sceDbcReceiveData(arg0, (s64) (((((((((saved_reg_s0 & ~0x3FFF) | 0xC) & 0xFFFF3FFF) | 0x8000) & 0xFF00FFFF) | 0x10000) & ((((-1 << 0x10) | 0xFF) << 0x10) | 0xFFFF)) | 0x01000000) << 0x20) >> 0x20, &sp4, sp_slot) < 0) {
        return 0U;
    }
    return var_2_20;
}
#endif /* NON_MATCHING */
