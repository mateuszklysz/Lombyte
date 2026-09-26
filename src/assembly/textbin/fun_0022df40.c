#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022df40/FUN_0022df40.s", FUN_0022df40);
#else
#include "types.h"

struct M2c_D_0013E030 {
    u8 pad_0[0x20];
    s32 unk20;
    s16 unk24;
    s16 unk26;
    u8 pad_28[2];
};

struct Arg {
    u8 pad_0[0x18];
    f32 unk18;
    u8 pad_1C[0xA4];
};

struct Rec {
    s32 unk0;
    s32 unk4;
    f32 unk8;
    s32 unkC;
};

struct Locals {
    u8 pad00[0x10];
    struct Rec rec[3];
    u8 pad40[0x10];
    s32 v50;
    u8 pad54[0xC];
    u8 v60[0x20];
    s64 v80;
    s64 v88;
    s64 v90;
    s64 v98;
    s32 vA0;
    u8 padA4[0xC];
    s32 vB0;
    u8 padB4[0xC];
};

extern struct M2c_D_0013E030 D_0013E030;
extern s32 D_0015F604;
extern u8 D_001D97B0[];
extern u8 D_001D97D0[];
extern void func_001F7D30(void *, s32, s32);
extern s64 func_001F44B8(s32);
extern s32 func_001F96F8(s32);
extern void func_001F98D0(void *, void *, s32);
extern void func_001F9A10(void *, void *, void *);
extern void func_001F9A68(void *, void *, f32);
extern void func_001F9A80(void *, void *, f32);
extern void func_001F9CF8(void *, void *, void *);
extern s32 func_001FA820(void *, s32 *, f32);
extern f32 func_00213508(void *, s32, f32);
void FUN_0022df40(struct Arg *arg0);

void FUN_0022df40(struct Arg *arg0) {
    struct Locals L;
    struct Rec *rec;
    struct Rec *base;
    s32 *w;
    u8 *p20;
    u8 *p21;
    u8 *p22;
    s32 i;
    s32 t;
    s16 n;
    f32 sum;
    f32 tenth;

    L.vB0 = 0;
    func_001F9A80(&L, arg0, 0.0009765625f);
    if (func_001FA820(&L, &L.vB0, 32.0f) < 0) {
        return;
    }
    if (D_0015F604 == 6) {
        if (D_0013E030.unk20 == 3) {
            n = D_0013E030.unk24;
            if (func_001F96F8(0x96) < n) {
                t = func_001F96F8(0x96);
                L.vB0 = L.vB0 - ((D_0013E030.unk24 - t) * 4);
                if (L.vB0 <= 0) {
                    return;
                }
            }
        }
    }
    tenth = 0.1f;
    L.v88 = func_001F44B8(0);
    p21 = (u8 *)arg0 + 0x10;
    L.v90 = 0xFF9000000260;
    L.v98 = ((s64)0x8000 << 32) | 0x44;
    L.v80 = 0;
    func_001F98D0(&L.v60, D_001D97B0, 0x20);
    func_001F9A68(&L.vA0, arg0, 0.0009765625f);
    sum = arg0->unk18 + tenth;
    if (D_0015F604 == 6) {
        sum = func_00213508(p21, 0, 0.5f) + tenth;
    }
    p22 = (u8 *)arg0 + 0xC0;
    base = &L.rec[0];
    rec = &L.rec[0];
    w = &L.v50;
    p20 = D_001D97D0;
    i = 3;
    do {
        *w = ((L.vB0 >> 1) << 24) | 0x808080;
        func_001F9CF8(rec, (D_0013E030.unk26 << 6) + (s32)p20, p22);
        w += 1;
        func_001F9A10(rec, rec, p21);
        rec->unk8 = sum;
        p20 += 0x10;
        rec += 1;
        i -= 1;
    } while (i >= 0);
    func_001F7D30(base, 0, 0);
}
#endif /* NON_MATCHING */
