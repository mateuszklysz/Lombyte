/*
STATE: C_NON_MATCHING
SYMBOL: _waitIpuIdle
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _waitIpuIdle; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/wait_ipu_idle/_waitIpuIdle.s", _waitIpuIdle);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_wait_ipu_idle_types.h"
#include "types.h"


extern s32 _dispatchMpegCbNodata();
void _waitIpuIdle(struct M2c_arg0 *arg0) {
    volatile u32 *m2c_mmio = (volatile u32 *)0x10002010;
    s32 var_2_25;
    s32 var_4_14;

    var_4_14 = 0;
    if ((*m2c_mmio & 0x80004000) == 0x80000000) {
        var_2_25 = 0;
        do {
            var_4_14 += 1;
            if (var_2_25 >= 0x1389) {
                _dispatchMpegCbNodata(arg0->unk858);
                var_4_14 = 0;
            }
            var_2_25 = var_4_14;
        } while ((*m2c_mmio & 0x80004000) == 0x80000000);
    }
}
#endif /* NON_MATCHING */
