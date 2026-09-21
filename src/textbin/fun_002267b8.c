/*
STATE: C_NON_MATCHING
SYMBOL: FUN_002267b8
SCORE: code=94.1667 functions=94.1667 data=100 complete_data=100
COMPILER: ee-gcc-2.9-991111b/r4 -O2 -g2 -gstabs (SN textbin default)
DECISION: retained
BLOCKER: register-allocation,delay-slot-scheduling
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 94.1667%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002267b8/FUN_002267b8.s", FUN_002267b8);
#else
#include "rnc/textbin_fun_002267b8_types.h"
#include "types.h"




extern u8 D_001B3200[];
extern u8 D_001B3AC0[];
extern u8 D_001D59D8[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
void FUN_002267b8(void) {
    register s32 inner_6 asm("v1");
    register s32 tbl_6 asm("v0");
    s32 var_6_6;
    register u8 *base18 asm("v0");
    struct M2c_var_5_18 *var_5_18;
    register s32 addr asm("v0");
    register s32 a8 asm("v1");
    register s32 ac asm("v0");
    register s32 bound asm("v1");

    var_6_6 = D_001D5BF0.unkA8;
    if (var_6_6 < (var_6_6 + D_001D5BF0.unkAC)) {    u8 *astra_ptr1 = D_001B3AC0;
    u8 *astra_ptr2 = D_001B3200;
    u8 *astra_ptr0 = D_001D59D8;

        base18 = astra_ptr0;
        var_5_18 = (struct M2c_var_5_18 *) ((var_6_6 * 8) + base18);
        do {
            var_6_6 += 1;
            inner_6 = *((u8 *) (var_5_18->unk0 + (s32) astra_ptr1));
            tbl_6 = *(s32 *) ((inner_6 * 4) + astra_ptr2);
            addr = tbl_6 + (var_5_18->unk4 * 4);
            *(s32 *) (addr + 0x48) = 0;
            var_5_18 += 1;
            a8 = D_001D5BF0.unkA8;
            ac = D_001D5BF0.unkAC;
            bound = a8 + ac;
        } while (var_6_6 < bound);
    }
    D_001D5BF0.unkAC = 0;
}
#endif /* NON_MATCHING */
