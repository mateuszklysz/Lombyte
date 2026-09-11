/*
STATE: C_NON_MATCHING
SYMBOL: snd_StreamSafeCheckCDIdle
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `snd_StreamSafeCheckCDIdle`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/snd_stream_safe_check_cd_idle/FUN_0012ed30.s", FUN_0012ed30);
#else
#include "types.h"
extern s32 func_0012E548();
void FUN_0012ed30(s32 arg0) {
u8 sp_slot[0x20];    func_0012E548(0x36, 4, sp_slot, arg0);
}
#endif /* NON_MATCHING */
