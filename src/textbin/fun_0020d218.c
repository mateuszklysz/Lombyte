/* ROLE: recovered function `StashMobyClassDists__Fv` (mobyfunc, 0x30 bytes) starts here; this unit covers only its first fragment. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern u8 D_001B2E80[];
extern s32 FUN_001f98d0();
void FUN_0020d218(void) {
    FUN_001f98d0(D_001B2E80, 0x70003A00, 0x380);
}

extern void func_0020D218(void) __attribute__((alias("FUN_0020d218")));
