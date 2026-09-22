#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit strcpy; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/strcpy/strcpy.s", strcpy);
#else
#include "types.h"
s32 strcpy(void) { return 0; }
#endif /* NON_MATCHING */
