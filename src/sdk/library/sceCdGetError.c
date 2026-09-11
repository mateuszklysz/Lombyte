/*
STATE: C_EXACT
SYMBOL: sceCdGetError
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern u32 D_001312EC[];
extern u8 D_001324C0[];
extern u8 D_00132D08[];
extern s32 SignalSema();
extern s32 func_00120D40();
extern s32 sceSifCallRpc();
s32 sceCdGetError(void) {
    s32 temp_16_37;

    if (func_00120D40(3) == 0) {
        return -1;
    }
    if (sceSifCallRpc(D_00132D08, 4, 0, 0, 0, D_001324C0, 4, 0, 0) < 0) {
        SignalSema(D_001312EC[0]);
        return -1;
    }
    temp_16_37 = *(u32 *)((u32) D_001324C0 | 0x20000000);
    SignalSema(D_001312EC[0]);
    return temp_16_37;
}
