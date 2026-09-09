/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_0023c610();
void FUN_0023cce0(s32 arg0) {
    FUN_0023c610(arg0 + 0x48);
}

extern void func_0023CCE0(s32 arg0) __attribute__((alias("FUN_0023cce0")));
