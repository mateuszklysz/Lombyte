#include "types.h"
extern s32 D_0015EE88;
extern s32 func_0022AE70();
extern s32 func_0022B4C8();
extern s32 func_0022B558();
extern void func_00233980(s32, s64);

void transition_draw_sky(void) __asm__("FUN_001e9ab8");

void transition_draw_sky(void) {
    func_0022B4C8();
    func_0022AE70();
    func_0022B558();
    func_00233980(0x47, 0x5360B);
    func_00233980(0x4E, 0x01000000 | ((s32) D_0015EE88 >> 0xD));
}

extern __typeof__(transition_draw_sky) func_001E9AB8 __attribute__((alias("FUN_001e9ab8")));
