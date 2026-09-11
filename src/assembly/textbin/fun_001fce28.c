/*
STATE: C_NON_MATCHING
SYMBOL: UpdateModeFreeze__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `UpdateModeFreeze__Fv` starts here. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 50.5197%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fce28/FUN_001fce28.s", FUN_001fce28);
#else
#include "rnc/assembly_textbin_fun_001fce28_types.h"
#include "types.h"
























extern struct M2c_D_0013C940 D_0013C940;
extern s32 D_0013CAE4;
extern s32 D_0013E05A;
extern struct M2c_D_0013F350 D_0013F350;
extern u8 D_00141050[];
extern s32 D_0015ED84;
extern s32 D_0015EE38;
extern s32 D_0015EE3C;
extern s32 D_0015EEB0;
extern s32 D_0015EEB4;
extern s32 D_0015F5E8;
extern s32 D_0015F604;
extern s32 D_0015F648;
extern s32 D_0016034C;
extern struct M2c_D_00193300 D_00193300;
extern s32 D_001D5BF8;
extern s32 func_0012DC80();
extern s32 func_0012E418();
extern s32 func_001E93E8();
extern s32 func_001E9440();
extern s32 func_001F4A58();
extern s32 func_001F96F8();
extern s32 func_001FF570();
extern s32 func_001FF768();
extern s32 func_00209370();
extern s32 func_0020B178();
extern s32 func_00216088();
extern s32 func_0022CA50();
extern s32 func_0022E188();
extern void jtbl_001E79A0();
extern void jtbl_001E79C0();
void FUN_001fce28(void) {
    s32 temp_2_108;
    s32 temp_2_110;
    s32 temp_2_136;
    s32 temp_2_138;
    s32 temp_2_225;
    s32 temp_2_263;
    s32 temp_2_343;
    s32 temp_3_212;
    s32 temp_3_227;
    s32 temp_3_234;
    s32 temp_3_91;
    s32 var_2_438;
    s32 var_2_537;
    s32 var_2_87;
    s32 var_3_458;
    s32 var_5_435;
    u32 temp_4_351;
    struct M2c_temp_16_333 *temp_16_333;
    struct M2c_temp_16_89 *temp_16_89;
    struct M2c_temp_2_440 *temp_2_440;
    struct M2c_temp_3_223 *temp_3_223;
    struct M2c_temp_4_210 *temp_4_210;
    struct M2c_temp_4_362 *temp_4_362;
    struct M2c_var_2_97 *var_2_97;

    func_0022CA50();
    if (D_00193300.unk4 != 0) {
        D_00193300.unk4 = (s32) (D_00193300.unk4 - 1);
    }
    switch (D_00193300.unk0) {                      /* switch 1 */
    case 5:                                         /* switch 1 */
        D_00193300.unk20 = (s32) (D_00193300.unk20 + 1);
        if ((func_001F96F8(0x5A) < D_00193300.unk20) && (D_00193300.unk24 != 0)) {
            D_00193300.unk24 = (s32) (D_00193300.unk24 - 1);
        }
        if ((func_001F96F8(0x78) < D_00193300.unk20) && (D_0013CAE4 & 0x40) && (D_0015F604 = 0, (D_0015ED84 == 1))) {
            func_0020B178(0, -1);
        } else {
        default:                                    /* switch 1 */
        }
        break;
    case 4:                                         /* switch 1 */
        if (D_0013CAE4 & 0x10) {
            D_0013F350.unk2080->unk31 = 0;
            D_0013F350.unk2080->unk94 = 0;
            D_0013F350.unk2080->unk34 = (u16) (D_0013F350.unk2080->unk34 | 1);
            func_001E93E8(*((D_00193300.unk0 * 4) + &jtbl_001E79A0));
            func_001E9440(((u8 *)&D_0013F350 + 0x1D00, &D_0013F350 + 0x1D10, 0, 1));
            D_0015F604 = 0;
        } else {
            var_2_87 = D_0013CAE4 & 0x40;
block_39:
            if (var_2_87 != 0) {
                D_0015F604 = 0;
            }
        }
        break;
    case 6:                                         /* switch 1 */
        temp_16_89 = ((u8 *)&D_00193300 + 0x3300);
        temp_3_91 = temp_16_89->unk1C;
        if (temp_3_91 != 1) {
            if (temp_3_91 < 2) {
                var_2_97 = ((u8 *)&D_00193300 + 0x3300);
                if (temp_3_91 != 0) {
                    goto block_128;
                }
                temp_2_108 = temp_16_89->unk4;
                temp_2_110 = temp_2_108 - 1;
                if ((temp_2_108 == 0) || (temp_16_89->unk4 = temp_2_110, (temp_2_110 == 0))) {
                    temp_16_89->unk1C = 1;
                }
            } else if (temp_3_91 != 2) {
                var_2_97 = ((u8 *)&D_00193300 + 0x3300);
                if (temp_3_91 != 3) {
block_128:
                    D_0015F604 = var_2_97->unk14;
                } else if (D_0013CAE4 & 0x40) {
                    goto block_35;
                }
            } else {
                temp_2_136 = temp_16_89->unk20;
                temp_2_138 = temp_2_136 - 1;
                if ((temp_2_136 == 0) || (temp_16_89->unk20 = temp_2_138, (temp_2_138 == 0))) {
                    D_0016034C = 1;
                    temp_16_89->unk1C = 3;
                } else if (D_0013CAE4 & 0x10) {
                    func_001F4A58(4);
                    D_0016034C = 1;
                    D_0015F604 = temp_16_89->unk14;
                } else if (D_0013CAE4 & 0x40) {
                    D_0016034C = 0;
                    D_0015F604 = temp_16_89->unk14;
                }
            }
        } else if (!(D_0013CAE4 & 0x10)) {
            if (D_0013CAE4 & 0x40) {
                func_001F4A58(4);
                D_0016034C = 0;
                temp_16_89->unk1C = 2;
                temp_16_89->unk20 = func_001F96F8(0x258);
            }
        } else {
block_35:
            D_0015F604 = temp_16_89->unk14;
        }
        break;
    case 1:                                         /* switch 1 */
        D_0015F648 = 2;
        if (D_0013CAE4 & 0x10) {
            D_0015F604 = 0;
            D_0013F350.unk160F = (u8) (D_0013F350.unk160F | 1);
        } else {
            var_2_87 = D_0013CAE4 & 0x40;
            goto block_39;
        }
        break;
    case 2:                                         /* switch 1 */
        D_0015F648 = 2;
        if (D_0013CAE4 & 0x40) {
            D_0015F604 = 0;
        }
        break;
    case 0:                                         /* switch 1 */
        temp_4_210 = ((u8 *)&D_00193300 + 0x3300);
        temp_3_212 = temp_4_210->unk1C;
        switch (temp_3_212) {                       /* switch 2; irregular */
        default:                                    /* switch 2 */
            temp_3_223 = ((u8 *)&D_00193300 + 0x3300);
            if (temp_3_212 < 4) {
                temp_2_225 = temp_3_223->unk24;
                if (temp_2_225 != 0) {
                    temp_3_223->unk24 = (s32) (temp_2_225 - 1);
                } else {
                    temp_2_263 = temp_3_223->unk20;
                    if (temp_2_263 != 0) {
                        temp_3_223->unk20 = (s32) (temp_2_263 - 1);
                    } else if (temp_3_223->unk1C == 2) {
                        if (D_0013F350.unk880 != -1) {
                            func_001FF570(D_0013F350.unk880, 0);
                            D_0013F350.unk880 = -1;
                        }
                        func_001FF768();
                        if (func_001F96F8(0x1068) < D_0013F350.unk19C) {
                            if (D_0015ED84 == 5) {
                                D_0015EE38 += 1;
                            } else if (D_0015ED84 == 0x10) {
                                D_0015EE3C += 1;
                            }
                        }
                        D_0015F604 = 0;
                        func_001E9440(D_00141050, D_00141050 + 0x10, 0, 1);
                    } else {
                        D_0015F604 = 0;
                        if (D_0013F350.unk89A >= 3) {
                            D_0013F350.unk89A = (s16) ((u16) D_0013F350.unk89A - 1);
                            D_0013F350.unk890->unkBC = 3;
                        }
                    }
                }
            }
            break;
        case 0:                                     /* switch 2 */
            temp_3_227 = temp_4_210->unk20;
            if (temp_3_227 < 8) {
                temp_4_210->unk20 = (s32) (temp_3_227 + 1);
            } else {
                temp_3_234 = temp_4_210->unk24;
                if (temp_3_234 < 8) {
                    temp_4_210->unk24 = (s32) (temp_3_234 + 1);
                } else {
                    temp_4_210->unk1C = 1;
                }
            }
            break;
        case 1:                                     /* switch 2 */
            if (D_0013CAE4 & 0x40) {
                temp_4_210->unk1C = 2;
            } else if (D_0013CAE4 & 0x820) {
                temp_4_210->unk1C = 3;
            }
            break;
        }
        break;
    case 3:                                         /* switch 1 */
        temp_16_333 = ((u8 *)&D_00193300 + 0x3300);
        temp_16_333->unk20 = (s32) (temp_16_333->unk20 + 1);
        if (func_001F96F8(0x1E) < temp_16_333->unk20) {
            temp_2_343 = temp_16_333->unk24;
            if (temp_2_343 != 0) {
                temp_16_333->unk24 = (s32) (temp_2_343 - 1);
            }
        }
        temp_4_351 = D_0015EEB0 - 2;
        if (temp_4_351 < 0x17U) {
            switch (D_0015EEB0) {                   /* switch 3 */
            case 2:                                 /* switch 3 */
                temp_4_362 = ((u8 *)&D_00193300 + 0x3300);
                if (temp_4_362->unk4 == 0) {
                    if (D_0013CAE4 & 0x40) {
                        D_0015EEB4 &= ~1;
                        D_0015F604 = temp_4_362->unk14;
                    }
                }
                break;
            case 6:                                 /* switch 3 */
                if (D_0013CAE4 & 0x20) {
                    D_0015EEB4 |= 8;
                } else if (D_0013CAE4 & 0x10) {
                    D_0015EEB4 = (D_0015EEB4 | 0x20) & ~2 & ~4;
                    if (D_0015F5E8 == 0) {
block_127:
                        var_2_97 = ((u8 *)&D_00193300 + 0x3300);
                        goto block_128;
                    }
                }
                break;
            case 13:                                /* switch 3 */
                if (D_0013CAE4 & 0x20) {
                    D_0015EEB4 |= 0x10;
                } else if (D_0013CAE4 & 0x10) {
                    D_0015EEB4 = (D_0015EEB4 | 0x20) & ~2 & ~4;
                    if (D_0015F5E8 == 0) {
                        goto block_127;
                    }
                }
                break;
            case 17:                                /* switch 3 */
            case 18:                                /* switch 3 */
            case 20:                                /* switch 3 */
            case 21:                                /* switch 3 */
                if (D_0013CAE4 & 0x40) {
                    var_5_435 = *(s32 *)((u8 *)(((u8 *)&D_00193300 + 0x3300)) + 0x14);
                    var_2_438 = D_0015EEB4 ^ 0x40;
block_124:
                    D_0015F604 = var_5_435;
                    D_0015EEB4 = var_2_438 & ~2 & ~4;
                }
                break;
            case 16:                                /* switch 3 */
                temp_2_440 = ((u8 *)&D_00193300 + 0x3300);
                D_001D5BF8 = temp_2_440->unk18;
                D_0015F604 = temp_2_440->unk14;
                break;
            case 12:                                /* switch 3 */
                if (!(D_0015EEB4 & 2)) {
                case 3:                             /* switch 3 */
                case 5:                             /* switch 3 */
                    var_3_458 = D_0015EEB4;
                    if (D_0013CAE4 & 0x10) {
block_120:
                        D_0015F604 = *(s32 *)((u8 *)(((u8 *)&D_00193300 + 0x3300)) + 0x14);
                        D_0015EEB4 = var_3_458 & ~2 & ~4;
                    }
                }
                break;
            case 19:                                /* switch 3 */
                if ((D_0015F5E8 != 0) && (D_0015EEB4 & 2)) {
                    if (!(D_0013CAE4 & 0x40)) {
                        if (D_0013CAE4 & 0x10) {
                            D_0015EEB4 = D_0015EEB4 & ~2 & ~4;
                            D_0015F604 = *(s32 *)((u8 *)(((u8 *)&D_00193300 + 0x3300)) + 0x14);
                        }
                    } else {
block_109:
                        func_00209370(*((temp_4_351 * 4) + &jtbl_001E79C0));
                        D_0015EEB4 = (D_0015EEB4 & ~2 & ~4) | 0x20;
                        func_0022E188(0, -5);
                        D_0013E05A = 1;
                    }
                } else {
                    var_3_458 = D_0015EEB4;
                    if (D_0013CAE4 & 0x10) {
                        goto block_120;
                    }
                }
                break;
            case 23:                                /* switch 3 */
            case 24:                                /* switch 3 */
                if (D_0013CAE4 & 0x40) {
                    goto block_109;
                }
                if (D_0013CAE4 & 0x10) {
                    D_0015EEB4 |= 0x20;
                    D_0015F604 = *(s32 *)((u8 *)(((u8 *)&D_00193300 + 0x3300)) + 0x14);
                }
                break;
            case 4:                                 /* switch 3 */
                if (D_0015F5E8 != 0) {
                    if (D_0015EEB4 & 2) {
                        if (!(D_0013C940.unk1A4 & 0x40)) {
                            var_2_537 = D_0013C940.unk1A4;
                        } else {
                            func_00209370(D_0015EEB4);
                            D_0015EEB4 = D_0015EEB4 & ~2 & ~4;
                            func_0022E188(0, -5);
                            D_0013E05A = 1;
                            var_2_537 = D_0013C940.unk1A4;
                        }
                        goto block_122;
                    }
                    if (D_0015EEB4 & 4) {
                        var_3_458 = D_0015EEB4 | 0x20;
                        if (D_0013CAE4 & 0x10) {
                            goto block_120;
                        }
                    } else {
                        goto block_127;
                    }
                } else {
                    var_2_537 = D_0013CAE4;
block_122:
                    if (var_2_537 & 0x10) {
                        var_5_435 = *(s32 *)((u8 *)(((u8 *)&D_00193300 + 0x3300)) + 0x14);
                        var_2_438 = D_0015EEB4 | 0x20;
                        goto block_124;
                    }
                }
                break;
            case 9:                                 /* switch 3 */
                if (D_0015F5E8 != 0) {
                    if (!(D_0015EEB4 & 6)) {
                        goto block_127;
                    }
                }
                break;
            }
        }
        break;
    }
    if ((u32) (D_0015F604 - 3) >= 2U) {
        func_0012E418(0x1D);
        func_00216088();
        func_0012DC80();
    }
}
#endif /* NON_MATCHING */
