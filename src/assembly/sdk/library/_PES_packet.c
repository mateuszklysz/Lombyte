/*
STATE: C_NON_MATCHING
SYMBOL: _PES_packet
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _PES_packet; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_PES_packet/_PES_packet.s", _PES_packet);
#else
#include "rnc/assembly_sdk_library__PES_packet_types.h"
#include "types.h"




extern u8 D_001539C8[];
extern u8 D_001539D8[];
extern s32 _Error();
extern s32 _sysbitGet();
extern s32 _sysbitJump();
extern s32 _sysbitMarker();
s32 _PES_packet(s32 arg0, struct M2c_arg1 *arg1, struct M2c_arg2 *arg2) {
u8 sp_slot[0xC0];    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 temp_16_288;
    s32 temp_5_277;
    s32 temp_5_367;
    s32 var_16_344;
    s32 var_2_237;
    s32 var_5_289;
    s64 temp_22_110;
    s64 temp_4_40;
    s64 var_2_316;
    u32 var_16_253;
    u64 temp_16_119;
    u64 temp_16_155;
    u64 temp_16_200;
    u64 temp_17_125;
    u64 temp_17_161;
    u64 temp_17_220;
    u64 temp_18_131;
    u64 temp_18_167;
    u64 temp_18_208;
    u64 temp_21_102;
    u64 temp_23_212;
    u64 temp_23_90;
    u64 temp_2_255;
    u64 temp_30_204;
    u64 temp_30_98;

    sp10 = arg0;
    arg2->unk28 = (s32) arg1->unk18;
    /* m2c-unknown:  unknown instruction: ldl $v0, 0x7($a4)  */
    /* m2c-unknown:  unknown instruction: ldr $v0, ($a4)  */
    /* m2c-unknown:  unknown instruction: ldl $a2, 0xf($a4)  */
    /* m2c-unknown:  unknown instruction: ldr $a2, 0x8($a4)  */
    /* m2c-unknown:  unknown instruction: sdl $v0, 0x7($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdr $v0, ($sp_slot)  */
    /* m2c-unknown:  unknown instruction: sdl $a2, 0xf($sp_slot)  */
    _sysbitGet(arg1, 0x18U, 0 /*  unknown instruction: sdr $a2, 0x8($sp_slot)  */, D_001539C8);
    arg2->unk0 = (s64) (_sysbitGet(arg1, 8U) << 0x20);
    temp_4_40 = arg2->unk0;
    arg2->unk8 = _sysbitGet(arg1, 0x10U);
    arg2->unk10 = -1;
    arg2->unk18 = -1;
    if (temp_4_40 == (0xBC00 << 0x18)) {
        goto block_43;
    }
    if (temp_4_40 == (0xBE00 << 0x18)) {
        goto block_36;
    }
    if (temp_4_40 == (0xBF00 << 0x18)) {
        goto block_36;
    }
    if (temp_4_40 == (0xF000 << 0x18)) {
        goto block_36;
    }
    if (temp_4_40 == (0xF100 << 0x18)) {
        goto block_36;
    }
    if (temp_4_40 == (0xFF00 << 0x18)) {
        goto block_36;
    }
    if (temp_4_40 == (0xF200 << 0x18)) {
        goto block_36;
    }
    if (temp_4_40 == (0xF800 << 0x18)) {
        goto block_36;
    }
    _sysbitGet(arg1, 2U);
    arg2->unkC = _sysbitGet(arg1, 2U);
    _sysbitGet(arg1, 4U);
    temp_23_90 = _sysbitGet(arg1, 2U);
    sp14 = _sysbitGet(arg1, 1U);
    temp_30_98 = _sysbitGet(arg1, 4U);
    temp_21_102 = _sysbitGet(arg1, 1U);
    sp18 = _sysbitGet(arg1, 8U);
    temp_22_110 = (s64) ((s64) arg1->unk18 << 0x20) >> 0x20;
    if (!(temp_23_90 & 2)) {
        goto block_10;
    }
    _sysbitGet(arg1, 4U);
    temp_16_119 = _sysbitGet(arg1, 3U);
    _sysbitMarker(arg1);
    temp_17_125 = _sysbitGet(arg1, 0xFU);
    _sysbitMarker(arg1);
    temp_18_131 = _sysbitGet(arg1, 0xFU);
    _sysbitMarker(arg1);
    arg2->unk10 = (s64) ((((temp_16_119 >> 2) & 1) << 0x20) | ((u64) (((temp_16_119 << 0x1E) | (temp_17_125 << 0xF) | temp_18_131) << 0x20) >> 0x20));
block_10:
    if (temp_23_90 != 3) {
        goto block_12;
    }
    _sysbitGet(arg1, 4U);
    temp_16_155 = _sysbitGet(arg1, 3U);
    _sysbitMarker(arg1);
    temp_17_161 = _sysbitGet(arg1, 0xFU);
    _sysbitMarker(arg1);
    temp_18_167 = _sysbitGet(arg1, 0xFU);
    _sysbitMarker(arg1);
    arg2->unk18 = (s64) ((((temp_16_155 >> 2) & 1) << 0x20) | ((u64) (((temp_16_155 << 0x1E) | (temp_17_161 << 0xF) | temp_18_167) << 0x20) >> 0x20));
block_12:
    if (sp14 != 1) {
        goto block_14;
    }
    _sysbitGet(arg1, 0x30U);
block_14:
    if (temp_30_98 == 0) {
        goto block_16;
    }
    _sysbitGet(arg1, *(sp_slot + temp_30_98));
block_16:
    if (temp_21_102 != 1) {
        goto block_30;
    }
    temp_16_200 = _sysbitGet(arg1, 1U);
    temp_30_204 = _sysbitGet(arg1, 1U);
    temp_18_208 = _sysbitGet(arg1, 1U);
    temp_23_212 = _sysbitGet(arg1, 1U);
    _sysbitGet(arg1, 3U);
    temp_17_220 = _sysbitGet(arg1, 1U);
    if (temp_16_200 != temp_21_102) {
        goto block_19;
    }
    _sysbitGet(arg1, 0x30U);
    _sysbitGet(arg1, 0x30U);
    _sysbitGet(arg1, 0x20U);
block_19:
    if (temp_30_204 != temp_21_102) {
        goto block_21;
    }
    _Error(sp10, D_001539D8);
    var_2_237 = 0;
    goto block_52;
block_21:
    if (temp_18_208 != temp_21_102) {
        goto block_23;
    }
    _sysbitGet(arg1, 0x10U);
block_23:
    if (temp_23_212 != temp_21_102) {
        goto block_25;
    }
    _sysbitGet(arg1, 0x10U);
block_25:
    if (temp_17_220 != temp_21_102) {
        goto block_30;
    }
    var_16_253 = 0;
    _sysbitMarker(arg1);
    temp_2_255 = _sysbitGet(arg1, 7U);
    if (temp_2_255 == 0) {
        goto block_30;
    }
loop_28:
    _sysbitGet(arg1, 8U);
    var_16_253 += 1;
    if (var_16_253 < temp_2_255) {
        goto loop_28;
    }
block_30:
    temp_5_277 = sp18 - ((s64) (((s64) arg1->unk18 - temp_22_110) << 0x1D) >> 0x20);
    if (temp_5_277 == 0) {
        goto block_32;
    }
    _sysbitJump(arg1, temp_5_277);
block_32:
    temp_16_288 = arg2->unk8 - sp18;
    var_5_289 = temp_16_288 - 3;
    arg2->unk24 = var_5_289;
    arg2->unk20 = (s32) arg1->unk18;
    if (arg2->unk0 != (0xBD00 << 0x18)) {
        goto block_34;
    }
    var_5_289 = temp_16_288 - 7;
    arg2->unk0 = (s64) (arg2->unk0 | ((u64) (_sysbitGet(arg1, 0x20U) << 0x20) >> 0x20));
block_34:
    var_2_237 = 1;
    if (var_5_289 == 0) {
        goto block_52;
    }
    _sysbitJump(arg1, var_5_289);
    goto block_51;
block_36:
    if (temp_4_40 == (0xBC00 << 0x18)) {
        goto block_43;
    }
    var_2_316 = 0xBF00 << 0x18;
    if (temp_4_40 == var_2_316) {
        goto block_44;
    }
    if (temp_4_40 == (0xF000 << 0x18)) {
        goto block_43;
    }
    if (temp_4_40 == (0xF100 << 0x18)) {
        goto block_43;
    }
    if (temp_4_40 == (0xFF00 << 0x18)) {
        goto block_43;
    }
    if (temp_4_40 == (0xF200 << 0x18)) {
        goto block_43;
    }
    if (temp_4_40 != (0xF800 << 0x18)) {
        goto block_48;
    }
block_43:
    var_2_316 = 0xBF00 << 0x18;
block_44:
    var_16_344 = arg2->unk8;
    if (temp_4_40 != var_2_316) {
        goto block_46;
    }
    var_16_344 -= 4;
    arg2->unk0 = (s64) (arg2->unk0 | ((u64) (_sysbitGet(arg1, 0x20U) << 0x20) >> 0x20));
block_46:
    var_2_237 = 1;
    if (var_16_344 == 0) {
        goto block_52;
    }
    _sysbitJump(arg1, var_16_344);
    goto block_51;
block_48:
    var_2_237 = 1;
    if (temp_4_40 != (0xBE00 << 0x18)) {
        goto block_52;
    }
    temp_5_367 = arg2->unk8;
    if (temp_5_367 == 0) {
        goto block_53;
    }
    _sysbitJump(arg1, temp_5_367);
block_51:
    var_2_237 = 1;
block_52:
block_53:
    return var_2_237;
}
#endif /* NON_MATCHING */
