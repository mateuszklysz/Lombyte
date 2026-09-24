#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/map/draw_map_screen/FUN_0021be60.s", FUN_0021be60);
#else
#include "types.h"
s32 draw_map_screen(void) __asm__("FUN_0021be60");

s32 draw_map_screen(void) { return 0; }
#endif /* NON_MATCHING */
