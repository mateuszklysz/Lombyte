/*
STATE: C_NON_MATCHING
SYMBOL: sceMpegDemuxPssRing
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceMpegDemuxPssRing; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_mpeg_demux_pss_ring/sceMpegDemuxPssRing.s", sceMpegDemuxPssRing);
#else
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x40];
    struct M2c_temp_20_22 * unk40;
};

struct M2c_sp {
    u8 pad_0[0x18];
    s32 unk18;
};

struct M2c_sp30 {
    u8 pad_0[0x18];
    s32 unk18;
    u8 pad_1C[0xC];
    s32 unk28;
    u8 pad_2C[0x4];
    s32 unk30;
    u8 pad_34[0x4];
    s32 unk38;
    s32 unk3C;
    s32 unk40;
};

struct M2c_temp_16_115 {
    s32 unk0;
    u8 pad_4[0x4];
    s32 unk8;
    u8 pad_C[0x4];
    s32 unk10;
    s32 unk14;
};

struct M2c_temp_20_22 {
    u8 pad_0[0x44];
    s32 unk44;
    s32 unk48;
};

struct M2c_temp_2_40 {
    s32 unk0;
    u8 pad_4[0xC];
    s32 unk10;
    s32 unk14;
};

extern s32 GetSysbitPointer();
extern s32 SignExtendPackedValue();
extern s32 _PES_packet();
extern s32 _pack_header();
extern s32 _sysbitInit();
extern void sp30();
extern void temp_16_115();
s32 sceMpegDemuxPssRing(s32 arg1, struct M2c_arg0 *arg0, s32 arg2, s32 arg3, s32 arg4) {
u8 sp_slot[0x150];    struct M2c_sp30 sp30;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s64 sp90;
    s64 sp98;
    s32 (*spA0)(void *, s32 *, s32, s32);
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 (*temp_7_89)(void *, s32 *, s32, void *, s32);
    s32 temp_2_135;
    s32 temp_2_80;
    s32 temp_4_105;
    s32 temp_4_29;
    s32 temp_7_139;
    s32 temp_8_84;
    s32 var_19_106;
    s32 var_19_14;
    s32 var_21_10;
    s32 var_2_178;
    u32 var_22_33;
    u64 temp_3_175;
    struct M2c_temp_16_115 *temp_16_115;
    struct M2c_temp_20_22 *temp_20_22;
    struct M2c_temp_2_40 *temp_2_40;

    var_21_10 = 1;
    var_19_14 = 0;
    temp_20_22 = arg0->unk40;
    spA0 = NULL;
    spA8 = temp_20_22->unk44;
    _sysbitInit(sp_slot, arg3, arg4);
    spA4 = 0;
    temp_4_29 = temp_20_22->unk48;
    spAC = 0;
    if (temp_4_29 <= 0) {
        goto block_7;
    }
    var_22_33 = arg2 * 8;
loop_2:
    temp_2_40 = spA8 + (var_19_14 * 0x18);
    if (temp_2_40->unk0 != (0xBDFF << 0x18)) {
        goto block_4;
    }
    spA4 = temp_2_40->unk14;
    spA0 = temp_2_40->unk10;
block_4:
    var_19_14 += 1;
    if (spA0 != NULL) {
        goto block_8;
    }
    if (var_19_14 < temp_4_29) {
        goto loop_2;
    }
    goto block_8;
block_7:
    var_22_33 = arg2 * 8;
block_8:
loop_9:
    if (SignExtendPackedValue(sp_slot, 0x20) != 0x1BA) {
        goto loop_25;
    }
    _pack_header(sp_slot, &sp30);
    goto loop_25;
block_12:
    sp80 = 6;
    sp84 = GetSysbitPointer(sp_slot, sp30.unk40, temp_4_105);
    temp_2_80 = GetSysbitPointer(sp_slot, sp30.unk38);
    temp_8_84 = sp30.unk3C;
    sp90 = sp30.unk28;
    temp_7_89 = temp_16_115->unk10;
    sp88 = temp_2_80;
    sp8C = temp_8_84;
    sp98 = sp30.unk30;
    var_21_10 = temp_7_89(arg0, &sp80, temp_16_115->unk14, temp_7_89, temp_8_84);
    goto block_20;
block_13:
    _PES_packet(temp_20_22, sp_slot, &sp30 + 0x18);
    if (var_22_33 < (u64) *(s32 *)((u8 *)sp_slot + 0x18)) {
        goto loop_26;
    }
    temp_4_105 = temp_20_22->unk48;
    var_19_106 = 0;
    if (temp_4_105 <= 0) {
        goto block_20;
    }
loop_16:
    temp_16_115 = spA8 + (var_19_106 * 0x18);
    if (temp_16_115->unk0 != (sp30.unk18 & temp_16_115->unk8)) {
        goto block_18;
    }
    goto block_12;
block_18:
    var_19_106 += 1;
    if (var_19_106 < temp_4_105) {
        goto loop_16;
    }
block_20:
    if (var_19_106 != temp_20_22->unk48) {
        goto block_23;
    }
    if (spA0 == NULL) {
        goto block_23;
    }
    sp80 = 6;
    sp84 = GetSysbitPointer(sp_slot, sp30.unk40);
    temp_2_135 = GetSysbitPointer(sp_slot, sp30.unk38);
    temp_7_139 = sp30.unk3C;
    sp90 = sp30.unk28;
    sp88 = temp_2_135;
    sp8C = temp_7_139;
    sp98 = sp30.unk30;
    var_21_10 = spA0(arg0, &sp80, spA4, temp_7_139);
block_23:
    if (var_21_10 == 0) {
        goto loop_26;
    }
    spAC = (s32) ((s64) (*(s32 *)((u8 *)sp_slot + 0x18) << 0x1D) >> 0x20);
loop_25:
loop_26:
    if (SignExtendPackedValue(sp_slot, 0x18) != 1) {
        goto block_32;
    }
    if (SignExtendPackedValue(sp_slot, 0x20) == 0x1BA) {
        goto block_32;
    }
    if (SignExtendPackedValue(sp_slot, 0x20) == 0x1B9) {
        goto block_32;
    }
    temp_3_175 = *(s32 *)((u8 *)sp_slot + 0x18);
    var_2_178 = var_22_33 < temp_3_175;
    if (temp_3_175 >= var_22_33) {
        goto block_33;
    }
    if (var_21_10 != 0) {
        goto block_13;
    }
    goto block_33;
block_32:
    var_2_178 = var_22_33 < (u64) *(s32 *)((u8 *)sp_slot + 0x18);
block_33:
    if (var_2_178 != 0) {
        goto block_35;
    }
    if (SignExtendPackedValue(sp_slot, 0x20) == 0x1BA) {
        goto loop_9;
    }
block_35:
    return spAC;
}
#endif /* NON_MATCHING */
