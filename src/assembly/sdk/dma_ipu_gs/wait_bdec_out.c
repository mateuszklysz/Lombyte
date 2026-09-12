/*
STATE: C_NON_MATCHING
SYMBOL: _waitBdecOut
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _waitBdecOut; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/wait_bdec_out/_waitBdecOut.s", _waitBdecOut);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_wait_bdec_out_types.h"
#include "types.h"


extern u8 D_00153788[];
extern s32 DIntr();
extern s32 EnableInterrupts();
extern s32 _Error();
extern s32 _dispatchMpegCallback();
extern s32 _waitIpuIdle();
s32 _waitBdecOut(struct M2c_arg0 *arg0) {
u8 sp_slot[0xC0];    s32 sp20;
    s32 temp_2_100;
    s32 temp_3_65;
    s32 var_22_9;
    s32 var_2_69;
    s64 temp_4_58;

    var_22_9 = 1;
    _waitIpuIdle();
    if (*(s32 *)0x1000B020 != 0) {
        if (!(*(s32 *)0x10002010 & 0x4000)) {
loop_3:
            if ((*(s32 *)0x1000B420 == 0) && !(*(s32 *)0x1000B400 & 0x100)) {
                _dispatchMpegCallback(arg0->unk858, sp_slot, 1);
            }
            if (*(volatile u32 *)0x1000B020 != 0) {
                if (*(volatile u32 *)0x10002010 & 0x4000) {

                } else {
                    goto loop_3;
                }
            }
        }
    }
    temp_4_58 = *(s64 *)0x10002030;
    arg0->unk838 = (s32) ((s64) (temp_4_58 << 0x20) >> 0x20);
    if (temp_4_58 < 0) {
        temp_3_65 = *(s32 *)0x10002020 & 0x1F;
        if (temp_3_65 != 0) {
            var_2_69 = 0x20 - temp_3_65;
        } else {
            var_2_69 = 0;
        }
    } else {
        var_2_69 = 0x20;
    }
    arg0->unk83C = var_2_69;
    if (*(volatile u32 *)0x10002010 & 0x4000) {
        _Error(arg0, D_00153788);
        sp20 = 2;
        _dispatchMpegCallback(arg0->unk858, &sp20);
        *(volatile u32 *)0x10002010 = 0x40000000;
        sp20 = 3;
        _dispatchMpegCallback(arg0->unk858, &sp20);
        temp_2_100 = DIntr();
        *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
        *(s32 *)0x1000B000 = 0;
        *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
        if (temp_2_100 != 0) {
            EnableInterrupts(0x1000B000, 0xFFFEFFFF, 0x1000F520, 0x1000F590, 0x10000);
        }
        var_22_9 = 0;
        *(volatile u32 *)0x1000B020 = 0;
    }
    return var_22_9;
}
#endif /* NON_MATCHING */
