/*
STATE: C_EXACT
SYMBOL: CheckStateRange
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern s64 CallGlobalStateResource(s32 resource, s32 first, s32 second);
s64 CheckStateRange(s32 arg0) {
    return (s64)(s32)(CallGlobalStateResource(arg0, 0, 0xA) << 32 >> 32);
}
