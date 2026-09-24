#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/draw_tfrag/FUN_002333a8.s", FUN_002333a8);
#else
#include "rnc/assembly_textbin_fun_002333a8_types.h"
#include "types.h"


extern s32 D_0015EE74;
extern s32 D_0015EE78;
extern u8 D_00160E70[];
extern u8 D_00160E80[];
extern s32 D_00160EBC[];
extern s32 D_00160F00[];
extern u8 D_00187080[];
extern struct M2c_D_0018A2B0 D_0018A2B0;
extern u8 D_001E1300[];
extern void FlushCache();
extern void WriteDmaChannel();
extern void func_001F21B0();
extern void func_001F21B8();
extern s32 func_001F9A68(s32 *, u8 *, f32);
extern void func_001F9FC8();
extern void func_001FA378();
extern void func_002331C0();
extern void func_00233888();
extern void func_00233FB0();
void draw_tfrag(void) __asm__("FUN_002333a8");

void draw_tfrag(void) {
u8 sp_slot[0x30];    s32 sp30;
    f32 sp3C;

    D_00160EBC[0] = D_00160F00[0];
    D_0015EE74 = D_0015EE78;
    D_00160F00[0] += 0x10;
    func_001F21B8(D_00160E70, 1);
    func_001F9FC8(sp_slot);
    func_001F9A68(&sp30, D_00187080, -1024.0f);
    sp3C = 1.0f;
    func_001FA378(sp_slot, ((u8 *)D_00187080 - (u8 *)0x100), sp_slot);
    func_00233888(5, sp_slot, 4);
    func_00233888(0x14D, sp_slot, 4);
    if (D_0018A2B0.unk10 != 0) {
        FlushCache(0);
        func_00233FB0();
    }
    func_001F21B8(D_00160E80, 2);
    func_002331C0();
    if (D_0018A2B0.unk10 != 0) {
        WriteDmaChannel(D_001E1300, 0x3000, 0x40);
    }
    func_001F21B0(D_00160E80, 2);
}
#endif /* NON_MATCHING */
