#include "types.h"
extern s32 D_0015FF14;
extern s32 func_00118A80();
extern void func_0020D218(void);
extern s32 func_0020D248();
extern s32 func_00211808();
extern s32 func_00233980();

void FUN_0020d330(s32 arg0, s32 arg1) {
    func_00233980(0x47, (long) 0x5360B);
    func_00118A80(0);
    func_0020D248();
    D_0015FF14 = func_00211808(arg0, D_0015FF14, arg1, 0);
    func_0020D218();
    D_0015FF14 -= 0x10;
}

extern __typeof__(FUN_0020d330) func_0020D330 __attribute__((alias("FUN_0020d330")));
