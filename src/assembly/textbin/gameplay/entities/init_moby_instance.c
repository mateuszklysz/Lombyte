#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/gameplay/entities/init_moby_instance/FUN_0020c5f0.s", FUN_0020c5f0);
#else
#include "types.h"

struct MobyAnimationInfo {
    u8 pad_0[0x10];
    u8 mode;
    s8 direction;
};

struct MobyClass {
    u8 pad_0[0x6];
    u8 unk6;
    u8 pad_7[0x5];
    u8 unkC;
    u8 pad_D;
    u8 unkE;
    u8 unkF;
    s32 unk10;
    u8 pad_14[0x10];
    f32 unk24;
    u8 pad_28[0x18];
    s32 unk40;
    u16 unk44;
    u8 pad_46[0x2];
    struct MobyAnimationInfo *animation;
};

struct MobyInstance {
    u8 pad_0[0x21];
    u8 unk21;
    u8 type;
    u8 unk23;
    struct MobyClass *class;
    u8 pad_28[0x4];
    f32 scale;
    u8 pad_30[0x4];
    u16 flags;
    u16 unk36;
    s64 transfer;
    u8 pad_40[0x18];
    f32 unk58;
    f32 unk5C;
    u8 pad_60[0x11];
    u8 unk71;
    u8 unk72;
    u8 unk73;
    s32 unk74;
    u8 pad_78[0x4];
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
    u8 pad_80[0x4];
    s32 unk84;
    s32 unk88;
    u8 pad_8C[0x4];
    s32 unk90;
    s32 unk94;
    u8 pad_98[0x8];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u8 unkA4;
    u8 pad_A5;
    u16 unkA6;
    s32 unkA8;
    s32 unkAC;
    u8 pad_B0[0xD];
    u8 unkBD;
};

extern s32 D_0015FF18;
extern struct MobyClass *D_001B3200[];
extern s32 D_001B3580[];
extern u8 D_001B3AC0[];
extern void FillTransferWords(void *, s32, s32);
extern void update_moby_animation_state(struct MobyInstance *) __asm__("FUN_0020c880");

void init_moby_instance(struct MobyInstance *moby, s32 class_id) __asm__("FUN_0020c5f0");

void init_moby_instance(struct MobyInstance *moby, s32 class_id) {
    s32 relative_index;
    s32 high_index;
    s32 transfer_words;
    s64 transfer_value;
    u16 flags;
    u8 type;
    struct MobyClass *moby_class;

    FillTransferWords(moby, 0, 0x100);
    type = D_001B3AC0[class_id];
    transfer_value = (((s64)0x8080 << 16) | 0x8000) << 23;
    moby->unk23 = 0x80;
    moby->type = type;
    moby->unkA4 = 0xFF;
    moby->unk21 = 0xFF;
    moby->unk71 = 0xFF;
    moby->unk72 = 0xFF;
    relative_index = (s32)((u8 *)moby - (u8 *)D_0015FF18) >> 8;
    moby->transfer = transfer_value;
    moby->unkA6 = (u16)class_id;
    moby->unk36 = 0x7F80;
    high_index = relative_index << 16;
    moby->unkAC = relative_index;
    moby->unkA8 = high_index;
    moby->unk7E = 0;
    moby->unk7C = 0xFF;
    moby->unkA0 = 0x7F;
    moby->unkA2 = 0x80;
    moby->unk7D = 0xFF;
    moby->unkA1 = 0x7F;
    moby->unkA3 = 0x80;
    transfer_words = D_001B3580[type];
    moby->unk74 = transfer_words;
    if (transfer_words == 0) {
        moby->flags |= 2;
    }
    moby_class = D_001B3200[moby->type];
    if (moby_class != 0) {
        moby->class = moby_class;
        moby->unk72 = moby_class->unkE;
        flags = moby->flags | moby_class->unk44;
        moby->flags = flags;
        moby->unk94 = moby_class->unk10;
        moby->scale = moby_class->unk24;
        moby->unk58 = 1.0f;
        moby->unk5C = 1.0f;
        if (moby_class->unk40 != 0) {
            moby->flags = flags | 0x10;
            moby->unk90 = moby_class->unk40;
        }
        if (moby->class->unkF != 0) {
            moby->unk7F = 0x18;
            moby->unk84 = 0;
            moby->flags |= 0x400;
            moby->unk88 = 0;
            moby->unkBD = 0;
        }
        if (moby->class->unk6 != 0) {
            moby->unk73 = 0x18;
        }
        if (moby->class->animation != 0) {
            update_moby_animation_state(moby);
            if (moby->class->animation->mode >= 2) {
                moby->flags &= 0xFFFD;
            }
            if (moby->class->unkC == 1 && moby->class->animation->mode < 2) {
                moby->unk58 = 0.0f;
                if (moby->class->animation->direction < 0) {
                    moby->flags |= 0x40;
                }
            }
        }
    } else {
        moby->class = 0;
        moby->flags |= 5;
        moby->unk94 = 0;
    }
}
#endif /* NON_MATCHING */
