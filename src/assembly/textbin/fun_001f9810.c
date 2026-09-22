#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9810/FUN_001f9810.s", FUN_001f9810);
#else
#include "types.h"
s32 FUN_001f9810(void) { return 0; }
#endif /* NON_MATCHING */
