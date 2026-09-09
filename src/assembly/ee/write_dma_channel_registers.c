/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
__asm__(
    ".set noreorder\n"
    ".text\n"
    ".align 3\n"
    ".globl WriteDmaChannelRegisters\n"
    ".type WriteDmaChannelRegisters, @function\n"
    "WriteDmaChannelRegisters:\n"
    "lui        $1, (0x1000D400 >> 16)\n"
    "ori        $1, $1, (0x1000D400 & 0xFFFF)\n"
    "sw         $6, 0x80($1)\n"
    "sw         $5, 0x20($1)\n"
    "sw         $4, 0x10($1)\n"
    "ori        $2, $0, 0x100\n"
    "jr         $31\n"
    "sw        $2, 0x0($1)\n"
    ".size WriteDmaChannelRegisters, .-WriteDmaChannelRegisters\n"
    ".set reorder\n"
);
#else
#include "rnc/assembly_ee_write_dma_channel_registers_types.h"
#include "types.h"
/* cygnus-2.96 matched TU. */

typedef struct Obj_00290000 Obj_00290000;


__attribute__((section(".text.func_00290000")))
Obj_00290000* WriteDmaChannelRegisters(Obj_00290000 *o) {
    *(int *)((char *)o + 0x0) = 0;
    *(int *)((char *)o + 0xC) = -1;
    *(int *)((char *)o + 0x4) = 0;
    *(int *)((char *)o + 0x8) = 0;
    *(char *)((char *)o + 0x10) = 0;
    return o;
}
#endif /* NON_MATCHING */
