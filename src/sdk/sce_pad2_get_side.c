/*
STATE: C_EXACT
SYMBOL: scePad2GetSide
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted
BLOCKER: none
*/

#include "types.h"

typedef struct PadPort {
    u8 pad[0xC];
    u8 *unkC;
    u8 pad2[816 - 0x10];
} PadPort;

extern PadPort D_0015B540[];
extern void func_00118F88(s32, s32);

void *scePad2GetSide(s32 arg0) {
    u8 *sides[2];

    sides[0] = D_0015B540[arg0].unkC;
    sides[1] = sides[0] + 0x80;
    func_00118F88((s32)sides[0], (s32)(sides[0] + 0x100));
    return sides[*(s32 *)(sides[0] + 0x7C) < *(s32 *)(sides[1] + 0x7C)];
}
