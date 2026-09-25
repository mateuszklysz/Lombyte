#include "types.h"
extern s32 func_0012E6E0();
void snd_stop_all_sounds(void) __asm__("FUN_0012e3b8");

void snd_stop_all_sounds(void) {
    func_0012E6E0(0x18, 0, 0, 0, 0);
}

extern void func_0012E3B8(void) __attribute__((alias("FUN_0012e3b8")));
