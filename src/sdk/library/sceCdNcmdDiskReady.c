/*
STATE: C_EXACT
SYMBOL: sceCdNcmdDiskReady
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern u32 D_001312E8[];
extern u8 D_00131340[];
extern u8 D_00132490[];
extern s32 SignalSema();
extern s32 func_00120A28();
extern s32 sceSifCallRpc();
s32 sceCdNcmdDiskReady(void) {
    s32 temp_16_37;

    if (func_00120A28(2) == 0) {
        return 0;
    }
    if (sceSifCallRpc(D_00132490, 0xE, 0, 0, 0, D_00131340, 4, 0, 0) < 0) {
        SignalSema(D_001312E8[0]);
        return 0;
    }
    temp_16_37 = *(u32 *)((u32) D_00131340 | 0x20000000);
    SignalSema(D_001312E8[0]);
    return temp_16_37;
}
