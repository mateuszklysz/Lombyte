#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0xC];
    f32 unkC;
};

extern s32 func_001F9A68(s32, s32, f32);
extern f32 func_001F9DC8(f32);
extern f32 func_001F9DE0(f32);
void FUN_00214530(struct M2c_arg0 *arg0, s32 arg1, f32 fparg0) {
    f32 temp_f20_9;

    temp_f20_9 = fparg0 * 0.5f;
    func_001F9A68(arg0, arg1, func_001F9DE0(temp_f20_9));
    arg0->unkC = func_001F9DC8(temp_f20_9);
}

