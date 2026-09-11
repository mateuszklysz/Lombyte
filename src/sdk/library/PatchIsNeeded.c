/*
STATE: C_EXACT
SYMBOL: PatchIsNeeded
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

#include "types.h"

extern s32 GetOsdConfigParam();
extern s32 SetOsdConfigParam();

s32 PatchIsNeeded(void) {
    union {
        u32 words[4];
        struct { u32 a; u32 b; u8 pad[8]; } f;
    } cfg;

    GetOsdConfigParam(&cfg);
    cfg.f.b = (cfg.f.a & 0xFFFF1FFF) | 0x2000;
    SetOsdConfigParam(&cfg.f.b);
    GetOsdConfigParam(&cfg.f.b);
    SetOsdConfigParam(&cfg);
    return ((cfg.f.b >> 13) & 7) == 0;
}
