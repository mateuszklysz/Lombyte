/*
STATE: C_EXACT
SYMBOL: FUN_0021f5f8
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: SN ee-gcc2.95.2-v2.73a -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-08-2)
BLOCKER: none
*/

#include "types.h"
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F6530(s32, s32, u64, s32, s32);
extern s32 func_001FDD10();
extern s32 func_00233980();
s32 FUN_0021f5f8(void) {
    func_00233980(0x42, 0x44);
    func_00233980(0x47, 0xB);
    func_001F4280(0);
    func_001F6530(4, 7, 0x80FFA888, func_001FDD10(0x4EE0), -1);
    func_001F6530(4, 0x17, 0x80FFA888, func_001FDD10(0x4F05), -1);
    func_001F4398();
    return 2;
}
