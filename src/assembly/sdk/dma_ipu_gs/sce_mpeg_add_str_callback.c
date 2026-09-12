/*
STATE: C_NON_MATCHING
SYMBOL: sceMpegAddStrCallback
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceMpegAddStrCallback; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_mpeg_add_str_callback/sceMpegAddStrCallback.s", sceMpegAddStrCallback);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_sce_mpeg_add_str_callback_types.h"
#include "types.h"










extern u8 D_00132ED8[];
extern s32 _type2id();
s32 sceMpegAddStrCallback(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_5_20;
    s32 var_17_14;
    s32 var_4_23;
    s64 temp_6_21;
    struct M2c_temp_16_19 *temp_16_19;
    struct M2c_temp_18_16 *temp_18_16;
    struct M2c_temp_2_34 *temp_2_34;
    struct M2c_temp_3_50 *temp_3_50;

    var_17_14 = 0;
    temp_18_16 = arg0->unk40;
    temp_16_19 = temp_18_16->unk44;
    temp_5_20 = temp_18_16->unk48;
    temp_6_21 = _type2id(arg1, arg2);
    var_4_23 = 0;
    if (temp_5_20 > 0) {
        if (temp_6_21 != temp_16_19->unk0) {
            var_4_23 = 1;
loop_5:
            if (var_4_23 < temp_5_20) {
                temp_2_34 = ((u8 *)temp_16_19 + ((var_4_23 * 0x18)));
                if (temp_6_21 != temp_2_34->unk0) {
                    var_4_23 += 1;
                    goto loop_5;
                }
                var_17_14 = temp_2_34->unk10;
            }
        } else {
            var_17_14 = temp_16_19->unk10;
        }
    }
    if (var_4_23 < 0x40) {
        temp_18_16->unk48 = (s32) (temp_5_20 + 1);
        temp_3_50 = ((u8 *)temp_16_19 + ((var_4_23 * 0x18)));
        temp_3_50->unk0 = temp_6_21;
        temp_3_50->unk14 = arg4;
        temp_3_50->unk10 = arg3;
        temp_3_50->unk8 = (s64) *(s32 *)((u8 *)(D_00132ED8 + (arg1 * 0x10)) + 0x8);
    }
    return var_17_14;
}
#endif /* NON_MATCHING */
