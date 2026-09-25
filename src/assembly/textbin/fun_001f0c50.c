#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f0c50/FUN_001f0c50.s", FUN_001f0c50);
#else
#include "types.h"
extern s32 D_00189DC0[];
extern void func_001F0BD0(s32, s32, s32, u8 *);
s32 FUN_001f0c50(s32 x, s32 y, s32 color, u8 *text) {
    s32 width = 0;
    u8 *p = text;
    u32 c;
    s32 idx;

    if (*p != 0) {
        do {
            c = (u8)(*p++ - 0x20);
            idx = 0x20;
            if (c < 0x60) {
                idx = c;
            }
            width += D_00189DC0[idx];
        } while (*p != 0);
    }
    x -= width >> 1;
    func_001F0BD0(x, y, color, text);
    return x;
}
#endif /* NON_MATCHING */
