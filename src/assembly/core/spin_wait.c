/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: SpinWait
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

/* ROLE: recovered function `FastSitAndSpin__Fi` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/core/spin_wait/SpinWait.s", SpinWait);
#else
#include "types.h"
/* Byte-identical to RE4 PS2 (SLUS-21134) 0x0029D980 — newlib.
 * Spins on EE I/O register 0x1000F130 (bit 0x8000) then writes a0 as a byte to
 * 0x1000F180. Compiled with ee-2.9-991111: cygnus-2.96 fills the poll-loop
 * branch delay slot, newlib leaves the short-loop nops. */

__attribute__((section(".text.func_003B0D48")))
void *SpinWait(int a0) {
    while (*(volatile int *)0x1000F130 & 0x8000) {
    }
    *(volatile char *)0x1000F180 = (char)a0;
    return (void *)a0;
}
#endif /* NON_MATCHING */
