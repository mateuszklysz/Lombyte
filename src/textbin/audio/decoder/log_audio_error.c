#include "types.h"
extern u8 D_001611F8[];
extern s32 DebugPrint();
void log_audio_error(s32 arg0) __asm__("FUN_0023ab78");

void log_audio_error(s32 arg0) {
    DebugPrint(D_001611F8, arg0);
}

extern void func_0023AB78(s32 arg0) __attribute__((alias("FUN_0023ab78")));
