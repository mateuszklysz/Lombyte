#include "types.h"
extern s32 FUN_001188c0();
void switch_thread(void) __asm__("FUN_0023a770");

void switch_thread(void) {
    FUN_001188c0(1);
}

extern void func_0023A770(void) __attribute__((alias("FUN_0023a770")));
