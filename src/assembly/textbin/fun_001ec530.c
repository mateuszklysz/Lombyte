#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ec530/FUN_001ec530.s", FUN_001ec530);
#else
#include "types.h"

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

struct Euler {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

extern void func_001F9A28();
extern f32 func_001F9AB0(struct Vec4 *, struct Vec4 *);
extern f32 func_001F9AF0(struct Vec4 *);
extern f32 func_001F9BF8(struct Vec4 *, struct Vec4 *, f32);
extern f32 func_001F9DF8(f32);
extern void func_00214890(void *, void *, void *, f32);

void FUN_001ec530(struct Euler *arg0, s32 arg1, s32 arg2, struct Vec4 *arg3,
                  struct Vec4 *arg4, struct Vec4 *arg5) {
    struct Vec4 v0;
    struct Vec4 v1;
    struct Vec4 v2;
    struct Vec4 v3;
    struct Vec4 v4;
    f32 dot;
    f32 len;
    f32 a;
    f32 b;

    func_001F9A28(&v0);
    dot = func_001F9AB0(&v0, arg5);
    func_001F9BF8(&v1, arg5, dot);
    func_001F9A28(&v2, &v0, &v1);
    dot = func_001F9AB0(arg3, &v2);
    len = func_001F9AF0(&v2);
    if (len == 0.0f) {
        len = 0.0001f;
    }
    a = 1.5707964f - func_001F9DF8(dot / len);
    func_001F9BF8(&v3, &v2, 1.0f);
    a = -a;
    if (func_001F9AB0(arg4, &v3) < 0.0f) {
        a = -a;
    }
    arg0->unk0 = a;
    func_00214890(&v4, arg3, arg5, a);
    dot = func_001F9AB0(&v4, &v0);
    len = func_001F9AF0(&v0);
    if (len == 0.0f) {
        len = 0.0001f;
    }
    b = 1.5707964f - func_001F9DF8(dot / len);
    func_001F9BF8(&v3, &v0, 1.0f);
    b = (func_001F9AB0(arg5, &v3) < 0.0f) ? b : -b;
    arg0->unk4 = b;
    arg0->unk8 = func_001F9AF0(&v0);
}
#endif /* NON_MATCHING */
