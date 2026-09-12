/*
STATE: C_NON_MATCHING
SYMBOL: _waitIpuIdle64
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _waitIpuIdle64; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/wait_ipu_idle64/_waitIpuIdle64.s", _waitIpuIdle64);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_wait_ipu_idle64_types.h"
#include "types.h"


extern s32 _dispatchMpegCbNodata();
s64 _waitIpuIdle64(struct M2c_arg0 *arg0) {
    s32 var_2_25;
    s32 var_5_10;
    s64 temp_4_12;
    s64 var_2_20;

    var_5_10 = 0;
    temp_4_12 = *(s64 *)0x10002000;
    if (temp_4_12 < 0) {
        var_2_20 = temp_4_12;
        if (!(*(s32 *)0x10002010 & 0x4000)) {
            var_2_25 = 0;
loop_3:
            var_5_10 += 1;
            if (var_2_25 >= 0x1389) {
                _dispatchMpegCbNodata(arg0->unk858, var_5_10);
                var_5_10 = 0;
            }
            if (*(volatile u32 *)0x10002000 < 0) {
                var_2_25 = var_5_10;
                if (*(volatile u32 *)0x10002010 & 0x4000) {

                } else {
                    goto loop_3;
                }
            }
            goto block_8;
        }
    } else {
block_8:
        var_2_20 = *(volatile u32 *)0x10002000;
    }
    return var_2_20;
}
#endif /* NON_MATCHING */
