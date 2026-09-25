#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00220e28/FUN_00220e28.s", FUN_00220e28);
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
struct M2c_D_0013C940
{
  u8 pad_0[0x1C4];
  s32 unk1C4;
};
struct M2c_D_001D5BF0
{
  u8 pad_0[0x4];
  struct M2c_D_001D5BF0_unk4 *unk4;
  s32 unk8;
  u8 pad_C[0x118];
  s32 unk124;
};
struct M2c_D_001D5BF0_unk4
{
  u8 pad_0[0x38];
  s32 unk38;
  u8 pad_3C[0x4];
  s32 unk40;
};
struct M2c_arg0
{
  u8 pad_0[0x14];
  s32 unk14;
  u8 pad_18[0x1C];
  s32 unk34;
  s32 unk38;
  s32 unk3C;
};
struct M2c_temp_3_99
{
  u8 pad_0[0x4];
  s32 unk4;
  u8 pad_8[0x8];
  s32 unk10;
};
extern struct M2c_D_0013C940 D_0013C940;
extern f32 D_0015F43C;
extern u8 D_0016034C;
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 func_001F4A58();
extern s32 func_001F96F8();
extern s32 func_001FBAB8();
extern s32 func_0022DA68();
s32 FUN_00220e28(struct M2c_arg0 *arg0)
{
  float new_var2;
  long new_var3;
  s32 temp_17_67;
  int new_var4;
  s32 new_var[2];
  s32 temp_2_53;
  s32 temp_5_77;
  u8 *temp_3_123;
  struct M2c_temp_3_99 *temp_3_99;
  new_var[0] = arg0->unk3C;
  new_var3 = D_0013C940.unk1C4 & 0xD00;
  new_var2 = 0.25f;
  temp_5_77 = new_var[1];
  if (new_var[0] != 0)
  {
    new_var[1] = new_var[0] - 1;
    D_0015F43C = ((f32) ((new_var[1] < 5) ? (new_var[1]) : (4))) * new_var2;
    arg0->unk3C = temp_5_77;
    return 0;
  }
  new_var4 = arg0->unk38;
  if (D_001D5BF0.unk4->unk40 == ((s32) arg0))
  {
    if (new_var3 && (D_001D5BF0.unk124 == 0))
    {
      return 1;
    }
    do
    {
      if (D_0013C940.unk1C4 & 0x10)
      {
        temp_2_53 = D_001D5BF0.unk4->unk38;
        if (temp_2_53 != 0)
        {
          D_001D5BF0.unk8 = temp_2_53;
          goto block_12;
        }
        if (D_001D5BF0.unk124 == 0)
        {
          return -1;
        }
        goto block_13;
      }
      block_12:
      block_13:
      temp_17_67 = new_var4;


      if ((D_0013C940.unk1C4 & 0x1000) && (temp_17_67 != 0))
      {
        do
        {
          arg0->unk38 = (s32) (temp_17_67 - 1);
        }
        while (0);
      }
      if (D_0013C940.unk1C4 & 0x4000)
      {
        temp_5_77 = arg0->unk38;
        if ((*((s32 *) (((u8 *) ((temp_5_77 * 0x14) + arg0->unk34)) + 0x14))) != 0)
        {
          arg0->unk38 = (s32) (temp_5_77 - (-1));
        }
      }
    }
    while (0);
    if (D_0013C940.unk1C4 & 0x40)
    {
      func_0022DA68(0, 0x11, arg0->unk14);
      temp_3_99 = (arg0->unk38 * 0x14) + arg0->unk34;
      if (temp_3_99->unk10 & 1)
      {
        if (D_0016034C != 0)
        {
          func_001FBAB8(6, D_001D5BF0.unk4);
        }
        else
        {
          func_001F4A58(4);
          arg0->unk3C = func_001F96F8(0x10);
          D_0016034C = D_0016034C == 0;
        }
      }
      else
      {
        temp_3_123 = temp_3_99->unk4;
        if (temp_3_123 != 0)
        {
          *temp_3_123 = (*temp_3_123) == 0;
        }
      }
    }
    if (arg0->unk38 != temp_17_67)
    {
      func_0022DA68(1, 0x11, arg0->unk14);
    }
    goto block_29;
  }
  block_29:
  return 0;

}
#endif /* NON_MATCHING */
