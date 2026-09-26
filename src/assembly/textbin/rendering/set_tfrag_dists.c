#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/set_tfrag_dists/FUN_00233068.s", FUN_00233068);
#else
#include "types.h"
#include "rnc/assembly_textbin_set_tfrag_dists_types.h"

extern struct M2c_D_00160EA0 D_00160EA0;
extern struct M2c_D_00160EB0 D_00160EB0;
extern f32 D_0018CF20[];
extern struct M2c_D_001DE7F0 D_001DE7F0;
extern s32 func_001F9810(void *, s32);
extern s32 func_001FA6D0(f32);
void set_tfrag_dists(void) __asm__("FUN_00233068");

void set_tfrag_dists(void) {
    f32 scale;
    f32 a;
    f32 b;
    f32 c;
    f32 inv0;
    f32 inv1;

    scale = 1024.0f;
    D_00160EB0.unk0 = func_001FA6D0(D_00160EA0.unk0 * scale);
    D_00160EB0.unk4 = func_001FA6D0(D_00160EA0.unk4 * scale);
    D_00160EB0.unk8 = func_001FA6D0(D_00160EA0.unk8 * scale);
    a = D_00160EA0.unk0 * D_0018CF20[0];
    b = D_00160EA0.unk4 * D_0018CF20[0];
    c = D_00160EA0.unk8 * D_0018CF20[0];
    inv0 = 1.0f / (a - b);
    inv1 = 1.0f / (b - c);
    func_001F9810(&D_001DE7F0, 0x40);
    D_001DE7F0.unk0 = inv0 * 0.5f;
    D_001DE7F0.unk4 = -inv0;
    D_001DE7F0.unkC = a;
    D_001DE7F0.unk1C = b;
    D_001DE7F0.unk10 = inv1 * 0.5f;
    D_001DE7F0.unk24 = a * inv0;
    D_001DE7F0.unk30 = c * inv1 * -0.5f;
    D_001DE7F0.unk34 = b * inv1;
    D_001DE7F0.unk20 = b * inv0 * -0.5f;
    D_001DE7F0.unk14 = -inv1;
}
#endif /* NON_MATCHING */
