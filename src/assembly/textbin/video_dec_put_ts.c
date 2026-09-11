/*
STATE: C_NON_MATCHING
SYMBOL: videoDecPutTs__FP8VideoDecllPUci
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `videoDecPutTs__FP8VideoDecllPUci`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/video_dec_put_ts/FUN_0023cc98.s", FUN_0023cc98);
#else
#include "rnc/assembly_textbin_fun_0023cc98_types.h"
#include "types.h"


extern s32 D_0016120C;
extern s32 func_0023C810();
void FUN_0023cc98(struct M2c_arg0 *arg0, s64 arg1, s64 arg2, s32 arg3, s32 arg4) {
u8 sp_slot[0x30];    s32 temp_6_14;
    s32 temp_7_17;

    temp_6_14 = arg0->unk48;
    temp_7_17 = arg3 - temp_6_14;
    func_0023C810(D_0016120C + 0xD9090, sp_slot, temp_6_14, temp_7_17, arg1, arg2, temp_7_17, arg4);
}
#endif /* NON_MATCHING */
