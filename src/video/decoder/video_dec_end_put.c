#include "types.h"
extern s32 vi_buf_end_put() __asm__("FUN_0023bf18");
void video_dec_end_put(s32 arg0) __asm__("FUN_0023cc10");

void video_dec_end_put(s32 arg0) {
    vi_buf_end_put(arg0 + 0x48);
}

extern void func_0023CC10(s32 arg0) __attribute__((alias("FUN_0023cc10")));
