#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/gameplay/state/transition_do_transition/FUN_001eb798.s", FUN_001eb798);
#else
#include "types.h"
s32 transition_do_transition(void) __asm__("FUN_001eb798");

s32 transition_do_transition(void) { return 0; }
#endif /* NON_MATCHING */
