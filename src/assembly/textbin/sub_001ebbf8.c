#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/sub_001ebbf8/sub_001ebbf8.s", sub_001ebbf8);
#else
/* No C body: this yaml entry is a mid-function slice of FUN_001eb798
   (0x001EB798..0x001EBC88), not a function. A standalone body cannot
   reproduce the parent's frame or its callee-saved registers, and the
   retail oracle window has no prologue. Decompose the parent instead. */
#endif /* NON_MATCHING */
