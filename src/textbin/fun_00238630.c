/*
STATE: C_EXACT
SYMBOL: FUN_00238630
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted
NOTE: absolute-global load re-spelled as a constant-address cast (*(s32 *)0x1610A8)
*/

#include "types.h"
extern s32 D_001610A8[];
extern s32 D_001E63E4[];
extern s32 func_001FB8F0();
extern s32 func_0020D330();
void FUN_00238630(void) {
    func_001FB8F0(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    if (*(s32 *)0x1610A8 == 1) {
        func_0020D330(D_001E63E4[0], 1);
    }
}
