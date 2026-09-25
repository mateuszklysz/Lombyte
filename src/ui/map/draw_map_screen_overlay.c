#include "types.h"
extern s32 FUN_00205640();
extern s32 FUN_00233980();
s32 draw_map_screen_overlay(void) __asm__("FUN_0021f330");

s32 draw_map_screen_overlay(void) {
    FUN_00233980(0x42, 0x44);
    FUN_00233980(0x47, 0xB);
    FUN_00205640();
    return 8;
}
