/*
STATE: C_EXACT
SYMBOL: FUN_001e9338
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

struct M2c_D_00137B80 {
    u8 pad_0[0x8];
    s32 unk8;
    s32 unkC;
};

extern struct M2c_D_00137B80 D_00137B80;
extern u8 D_001AABC0[];
extern void func_001E9168();
extern s32 func_00216828();

void FUN_001e9338(void) {
    u8 sp_slot[32];

    func_00216828(D_001AABC0, D_00137B80.unk8, D_00137B80.unkC);
    func_001E9168(D_001AABC0, sp_slot, *(s32 *)0x15EE88 + 0xC0000, 0x3FFC00);
    *(u64 *)0x15EEC8 = *(u64 *)(void *)sp_slot;
}
