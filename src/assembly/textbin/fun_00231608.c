#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00231608/FUN_00231608.s", FUN_00231608);
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
struct M2c_D_0013E550
{
  u8 pad_0[0x6B];
  u8 unk6B;
};
struct M2c_temp_4_12
{
  u8 pad_0[0x1998];
  s32 unk1998;
  s32 unk199C;
};
struct M2c_temp_4_21
{
  u8 pad_0[0x1938];
  s32 unk1938;
  s32 unk193C;
};
struct M2c_singleton
{
  s32 x;
};
extern u8 D_0012F1C8[];
extern u8 D_00137B80[];
extern struct M2c_D_0013E550 D_0013E550;
extern struct M2c_singleton D_0015ED80;
extern struct M2c_singleton D_0015ED88;
extern s32 D_001940D4[];
extern s32 func_00120558();
extern void func_001F4A58();
extern s32 func_0023A3B8();
extern s32 sceGsSyncV();
extern s32 sceGsSyncVCallback();
void FUN_00231608(s32 arg0)
{
  int new_var;
  s32 var_5_14;
  struct M2c_temp_4_12 *temp_4_12;
  s32 new_var2;
  s32 var_9_16;
  struct M2c_temp_4_21 *temp_4_21;
  new_var = 4;
  if (D_0015ED80.x != 0)
  {
    temp_4_12 = D_00137B80 - (-(arg0 * 8));
    var_5_14 = temp_4_12->unk199C;
    var_9_16 = temp_4_12->unk1998;
  }
  else
  {
    temp_4_21 = D_00137B80 - (-(new_var * (arg0 * 2)));
    if (1)
    {
      var_9_16 = temp_4_21->unk1938;
    }
    var_5_14 = temp_4_21->unk193C;
  }
  new_var2 = D_001940D4[0];
  D_0013E550.unk6B = (u8) (D_0013E550.unk6B | 8);
  func_0023A3B8(var_9_16, var_5_14, (new_var2 + 0x3F) & (~0x3F), (new_var2 + 0x30003F) & (~0x3F), D_0015ED88.x, var_9_16);
  sceGsSyncV(0);
  func_00120558(0, 0);
  sceGsSyncVCallback(D_0012F1C8);
  func_001F4A58(new_var);
  D_0013E550.unk6B = (u8) (D_0013E550.unk6B | 0x10);
}
#endif /* NON_MATCHING */
