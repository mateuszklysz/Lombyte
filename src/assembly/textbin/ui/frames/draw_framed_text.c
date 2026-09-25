#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/frames/draw_framed_text/FUN_00201200.s", FUN_00201200);
#else
#include "types.h"
extern s32 func_001F6C20(s32, s32, u32, s32, s32);
extern void func_00201128(s32, s32, s32, s32, s32);
void FUN_00201200(s32 x, s32 y, u32 color, s32 text) {
    s32 alpha = (s32)color >> 24;
    s32 w;
    s32 left;

    if (alpha > 0x50) {
        alpha = 0x50;
    }
    w = func_001F6C20(x + 1, y + 1, color & 0xFF000000, text, -1);
    left = w - 0x20;
    func_00201128(left, y - 8, (x - left) * 2, 0x20, alpha);
    func_001F6C20(x, y, color, text, -1);
}
#endif /* NON_MATCHING */
