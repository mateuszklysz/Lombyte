/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001eb410
SCORE: code=92.7108 functions=92.7108 data=100 complete_data=100
COMPILER: ee-gcc-2.9-991111b/r4 -O2 -g2 -gstabs (SN textbin default)
DECISION: retained
BLOCKER: register-allocation,delay-slot-scheduling
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 92.7108%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001eb410/FUN_001eb410.s", FUN_001eb410);
#else
#include "rnc/assembly_textbin_fun_001eb410_types.h"
extern u8 D_00100AE0[];
extern s32 D_0013E504[];
extern s32 D_0015ED88;
extern s64 D_0015EF48;
extern s32 D_0015EF50[];
extern s32 D_0015EF54[];
extern f32 D_0015F43C;
extern s32 D_0015F464[];
extern s32 D_0015F604;
extern s32 D_0015F620;
extern struct M2c_D_0016045C *D_0016045C;
extern s32 D_0018A2E8[];
extern u8 D_00193FC0[];
extern u8 D_001D8EB0[];
extern u8 D_001E1300[];
extern u8 D_001E3200[];
extern s32 AppendDmaTag();
extern s32 FillTransferWords();
extern s32 FlushCache();
extern s32 func_001E9AB8();
extern s32 func_001EAF88();
extern s32 func_001F2260();
extern s32 func_001F2588();
extern s32 func_001F3868();
extern s32 func_001F4280();
extern s32 func_001F4398();
extern u64 func_001F44B8();
extern s32 func_001F4650();
extern s32 func_001F5210();
extern s32 func_001F5450();
extern s32 func_001FA6D0(u8 *, f32);
extern s32 func_001FB368();
extern s32 func_001FB680();
extern s32 func_001FBC50();
extern s32 func_0020CC60();
extern s32 func_0020CEF8();
extern s32 func_0020D460();
extern s32 func_00217C18();
extern s32 func_002196B8();
extern s32 func_00228A30();
extern s32 func_00228B38();
extern s32 func_0022A5E0();
extern s32 func_00233308();
extern s32 func_002333A8();
extern s32 func_002334D8();
extern s32 func_002337B0();
extern s32 func_00233980();
extern s32 func_00233C28();
extern s32 func_00234F98();
extern s32 func_00235780();
extern s32 func_002358C8();
extern s32 func_00237370();
void FUN_001eb410(s32 *arg0)
{
  unsigned short new_var6;
  s32 *new_var3;
  s32 *new_var;
  s32 *var_4_0;
  short new_var2;
  int new_var4;
  s32 temp_4_123;
  long new_var5;
  new_var4 = -1;
  new_var3 = (var_4_0 = (u8 *) 0x193FC0);
  var_4_0 = arg0;
  new_var = (s32 *) 0x13E504;
  if ((D_0016045C == 0) || ((new_var3, D_0016045C->unk4 != 0)))
  {
    func_001FB368();
    {
      if (1)
      {
      }
    }
  }
  FillTransferWords(D_00193FC0, new_var4, 0x80);
  func_001EAF88();
  func_001F2260();
  func_0020CC60();
  func_001F3868();
  D_0015F620 = new_var4;
  if (D_0016045C != 0)
  {
    func_001E9AB8();
  }
  new_var2 = 0x80;
  func_002333A8();
  AppendDmaTag(0x02010000);
  func_002358C8();
  AppendDmaTag(0x02020000);
  func_00228B38();
  AppendDmaTag(0x02040000);
  new_var5 = 3;
  if ((*((s32 *) 0x15F604)) == new_var5)
  {
    func_002196B8();
  }
  else
  {
    func_0020D460();
  }
  AppendDmaTag(0x02080000);
  func_001F4280(0);
  func_00233C28();
  new_var5 = ((s32 *) 0x15F464)[0];
  if (new_var5 != 0)
  {
    func_001F4650();
  }
  func_00233C28();
  if (*((s32 *) 0x18A2E8) != 0)
  {
    func_00233980(8, 5);
    func_00233C28();
    FlushCache(0);
    func_00217C18();
      {
        register s32 new_var8 asm("v0");
        new_var8 = 8;
        D_0015F620 = new_var8;
      }
  }
  func_001FB680();
  func_001F3868();
  if (D_0015EF50[0] != 0)
  {
    new_var5 = (D_0015EF50[0] << 0x18) | 0x808080;
    func_001F5450(0xEC, 0x10, 0x100, new_var2, 0, 0, 0x100, new_var2, new_var5, D_0015EF48);
  }
  if (((s32 *) 0x15EF54)[0] != 0)
  {
    temp_4_123 = D_0015ED88 - 1;
    func_001F5450(0xA0, D_0013E504[0] - 0x50, 0xC0, 0x60, 0, 0, 0x100, new_var2, ((unsigned long) (((s32 *) 0x15EF54)[0] << 0x18)) | 0x808080, func_001F44B8(((temp_4_123 <= (-1)) ? (0) : (temp_4_123)) + 4));
  }
  var_4_0 = (f32 *) 0x15F43C;
  func_001F4398();
  if (D_0015F43C > 0.0f)
  {
    if (D_0015F43C > 1.0f)
    {
      D_0015F43C = 1.0f;
    }
    new_var6 = 0x100AE0;
    func_001F5210((float) 0, 0, 0, func_001FA6D0((u8 *) new_var6, D_0015F43C * 128.0f));
  }
  func_002334D8(D_00100AE0);
  FlushCache(0);
  if ((*((s32 *) 0x15F604)) == 4)
  {
    func_001FBC50();
  }
  func_002337B0(2);
  func_00234F98(D_001E1300);
  func_00233308();
  func_002337B0(4);
  func_00237370(D_001E3200);
  func_00235780();
  func_002337B0(8);
  func_0022A5E0(D_001D8EB0);
  func_00228A30();
  func_002337B0(0x10);
  func_0020CEF8();
  func_001F2588();
}

__attribute__((alias("FUN_001eb410"))) extern void func_001EB410(s32 *arg0);
#endif /* NON_MATCHING */
