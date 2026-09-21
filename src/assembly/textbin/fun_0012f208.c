/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 63.6744%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0012f208/FUN_0012f208.s", FUN_0012f208);
#else
extern s32 sceCdGetError();
extern s32 sceCdRead();
extern s32 sceCdSync();
extern s32 sceGsSyncV();
s32 FUN_0012f208(unsigned char arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  s32 *new_var2;
  u8 sp_slot[0x60];
  new_var = sp_slot;
  loop_1:
  sceCdRead(arg0, *(new_var2 = &arg1), arg2, new_var);

  goto loop_3;
  block_2:
  sceGsSyncV(0);

  loop_3:
  if (sceCdSync(1) != 0)
  {
    goto block_2;
  }

  if (sceCdGetError() != ((long long) 0))
  {
    goto loop_1;
  }
  return arg1 << 0xB;
}
#endif /* NON_MATCHING */
