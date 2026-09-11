/*
STATE: C_EXACT
SYMBOL: sceSifAllocIopHeap
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2)
DECISION: promoted (staged object + full-ELF SHA gate PASS e05058...c0c9)
BLOCKER: none
*/

/* ROLE: Allocate IOP heap memory over the sif heap RPC (game-patched ps2sdk SifAllocIopHeap) */

#include "types.h"
extern s32 D_0012FCAC __attribute__((section(".data")));
extern u8 D_00158040[];
extern u8 D_00158080[];
extern u8 D_001580C0[];
extern s32 sceSifCallRpc();
void *sceSifAllocIopHeap(s32 size)
{
    if (D_0012FCAC < 0)
        return 0;
    *(s32 *)D_001580C0 = size;
    if (sceSifCallRpc(D_00158040, 1, 0, D_001580C0, 4, D_00158080, 4, 0, 0) < 0)
        return 0;
    return *(void **)D_00158080;
}
