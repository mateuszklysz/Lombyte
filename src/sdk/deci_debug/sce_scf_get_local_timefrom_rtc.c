/*
STATE: C_EXACT
SYMBOL: sceScfGetLocalTimefromRTC
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern s32 sceScfGetSummerTime();
extern s32 sceScfGetTimeZone();
void sceScfGetLocalTimefromRTC(s32 arg0) {
    register s32 arg0_s0 __asm__("s0");
    s32 temp_17_10;
    s32 summer_minutes;

    arg0_s0 = arg0;
    temp_17_10 = sceScfGetTimeZone();
    summer_minutes = sceScfGetSummerTime() * 0x3C;
    summer_minutes -= 0x21C;
    AdjustTime(arg0_s0, temp_17_10 + summer_minutes);
}
