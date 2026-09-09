/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 49.9804%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00221f58/FUN_00221f58.s", FUN_00221f58);
#else
#include "rnc/assembly_textbin_fun_00221f58_types.h"
#include "types.h"






extern struct M2c_D_001602F0 D_001602F0;
extern struct M2c_D_001602F8 D_001602F8;
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F6530();
extern s32 func_001FF960();
extern s32 func_001FFA10();
extern s32 func_00200600();
s32 FUN_00221f58(struct M2c_arg0 *arg0) {
u8 sp_slot[0x40];    f32 temp_f20_37;
    f32 temp_f20_81;
    u32 temp_5_15;
    u32 temp_5_57;

    func_001F4280(0);
    if (arg0->unk38 != 0) {
        temp_5_15 = arg0->unk24;
        func_001F6530(4, ((s32) (temp_5_15 + (temp_5_15 >> 0x1F)) >> 1) - 8, (0x80FF << 0x10) | 0xA888, sp_slot, -1, D_001602F0.unk1, D_001602F0.unk0, D_001602F0.unk1);
        temp_f20_37 = (f32) (arg0->unk24 * 8);
        func_00200600(0x20, 0x10, func_001FFA10(func_001FF960(0xE99E, 6)), 0x44200000, temp_f20_37, 0x43000000, 0x43800000, 0);
    } else {
        temp_5_57 = arg0->unk24;
        func_001F6530(arg0->unk20 - 0x18, ((s32) (temp_5_57 + (temp_5_57 >> 0x1F)) >> 1) - 8, (0x80FF << 0x10) | 0xA888, sp_slot, -1, D_001602F8.unk1, D_001602F8.unk0, D_001602F8.unk1);
        temp_f20_81 = (f32) (arg0->unk24 * 8);
        func_00200600(0x20, 0x10, func_001FFA10(func_001FF960(0xE99E, 6)), 0x43400000, temp_f20_81, 0x43000000, 0x43800000, 0x40490FDB);
    }
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
