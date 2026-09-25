#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001e9488/FUN_001e9488.s", FUN_001e9488);
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
struct M2c_D_0013D290
{
  u8 pad_0[0xD4];
  s32 unkD4;
  u8 pad_D8[0x4];
  s32 unkDC;
};
struct M2c_D_0013E550
{
  u8 pad_0[0x6B];
  u8 unk6B;
};
struct M2c_D_001940C0
{
  u8 pad_0[0x1C];
  s32 unk1C;
};
struct M2c_temp_4_18
{
  u8 pad_0[0x1A98];
  s32 unk1A98;
  s32 unk1A9C;
};
struct M2c_temp_4_26
{
  u8 pad_0[0x1A78];
  s32 unk1A78;
  s32 unk1A7C;
};
extern u8 D_0012F1C8[];
extern u8 D_00137B80[];
extern struct M2c_D_0013D290 D_0013D290;
extern struct M2c_D_0013E550 D_0013E550;
extern s32 D_0015ED80[];
extern s32 D_0015EE88;
extern s32 D_0015EED8;
extern s32 D_0015F604[];
extern struct M2c_D_001940C0 D_001940C0;
extern s32 FlushCache();
extern s32 func_00120558();
extern s32 func_0012EE08();
extern void func_001F4A58();
extern s32 func_001F96F8();
extern s32 func_00200B10();
extern s32 func_002093D8();
extern s32 func_00215EE8();
extern s32 func_0022DCD0();
extern s32 func_0023A3B8();
extern s32 sceCdSync();
extern s32 sceGsSyncV();
extern s32 sceGsSyncVCallback();
inline int inline_fn(s32 arg0)
{
  return arg0 * 8;
}

void FUN_001e9488(s32 arg0)
{
  int *new_var13;
  unsigned long long new_var8;
  struct M2c_D_0013D290 *new_var3;
  s32 new_var11;
  s32 *new_var4;
  int var_17_20;
  s32 var_18_22;
  s32 new_var6;
  struct M2c_D_001940C0 *new_var5;
  struct M2c_temp_4_18 *temp_4_18;
  long long new_var;
  long long *new_var2;
  int new_var10;
  struct M2c_temp_4_26 *temp_4_26;
  s32 *new_var12;
  int new_var9;
  int new_var7;
  var_18_22 = 0;
  do
  {
    if (arg0 < var_18_22)
    {
      goto block_9;
      do
      {
      }
      while (var_18_22);
    }
    if (D_0013E550.unk6B)
    {
    }
    new_var6 = arg0;
    new_var11 = D_0015ED80[0];
    new_var7 = new_var11 == var_18_22;
    if (new_var7)
    {
      goto block_3;
    }
    temp_4_18 = D_00137B80 - (-inline_fn(arg0));
  }
  while (var_18_22);
  new_var4 = &temp_4_18->unk1A9C;
  new_var9 = new_var6;
  new_var9 = new_var9 * 8;
  var_17_20 = *(new_var12 = new_var4);
  var_18_22 = temp_4_18->unk1A98;
  new_var13 = &new_var9;
  goto block_4;
  block_3:
  temp_4_26 = D_00137B80 - (-(*new_var13));

  var_17_20 = temp_4_26->unk1A7C;
  var_18_22 = temp_4_26->unk1A78;
  new_var8 = 0;
  block_4:
  D_0015EED8 = 2;

  D_0013E550.unk6B = (u8) (D_0013E550.unk6B | 8);
  FlushCache(new_var8, 2);
  func_0022DCD0();
  func_00215EE8();
  func_001F4A58(func_001F96F8(0xC));
  D_0015F604[0] = 1;
  FlushCache(var_18_22);
  func_0022DCD0();
  func_00215EE8();
  func_0012EE08(var_18_22);
  new_var5 = &D_001940C0;
  goto loop_6;
  block_5:
  func_002093D8();

  new_var3 = &D_0013D290;
  loop_6:
  if ((((*new_var3).unkD4 + 1) - 1) >= 3)
  {
    goto block_5;
    if (1)
    {
    }
  }

  if ((*new_var3).unkDC >= 0)
  {
    goto block_5;
  }
  new_var11 = (*new_var5).unk1C;
  new_var = new_var11;
  new_var10 = 0x01000000;
  func_0023A3B8(var_18_22, var_17_20, new_var + 0x100000, new_var + 0x400000, 0);
  sceCdSync(0);
  new_var = 0;
  new_var7 = new_var10;
  new_var2 = &new_var;
  sceGsSyncV(0);
  func_00120558(*new_var2, new_var);
  sceGsSyncVCallback(D_0012F1C8);
  func_00200B10(new_var7, D_0015EE88, 0x1B, 6, 6, 1);
  D_0015EED8 = new_var;
  func_001F4A58(4);
  new_var11 = D_0013E550.unk6B;
  new_var10 = new_var11 | 0x10;
  D_0015F604[new_var] = 0;
  D_0013E550.unk6B = (u8) new_var10;
  block_9:
  return;

}
#endif /* NON_MATCHING */
