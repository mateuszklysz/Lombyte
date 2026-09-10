/* ROLE: recovered whole function `UpdateOcclusion__Fv` (game/initonce.cpp). */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern u32 D_0018C334[];
extern u8 D_00193FC0[];
extern s32 FUN_001f2820();
extern s32 FUN_001f97e8();
void FUN_001f2c10(void) {
    if (D_0018C334[0] == 0) {
        FUN_001f97e8(D_00193FC0, -1, 0x80);
    } else if (D_0018C334[0] == 2) {
        FUN_001f2820();
    }
}

/* Recovered original symbol name. */
extern __typeof__(FUN_001f2c10) UpdateOcclusion__Fv __attribute__((alias("FUN_001f2c10")));
