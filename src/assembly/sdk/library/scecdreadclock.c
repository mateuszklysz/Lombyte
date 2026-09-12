/*
STATE: C_NON_MATCHING
SYMBOL: sceCdReadClock
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceCdReadClock; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/scecdreadclock/sceCdReadClock.s", sceCdReadClock);
#else
#include "types.h"
extern u32 D_001312D0[];
extern u32 D_001312EC[];
extern u8 D_001324C0[];
extern u8 D_00132D08[];
extern u8 D_00152FF0[];
extern u8 D_00153010[];
extern s32 SignalSema();
extern s32 func_00120D40();
extern s32 scePrintf();
extern s32 sceSifCallRpc();
s32 sceCdReadClock(s32 arg0) {
    s32 temp_16_60;

    if (func_00120D40(0xF) != 0) {
        goto block_2;
    }
    return 0;
block_2:
    if (D_001312D0[0] <= 0) {
        goto block_4;
    }
    scePrintf(D_00152FF0);
block_4:
    if (sceSifCallRpc(D_00132D08, 1, 0, 0, 0, D_001324C0, 0x10, 0, 0) < 0) {
        goto block_6;
    }
    goto block_8;
block_6:
    SignalSema(D_001312EC[0]);
    return 0;
block_8:
    /* m2c-unknown:  unknown instruction: ldl $v1, 0x7($v0)  */
    /* m2c-unknown:  unknown instruction: ldr $v1, ($v0)  */
    /* m2c-unknown:  unknown instruction: sdl $v1, 0x7($s2)  */
    /* m2c-unknown:  unknown instruction: sdr $v1, ($s2)  */
    if (D_001312D0[0] <= 0) {
        goto block_10;
    }
    scePrintf(D_00153010);
block_10:
    temp_16_60 = *(volatile u32 *)((u32) D_001324C0 | 0x20000000);
    SignalSema(D_001312EC[0]);
    return temp_16_60;
}
#endif /* NON_MATCHING */
