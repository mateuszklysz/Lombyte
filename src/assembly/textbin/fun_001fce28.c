/*
STATE: C_NON_MATCHING
SYMBOL: UpdateModeFreeze__Fv
SCORE: code=54.066307 functions=54.066307 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fce28/FUN_001fce28.s", FUN_001fce28);
#else
#include "rnc/assembly_textbin_fun_001fce28_types.h"
#include "types.h"
























extern struct M2c_D_0013C940 D_0013C940;
extern s32 D_0013CAE4[];
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
extern s32 InitializeGlobalStateEntry();
extern s32 UpdateRenderStateCommand();
extern s32 UpdateResourceCounter();
extern s32 func_0012DC80();
extern s32 func_0012E418();
extern s32 func_001E93E8();
extern s32 func_001E9440();
extern s32 func_001F4A58();
extern s32 func_001F96F8();
extern s32 func_001FF570();
extern s32 func_00209370();
extern s32 func_0020B178();
extern s32 func_0022CA50();
extern void jtbl_001E79A0();
extern void jtbl_001E79C0();
void FUN_001fce28(void) {
    s32 temp_2_106;
    s32 temp_2_108;
    s32 temp_2_134;
    s32 temp_2_136;
    s32 temp_2_223;
    s32 temp_2_261;
    s32 temp_2_341;
    s32 temp_3_210;
    s32 temp_3_225;
    s32 temp_3_232;
    s32 temp_3_89;
    s32 var_2_436;
    s32 var_2_535;
    s32 var_2_85;
    s32 var_3_456;
    s32 var_5_433;
    u32 temp_4_349;
    struct M2c_temp_16_331 *temp_16_331;
    struct M2c_temp_16_87 *temp_16_87;
    struct M2c_temp_2_438 *temp_2_438;
    struct M2c_temp_3_221 *temp_3_221;
    struct M2c_temp_4_208 *temp_4_208;
    struct M2c_temp_4_360 *temp_4_360;
    struct M2c_var_2_95 *var_2_95;

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
        if ((func_001F96F8(0x78) < D_00193300.unk20) && (D_0013CAE4[0] & 0x40) && (D_0015F604 = 0, (D_0015ED84 == 1))) {
            func_0020B178(0, -1);
        } else {
        default:                                    /* switch 1 */
        }
        break;
    case 4:                                         /* switch 1 */
        if (D_0013CAE4[0] & 0x10) {
            D_0013F350.unk2080->unk31 = 0;
            D_0013F350.unk2080->unk94 = 0;
            D_0013F350.unk2080->unk34 = (u16) (D_0013F350.unk2080->unk34 | 1);
            func_001E93E8(*((D_00193300.unk0 * 4) + &jtbl_001E79A0));
            func_001E9440(((u8 *)&D_0013F350 + 0x1D00, &D_0013F350 + 0x1D10, 0, 1));
            D_0015F604 = 0;
        } else {
            var_2_85 = D_0013CAE4[0] & 0x40;
block_39:
            if (var_2_85 != 0) {
                D_0015F604 = 0;
            }
        }
        break;
    case 6:                                         /* switch 1 */
        temp_16_87 = ((u8 *)&D_00193300 + 0x3300);
        temp_3_89 = temp_16_87->unk1C;
        if (temp_3_89 != 1) {
            if (temp_3_89 < 2) {
                var_2_95 = ((u8 *)&D_00193300 + 0x3300);
                if (temp_3_89 != 0) {
                    goto block_128;
                }
                temp_2_106 = temp_16_87->unk4;
                temp_2_108 = temp_2_106 - 1;
                if ((temp_2_106 == 0) || (temp_16_87->unk4 = temp_2_108, (temp_2_108 == 0))) {
                    temp_16_87->unk1C = 1;
                }
            } else if (temp_3_89 != 2) {
                var_2_95 = ((u8 *)&D_00193300 + 0x3300);
                if (temp_3_89 != 3) {
block_128:
                    D_0015F604 = var_2_95->unk14;
                } else if (D_0013CAE4[0] & 0x40) {
                    goto block_35;
                }
            } else {
                temp_2_134 = temp_16_87->unk20;
                temp_2_136 = temp_2_134 - 1;
                if ((temp_2_134 == 0) || (temp_16_87->unk20 = temp_2_136, (temp_2_136 == 0))) {
                    D_0016034C = 1;
                    temp_16_87->unk1C = 3;
                } else if (D_0013CAE4[0] & 0x10) {
                    func_001F4A58(4);
                    D_0016034C = 1;
                    D_0015F604 = temp_16_87->unk14;
                } else if (D_0013CAE4[0] & 0x40) {
                    D_0016034C = 0;
                    D_0015F604 = temp_16_87->unk14;
                }
            }
        } else if (!(D_0013CAE4[0] & 0x10)) {
            if (D_0013CAE4[0] & 0x40) {
                func_001F4A58(4);
                D_0016034C = 0;
                temp_16_87->unk1C = 2;
                temp_16_87->unk20 = func_001F96F8(0x258);
            }
        } else {
block_35:
            D_0015F604 = temp_16_87->unk14;
        }
        break;
    case 1:                                         /* switch 1 */
        D_0015F648 = 2;
        if (D_0013CAE4[0] & 0x10) {
            D_0015F604 = 0;
            D_0013F350.unk160F = (u8) (D_0013F350.unk160F | 1);
        } else {
            var_2_85 = D_0013CAE4[0] & 0x40;
            goto block_39;
        }
        break;
    case 2:                                         /* switch 1 */
        D_0015F648 = 2;
        if (D_0013CAE4[0] & 0x40) {
            D_0015F604 = 0;
        }
        break;
    case 0:                                         /* switch 1 */
        temp_4_208 = ((u8 *)&D_00193300 + 0x3300);
        temp_3_210 = temp_4_208->unk1C;
        switch (temp_3_210) {                       /* switch 2; irregular */
        default:                                    /* switch 2 */
            temp_3_221 = ((u8 *)&D_00193300 + 0x3300);
            if (temp_3_210 < 4) {
                temp_2_223 = temp_3_221->unk24;
                if (temp_2_223 != 0) {
                    temp_3_221->unk24 = (s32) (temp_2_223 - 1);
                } else {
                    temp_2_261 = temp_3_221->unk20;
                    if (temp_2_261 != 0) {
                        temp_3_221->unk20 = (s32) (temp_2_261 - 1);
                    } else if (temp_3_221->unk1C == 2) {
                        if (D_0013F350.unk880 != -1) {
                            func_001FF570(D_0013F350.unk880, 0);
                            D_0013F350.unk880 = -1;
                        }
                        UpdateResourceCounter();
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
            temp_3_225 = temp_4_208->unk20;
            if (temp_3_225 < 8) {
                temp_4_208->unk20 = (s32) (temp_3_225 + 1);
            } else {
                temp_3_232 = temp_4_208->unk24;
                if (temp_3_232 < 8) {
                    temp_4_208->unk24 = (s32) (temp_3_232 + 1);
                } else {
                    temp_4_208->unk1C = 1;
                }
            }
            break;
        case 1:                                     /* switch 2 */
            if (D_0013CAE4[0] & 0x40) {
                temp_4_208->unk1C = 2;
            } else if (D_0013CAE4[0] & 0x820) {
                temp_4_208->unk1C = 3;
            }
            break;
        }
        break;
    case 3:                                         /* switch 1 */
        temp_16_331 = ((u8 *)&D_00193300 + 0x3300);
        temp_16_331->unk20 = (s32) (temp_16_331->unk20 + 1);
        if (func_001F96F8(0x1E) < temp_16_331->unk20) {
            temp_2_341 = temp_16_331->unk24;
            if (temp_2_341 != 0) {
                temp_16_331->unk24 = (s32) (temp_2_341 - 1);
            }
        }
        temp_4_349 = D_0015EEB0 - 2;
        if (temp_4_349 < 0x17U) {
            switch (D_0015EEB0) {                   /* switch 3 */
            case 2:                                 /* switch 3 */
                temp_4_360 = ((u8 *)&D_00193300 + 0x3300);
                if (temp_4_360->unk4 == 0) {
                    if (D_0013CAE4[0] & 0x40) {
                        D_0015EEB4 &= ~1;
                        D_0015F604 = temp_4_360->unk14;
                    }
                }
                break;
            case 6:                                 /* switch 3 */
                if (D_0013CAE4[0] & 0x20) {
                    D_0015EEB4 |= 8;
                } else if (D_0013CAE4[0] & 0x10) {
                    D_0015EEB4 = (D_0015EEB4 | 0x20) & ~2 & ~4;
                    if (D_0015F5E8 == 0) {
block_127:
                        var_2_95 = ((u8 *)&D_00193300 + 0x3300);
                        goto block_128;
                    }
                }
                break;
            case 13:                                /* switch 3 */
                if (D_0013CAE4[0] & 0x20) {
                    D_0015EEB4 |= 0x10;
                } else if (D_0013CAE4[0] & 0x10) {
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
                if (D_0013CAE4[0] & 0x40) {
                    var_5_433 = *(s32 *)((u8 *)(((u8 *)&D_00193300 + 0x3300)) + 0x14);
                    var_2_436 = D_0015EEB4 ^ 0x40;
block_124:
                    D_0015F604 = var_5_433;
                    D_0015EEB4 = var_2_436 & ~2 & ~4;
                }
                break;
            case 16:                                /* switch 3 */
                temp_2_438 = ((u8 *)&D_00193300 + 0x3300);
                D_001D5BF8 = temp_2_438->unk18;
                D_0015F604 = temp_2_438->unk14;
                break;
            case 12:                                /* switch 3 */
                if (!(D_0015EEB4 & 2)) {
                case 3:                             /* switch 3 */
                case 5:                             /* switch 3 */
                    var_3_456 = D_0015EEB4;
                    if (D_0013CAE4[0] & 0x10) {
block_120:
                        D_0015F604 = *(s32 *)((u8 *)(((u8 *)&D_00193300 + 0x3300)) + 0x14);
                        D_0015EEB4 = var_3_456 & ~2 & ~4;
                    }
                }
                break;
            case 19:                                /* switch 3 */
                if ((D_0015F5E8 != 0) && (D_0015EEB4 & 2)) {
                    if (!(D_0013CAE4[0] & 0x40)) {
                        if (D_0013CAE4[0] & 0x10) {
                            D_0015EEB4 = D_0015EEB4 & ~2 & ~4;
                            D_0015F604 = *(s32 *)((u8 *)(((u8 *)&D_00193300 + 0x3300)) + 0x14);
                        }
                    } else {
block_109:
                        func_00209370(*((temp_4_349 * 4) + &jtbl_001E79C0));
                        D_0015EEB4 = (D_0015EEB4 & ~2 & ~4) | 0x20;
                        InitializeGlobalStateEntry(0, -5);
                        D_0013E05A = 1;
                    }
                } else {
                    var_3_456 = D_0015EEB4;
                    if (D_0013CAE4[0] & 0x10) {
                        goto block_120;
                    }
                }
                break;
            case 23:                                /* switch 3 */
            case 24:                                /* switch 3 */
                if (D_0013CAE4[0] & 0x40) {
                    goto block_109;
                }
                if (D_0013CAE4[0] & 0x10) {
                    D_0015EEB4 |= 0x20;
                    D_0015F604 = *(s32 *)((u8 *)(((u8 *)&D_00193300 + 0x3300)) + 0x14);
                }
                break;
            case 4:                                 /* switch 3 */
                if (D_0015F5E8 != 0) {
                    if (D_0015EEB4 & 2) {
                        if (!(D_0013C940.unk1A4 & 0x40)) {
                            var_2_535 = D_0013C940.unk1A4;
                        } else {
                            func_00209370(D_0015EEB4);
                            D_0015EEB4 = D_0015EEB4 & ~2 & ~4;
                            InitializeGlobalStateEntry(0, -5);
                            D_0013E05A = 1;
                            var_2_535 = D_0013C940.unk1A4;
                        }
                        goto block_122;
                    }
                    if (D_0015EEB4 & 4) {
                        var_3_456 = D_0015EEB4 | 0x20;
                        if (D_0013CAE4[0] & 0x10) {
                            goto block_120;
                        }
                    } else {
                        goto block_127;
                    }
                } else {
                    var_2_535 = D_0013CAE4[0];
block_122:
                    if (var_2_535 & 0x10) {
                        var_5_433 = *(s32 *)((u8 *)(((u8 *)&D_00193300 + 0x3300)) + 0x14);
                        var_2_436 = D_0015EEB4 | 0x20;
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
        UpdateRenderStateCommand();
        func_0012DC80();
    }
}
#endif /* NON_MATCHING */
