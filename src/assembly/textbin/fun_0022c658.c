#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022c658/FUN_0022c658.s", FUN_0022c658);
#else
#include "types.h"
struct Obj { u8 pad0[0x18]; s32 id; u8 pad1c[4]; f32 pos[4]; };
extern f32 D_00187080[4];
extern void func_001F9A28(f32 *, f32 *, f32 *);
extern void func_001F9A68(f32 *, f32 *, f32);
extern void func_001F9C90(f32 *, f32 *, f32);
extern void func_001F9A10(f32 *, f32 *, f32 *);
extern void func_001EFA68(void *, f32 *, s32, s32, s32);
void FUN_0022c658(struct Obj *obj, void *out) {
    f32 v[4] __attribute__((aligned(16)));

    func_001F9A28(v, obj->pos, D_00187080);
    func_001F9A68(v, v, 0.75f);
    func_001F9C90(v, v, 64.0f);
    func_001F9A10(v, v, D_00187080);
    func_001EFA68(out, v, 0x82, obj->id, 0);
}
#endif /* NON_MATCHING */
