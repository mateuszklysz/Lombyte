/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 79.3134%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023aa68/FUN_0023aa68.s", FUN_0023aa68);
#else
#include "rnc/assembly_textbin_fun_0023aa68_types.h"
#include "types.h"

extern struct M2c_D_0016120C *D_0016120C;
extern s32 D_00161210;
extern s32 DeleteThread();
extern s32 RemoveDmacHandler();
extern s32 RemoveIntcHandler();
extern s32 TerminateThread();
extern s32 func_00119028();
extern s32 func_001190F8();
extern s32 func_0023AC90();
extern s32 func_0023B958();
extern s32 func_0023BA58();
extern s32 func_0023CC38();
extern s32 func_0023D1E0();
extern s32 sceCdSync();
void FUN_0023aa68(void) {
    sceCdSync(0);
    func_0023B958(D_0016120C);
    func_0023D1E0((u8 *)D_0016120C + 0xD9168);
    TerminateThread(D_00161210);
    DeleteThread(D_00161210);
    func_001190F8(2);
    RemoveDmacHandler(2, D_0016120C->unkD90F8);
    func_00119028(2);
    RemoveIntcHandler(2, D_0016120C->unkD90FC);
    func_0023CC38((u8 *)D_0016120C + 0xD9048);
    func_0023AC90((u8 *)D_0016120C + 0xD9100);
    func_0023BA58((u8 *)D_0016120C + 0xD9040);
    sceCdSync(0);
    *(s32 *)0x1000E000 &= 0xFFFFFFFD;
}
#endif /* NON_MATCHING */
