#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/video/decoder/vi_buf_reset/FUN_0023bcc0.s", FUN_0023bcc0);
#else
#include "types.h"
s32 vi_buf_reset(void) __asm__("FUN_0023bcc0");

s32 vi_buf_reset(void) { return 0; }
#endif /* NON_MATCHING */
