#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002334d8/FUN_002334d8.s", FUN_002334d8);
#else
#include "types.h"
extern s32 func_001F97C0();
void FUN_002334d8(s32 arg0) {
    if (*(s32 *)0x10008000 & 0x100) {
        do {
            func_001F97C0(0x10);
        } while (*(volatile u32 *)0x10008000 & 0x100);
    }
    *(s32 *)0x10008020 = 0;
    *(s32 *)0x10008030 = arg0 & 0x0FFFFFFF;
    *(volatile u32 *)0x10008000 = 0x145;
    if (*(volatile u32 *)0x10008000 & 0x100) {
        do {
            func_001F97C0(0x10);
        } while (*(volatile u32 *)0x10008000 & 0x100);
    }
}
#endif /* NON_MATCHING */
