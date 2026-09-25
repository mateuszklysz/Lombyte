#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _getPtsDtsFlags; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_getPtsDtsFlags/_getPtsDtsFlags.s", _getPtsDtsFlags);
#else

#include "types.h"

struct M2c_arg0 {
    u8 pad_0[0x70];
    s32 unk70;
    u8 pad_74[0x4];
    s64 unk78;
    s32 unk80;
    u8 pad_84[0x4];
    s64 unk88;
    s32 unk90;
    u8 pad_94[0x5C];
    s64 unkF0;
    s32 unkF8;
};

struct M2c_arg1 {
    u8 pad_0[0x18];
    s64 unk18;
    s64 unk20;
    u8 pad_28[0x4];
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
};

extern s64 __muldi3(s64 a, s64 b);

void _getPtsDtsFlags(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1, s64 *arg2, s64 *arg3, s64 *arg4)
{
    s64 *sp0;
    s32 t80;
    s32 t90;
    s64 t88b;
    s64 t88;
    s32 t41;
    s32 tH;
    s64 tv;
    s64 u1, u2, u3;

    sp0 = arg4;
    if (arg0->unk70 != 0) {
        if ((arg1->unk18 < 0) && (t80 = arg0->unk80, (t80 >= 0))) {
            /* two-step assignment: one statement folds to lw+daddu, the pair keeps ld+dsll32+dsra32 */
            t88b = arg0->unk88;
            t88 = (s64) (s32) t88b;
            /* t90 read here (not before) keeps the 0x90 load in its natural slot */
            t41 = (s32) __muldi3(__muldi3(t88 & 1, arg0->unk78 & 1), (t90 = arg0->unk90, t90 & 1));
            tH = ((s64) (__muldi3(arg0->unk78, t88) << 0x1F)) >> 0x20;
            *arg2 = t80 + (s32) (tH + t41);
            if (__muldi3(t88 & 1, arg0->unk78 & 1) != 0) {
                arg0->unk90 = (t90 + 1);
            }
        } else {
            *arg2 = arg1->unk18;
        }
    } else {
        *arg2 = arg1->unk18;
    }
    if (arg0->unkF8 == 2) {
        tv = arg0->unkF0;
        if (tv >= 0) {
            *arg2 = tv;
            arg0->unkF8 = 0;
            arg0->unkF0 = -1;
        }
    }
    *arg3 = arg1->unk20;
    u1 = ((s64) arg1->unk40 << 5) | ((s64) arg1->unk3C << 6);
    u2 = ((s64) arg1->unk34 << 8) | arg1->unk2C;
    u3 = ((s64) arg1->unk38 << 7) | ((s64) arg1->unk30 << 3);
    *sp0 = (u2 | u1) | u3;
}
#endif /* NON_MATCHING */
