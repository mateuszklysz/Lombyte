/*
STATE: C_EXACT
SYMBOL: FUN_002267b8
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
NOTE: restored after an erroneous guarded NON_MATCHING publisher overwrite
  (commit 22e5297 replaced this promoted body with an INCLUDE_ASM wrapper
  pointing at a missing oracle, breaking the build). Body byte-identical to
  the original 2026-09-18 promotion (commit 78cae12). The unit was moved to
  GAME_COMPILER_UNITS on 2026-09-20 (commit 3dd9c02) when the game-compiler
  briefly achieved parity; that parity broke again by 2026-09-22 (installed
  patch revision moved), measured at only 43.77778% under cc_game. Moved
  back to SN_COMPILER_UNITS in configure.py (a fixed binary compiler, no
  drift risk) -- re-verified 2026-09-22 as genuinely 100% exact:
  score-proposal.py --profile sn reports code_percent=100.0 exact=True; a
  raw objdiff-cli diff against the unlinked expected object shows only
  relocation-spelling differences (%hi/%lo symbolic vs the retail object's
  pre-resolved numeric constants for the same addresses), not a real
  mismatch -- confirmed by cross-checking the referenced symbols/addresses
  are identical on both sides.
*/

#include "types.h"
struct M2c_D_001D5BF0 {
    u8 pad_0[0xA8];
    s32 unkA8;
    s32 unkAC;
};

struct M2c_var_5_18 {
    s32 unk0;
    s32 unk4;
};

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
