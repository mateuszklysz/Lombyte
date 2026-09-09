/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 24.3756%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00200600/FUN_00200600.s", FUN_00200600);
#else
#include "rnc/assembly_textbin_fun_00200600_types.h"
#include "types.h"










extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00160F00 *D_00160F00;
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern s32 func_001F9A10();
extern s32 func_001F9A28();
extern s32 func_001F9DC8();
extern s32 func_001F9DE0();
extern void sp10();
extern void sp20();
extern void sp30();
extern void sp40();
extern void sp50();
extern void sp60();
void FUN_00200600(u32 arg0, u32 arg1, s64 arg2, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4) {    s32 sp34;
u8 sp_slot[0x100];    s32 sp44;
    s32 sp54;
    s32 sp64;
    f32 sp10;
    f32 sp14;
    f32 sp20;
    f32 sp24;
    f32 sp30;
    f32 sp40;
    f32 sp50;
    f32 sp60;
    s64 temp_19_89;
    s64 temp_20_108;
    struct M2c_temp_3_115 *temp_3_115;
    struct M2c_temp_6_116 *temp_6_116;

    sp20 = fparg0;
    sp24 = fparg1;
    sp10 = -fparg2 * func_001F9DC8(fparg4, fparg3 * func_001F9DC8(fparg4, fparg3 * func_001F9DE0(fparg4)));
    sp14 = fparg2 * func_001F9DE0(fparg4);
    func_001F9A10(&sp30, &sp20, sp_slot);
    func_001F9A28(&sp30, &sp30, &sp10);
    func_001F9A10(&sp40, &sp20, sp_slot);
    func_001F9A10(&sp40, &sp40, &sp10);
    func_001F9A28(&sp50, &sp20, sp_slot);
    func_001F9A28(&sp50, &sp50, &sp10);
    func_001F9A28(&sp60, &sp20, sp_slot);
    func_001F9A10(&sp60, &sp60, &sp10);
    D_00160F00->unk0 = 0x10000007;
    temp_19_89 = arg0 * 0x10;
    D_00160F00->unk4 = 0;
    temp_20_108 = arg1 << 0x14;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = 0x50000007;
    temp_3_115 = D_00160F00;
    temp_6_116 = ((u8 *)temp_3_115 + (0x10));
    D_00160F00 = temp_6_116;
    temp_3_115->unk10 = (s64) ((0xB400 << 0x30) | 0x8001);
    temp_6_116->unk10 = arg2;
    temp_6_116->unk28 = temp_19_89;
    temp_6_116->unk8 = (s64) ((((0xA6A6 << 0x10) | 0xA6A6) << 0xB) | 0x106);
    temp_6_116->unk18 = 0x154;
    temp_6_116->unk20 = (s64) ((0x807F << 0x10) | 0x7F7F);
    temp_6_116->unk38 = (s64) (temp_20_108 + temp_19_89);
    temp_6_116->unk30 = (s64) (((sp34 + D_0013E500.unk10) - 8) | (((0 /*  Read from unset register $f2  */ + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_6_116->unk48 = 0;
    temp_6_116->unk40 = (s64) (((sp44 + D_0013E500.unk10) - 8) | (((0 /*  Read from unset register $f2  */ + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_6_116->unk50 = (s64) (((sp54 + D_0013E500.unk10) - 8) | (((0 /*  Read from unset register $f2  */ + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    temp_6_116->unk58 = temp_20_108;
    temp_6_116->unk68 = 0;
    temp_6_116->unk60 = (s64) (((sp64 + D_0013E500.unk10) - 8) | (((0 /*  Read from unset register $f2  */ + D_0013E500.unk14) - 8) << 0x10) | ((s64) D_0019A3E8.unkC << 0x20));
    D_00160F00 += 0x70;
}
#endif /* NON_MATCHING */
