#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214260/FUN_00214260.s", FUN_00214260);
#else
#include "types.h"

struct MatIn {
    f32 m[3][4];
    f32 pad[4];
};

struct Ids {
    s32 v[3];
};

extern struct Ids D_0015FFD8;
extern f32 func_001F9988(s32, struct MatIn *, f32);

void FUN_00214260(f32 *out, struct MatIn *in) {
    struct Ids ids;
    f32 lm[3][3];
    f32 t;
    f32 s;
    s32 i;
    s32 i1;
    s32 i2;
    f32 sum;
    f32 d0;
    f32 d1;
    f32 d2;

    ids = D_0015FFD8;
    d1 = in->m[1][1];
    d0 = in->m[0][0];
    d2 = in->m[2][2];
    sum = d0 + d1 + d2;
    if (sum > 0.0f) {
        t = func_001F9988(D_0015FFD8.v[2], in, sum + 1.0f);
        s = 0.5f / t;
        out[3] = t * 0.5f;
        out[0] = (in->m[2][1] - in->m[1][2]) * s;
        out[1] = (in->m[0][2] - in->m[2][0]) * s;
        out[2] = (in->m[1][0] - in->m[0][1]) * s;
        return;
    }
    i = 0;
    if (d0 < d1) {
        i = 1;
    }
    lm[0][0] = d0;
    lm[0][1] = in->m[0][1];
    lm[0][2] = in->m[0][2];
    lm[1][0] = in->m[1][0];
    lm[1][1] = d1;
    lm[1][2] = in->m[1][2];
    lm[2][0] = in->m[2][0];
    lm[2][1] = in->m[2][1];
    lm[2][2] = d2;
    if (lm[i][i] < d2) {
        i = 2;
    }
    i1 = ids.v[i];
    i2 = ids.v[i1];
    t = func_001F9988(D_0015FFD8.v[2], in, lm[i][i] - (lm[i1][i1] + lm[i2][i2]) + 1.0f);
    out[i] = t * 0.5f;
    s = t;
    if (s != 0.0f) {
        s = 0.5f / s;
    }
    out[3] = (lm[i2][i] - lm[i1][i2]) * s;
    out[i1] = (lm[i1][i] + lm[i][i]) * s;
    out[i2] = (lm[i2][i] + lm[i][i2]) * s;
}
#endif /* NON_MATCHING */
