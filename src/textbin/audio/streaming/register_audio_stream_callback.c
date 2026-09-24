#include "types.h"
extern s32 FUN_0012ef28();
extern void FUN_00216950();
void register_audio_stream_callback(void) __asm__("FUN_00215420");

void register_audio_stream_callback(void) {
    FUN_0012ef28(&FUN_00216950);
}

extern void func_00215420(void) __attribute__((alias("FUN_00215420")));
