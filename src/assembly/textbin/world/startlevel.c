#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/world/startlevel/FUN_001e9658.s", FUN_001e9658);
#else
#include "types.h"
s32 startlevel(void) __asm__("FUN_001e9658");

s32 startlevel(void) { return 0; }
#endif /* NON_MATCHING */
