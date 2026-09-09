/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_0012ef28();
extern void FUN_00216950();
void FUN_00215420(void) {
    FUN_0012ef28(&FUN_00216950);
}

extern void func_00215420(void) __attribute__((alias("FUN_00215420")));
