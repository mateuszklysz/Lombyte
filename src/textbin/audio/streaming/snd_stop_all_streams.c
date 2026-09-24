#include "types.h"
extern s32 FUN_0012e6e0();
void snd_stop_all_streams(void) __asm__("FUN_0012ebd0");

void snd_stop_all_streams(void) {
    FUN_0012e6e0(0x34, 0, 0, 0, 0);
}

extern void func_0012EBD0(void) __attribute__((alias("FUN_0012ebd0")));
