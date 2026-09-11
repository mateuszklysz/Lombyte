/*
STATE: C_EXACT
SYMBOL: _sceFsIobSemaMK
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

#include "types.h"

extern s32 CreateSema();
extern s32 D_0012FCA0[];
extern s32 D_0012FCA4[];

struct SemaArgs {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    u8 padC[8];
    s32 unk14;
};

void _sceFsIobSemaMK(void) {
    struct SemaArgs args;

    if (D_0012FCA0[0] == -1) {
        args.unk14 = 0;
        args.unk8 = 1;
        args.unk4 = 1;
        D_0012FCA0[0] = CreateSema(&args);
        D_0012FCA4[0] = CreateSema(&args);
    }
}
