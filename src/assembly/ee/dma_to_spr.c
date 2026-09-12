/*
STATE: C_NON_MATCHING
SYMBOL: DmaToSpr
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `DmaToSpr`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/ee/dma_to_spr/WriteDmaChannelRegisters.s", WriteDmaChannelRegisters);
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

