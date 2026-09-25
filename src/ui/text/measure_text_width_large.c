#include "types.h"

extern u8 D_001DF790[];
extern void func_001F6200(s32 arg0, s32 arg1, void *arg2);

void measure_text_width_large(s32 arg0, s32 arg1) __asm__("FUN_001f6290");

void measure_text_width_large(s32 arg0, s32 arg1)
{
    func_001F6200(arg0, arg1, D_001DF790);
}

extern __typeof__(measure_text_width_large) func_001F6290 __attribute__((alias("FUN_001f6290")));
