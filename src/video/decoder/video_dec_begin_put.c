#include "types.h"
extern s32 vi_buf_begin_put() __asm__("FUN_0023be20");
void video_dec_begin_put(s32 arg0) __asm__("FUN_0023cbf0");

void video_dec_begin_put(s32 arg0) {
    vi_buf_begin_put(arg0 + 0x48);
}

extern void func_0023CBF0(s32 arg0) __attribute__((alias("FUN_0023cbf0")));
