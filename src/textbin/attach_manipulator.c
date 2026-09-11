/*
STATE: C_EXACT
SYMBOL: AttachManipulator
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered whole function `AttachManipulator`. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"

typedef struct Manipulator Manipulator;

typedef struct MobyAttachOwner {
    u8 pad0[0x24];
    void *unk24;
    u8 pad28[0x3C];
    Manipulator *unk64;
} MobyAttachOwner;

struct Manipulator {
    u8 unk0;
    u8 unk1;
    u8 pad2[2];
    void *unk4;
    void *unk8;
    u8 padC[0x10];
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
};

void FUN_0020cb10(MobyAttachOwner *arg0, s32 arg1, Manipulator *arg2) {
    if (arg2->unk1 == 0) {
        u8 *r;

        arg2->unk0 = arg1;
        arg2->unk1 = 1;
        arg2->unk1C = 1.0f;
        arg2->unk20 = 1.0f;
        arg2->unk24 = 1.0f;
        arg2->unk28 = 1.0f;

        r = *(u8 **)((u8 *)(*(s32 *)((u8 *)arg0->unk24 + 0x1C) + arg2->unk0 * 4) + 4);
        {
            u8 n = *r;
            arg2->unk4 = (void *)((r[n + 4] << 6) + 0x70000000);
        }
        arg2->unk8 = arg0->unk64;
        arg0->unk64 = arg2;
    }
}

/* Recovered original symbol name. */
extern __typeof__(FUN_0020cb10) AttachManipulator __attribute__((alias("FUN_0020cb10")));
