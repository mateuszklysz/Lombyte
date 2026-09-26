#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214a98/FUN_00214a98.s", FUN_00214a98);
#else
#include "types.h"
extern f32 func_001F99C0(f32);
extern s32 func_001FA6D0(f32);
extern s32 func_001F9D68(f32 *);

void FUN_00214a98(f32 *v, s32 *out) {
    f32 buf[4];
    f32 a;
    f32 b;
    f32 c;
    f32 m;
    f32 s;
    s32 n;

    a = func_001F99C0(v[0]);
    b = func_001F99C0(v[1]);
    c = func_001F99C0(v[2]);
    if (b < a) {
        b = a;
    }
    m = c < b ? b : c;
    n = func_001FA6D0(m * 10000.0f / 63.0f);
    if (n >= 0x100) {
        n = 0xFF;
    }
    if (n <= 0) {
        n = 1;
    }
    buf[3] = n;
    s = 1.0f / (buf[3] * 0.0001f);
    buf[0] = v[0] * s + 127.0f;
    buf[1] = v[1] * s + 127.0f;
    buf[2] = v[2] * s + 127.0f;
    *out = func_001F9D68(buf);
}
#endif /* NON_MATCHING */
