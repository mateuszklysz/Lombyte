/*
STATE: C_EXACT
SYMBOL: ClearDmaQueueEntry
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN ee-gcc-2.95.2 -O2 -g2
DECISION: promoted (pipeline-2026-09-08-3, wrapper-branch scan)
BLOCKER: none
EVIDENCE: campaign tasks/wrapper-scan probes/clear_dma_queue_entry (sn-O2 100/100/100)
NOTE: existing NON_MATCHING #else branch compiled byte-identical under SN; oracle wrapper stripped.
*/
#include "types.h"
extern u8 D_0018A2B0[];
void ClearDmaQueueEntry(void) {
    s32 *var_2_7;
    s32 var_3_6;
    s32 value;

    var_2_7 = D_0018A2B0;
    value = 1;
    var_3_6 = 0x13;
    var_2_7 = (s32 *)((u8 *)var_2_7 + 0x4C);
    do {
        *var_2_7 = value;
        var_3_6 -= 1;
        var_2_7 -= 1;
    } while (var_3_6 >= 0);
}
