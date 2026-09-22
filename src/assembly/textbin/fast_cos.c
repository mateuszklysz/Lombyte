#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_cos/FUN_001f9dc8.s", FUN_001f9dc8);
#else
#include "types.h"
/* func_00158FB8 — returns 0.0f (constant float stub). */

__attribute__((section(".text.func_00158FB8")))
float FUN_001f9dc8(void *a0) {
    return 0.0f;
}
#endif /* NON_MATCHING */
