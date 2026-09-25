#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021b6d8/FUN_0021b6d8.s", FUN_0021b6d8);
#else
#include "types.h"
extern s32 D_001601B4;
extern s32 func_001F96F8(s32);
extern void func_001FA6E0(s32, s32, f32);
void FUN_0021b6d8(s32 delay, s32 from, s32 to) {
    s32 start;
    s32 b;
    s32 a;
    s32 now;
    f32 t;

    start = delay > -1 ? delay : 0;
    a = from != -1 ? from : 0x80FFA888;
    b = to != -1 ? to : 0x8020FFFF;
    if (func_001F96F8(D_001601B4) >= start) {
        now = func_001F96F8(D_001601B4);
        t = 1.0f - (f32)(now - start) / (f32)func_001F96F8(D_001601B4);
    } else {
        t = 1.0f;
    }
    func_001FA6E0(a, b, t);
}
#endif /* NON_MATCHING */
