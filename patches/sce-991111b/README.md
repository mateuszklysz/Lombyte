# Sony EE-GCC 2.9-ee-991111b (recovered source)

Second patch surface for the Sony/Cygnus EE line. No patches are applied yet.

- Archive: `gnu-ee-binutils-gcc-1.1.tar.gz`, 16,510,927 bytes
- SHA-256: `1f518043e252d6eda726386971d52eda26541ab936ea73a9783d73712b595f92`
- Origin: Internet Archive copy of
  <https://web.archive.org/web/20060518234647id_/http://ps2dev.sourceforge.net:80/downloads/ee/gnu-ee-binutils-gcc-1.1.tar.gz>
  (ps2dev.sourceforge.net downloads/ee, gzip timestamp 2001-01-29)
- Contents: complete GCC + binutils tree, 8,139 entries, `gcc/version.c` says
  `2.9-ee-991111b`; target `mips64r5900-sf-elf`.
- Tool dirs used so far: `src/gcc`, `src/binutils`, `src/bfd`, `src/gas`.

Build notes: same 32-bit host recipe as
[`../ee-gcc-2.9-991111-01/`](../ee-gcc-2.9-991111-01/). Reference binary of
this vintage: `/root/rnc-toolchains/tier2-20260909/991111b-r4` (scores 79.87 on
`fun_0022f778`, so it is not the retail compiler for that unit).

When a patch is produced, add it here as `patched-ee-gcc.patch` with its
SHA-256 recorded above and a recipe entry, following the rules in
[`../README.md`](../README.md).

## Published patch

- Patch SHA-256: `63ff746052f682037413ce7188c3622786ec829674500de36d8bb5d950ceb071`

- Patch SHA-256: `63ff746052f682037413ce7188c3622786ec829674500de36d8bb5d950ceb071`
- Patched cc1 SHA-256: `5f8c800390c82137e3f25de82ec22b8868ede84c54034cab6d8e8844cf3c4193`
- Fixture: `assembly/textbin/fun_001f6250` -> 100.0 with `-mastra-no-sibcall`
