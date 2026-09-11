/*
STATE: C_EXACT
SYMBOL: sceScfGetSummerTime
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern u8 D_001330D6[];
extern s32 GetOsdConfigParam();
extern s32 GetOsdConfigParam2();
extern s32 IsT10K();
struct M2c_SummerWork { u32 config; u8 summer; };
u8 sceScfGetSummerTime(void) {
    struct M2c_SummerWork work;
    register u32 config_value __asm__("v0");
    u8 summer_value;
    u32 shifted;
    u8 result;
    if (IsT10K()!=0) {
        result = D_001330D6[0];
    } else {
        GetOsdConfigParam(&work.config); config_value = work.config;
        if (!((config_value >> 0xD) & 7)) result = 0;
        else { GetOsdConfigParam2(&work.summer, 1, 1); summer_value=work.summer; shifted=summer_value>>4; result=shifted&1; }
    }
    return result;
}
