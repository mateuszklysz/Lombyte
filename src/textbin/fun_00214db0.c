#include "types.h"

extern f32 func_001F9DC8(f32);
extern f32 func_001F9DE0(f32);

void FUN_00214db0(f32 *out, f32 scale, f32 a, f32 b)
{
    out[0] = func_001F9DC8(a) * scale * func_001F9DC8(b);
    out[1] = func_001F9DE0(a) * scale * func_001F9DC8(b);
    out[2] = func_001F9DE0(b) * scale;
}

extern __typeof__(FUN_00214db0) func_00214DB0 __attribute__((alias("FUN_00214db0")));
