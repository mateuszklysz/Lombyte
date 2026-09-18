# Sony EE-GCC 2.96 (partial source)

Most promising second patch surface: the 2.96 **binary** scores equal to the
SN 2.95.2 default on `fun_0022f778` (with a different mismatch composition),
so a completed and patched 2.96 could steer residuals the default line cannot.

- Archive: `sce296-gcc-src.tar.gz`, 13,180,101 bytes
- SHA-256: `4937a3ac39bddfd1b6a0eb2e85102c02ab4c4f2096975b68956a420adacf7f2f`
- Status: **truncated** (`gzip: unexpected end of file`). What extracts intact
  includes the MIPS backend:
  `src/gcc/config/mips/{mips.c,mips.h,mips.md}` (dates Nov 2000 - Apr 2001).
  The GCC core files (`toplev.c`, `c-parse.y`, `version.c`) are past the cut
  and missing, so the tree cannot be built as-is.
- Extraction used so far:
  `tar xzf sce296-gcc-src.tar.gz -C <dir> src/gcc/config/mips/`
- Reference binary: `/root/rnc-toolchains/decompme/ee-gcc2.96`.

Before patching: complete the source tree (a second, intact copy of the same
release, or reconstruct the missing core files against the matching 2.96
vintage), then follow the rules in [`../README.md`](../README.md).
