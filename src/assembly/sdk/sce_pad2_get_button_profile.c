/*
STATE: C_NON_MATCHING
SYMBOL: scePad2GetButtonProfile
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit scePad2GetButtonProfile; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sce_pad2_get_button_profile/scePad2GetButtonProfile.s", scePad2GetButtonProfile);
#else
#include "types.h"
extern u8 D_0015B540[];
extern u8 D_0015B550[];
extern s32 sceDbcReceiveData();
extern s32 scePad2LinkDriver();
extern s32 scePad2SetButtonOrder();
s32 scePad2GetButtonProfile(s32 arg0, s32 arg1) {    s32 saved_reg_s0;
u8 sp_slot[0x50];    s32 sp0;
    s32 var_2_48;

    if (*(s32 *)((u8 *)(D_0015B540 + (arg0 * 0x330)) + 0x4) == 0) {
        if (scePad2LinkDriver(arg0) < 0) {
            return -1;
        }
        goto block_4;
    }
block_4:
    var_2_48 = sceDbcReceiveData(arg0, (s64) (((((((saved_reg_s0 & ~0x3FFF) | 2 | 0xC000) & 0xFF00FFFF) | 0x20000) & ((((-1 << 0x10) | 0xFF) << 0x10) | 0xFFFF)) | 0x01000000) << 0x20) >> 0x20, sp_slot, arg1);
    if (var_2_48 >= 0) {
        scePad2SetButtonOrder(arg1, (arg0 * 0x330) + D_0015B550);
        var_2_48 = sp0;
    }
    return var_2_48;
}
#endif /* NON_MATCHING */
