/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 59.1659%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001eb0a8/FUN_001eb0a8.s", FUN_001eb0a8);
#else
#include "rnc/assembly_textbin_fun_001eb0a8_types.h"
#include "types.h"




extern s32 D_0013CAE4;
extern s32 D_0015EF50;
extern s32 D_0015EF54;
extern s32 D_0015EF58;
extern s32 D_0015F43C[];
extern s32 D_0015F604;
extern struct M2c_D_0018CB20 D_0018CB20;
extern s32 InitializeTransferCommand();
extern s32 func_001E9410();
extern s32 func_001E9428();
extern s32 func_001E9430();
extern s32 func_001EAF88();
extern s32 func_001F96F8();
extern s32 func_001F9A10();
extern s32 func_001F9A68();
extern s32 func_001F9DC8();
extern f32 func_001FA6C0();
extern s32 func_001FCE28();
extern s32 func_002049F0();
extern s32 func_0020C880();
extern s32 func_0020DEF8();
extern s32 func_002192A8();
extern s32 func_0022CA50();
void FUN_001eb0a8(void) {
u8 sp_slot[0xA0];    s32 sp10;
    f32 temp_f0_21;
    f32 temp_f0_76;
    s32 temp_16_81;
    s32 temp_2_130;
    s32 temp_2_204;
    s32 temp_2_67;
    s32 temp_3_196;
    s32 temp_3_24;
    s32 temp_4_25;
    s32 temp_4_48;
    s32 var_18_53;
    void **var_21_62;
    struct M2c_temp_17_66 *temp_17_66;

    func_001E9430();
    temp_f0_21 = D_0015F43C[0] - 0.0625f;
    temp_3_24 = D_0018CB20.unk38 + 1;
    temp_4_25 = D_0018CB20.unk34 + 1;
    D_0018CB20.unk38 = temp_3_24;
    D_0018CB20.unk34 = temp_4_25;
    D_0015F43C[0] = temp_f0_21;
    if (!(temp_f0_21 < 0.0f)) {
        goto block_2;
    }
    D_0015F43C[0] = 0.0f;
block_2:
    if (temp_4_25 < D_0018CB20.unk40) {
        goto block_4;
    }
    D_0018CB20.unk3C = 0;
    D_0018CB20.unk34 = 0;
    func_002049F0(0, &D_0018CB20);
    goto block_6;
block_4:
    if (temp_3_24 < 0x60) {
        goto block_6;
    }
    temp_4_48 = D_0018CB20.unk3C + 1;
    D_0018CB20.unk3C = temp_4_48;
    func_002049F0(temp_4_48, &D_0018CB20);
block_6:
    var_18_53 = 0;
    func_001EAF88();
    if (D_0018CB20.unk44 <= 0) {
        goto block_11;
    }
    var_21_62 = ((u8 *)&D_0018CB20 + 0x178);
loop_8:
    temp_17_66 = *var_21_62;
    temp_2_67 = (s32) D_0018CB20.unk38 >> 1;
    temp_17_66->unk50 = (u8) temp_2_67;
    temp_17_66->unk51 = (u8) (temp_2_67 + 1);
    func_0020C880(temp_17_66);
    temp_f0_76 = func_001FA6C0(D_0018CB20.unk38 & 1) * 0.5f;
    temp_16_81 = temp_17_66->unk78;
    temp_17_66->unk54 = temp_f0_76;
    func_001F9A68(sp_slot, temp_16_81 + (temp_17_66->unk50 * 0x10), 1.0f - temp_f0_76);
    func_001F9A68(&sp10, temp_16_81 + (temp_17_66->unk51 * 0x10), temp_17_66->unk54);
    func_001F9A10(((u8 *)temp_17_66 + (0x10)), sp_slot, &sp10);
    temp_17_66->unk71 = 0xFF;
    func_0020DEF8(temp_17_66);
    temp_17_66->unk7F = 0;
    if (temp_17_66->unkA6 != 0) {
        goto block_10;
    }
    func_001E9410(temp_17_66);
block_10:
    var_18_53 += 1;
    var_21_62 += 4;
    if (var_18_53 < D_0018CB20.unk44) {
        goto loop_8;
    }
block_11:
    func_001E9428();
    if (D_0015F604 != 0) {
        goto block_19;
    }
    D_0015EF58 += 1;
    if (func_001F96F8(0x3C) >= D_0015EF58) {
        goto block_15;
    }
    temp_2_130 = D_0015EF50 + 1;
    D_0015EF50 = temp_2_130;
    if (temp_2_130 < 0x41) {
        goto block_15;
    }
    D_0015EF50 = 0x40;
block_15:
    if (func_001F96F8(0x78) >= D_0015EF58) {
        goto block_17;
    }
    func_001F9DC8(0x3C, ((f32) ((s32) (D_0015EF58 - func_001F96F8(0x78)) % 60) * 0.10471976f) + -3.1415927f);
    D_0015EF54 = 0x42000060;
block_17:
    if (!(D_0013CAE4 & 0x840)) {
        goto block_25;
    }
    InitializeTransferCommand();
    goto block_25;
block_19:
    if (D_0015F604 != 3) {
        goto block_26;
    }
    D_0015EF58 = func_001F96F8(0x3C);
    temp_3_196 = D_0015EF50 - 0x10;
    D_0015EF50 = temp_3_196;
    if (temp_3_196 >= 0) {
        goto block_22;
    }
    D_0015EF50 = 0;
block_22:
    temp_2_204 = D_0015EF54 - 0x10;
    D_0015EF54 = temp_2_204;
    if (temp_2_204 >= 0) {
        goto block_24;
    }
    D_0015EF54 = 0;
block_24:
    func_002192A8();
block_25:
    func_0022CA50();
    goto block_28;
block_26:
    if (D_0015F604 != 4) {
        goto block_29;
    }
    func_001FCE28();
    func_0022CA50();
block_28:
block_29:
    return;
}
#endif /* NON_MATCHING */
