#include "types.h"
struct Fog { u8 pad0[4]; u32 color; u64 enable; };
extern s32 D_0015EE88;
struct View { u8 pad0[0x150]; s16 height; s16 width; };
extern struct View D_00151780;
extern void func_00233980(s32, u64);
extern void func_001F52A0(s32, s32, s32, s32, u64);
void draw_fogged_fullscreen_sprite(struct Fog *fog) __asm__("FUN_001f5138");

void draw_fogged_fullscreen_sprite(struct Fog *fog) {
    if (fog->enable != 0) {
        func_00233980(0x42, fog->enable & 0xFF000000FFULL);
    }
    if (fog->color & 0xFF000000) {
        func_00233980(0x4E, (D_0015EE88 >> 13) | 0x1000000 | ((u64)0x8000 << 17));
        func_001F52A0(0, D_00151780.width, 0, D_00151780.height, fog->color);
        func_00233980(0x4E, 0x1000000 | (D_0015EE88 >> 13));
    }
    if (fog->enable != 0) {
        func_00233980(0x42, ((u64)0x8000 << 24) | 0x44);
    }
}

extern __typeof__(draw_fogged_fullscreen_sprite) func_001F5138 __attribute__((alias("FUN_001f5138")));
