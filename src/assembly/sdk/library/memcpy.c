#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit memcpy; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/memcpy/memcpy.s", memcpy);
#else
#include "types.h"
s32 memcpy(void) { return 0; }
#endif /* NON_MATCHING */
