/*
STATE: C_NON_MATCHING
SYMBOL: BcdToTime
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact Sony RTC helper frombcd; target-derived body pending SDK source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/bcd_to_time/BcdToTime.s", BcdToTime);
#else
#include "types.h"

s32 BcdToTime(s32 arg0) {
    u32 temp_2_3;

    temp_2_3 = arg0 & 0xFF;
    return (temp_2_3 - ((temp_2_3 >> 4) * 6)) & 0xFF;
}
#endif /* NON_MATCHING */
