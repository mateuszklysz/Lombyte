/*
STATE: C_EXACT
SYMBOL: TimeToBcd
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

u32 TimeToBcd(u32 value)
{
    value &= 0xFF;
    return ((value / 10) * 6 + value) & 0xFF;
}
