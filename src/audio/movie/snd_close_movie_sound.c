#include "types.h"
extern s32 func_0012E548();
void snd_close_movie_sound(void) __asm__("FUN_0012f0e0");

void snd_close_movie_sound(void) {
    func_0012E548(0x3C, 0, 0);
}

extern void func_0012F0E0(void) __attribute__((alias("FUN_0012f0e0")));
