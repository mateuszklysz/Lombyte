/*
STATE: C_NON_MATCHING
SYMBOL: cmd_sem_init
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit cmd_sem_init; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/cmd_sem_init/cmd_sem_init.s", cmd_sem_init);
#else
#include "types.h"
/* cygnus-2.96 matched TU. */

extern void func_00366C50(int *a0, int a1, int a2);
extern void func_00358678(int *a0);

/* MATCH via cygnus-2.96. */



__attribute__((section(".text.func_00358600")))
void func_00358600(int *a0)
{
    func_00366C50(a0, 0, 0x2A);
    a0[0] = 0;
    a0[1] = 0;
    a0[2] = 0;
    a0[3] = 0;
    a0[4] = 0;
    a0[6] = 0;
    a0[7] = 0;
    a0[8] = 0;
    a0[9] = 0;
    a0[0xA] = 0;
    a0[0xB] = 0;
    a0[0xC] = 0;
    func_00358678(a0 + 0xE);
    func_00358678(a0 + 0x14);
    func_00358678(a0 + 0x1A);
    func_00358678(a0 + 0x20);
}
#endif /* NON_MATCHING */
