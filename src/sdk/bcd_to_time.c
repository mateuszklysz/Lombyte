/*
STATE: C_EXACT
SYMBOL: BcdToTime
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: ee-gcc2.9-991111-01-patched (-O2 -g2 -gstabs; R5900 quad saves + classic mult) + Ps2EeAs padless
DECISION: promoted via ASTRA full-ELF gate (2026-09-12)
BLOCKER: none
*/

/* BcdToTime exact recovery: retail uses the classic `mult`+`mflo` sequence for
   `(temp >> 4) * 6`; the patched public 991111 cc1 (classic-mult patch) emits
   mult/mflo and matches all 8 instructions byte-for-byte.  The frozen
   SN/Himuro trees emit the R5900 rd-form mult `mult $3,$3,$4` here. */
#include "types.h"

s32 BcdToTime(s32 arg0) {
    u32 temp_2_3;

    temp_2_3 = arg0 & 0xFF;
    return (temp_2_3 - ((temp_2_3 >> 4) * 6)) & 0xFF;
}
