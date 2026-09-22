#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f99f8/FUN_001f99f8.s", FUN_001f99f8);
#else
#include "types.h"

void FUN_001f99f8(s64 *arg0) {
    *arg0 = 0;
}

extern void func_001F99F8(s64 *arg0) __attribute__((alias("FUN_001f99f8")));
#endif /* NON_MATCHING */
