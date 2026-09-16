/*
STATE: C_EXACT
SYMBOL: FUN_001fa6d0
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: patched-O2
DECISION: promoted
BLOCKER: none
NOTE: Retail converts the float argument in place (46006324 cvt.w.s $f12,$f12;
      44026000 mfc1 v0,$f12). The v4 patched profile emits that form under
      -mastra-inplace-cvt.
*/

#include "types.h"

s32 FUN_001fa6d0(f32 fparg0) {
    return (s32) fparg0;
}
