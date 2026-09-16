/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 97.5000%
 * blocker: run-20260916 retained improvement; remaining mismatch is register allocation, stack alignment or delay-slot/scheduling placement; assembly oracle remains authoritative
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001eb740/FUN_001eb740.s", FUN_001eb740);
#else
#include "rnc/assembly_textbin_fun_001eb740_types.h"
/* primitive typedefs provided by types.h */
#include "types.h"

extern u8 D_0013E550[];
extern u32 D_0015F5B4[];
s32 FUN_001eb740(s32 arg0, s32 arg1)
{
  register s32 var_2_18 asm("v0");
  int new_var;
  struct M2c_temp_4_15 *temp_4_15;
  register s32 arg1v asm("v1");
  arg1v = arg1;
  if ((arg0 < 0) || (((temp_4_15 = (struct M2c_temp_4_15 *) ((arg0 * 0x70) + D_0013E550), var_2_18 = (new_var = 0), (arg1v + D_0015F5B4[new_var]) == temp_4_15->unk7E)) && ((var_2_18 = 1, (((u32) (temp_4_15->unk74 - 1)) < 2U) == new_var))))
  {
    var_2_18 = new_var;
  }
  return var_2_18;
}
#endif /* NON_MATCHING */
