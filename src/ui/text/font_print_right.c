#include "types.h"
extern u8 D_001DF050[];
extern s32 get_effect_texture() __asm__("FUN_001f44b8");
extern s32 measure_text_width_regular() __asm__("FUN_001f6250");
extern s32 font_print() __asm__("FUN_001f62b0");
void font_print_right(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) __asm__("FUN_001f6940");

void font_print_right(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_16_18;

    temp_16_18 = arg0 - measure_text_width_regular(arg3, arg4);
    font_print(temp_16_18, arg1, arg2, arg3, arg4, get_effect_texture(1), D_001DF050);
}

extern void func_001F6940(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) __attribute__((alias("FUN_001f6940")));
