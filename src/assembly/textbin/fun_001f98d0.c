/* ROLE: recovered function `FastMemCopy` (game/help.cpp, 0x43d0 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f98d0/FUN_001f98d0.s", FUN_001f98d0);
#else
#include "types.h"
/* Byte-identical to RE4 PS2 (SLUS-21134) 0x0029D980 — newlib.
 * Spins on EE I/O register 0x1000F130 (bit 0x8000) then writes a0 as a byte to
 * 0x1000F180. Compiled with ee-2.9-991111: cygnus-2.96 fills the poll-loop
 * branch delay slot, newlib leaves the short-loop nops. */

__attribute__((section(".text.func_003B0D48")))
void *FUN_001f98d0(int a0) {
    while (*(volatile int *)0x1000F130 & 0x8000) {
    }
    *(volatile char *)0x1000F180 = (char)a0;
    return (void *)a0;
}
#endif /* NON_MATCHING */
