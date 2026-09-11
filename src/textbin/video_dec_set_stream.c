/*
STATE: C_EXACT
SYMBOL: videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv`. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_0012aec8();
s32 FUN_0023cbd0(s32 arg0) {
    FUN_0012aec8();
    return 1;
}

/* Recovered original symbol name. */
extern __typeof__(FUN_0023cbd0) videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv __attribute__((alias("FUN_0023cbd0")));
