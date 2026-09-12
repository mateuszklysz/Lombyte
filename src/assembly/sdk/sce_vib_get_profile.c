/*
STATE: C_NON_MATCHING
SYMBOL: sceVibGetProfile
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceVibGetProfile; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sce_vib_get_profile/sceVibGetProfile.s", sceVibGetProfile);
#else
#include "types.h"
extern s32 sceDbcReceiveData();
s32 sceVibGetProfile(s32 arg0, s32 arg1) {    s32 sp0;
u8 sp_slot[0x20];    s32 temp_8_22;
    s32 var_2_28;

    temp_8_22 = (((-1 << 0x10) | 0xFF) << 0x10) | 0xFFFF;
    var_2_28 = sceDbcReceiveData((((((((-0x4000 & ~0x3FFF) | 2) & 0xFFFF3FFF) | 0x8000) & 0xFF00FFFF) | 0x30000) & temp_8_22) | 0x01000000, sp_slot, arg1, temp_8_22);
    if (var_2_28 >= 0) {
        var_2_28 = sp0;
    }
    return var_2_28;
}
#endif /* NON_MATCHING */
