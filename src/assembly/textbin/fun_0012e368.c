#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012e368/FUN_0012e368.s", FUN_0012e368);
#else
#include "types.h"
extern s32 func_0012E6E0();
void FUN_0012e368(s32 arg0) {
u8 sp_slot[0x20];    func_0012E6E0(0x15, 4, sp_slot, 0, 0, arg0);
}

extern void func_0012E368(s32 arg0) __attribute__((alias("FUN_0012e368")));
#endif /* NON_MATCHING */
