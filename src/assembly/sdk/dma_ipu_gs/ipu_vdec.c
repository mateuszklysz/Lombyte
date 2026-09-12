/*
STATE: C_NON_MATCHING
SYMBOL: _ipuVdec
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _ipuVdec; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/ipu_vdec/_ipuVdec.s", _ipuVdec);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_ipu_vdec_types.h"
#include "types.h"


extern u8 D_00132E70[];
extern s32 _dispatchMpegCbNodata();
s16 _ipuVdec(struct M2c_arg0 *arg0, s32 arg1) {
    s32 temp_16_20;
    s32 temp_3_48;
    s32 var_18_14;
    s32 var_2_61;
    s32 var_2_87;
    s32 var_5_0;
    s32 var_7_15;
    s64 temp_4_77;

    var_5_0 = arg1;
    var_18_14 = 0;
    var_7_15 = 0;
    temp_16_20 = var_5_0 << 0x1A;
    if ((*(s32 *)0x10002010 & 0x80004000) == 0x80000000) {
        do {
            var_7_15 += 1;
            if (var_7_15 >= 0x1389) {
                _dispatchMpegCbNodata(arg0->unk858, var_5_0);
                var_7_15 = 0;
            }
            var_5_0 = 0x80000000;
        } while ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000);
    }
    temp_3_48 = temp_16_20 | 0x30000000;
    *(s32 *)0x10002000 = temp_3_48;
    arg0->unk818 = (s32) *(((temp_3_48 >> 0x1C) * 4) + D_00132E70);
    if ((s64) *(s32 *)0x10002000 < 0) {
        var_2_61 = 0;
        do {
            var_18_14 += 1;
            if (var_2_61 >= 0x1389) {
                var_18_14 = 0;
                _dispatchMpegCbNodata(arg0->unk858);
            }
            var_2_61 = var_18_14;
        } while ((s64) *(volatile u32 *)0x10002000 < 0);
    }
    temp_4_77 = *(s64 *)0x10002030;
    arg0->unk838 = (s32) ((s64) (temp_4_77 << 0x20) >> 0x20);
    if (temp_4_77 < 0) {
        var_2_87 = -(*(s32 *)0x10002020 & 0x1F) & 0x1F;
    } else {
        var_2_87 = 0x20;
    }
    arg0->unk83C = var_2_87;
    arg0->unk11C = (s32) (((s64) ((s64) *(volatile u32 *)0x10002000 << 0x20) >> 0x20) == 0);
    return (s16) ((s64) *(volatile u32 *)0x10002000 & 0xFFFF);
}
#endif /* NON_MATCHING */
