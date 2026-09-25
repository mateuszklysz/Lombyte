#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00121190/FUN_00121190.s", FUN_00121190);
#else
typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef volatile s8 vs8;
typedef volatile u8 vu8;
typedef volatile s16 vs16;
typedef volatile u16 vu16;
typedef volatile s32 vs32;
typedef volatile u32 vu32;
typedef volatile s64 vs64;
typedef volatile u64 vu64;
typedef float f32;
typedef double f64;
typedef s32 b32;
struct M2c_D_00159990
{
  u8 pad_0[0x24];
  s32 unk24;
};
extern s32 D_001312D0[];
extern s32 D_001312EC;
extern s32 D_00131304;
extern u8 D_001324C0[];
extern u8 D_00152F80[];
extern u8 D_00152F90[];
extern u8 D_00152FB0[];
extern struct M2c_D_00159990 D_00159990;
extern u8 D_001599D0[];
extern u8 D_FFFFF[];
extern s32 PollSema();
extern s32 SignalSema();
extern unsigned long cmd_sem_init();
extern s32 sceCdSyncS();
extern s32 scePrintf();
extern s32 sceSifBindRpc();
extern s32 sceSifCallRpc();
extern s32 sceSifInitRpc();
extern s32 sceSifWriteBackDCache();
s32 FUN_00121190(s32 arg0)
{
  s32 *var_2_46;
  int new_var;
  s32 *var_2_65;
  s32 temp_16_129;
  s32 var_2_28;
  s32 *new_var2;
  s32 *new_var3;
  if (D_001312D0[0] <= 0)
  {
    goto block_2;
  }
  scePrintf(D_00152F80);
  block_2:
  cmd_sem_init();

  new_var = 1;
  var_2_28 = 6;
  if (D_001312EC != PollSema(D_001312EC))
  {
    goto block_27;
  }
  if (sceCdSyncS(1) != 0)
  {
    do
    {
      goto block_23;
    }
    while (0);
  }
  new_var2 = D_001312D0;
  sceSifInitRpc(0);
  if ((*((s32 *) 0x131304)) >= 0)
  {
    goto block_19;
  }
  goto loop_9;
  block_7:
  loop_8:
  if (((void *) (-new_var)) != var_2_46)
  {
    goto loop_8;
  }


  loop_9:
  if (sceSifBindRpc(&D_00159990, 0x8000059A, 0) < 0)
  {
    goto block_11;
  }

  goto block_17;
  block_11:
  var_2_65 = D_FFFFF;

  if (new_var2[0] <= 0)
  {
    goto block_14;
  }
  scePrintf(D_00152F90);
  var_2_65 = (void *) 0x100000;
  block_14:
  loop_15:
  if (((void *) (-new_var)) != var_2_65)
  {
    goto loop_15;
  }


  goto loop_9;
  block_17:
  var_2_46 = D_FFFFF;

  if (D_00159990.unk24 == 0)
  {
    goto block_7;
  }
  *((s32 *) 0x131304) = 0;
  new_var3 = (s32 *) D_001599D0;
  goto block_20;
  block_19:
  block_20:
  *new_var3 = arg0;


  sceSifWriteBackDCache(D_001599D0, 4);
  if (sceSifCallRpc(&D_00159990, 0, 0, D_001599D0, 4, (s32) D_001324C0, 4, 0, 0) < 0)
  {
    goto block_22;
  }
  goto block_24;
  block_22:
  block_23:
  SignalSema(D_001312EC);


  return ((arg0 ^ 8) != 0) ? (6) : (-1);
  block_24:
  if (new_var2[0] <= 0)
  {
    goto block_26;
  }

  scePrintf(D_00152FB0);
  block_26:
  temp_16_129 = *((volatile u32 *) (((u32) D_001324C0) | 0x20000000));

  SignalSema(D_001312EC);
  var_2_28 = temp_16_129;
  block_27:
  return var_2_28;

}
#endif /* NON_MATCHING */
