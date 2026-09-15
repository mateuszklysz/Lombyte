/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 50.8709%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00230f60/FUN_00230f60.s", FUN_00230f60);
#else
#include "rnc/assembly_textbin_fun_00230f60_types.h"
#include "types.h"




















extern struct M2c_D_00137B80 D_00137B80;
extern s32 D_0013DD43;
extern struct M2c_D_0013E030 D_0013E030;
extern u8 D_001413D0[];
extern u8 D_0015ED5C[];
extern s32 D_0015ED84;
extern s32 D_0015ED88;
extern s32 D_0015EE74;
extern s32 D_0015EE78;
extern s32 D_0015EE8C;
extern s32 D_0015F43C;
extern s32 D_0015F440;
extern s32 D_0015F460;
extern s32 D_0015F618;
extern s32 D_0015FF00;
extern s32 D_0015FF08[];
extern struct M2c_D_0015FF18 *D_0015FF18;
extern s32 D_0015FF1C;
extern s32 D_0015FF20;
extern s32 D_0015FF28;
extern s32 D_0015FF30;
extern s32 D_001600AC;
extern s32 D_001600B0;
extern s32 D_001600B4;
extern s32 D_001600B8;
extern s32 D_001600BC;
extern s32 D_001604E0;
extern s32 D_001604F0;
extern s32 D_00160580;
extern s32 D_00160588;
extern s32 D_00160F0C;
extern u8 D_00186310[];
extern u8 D_00186350[];
extern struct M2c_D_0018CB20 D_0018CB20;
extern struct M2c_D_001940C0 D_001940C0;
extern u8 D_00194180[];
extern u8 D_0019BDC0[];
extern u8 D_0019C1C0[];
extern u8 D_0019C3C0[];
extern struct M2c_D_0019E6C0 D_0019E6C0;
extern u8 D_001B3AC0[];
extern u8 D_001B5980[];
extern u8 D_001B6180[];
extern u8 D_001B6880[];
extern u8 D_001CAAC0[];
extern u8 D_001CD780[];
extern u8 D_001D9740[];
extern u8 D_0022DD78[];
extern s32 FillTransferWords();
extern s32 FlushCache();
extern s32 func_0012DC80();
extern s32 func_0012E088();
extern s32 func_0012E1A8();
extern s32 func_001F2C60();
extern s32 func_001F2D98();
extern s32 func_001F37E8();
extern s32 func_001F4A58();
extern s32 func_001F96F8();
extern s32 func_001F97A0();
extern s32 func_001F9810();
extern s32 func_001F98D0();
extern s32 func_002015D8();
extern s32 func_00202270();
extern s32 func_002026C8();
extern s32 func_00202800();
extern s32 func_002028E0();
extern s32 func_00203120();
extern s32 func_00203640();
extern s32 func_002049F0();
extern s32 func_0020B618();
extern s32 func_00216728();
extern s32 func_002335D0();
extern s32 rand();
extern s32 sceCdSync();
extern s32 sceGsSyncV();
void FUN_00230f60(void) {    u64 sp0;
u8 sp_slot[0xC0];    s32 *temp_16_250;
    s32 *temp_18_138;
    struct M2c_var_16_142 *var_16_142;
    s32 *temp_7_370;
    s32 temp_16_221;
    s32 temp_16_224;
    s32 temp_23_90;
    s32 temp_2_150;
    s32 temp_2_180;
    s32 temp_2_246;
    s32 temp_2_314;
    s32 temp_3_137;
    s32 temp_3_149;
    s32 temp_5_363;
    s32 var_17_168;
    s32 var_19_17;
    s32 var_2_379;
    s32 var_8_377;
    void **var_17_143;
    void **var_6_365;
    s32 *temp_16_276;
    s32 *temp_17_216;
    struct M2c_temp_20_93 *temp_20_93;
    s32 *temp_21_123;
    s32 *temp_22_134;
    struct M2c_var_16_175 *var_16_175;
    struct M2c_var_5_374 *var_5_374;

    var_19_17 = 0;
    D_0013E030.unk24 = -1;
    D_0013E030.unk20 = 4;
    D_0015F43C = 1.0f;
    *(s32 *)D_001413D0 = 0;
    D_00160F0C = 0x100000;
    D_0015F618 = 0;
    D_0015F440 = 0;
    func_002015D8(4, D_001413D0, 0x100000);
    D_0015EE78 = D_0015EE8C;
    D_0015EE74 = D_0015EE8C;
    FillTransferWords(D_00194180, 0x87654321, 0x10);
    FillTransferWords(D_001B3AC0, -1, 0x800);
    FillTransferWords(D_001B6880, -1, 0xE00);
    FillTransferWords(D_001B6180, 0, 0xE0);
    func_001F2C60();
    func_001F2D98();
    func_002335D0();
    func_00216728(D_001940C0.unk14 + 0x400000, D_00137B80.unk13B8, D_00137B80.unk13BC);
    func_001F4A58(func_001F96F8(0xC));
    sceCdSync(0);
    FlushCache(0);
    temp_23_90 = func_0020B618(D_001940C0.unk14 + 0x400000, D_001940C0.unk14);
    FlushCache(0);
    temp_20_93 = D_001940C0.unk14;
    func_00203120(((__typeof__(temp_20_93))((u32)(temp_20_93) + (u32)(temp_20_93)))->unk0, temp_20_93->unk8, ((__typeof__(temp_20_93))((u32)(temp_20_93) + (u32)(temp_20_93)))->unkC);
    temp_21_123 = ((__typeof__(temp_20_93))((u32)(temp_20_93) + (u32)(temp_20_93)))->unk4;
    D_0019E6C0.unk0 = (s64) (((s32) (D_0015EE8C + temp_20_93->unk40) >> 8) | 0x1D308000 | (((s64) ((s32) (D_0015EE8C + temp_20_93->unk44) >> 8) << 0x25) | (0xB800 << 0x13)) | (-1 << 0x3F));
    D_0019E6C0.unk10 = (s64) ((((0x8000 << 0x14) | 0x8000) << 0x13) | 0x4000);
    temp_22_134 = temp_21_123 + temp_20_93->unk30;
    D_0019E6C0.unk8 = (s64) ((0xFFA0 << 0x20) | 0xE0);
    temp_3_137 = temp_20_93->unk18;
    temp_18_138 = ((__typeof__(temp_20_93))((u32)(temp_20_93) + (u32)(temp_20_93)))->unk1C;
    D_0015FF08[0] = temp_3_137;
    if (temp_3_137 > 0) {
        var_16_142 = temp_18_138;
        var_17_143 = D_001B5980;
        do {
            var_19_17 += 1;
            temp_3_149 = var_16_142->unk0;
            temp_2_150 = func_001F97A0(var_16_142->unk4) << 0x1C;
            var_16_142 += 0x10;
            *var_17_143 = temp_22_134 + temp_3_149 + temp_2_150;
            var_17_143 += 4;
        } while (var_19_17 < D_0015FF08[0]);
    }
    var_17_168 = 0;
    func_001F98D0(D_001CAAC0, temp_18_138, D_0015FF08[0] * 0x10);
    func_002028E0(temp_21_123 + temp_20_93->unk48);
    var_16_175 = ((__typeof__(temp_20_93))((u32)(temp_20_93) + (u32)(temp_20_93)))->unk14;
    D_0015FF00 = 0;
    if (temp_20_93->unk10 > 0) {
        do {
            temp_2_180 = var_16_175->unk0;
            var_17_168 += 1;
            func_00203640((temp_2_180 == 0) ? NULL : (temp_21_123 + temp_2_180), ((__typeof__(temp_20_93))((u32)(temp_20_93) + (u32)(temp_20_93)))->unk1C, ((u8 *)var_16_175 + (0x10)), var_16_175->unk4);
            var_16_175 += 0x20;
        } while (var_17_168 < temp_20_93->unk10);
    }
    D_0015F460 = temp_21_123 + temp_20_93->unk38;
    func_00202800(((__typeof__(temp_20_93))((u32)(temp_20_93) + (u32)(temp_20_93)))->unk2C, temp_20_93->unk28);
    func_002026C8(((__typeof__(temp_20_93))((u32)(temp_20_93) + (u32)(temp_20_93)))->unk3C, temp_21_123 + temp_20_93->unk34, ((__typeof__(temp_20_93))((u32)(temp_20_93) + (u32)(temp_20_93)))->unk24, temp_20_93->unk20);
    temp_17_216 = temp_21_123 + temp_20_93->unk4C;
    temp_16_221 = D_0015ED88 - 1;
    temp_16_224 = (temp_16_221 <= -1) ? 0 : temp_16_221;
    func_00202270(temp_17_216 + *(s32 *)((u8 *)((D_0015ED84 * 4) + temp_17_216) + 0x4), sp_slot);
    D_00160580 = sp0;
    func_00202270(temp_17_216 + *(s32 *)((u8 *)((((temp_16_224 * 0x13) + D_0015ED84) * 4) + temp_17_216) + 0x50), sp_slot);
    temp_2_246 = D_0015EE74 + 0x2000;
    D_0015EE78 = temp_2_246;
    temp_16_250 = D_001940C0.unk14 + temp_23_90;
    D_001940C0.unk18 = temp_16_250;
    D_0015EE74 = temp_2_246;
    D_00160588 = sp0;
    func_001F9810(D_0019C1C0, 0x100, sp0);
    func_001F9810(D_0019C3C0, 0x180);
    func_001F9810(D_0019BDC0, 0x400);
    func_001F98D0(D_0019BDC0, D_001D9740, 0x40);
    D_0015FF18 = temp_16_250;
    FillTransferWords(temp_16_250, 0, 0x4000);
    temp_16_276 = temp_16_250 + 0x4000;
    D_0015FF1C = D_0015FF18;
    D_0015FF18->unk20 = 0xFF;
    D_0015FF28 = temp_16_276;
    D_001600AC = temp_16_276 + 0x2000;
    D_001600B4 = -1;
    D_0015FF20 = D_0015FF18 + 0x3F00;
    D_001600B0 = 0;
    D_001600B8 = 0;
    func_001F9810(D_001CD780, 0x200);
    func_001F37E8();
    D_0015FF30 = 0x1F4;
    D_001600BC = 0x1F4000;
    temp_2_314 = (rand() >> 0x10) & 3;
    D_0013E030.unk5C = 0;
    D_0013E030.unk58 = temp_2_314;
    D_0013E030.unk50 = 0;
    D_0013E030.unk54 = 0;
    D_001604F0 = D_001604E0;
    if ((D_0015ED84 == 0) || ((D_0015ED84 == 1) && (D_0013DD43 == 0))) {
        D_0013E030.unk5C = 2;
        D_0013E030.unk58 = 4;
    }
    FillTransferWords(&D_0018CB20, 0, 0x1C0);
    FillTransferWords(D_00186310, 0, 0x40);
    FillTransferWords(D_00186350, 0, 0x40);
    temp_5_363 = D_00160F0C + 0xFFFA0000;
    var_6_365 = D_001940C0.unk8 + temp_5_363;
    D_0018CB20.unk5C = var_6_365;
    D_0018CB20.unk58 = (s32) (D_001940C0.unk4 + temp_5_363);
    temp_7_370 = ((u8 *)temp_20_93 + (0x50 ))+ (D_0013E030.unk58 * 4);
    D_00160F0C = temp_5_363;
    var_5_374 = temp_21_123 + *temp_7_370;
    var_8_377 = 0;
    if (var_5_374->unk4 != 0) {
        var_6_365 = ((u8 *)&D_0018CB20 + 0x60);
        var_2_379 = var_5_374->unk0;
loop_12:
        var_8_377 += 1;
        var_5_374 += 8;
        *var_6_365 = temp_21_123 + *temp_7_370 + (var_2_379 + 0x800);
        var_6_365 += 4;
        if (var_8_377 < 0x46) {
            if (var_5_374->unk4 != 0) {
                var_2_379 = var_5_374->unk0;
                goto loop_12;
            }
        }
    }
    func_002049F0(0, var_5_374, var_6_365, temp_7_370, var_8_377);
    *(s32 *)D_0015ED5C = 0xFFFFFFFF;
    func_0012E088(temp_21_123 + temp_20_93->unk64, D_0022DD78, (u64) ((s64) D_0015ED5C << 0x20) >> 0x20);
    do {
        FlushCache(0);
        sceGsSyncV(0);
        func_0012DC80();
    } while (*(s32 *)D_0015ED5C == 0xFFFFFFFF);
    func_0012E1A8();
}
#endif /* NON_MATCHING */
