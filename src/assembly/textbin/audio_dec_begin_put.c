/* ROLE: recovered whole function `audioDecBeginPut__FP9_AudioDecPPUcPiT1T2`. */
/*
STATE: C_EXACT
SYMBOL: FUN_0023ad58 (alias func_0023AD58)
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN ee-gcc-2.95.2 -O2 -g2
DECISION: promoted (pipeline-2026-09-08-3)
BLOCKER: none
EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-08-3/refinement/FUN_0023ad58/attempt-2/finalist.json
NOTE: re-verified 100/100/100 fresh SN on 2026-09-08 resume; wrapper INCLUDE_ASM oracle replaced by matching C.
*/
#include "types.h"
struct M2c_arg0 {
    s32 unk0;
    s32 unk4;
    u8 pad_8[0x28];
    s32 unk30;
    u8 * unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
};

void FUN_0023ad58(struct M2c_arg0 *arg0, void **arg1, s32 *arg2, void **arg3, s32 *arg4) {
    s32 t2;

    if (arg0->unk0 == 0) {
        if (arg0->unk4 != 4) {
            *arg1 = ((u8 *)arg0 + (arg0->unk30 + 8));
            *arg2 = 0x28 - arg0->unk30;
            *arg3 = arg0->unk34;
            *arg4 = arg0->unk40;
        } else {
            *arg1 = arg0->unk34;
            *arg2 = arg0->unk40;
            *arg3 = NULL;
            *arg4 = 0;
        }
    } else {
        t2 = arg0->unk40 - arg0->unk3C;
        if ((arg0->unk40 - arg0->unk38) >= t2) {
            *arg1 = arg0->unk34 + arg0->unk38;
            *arg2 = t2;
            *arg3 = NULL;
            *arg4 = 0;
        } else {
            *arg1 = arg0->unk34 + arg0->unk38;
            *arg2 = arg0->unk40 - arg0->unk38;
            *arg3 = arg0->unk34;
            *arg4 = t2 - (arg0->unk40 - arg0->unk38);
        }
    }
}
extern void func_0023AD58(struct M2c_arg0 *, void **, s32 *, void **, s32 *) __attribute__((alias("FUN_0023ad58")));
