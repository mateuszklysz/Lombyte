/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 55.1007%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ec8a0/FUN_001ec8a0.s", FUN_001ec8a0);
#else
#include "rnc/assembly_textbin_fun_001ec8a0_types.h"
#include "types.h"










extern struct M2c_D_0013F350 D_0013F350;
extern struct M2c_D_001871B0 D_001871B0;
extern s32 func_001EC530();
extern s32 func_001EC710();
extern s32 func_001EC7F0();
extern s32 func_001EC868();
extern s32 func_001F96F8();
extern s32 func_001F9BF8();
extern s32 func_001FA6C0();
extern s32 func_002144D8();
void FUN_001ec8a0(struct M2c_arg0 *arg0) {
u8 sp_slot[0xB0];    s32 sp10;
    s32 sp20;
    s32 temp_2_137;
    s32 temp_2_139;
    struct M2c_temp_16_135 *temp_16_135;
    struct M2c_temp_3_117 *temp_3_117;

    if (D_001871B0.unk0 != 1) {
        goto block_6;
    }
    if (D_001871B0.unk3 != 0) {
        goto block_3;
    }
    D_001871B0.unk50 = (s64) arg0->unk30;
    func_002144D8(((u8 *)&D_001871B0) + 0x60, arg0);
    goto block_12;
block_3:
    if (D_001871B0.unk3 != 2) {
        goto block_5;
    }
    D_001871B0.unkC0 = (s64) arg0->unk30;
    func_002144D8(((u8 *)&D_001871B0) + 0xD0, arg0);
    func_001EC710();
    goto block_12;
block_5:
    func_001F9BF8(sp_slot, D_0013F350.unk2080 + 0xC0, 0x3F800000);
    func_001F9BF8(&sp10, D_0013F350.unk2080 + 0xD0, 0x3F800000);
    func_001F9BF8(&sp20, D_0013F350.unk2080 + 0xE0, 0x3F800000);
    func_001EC530(((u8 *)&D_001871B0) + 0x70, ((u8 *)arg0) + 0x30, *(s32 *)((u8 *)&D_001871B0 - 0xF0) + 0x30, sp_slot, &sp10, &sp20);
    func_002144D8(((u8 *)&D_001871B0) + 0xB0, arg0);
    D_001871B0.unkD0 = (s64) D_001871B0.unkB0;
    goto block_12;
block_6:
    if (D_001871B0.unk3 != 2) {
        goto block_8;
    }
    func_001EC7F0(1);
    func_001EC710();
    goto block_12;
block_8:
    if (D_001871B0.unk3 != 1) {
        goto block_10;
    }
    func_001EC7F0(1);
    D_001871B0.unkB0 = (s64) D_001871B0.unkD0;
    goto block_12;
block_10:
    if (D_001871B0.unk3 != 0) {
        goto block_12;
    }
    func_001EC868(1);
block_12:
    D_001871B0.unk0 = 3;
    D_001871B0.unk2 = (u8) D_001871B0.unk3;
    if (D_001871B0.unk3 != 0) {
        goto block_14;
    }
    temp_3_117 = ((u8 *)&D_001871B0) + 0x10;
    temp_3_117->unkC = 0;
    temp_3_117->unk10 = (f32) temp_3_117->unk14;
    D_001871B0.unk40 = (s64) D_001871B0.unk50;
    D_001871B0.unk10 = 0;
    temp_3_117->unk4 = (f32) temp_3_117->unk8;
    D_001871B0.unk30 = (s64) D_001871B0.unk60;
    return;
block_14:
    temp_16_135 = ((u8 *)&D_001871B0) + 0x70;
    temp_2_137 = temp_16_135->unk14 + 1;
    temp_16_135->unk14 = temp_2_137;
    temp_2_139 = func_001F96F8(temp_2_137, D_001871B0.unk3);
    temp_16_135->unkC = temp_2_139;
    temp_16_135->unk10 = (f32) (1.0f / func_001FA6C0(temp_2_139));
    return;
}

extern void func_001EC8A0(struct M2c_arg0 *arg0) __attribute__((alias("FUN_001ec8a0")));
#endif /* NON_MATCHING */
