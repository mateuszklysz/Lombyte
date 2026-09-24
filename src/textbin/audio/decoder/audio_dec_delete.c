#include "types.h"
extern s32 FUN_0012f0e0();
s32 audio_dec_delete(s32 arg0) __asm__("FUN_0023ac90");

s32 audio_dec_delete(s32 arg0) {
    FUN_0012f0e0();
    return 1;
}

extern s32 func_0023AC90(s32 arg0) __attribute__((alias("FUN_0023ac90")));
