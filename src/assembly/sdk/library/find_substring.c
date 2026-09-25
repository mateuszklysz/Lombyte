#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact Newlib helper strstr; target-derived body pending recovered SDK source. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/find_substring/FindSubstring.s", FindSubstring);
#else
#include "types.h"

s8 *FindSubstring(s8 *arg0, s8 *arg1)
{
  s8 *p;
  s8 c;
  s32 i;

  c = *arg1;
  p = arg0;
  if ((*p) == 0)
  {
    return ((*arg1) == 0) ? (p) : (0);
  }
  do
  {
    i = 0;
    if (c == 0)
    {
      return p;
    }
    if (c == (*p))
    {
      do
      {
        i += 1;
        if (arg1[i] == 0)
        {
          return p;
        }
      }
      while (arg1[i] == p[i]);
    }
    c = *arg1;
    p += 1;
  }
  while (*p != 0);
  return 0;
}
#endif /* NON_MATCHING */
