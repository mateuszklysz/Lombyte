/*
STATE: C_NON_MATCHING
SYMBOL: SignExtendPackedValue
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/math/sign_extend_packed_value/SignExtendPackedValue.s", SignExtendPackedValue);
#else
#include "types.h"

s64 SignExtendPackedValue(u64 *arg0, s32 arg1) {
    return (s64) (((u64) *arg0 >> (0x40 - arg1)) << 0x20) >> 0x20;
}
#endif /* NON_MATCHING */
