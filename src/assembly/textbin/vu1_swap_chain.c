/*
STATE: C_NON_MATCHING
SYMBOL: VU1_swapChain__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `VU1_swapChain__Fv`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/vu1_swap_chain/FUN_00233630.s", FUN_00233630);
#else
#include "types.h"
extern s32 D_0015F5B8;
extern s32 D_0015F638;
extern s32 D_0015F63C;
extern u8 D_00160EF8[];
extern s32 D_00160F00;
extern s32 D_00160F04;
extern s32 D_00160F0C;
extern s32 D_00160F10;
void FUN_00233630(void) {
    s32 temp_3_19;
    s32 temp_4_25;
    s32 temp_6_11;

    temp_6_11 = 1 - D_00160F10;
    temp_3_19 = *((temp_6_11 * 4) + D_00160EF8);
    D_00160F04 = D_00160F00;
    D_00160F10 = temp_6_11;
    temp_4_25 = (temp_3_19 + D_00160F0C) - D_0015F5B8;
    D_00160F00 = temp_3_19;
    D_0015F638 = temp_4_25;
    D_0015F63C = temp_4_25 - 0x2000;
}
#endif /* NON_MATCHING */
