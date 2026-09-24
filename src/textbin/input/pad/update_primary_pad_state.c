#include "types.h"
extern u8 D_0013C940[];
extern s32 FUN_002170c8();
void update_primary_pad_state(void) __asm__("FUN_00217a10");

void update_primary_pad_state(void) {
    FUN_002170c8(D_0013C940);
}

extern void func_00217A10(void) __attribute__((alias("FUN_00217a10")));
