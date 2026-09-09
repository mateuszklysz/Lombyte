/*
STATE: C_EXACT
SYMBOL: FUN_0021f8e8 (alias func_0021F8E8)
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: SN ee-gcc2.95.2-v2.73a -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-08-2)
BLOCKER: none
EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-08-2/ (refinement/FUN_0021f8e8/attempt-1 receipt); audit source-quality-audit-2026-09-08-pipeline-run3.json; full-ELF PASS 2026-09-08T09:11:53Z
*/

#include "types.h"
extern s32 D_001601B0;
extern s32 func_001FF960();
extern s32 func_001FFC30();
extern s32 func_00200E08(s32, s32, s32, s32, u64, s32);
void FUN_0021f8e8(s32 arg0, s32 arg1, s32 arg2) {
    func_00200E08(arg0 - 5, arg1 - 5, arg0 + 5, arg1 + 5, (u64) 0x80FFA888, 0);
    func_00200E08(arg0 - 4, arg1 - 4, arg0 + 4, arg1 + 4, (u64) D_001601B0, 0);
    if (arg2 != 0) {
        func_001FFC30(func_001FF960(0xE99E, 1), arg0 - 0xD, arg1 - 0x12, 0x1E, 0x1E, 0x80);
    }
}

extern void func_0021F8E8(void) __attribute__((alias("FUN_0021f8e8")));
