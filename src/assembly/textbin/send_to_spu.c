/*
STATE: C_NON_MATCHING
SYMBOL: sendToSPU__FP9_AudioDecPUcii
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `sendToSPU__FP9_AudioDecPUcii`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/send_to_spu/FUN_0023af18.s", FUN_0023af18);
#else
#include "types.h"
extern s32 func_00118A80();
extern s32 func_00118B10();
extern s32 func_00118B20();
extern s32 func_0012F148();
void FUN_0023af18(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
u8 sp_slot[0x60];    s32 temp_2_24;

    func_00118A80(0);
    do {
        temp_2_24 = func_00118B20(sp_slot, 1);
    } while (temp_2_24 == 0);
    do {

    } while (func_00118B10(temp_2_24) >= 0);
    func_0012F148(arg2, arg3);
}
#endif /* NON_MATCHING */
