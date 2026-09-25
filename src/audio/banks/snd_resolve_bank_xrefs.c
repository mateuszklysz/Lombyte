#include "types.h"
extern s32 func_0012E6E0();
void snd_resolve_bank_xrefs(void) __asm__("FUN_0012e1a8");

void snd_resolve_bank_xrefs(void) {
    func_0012E6E0(8, 0, 0, 0, 0);
}

extern void func_0012E1A8(void) __attribute__((alias("FUN_0012e1a8")));
