/*
STATE: C_NON_MATCHING
SYMBOL: kputchar
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library leaf kputchar; target words retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/kputchar/kputchar.s", kputchar);
#else
#include "types.h"

s32 kputchar(s32 arg0) {
    register volatile u32 *status __asm__("v1") = (u32 *)0x1000F130;
    register volatile u8 *output __asm__("v1");
loop_1:
    if (*status & 0x8000) {
        goto loop_1;
    }
    output = (u8 *)0x1000F180;
    *output = (u8)arg0;
    return arg0;
}
#endif /* NON_MATCHING */
