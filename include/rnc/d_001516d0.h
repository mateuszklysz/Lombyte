#ifndef RNC_D_001516D0_H
#define RNC_D_001516D0_H

#include "types.h"

/* Sound/music stream state at 0x001516D0, shared by the snd/music units.
   Field widths come from the retail accesses of those units (majority sign
   where lh/lhu both occur).  Three identical 0x1C-byte channel records start
   at 0x34, 0x50 and 0x6C: s32 +0, s16 +4..+10, s32 +14, s32 +18.  The fields
   stay flat so the m2c-derived bodies keep their unkXX names. */
struct M2c_D_001516D0 {
    s32 unk0;
    u8 pad_4[0x4];
    s16 unk8;
    u8 unkA;
    u8 unkB;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 pad_18[0x4];
    s32 unk1C;
    s16 unk20;
    s8 unk22;
    s8 unk23;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    /* channel record 0 */
    s32 unk34;
    s16 unk38;
    s16 unk3A;
    s16 unk3C;
    s16 unk3E;
    s16 unk40;
    u8 pad_42[0x2];
    s16 unk44;
    u8 pad_46[0x2];
    s32 unk48;
    s32 unk4C;
    /* channel record 1 */
    s32 unk50;
    s16 unk54;
    s16 unk56;
    s16 unk58;
    s16 unk5A;
    s16 unk5C;
    u8 pad_5E[0x2];
    s16 unk60;
    u8 pad_62[0x2];
    s32 unk64;
    s32 unk68;
    /* channel record 2 */
    s32 unk6C;
    s16 unk70;
    s16 unk72;
    s16 unk74;
    s16 unk76;
    s16 unk78;
    u8 pad_7A[0x2];
    s16 unk7C;
    u8 pad_7E[0x2];
    s32 unk80;
    s32 unk84;
};

#endif /* RNC_D_001516D0_H */
