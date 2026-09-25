#include "types.h"
extern s32 vi_buf_count() __asm__("FUN_0023c610");
void video_dec_input_count(s32 arg0) __asm__("FUN_0023cce0");

void video_dec_input_count(s32 arg0) {
    vi_buf_count(arg0 + 0x48);
}

extern void func_0023CCE0(s32 arg0) __attribute__((alias("FUN_0023cce0")));
