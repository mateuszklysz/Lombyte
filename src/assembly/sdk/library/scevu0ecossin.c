/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: SceVu0Ecossin
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit SceVu0Ecossin; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/scevu0ecossin/SceVu0Ecossin.s", SceVu0Ecossin);
#else
#include "types.h"

void SceVu0Ecossin(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf5, ($a4)  */
    /* m2c-unknown:  unknown instruction: vmr32.w $vf6, $vf6  */
    /* m2c-unknown:  unknown instruction: vaddx.x $vf4, $vf0, $vf6x  */
    /* m2c-unknown:  unknown instruction: vmul.x $vf6, $vf6, $vf6  */
    /* m2c-unknown:  unknown instruction: vmulx.yzw $vf4, $vf4, $vf0x  */
    /* m2c-unknown:  unknown instruction: vmulw.xyzw $vf8, $vf5, $vf6w  */
    /* m2c-unknown:  unknown instruction: vsub.xyzw $vf5, $vf0, $vf0  */
    /* m2c-unknown:  unknown instruction: vmulx.xyzw $vf8, $vf8, $vf6x  */
    /* m2c-unknown:  unknown instruction: vmulx.xyz $vf8, $vf8, $vf6x  */
    /* m2c-unknown:  unknown instruction: vaddw.x $vf4, $vf4, $vf8w  */
    /* m2c-unknown:  unknown instruction: vmulx.xy $vf8, $vf8, $vf6x  */
    /* m2c-unknown:  unknown instruction: vaddz.x $vf4, $vf4, $vf8z  */
    /* m2c-unknown:  unknown instruction: vmulx.x $vf8, $vf8, $vf6x  */
    /* m2c-unknown:  unknown instruction: vaddy.x $vf4, $vf4, $vf8y  */
    /* m2c-unknown:  unknown instruction: vaddx.x $vf4, $vf4, $vf8x  */
    /* m2c-unknown:  unknown instruction: vaddx.xy $vf4, $vf5, $vf4x  */
    /* m2c-unknown:  unknown instruction: vmul.x $vf7, $vf4, $vf4  */
    /* m2c-unknown:  unknown instruction: vsubx.w $vf7, $vf0, $vf7x  */
    /* m2c-unknown:  unknown instruction: vwaitq  */
    /* m2c-unknown:  unknown instruction: vaddq.x $vf7, $vf0, Q  */
    if (arg3 == 0) {
        /* m2c-unknown:  unknown instruction: vaddx.x $vf4, $vf5, $vf7x  */
        return;
    }
    /* m2c-unknown:  unknown instruction: vsubx.x $vf4, $vf5, $vf7x  */
}
#endif /* NON_MATCHING */
