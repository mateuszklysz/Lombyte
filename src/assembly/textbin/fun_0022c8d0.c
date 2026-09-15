/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 66.4842%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022c8d0/FUN_0022c8d0.s", FUN_0022c8d0);
#else
#include "rnc/assembly_textbin_fun_0022c8d0_types.h"
#include "types.h"




extern struct M2c_D_0013E550 D_0013E550;
extern s32 D_0015EDE8[];
extern s32 D_0015EDEC;
extern s32 D_0015EDF0;
extern s32 func_0012DA28();
extern s32 func_0012E208();
extern s32 func_0012E240();
extern s32 func_0012E280();
extern s32 func_0012E2B8();
extern s32 func_0012EFA8();
extern s32 func_00215390();
void FUN_0022c8d0(void) {
    s64 *temp_4_21;
    s64 *var_2_8;
    struct M2c_var_3_18 *var_3_18;
    s32 temp_lo_66;
    s32 temp_lo_71;
    s32 var_3_4;

    var_3_4 = 3;
    var_2_8 = &D_0013E550;
    do {
        *var_2_8 = 0;
        var_3_4 -= 1;
        var_2_8 += 2;
    } while (var_3_4 >= 0);
    var_3_18 = &D_0013E550;
    D_0013E550.unk40 = 0;
    D_0013E550.unk44 = 0;
    temp_4_21 = ((u8 *)&D_0013E550 + 0xD20);
    D_0013E550.unk70 = 0;
loop_3:
    var_3_18->unk74 = 0;
    var_3_18 += 0x70;
    if ((s32) var_3_18 < (s32) temp_4_21) {
        var_3_18->unk70 = 0;
        goto loop_3;
    }
    func_0012DA28(temp_4_21);
    func_0012E240(D_0015EDE8[0] == 0);
    func_0012E280(0, 1);
    func_0012EFA8(2, 4);
    func_0012E2B8(1, 0x18, 0x2F);
    func_0012E2B8(2, 0x18, 0x2F);
    func_0012E2B8(4, 0x18, 0x2F);
    temp_lo_66 = (s32) (D_0015EDF0 * 8) / 10;
    D_0013E550.unk4C = (s32) D_0015EDEC;
    temp_lo_71 = (s32) (D_0015EDF0 * 7) / 10;
    D_0013E550.unk48 = temp_lo_66;
    D_0013E550.unk50 = temp_lo_66;
    D_0013E550.unk54 = temp_lo_71;
    D_0013E550.unk58 = temp_lo_71;
    D_0013E550.unk5C = (s32) D_0015EDF0;
    func_00215390(0xA, D_0015EDF0, temp_lo_66, 0xA);
    func_0012E208(0, D_0013E550.unk48);
    func_0012E208(1, D_0013E550.unk4C);
    func_0012E208(2, D_0013E550.unk50);
    func_0012E208(3, D_0013E550.unk54);
    func_0012E208(4, D_0013E550.unk58);
    func_0012E208(5, D_0013E550.unk5C);
}
#endif /* NON_MATCHING */
