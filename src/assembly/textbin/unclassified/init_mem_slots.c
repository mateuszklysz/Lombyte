#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/unclassified/init_mem_slots/FUN_002015d8.s", FUN_002015d8);
#else
#include "types.h"
struct M2c_D_001940C0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 pad_1C[0x4];
    s32 unk20;
    s32 unk24;
    s32 unk28;
};

extern s32 D_00160F0C;
extern struct M2c_D_001940C0 D_001940C0;
extern u8 D_24135F[];
void FUN_002015d8(void) {
    s32 temp_11_12;
    s32 temp_4_10;
    s32 temp_5_17;
    s32 temp_6_21;
    s32 temp_7_14;

    temp_4_10 = (s32) D_24135F & 0xFFFFC000;
    temp_11_12 = temp_4_10 + D_00160F0C;
    temp_7_14 = temp_11_12 + D_00160F0C;
    temp_5_17 = temp_7_14 + 0x64000;
    D_001940C0.unk28 = 0x07200000;
    D_001940C0.unk0 = temp_4_10;
    temp_6_21 = temp_5_17 + 0x30000;
    D_001940C0.unk18 = temp_6_21;
    D_001940C0.unk20 = 0x07000000;
    D_001940C0.unk24 = 0x07100000;
    D_001940C0.unk4 = temp_4_10;
    D_001940C0.unk8 = temp_11_12;
    D_001940C0.unkC = temp_7_14;
    D_001940C0.unk10 = temp_5_17;
    D_001940C0.unk14 = temp_6_21;
}
#endif /* NON_MATCHING */
