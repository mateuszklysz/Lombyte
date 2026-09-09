/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_001188c0();
void FUN_0023a770(void) {
    FUN_001188c0(1);
}

extern void func_0023A770(void) __attribute__((alias("FUN_0023a770")));
