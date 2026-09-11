/*
STATE: C_EXACT
SYMBOL: FUN_0023d2d8
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

#include "rnc/assembly_textbin_fun_0023d2d8_types.h"
#include "types.h"

extern s32 func_0023D2C8();

s32 FUN_0023d2d8(s32 arg0) {
    volatile struct M2c_arg0 *base = (volatile struct M2c_arg0 *)arg0;
    s32 a;
    s32 b;
    s32 c;
    s32 t;

    if (func_0023D2C8() != 0) {
        return 0;
    }
    a = base->unk8;
    b = base->unkC;
    c = base->unk10;
    t = c;
    return base->unk4 + ((a - b + t) % t) * 0x138C0;
}
