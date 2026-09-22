#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit memchr; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/memchr/memchr.s", memchr);
#else
#include "types.h"
s32 memchr(void) { return 0; }
#endif /* NON_MATCHING */
