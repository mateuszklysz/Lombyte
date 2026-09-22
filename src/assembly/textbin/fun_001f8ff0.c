#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f8ff0/FUN_001f8ff0.s", FUN_001f8ff0);
#else
#include "types.h"
s32 FUN_001f8ff0(void) { return 0; }
#endif /* NON_MATCHING */
