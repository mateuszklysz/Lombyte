#include "types.h"
extern f32 func_001F99C0(f32);
f32 FUN_00213ed8(f32 target, f32 step, f32 *value) {
    f32 d = target - *value;

    if (d > step) {
        d = step;
    } else if (d < -step) {
        d = -step;
    }
    *value += d;
    return func_001F99C0(target - *value);
}

extern __typeof__(FUN_00213ed8) func_00213ED8 __attribute__((alias("FUN_00213ed8")));
