/*
STATE: C_NON_MATCHING
SYMBOL: CalculateDmaTransferAddress
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/ee/calculate_dma_transfer_address/CalculateDmaTransferAddress.s", CalculateDmaTransferAddress);
#else
#include "types.h"
extern s32 D_0015ED84;
extern s32 D_00160F0C;
extern u8 D_001DDFB8[];
void CalculateDmaTransferAddress(void) {
    D_00160F0C = *((((D_0015ED84 >= 0x13) ? 0 : D_0015ED84) * 4) + D_001DDFB8);
}
#endif /* NON_MATCHING */
