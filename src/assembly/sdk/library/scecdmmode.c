/*
STATE: C_NON_MATCHING
SYMBOL: sceCdMmode
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceCdMmode; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/scecdmmode/sceCdMmode.s", sceCdMmode);
#else
#include "types.h"
extern u32 D_001312EC[];
extern u8 D_001324C0[];
extern u8 D_00132900[];
extern u8 D_00132D08[];
extern s32 SignalSema();
extern s32 func_00120D40();
extern s32 sceSifCallRpc();
extern s32 sceSifWriteBackDCache();
s32 sceCdMmode(s32 arg0) {
    s32 temp_16_46;

    if (func_00120D40(0x22) == 0) {
        goto block_2;
    }
    *(s32 *)D_00132900 = arg0;
    goto block_4;
block_2:
    return 0;
block_4:
    sceSifWriteBackDCache(D_00132900, 4);
    if (sceSifCallRpc(D_00132D08, 0x22, 0, D_00132900, 4, D_001324C0, 4, 0, 0) >= 0) {
        goto block_6;
    }
    SignalSema(D_001312EC[0]);
    return 0;
block_6:
    temp_16_46 = *(volatile u32 *)((u32) D_001324C0 | 0x20000000);
    SignalSema(D_001312EC[0]);
    return temp_16_46;
}
#endif /* NON_MATCHING */
