#include "types.h"
extern s32 FUN_0023be20();
void video_dec_begin_put(s32 arg0) __asm__("FUN_0023cbf0");

void video_dec_begin_put(s32 arg0) {
    FUN_0023be20(arg0 + 0x48);
}

extern void func_0023CBF0(s32 arg0) __attribute__((alias("FUN_0023cbf0")));
