/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 62.7447%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002389e0/FUN_002389e0.s", FUN_002389e0);
#else
#include "rnc/assembly_textbin_fun_002389e0_types.h"
#include "types.h"




extern struct M2c_D_0013D4C0 D_0013D4C0;
extern u8 D_001863D0[];
extern u8 D_001DFFB0[];
extern struct M2c_D_001E63C0 D_001E63C0;
extern s32 func_001F6250();
extern s32 func_001F65B0();
extern s32 func_001F69D0();
extern s32 func_001FB8F0();
extern s32 func_001FDD10();
extern s32 func_00200E08();
extern s32 func_0020D330();
extern s32 func_00238688();
void FUN_002389e0(void) {
u8 sp_slot[0x180];    s32 temp_2_234;
    s32 temp_2_89;
    s32 temp_6_34;
    s32 var_5_310;
    u16 var_5_165;
    s32 *temp_20_38;

    func_001FB8F0(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    func_0020D330(D_001E63C0.unk20 + 0x100, 1);
    func_0020D330(D_001E63C0.unk20, 1);
    temp_6_34 = D_001E63C0.unk58 * 0x14;
    temp_20_38 = ((u8 *)&D_001E63C0 + 0xD0);
    if (*(s32 *)((u8 *)(((u8 *)&D_001E63C0 + temp_6_34)) + 0xD4) == 1) {
        func_001F65B0(6, 8, (0x80F0 << 0x10) | 0xF0F0, func_001FDD10(*((*(temp_6_34 + temp_20_38) * 0x4C) + D_001863D0), 0x4C, temp_6_34), -1);
        func_001F65B0(0x18, 0x18, (0x80F0 << 0x10) | 0xF0F0, func_001FDD10(0x4F5D), -1);
        func_00238688(sp_slot, *(s32 *)((u8 *)((*((D_001E63C0.unk58 * 0x14) + temp_20_38) * 0x18) + D_001DFFB0) + 0x8));
        func_001F69D0(0x76, 0x65, (0x80F0 << 0x10) | 0xF0F0, sp_slot, -1);
        if (D_001E63C0.unk40 != 0) {
            temp_2_89 = func_001F6250(sp_slot, -1);
            func_00200E08(0x75 - temp_2_89, 0x6D, 0x7B, 0x70, 0x20959544, 0);
            func_00200E08(0x76 - temp_2_89, 0x6D, 0x7A, 0x70, 0x30959544, 0);
            func_00200E08(0x77 - temp_2_89, 0x6D, 0x79, 0x70, 0x40959544, 0);
            func_00200E08(0x78 - temp_2_89, 0x6D, 0x78, 0x70, 0x50959544, 0);
            func_00200E08(0x79 - temp_2_89, 0x6D, 0x77, 0x70, 0x60959544, 0);
            func_00200E08(0x7A - temp_2_89, 0x6D, 0x76, 0x70, 0x70959544, 0);
            func_00200E08(0x7B - temp_2_89, 0x6D, 0x75, 0x70, (0x8095 << 0x10) | 0x9544, 0);
            if (D_001E63C0.unk40 != 0) {
                var_5_165 = *(s32 *)((u8 *)((*((D_001E63C0.unk58 * 0x14) + temp_20_38) * 0x18) + D_001DFFB0) + 0xA);
            } else {
                var_5_165 = *(s32 *)((u8 *)((*((D_001E63C0.unk58 * 0x14) + temp_20_38) * 0x18) + D_001DFFB0) + 0x8);
            }
            func_00238688(sp_slot, var_5_165);
            func_001F69D0(0x76, 0x55, (0x80F0 << 0x10) | 0xF0F0, sp_slot, -1);
        }
    } else {
        func_001F65B0(6, 8, (0x80F0 << 0x10) | 0xF0F0, func_001FDD10(*((*(temp_6_34 + temp_20_38) * 0x4C) + D_001863D0), 0x4C, temp_6_34), -1);
        func_00238688(sp_slot, (u16) *((*((D_001E63C0.unk58 * 0x14) + temp_20_38) * 0x18) + D_001DFFB0));
        func_001F69D0(0x76, 0x65, (D_0013D4C0.unk23 == 0) ? ((0x80F0 << 0x10) | 0xF0F0) : ((0x8080 << 0x10) | 0x8080), sp_slot, -1);
        if (D_0013D4C0.unk23 != 0) {
            temp_2_234 = func_001F6250(sp_slot, -1);
            func_00200E08(0x75 - temp_2_234, 0x6D, 0x7B, 0x70, 0x20959544, 0);
            func_00200E08(0x76 - temp_2_234, 0x6D, 0x7A, 0x70, 0x30959544, 0);
            func_00200E08(0x77 - temp_2_234, 0x6D, 0x79, 0x70, 0x40959544, 0);
            func_00200E08(0x78 - temp_2_234, 0x6D, 0x78, 0x70, 0x50959544, 0);
            func_00200E08(0x79 - temp_2_234, 0x6D, 0x77, 0x70, 0x60959544, 0);
            func_00200E08(0x7A - temp_2_234, 0x6D, 0x76, 0x70, 0x70959544, 0);
            func_00200E08(0x7B - temp_2_234, 0x6D, 0x75, 0x70, (0x8095 << 0x10) | 0x9544, 0);
            if (D_0013D4C0.unk23 != 0) {
                var_5_310 = *(s32 *)((u8 *)((*((D_001E63C0.unk58 * 0x14) + temp_20_38) * 0x18) + D_001DFFB0) + 0x4);
            } else {
                var_5_310 = *((*((D_001E63C0.unk58 * 0x14) + temp_20_38) * 0x18) + D_001DFFB0);
            }
            func_00238688(sp_slot, (u16) var_5_310);
            func_001F69D0(0x76, 0x55, (0x80F0 << 0x10) | 0xF0F0, sp_slot, -1);
        }
    }
}
#endif /* NON_MATCHING */
