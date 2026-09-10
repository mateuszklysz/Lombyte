/* ROLE: recovered function `audioDecSend` (movie/audiodec.cpp, 0x28 bytes) starts here; this unit covers only its first fragment. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_0023afc0();
void FUN_0023aef0(s32 *arg0) {
    if (*arg0 != 0) {
        FUN_0023afc0();
    }
}

extern void func_0023AEF0(s32 *arg0) __attribute__((alias("FUN_0023aef0")));
