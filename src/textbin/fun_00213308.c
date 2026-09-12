/*
STATE: C_EXACT
SYMBOL: FUN_00213308
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: ee-gcc2.9-991111-01-patched (-O2 -g2 -gstabs; R5900 quad saves + classic mult) + Ps2EeAs padless
DECISION: promoted via ASTRA full-ELF gate (2026-09-12)
BLOCKER: none
*/

/* FUN_00213308 exact recovery: 12-bit angle extraction from rand() with the 9 E notation conversion; the patched profile (lq/sq saves + classic mult) reproduces all 20 instructions. Caller-facing func_00213308 alias required for the oracle link. */

#include "types.h"
extern s32 rand();
f32 FUN_00213308(s32 arg0) {
    return (f32) (((rand() >> 0x10) & 0xFFF) - 0x800) * 3.1415927f * 0.00048828125f;
}
extern __typeof__(FUN_00213308) func_00213308 __attribute__((alias("FUN_00213308")));
