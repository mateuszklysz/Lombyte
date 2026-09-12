/*
STATE: C_NON_MATCHING
SYMBOL: __swsetup
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit __swsetup; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/swsetup/__swsetup.s", __swsetup);
#else
#include "rnc/assembly_sdk_library_swsetup_types.h"
#include "types.h"




extern u32 D_0012F76C[];
extern s32 __sinit();
extern s32 __smakebuf();
extern s32 _free_r();
s32 __swsetup(struct M2c_arg0 *arg0) {
    s32 temp_5_33;
    s32 var_3_70;
    u16 temp_2_45;
    u16 temp_3_58;
    u16 var_3_20;
    if (arg0->unk54 == NULL) {
        arg0->unk54 = D_0012F76C[0];
    }
    if (arg0->unk54->unk38 == 0) {
        __sinit(arg0->unk54);
    }
    var_3_20 = arg0->unkC;
    if (var_3_20 & 8) {
        goto block_20;
    }
    if (!(var_3_20 & 0x10)) {
        return -1;
    }
    if (!(var_3_20 & 4)) {

    } else {
        temp_5_33 = arg0->unk30;
        if (temp_5_33 != 0) {
            if (temp_5_33 != (((u8 *)arg0 + (0x40)))) {
                _free_r(arg0->unk54, temp_5_33);
            }
            arg0->unk30 = 0;
        }
        temp_2_45 = arg0->unkC & ~0x24;
        arg0->unk4 = 0;
        var_3_20 = arg0->unkC = temp_2_45;
        arg0->unk0 = (s32) arg0->unk10;
    }
    arg0->unkC = (u16) (var_3_20 | 8);
block_20:
    if (arg0->unk10 == 0) {
        __smakebuf(arg0);
    }
    temp_3_58 = arg0->unkC;
    if (temp_3_58 & 1) {
        arg0->unk8 = 0;
        arg0->unk18 = (s32) -arg0->unk14;
    } else {
        var_3_70 = 0;
        if (!(temp_3_58 & 2)) {
            var_3_70 = arg0->unk14;
        }
        arg0->unk8 = var_3_70;
    }
    return 0;
}
#endif /* NON_MATCHING */
