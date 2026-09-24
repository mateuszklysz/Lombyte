#include "types.h"
extern s32 D_0015ECC4;
extern s32 FUN_0012dc80();
void snd_reset_state_and_flush_commands(s32 arg0) __asm__("FUN_0012eb00");

void snd_reset_state_and_flush_commands(s32 arg0) {
    D_0015ECC4 = 0;
    FUN_0012dc80();
}

extern void func_0012EB00(s32 arg0) __attribute__((alias("FUN_0012eb00")));

/* Recovered original symbol name. */
extern __typeof__(snd_reset_state_and_flush_commands) snd_UnkFunction_0012eb00 __attribute__((alias("FUN_0012eb00")));
