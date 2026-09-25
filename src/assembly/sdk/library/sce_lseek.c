#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceLseek; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/sce_lseek/sceLseek.s", sceLseek);
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
struct M2c_D_00156880
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  s32 unk18;
};
struct M2c_temp_16_17
{
  s32 unk0;
  s32 unk4;
};
struct Sema { s32 count; s32 max_count; s32 init_count; s32 wait_threads; s32 attr; s32 option; };
extern u8 D_0012FC10[];
extern u32 D_0012FC94[];
extern u32 D_0012FCA4[];
extern struct M2c_D_00156880 D_00156880;
extern u8 D_001574C0[];
extern u8 D_00157D80[];
extern u8 D_00157F80[];
extern s32 CreateSema();
extern s32 DeleteSema();
extern s32 ReadQueueStatus();
extern s32 SignalSema();
extern s32 WaitSema();
extern s32 _sceFsWaitS();
extern s32 get_iob();
extern s32 sceSifCallRpc();
inline s32 inline_fn(s32 *arg0)
{
  return *arg0;
}

s32 sceLseek(s32 arg0, s32 arg1, s32 arg2)
{
  short new_var7;
  s32 q;
  struct Sema sema;
  s32 *new_var4;
  s32 new_var10;
  s32 sp30;
  int new_var5;
  struct M2c_D_00156880 *new_var6;
  int new_var2;
  struct M2c_temp_16_17 *new_var3;
  s32 *var_16_72;
  s32 *temp_5_86;
  s32 temp_16_126;
  s32 temp_18_54;
  s32 temp_19_31;
  s32 var_6_80;
  struct M2c_temp_16_17 *temp_16_17;
  int new_var;
  new_var6 = &D_00156880;
  temp_16_17 = get_iob();
  _sceFsWaitS(4);
  q = D_0012FC94[0];
  if (q == 0)
  {
    ReadQueueStatus();
    return -1;
  }
  if ((temp_16_17 == 0) || ((temp_19_31 = temp_16_17->unk4, temp_19_31 == 0)))
  {
    ReadQueueStatus();
    return -9;
  }
  D_00156880.unkC = (s32) temp_16_17->unk0;
  D_00156880.unk10 = arg1;
  D_00156880.unk14 = arg2;
  new_var3 = temp_16_17;
  D_00156880.unk18 = (s32) (((s32) (((u8 *) new_var3) - ((u8 *) D_00157D80))) >> 4);
  sema.max_count = 1;
  sema.init_count = 0;
  sema.option = 0;
  new_var4 = &sema;
  temp_18_54 = CreateSema(new_var4, 1);
  new_var = -0xB;
  D_00156880.unk4 = &sp30;
  D_00156880.unk8 = 4;
  new_var2 = 1;
  if (new_var2)
  {
    new_var5 = new_var2;
    D_00156880.unk0 = temp_18_54;
    new_var7 = temp_19_31;
    if (new_var7 & 0x8000)
    {
      do
      {
        WaitSema(D_0012FCA4[0]);
      }
      while (0);
      var_16_72 = D_001574C0;
      if (inline_fn((s32 *) D_0012FC10) == (-1))
      {
        *((s32 *) D_0012FC10) = (*new_var6).unk0;
        D_00156880.unk0 = (s32) (-(*new_var6).unk0);
      }
      else
      {
        var_6_80 = 0;
        loop_10:
        var_6_80 += 1;
        if (var_6_80 < 0x20)
        {
          temp_5_86 = (s32 *) D_0012FC10 + var_6_80;
          if (inline_fn(temp_5_86) == -1)
          {
            new_var10 = (*new_var6).unk0;
            *temp_5_86 = new_var10;
            (*new_var6).unk0 = (s32) (-new_var10);
            goto end_10;
          }
          else
          {
            goto loop_10;
          }
        }
        end_10:

      }
      do
      {
        SignalSema(D_0012FCA4[0]);
      }
      while (0);
    }
    else
    {
      var_16_72 = D_001574C0;
    }
    if (sceSifCallRpc(D_00157F80, 4, 0, &D_00156880, 0x1C, (s32) var_16_72, 4, 0, 0) < 0)
    {
      DeleteSema(temp_18_54);
      ReadQueueStatus();
      return -0xB;
    }
    temp_16_126 = inline_fn(((u32) var_16_72) | 0x20000000);
    ReadQueueStatus();
    if (temp_16_126 == 0)
    {
      DeleteSema(temp_18_54);
      return new_var;
    }
    if (temp_19_31 & 0x8000)
    {
      DeleteSema(temp_18_54);
      return 0;
    }
    WaitSema(temp_18_54);
  }
  DeleteSema(temp_18_54);
  return sp30;
}
#endif /* NON_MATCHING */
