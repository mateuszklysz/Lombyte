# Sony EE-GCC 2.9-ee-991111b (recovered source)

Second patch surface for the Sony/Cygnus EE line. The published patches form the
cumulative **game-compiler** stack (P1 prerequisite, P15, P16, P19, P20); the result
reproduces **34 of 58** parity controls with zero exact regressions.

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

## Published patches

- `0001-r5900-quad-saves.patch` SHA-256: `13f54afb0045ea80d98e03b1b31417593f11abfaaf6fc254a8d41d750f75406f`
  - role: R5900 quadword-save parity prerequisite for the cumulative game compiler
- `0015-no-sibcall.patch` SHA-256: `63ff746052f682037413ce7188c3622786ec829674500de36d8bb5d950ceb071`
  - cc1: `5f8c800390c82137e3f25de82ec22b8868ede84c54034cab6d8e8844cf3c4193`
  - fixtures (with `-mastra-no-sibcall`; retail objects have `jal` + epilogue,
    no tail `j`): `assembly/textbin/fun_001f6250`, `textbin/fun_00201f58`,
    `textbin/fun_0020d3b0`, `textbin/fun_00235840`, `textbin/memcard_init`
    -> 100.0
  - counter-examples kept on the default route (retail has a tail `j`):
    `core/set_image_buffer_flag`, `sdk/dma_ipu_gs/sce_mpeg_init`
- `0016-no-edge-lcm-default.patch` SHA-256: `7a383321db39ad13f82703530909b99e34eb5b04aac8988746eaeda1035f0a15`
  - cc1: `f5c4dd418dc3281eecf00faedd59319e8f504d1c3ae79fcbaa3664f3dff28a1a`
  - fixture: `textbin/fun_001fe898` -> 100.0 with the default route

- `0019-r5900-post-dbr-loop-pad.patch` SHA-256: `9be60b68f35cf775bce2f0b677cd0b3ba459d8531649d99b6993b0d83e290562`
  - cc1 (P1+P15+P16+P19 stack): `5db99bf745e1df0c77d649ca2f2d6c50ef5619bbd0e7bd46c6cb938624512b5f`
  - role: reproduce the retail R5900 assembler's short-loop padding in cc1 after
    delay-slot scheduling; backward-branch loops shorter than 7 instructions get
    NOPs immediately before the branch
  - fixtures: `textbin/fun_001ff480`, `textbin/fun_002212b8`,
    `textbin/fun_002242b8`, `textbin/fun_00225660`, `textbin/fun_0022da68` -> 100.0
  - control parity: 58 controls, 21 -> 26 exact, zero regressions

- `0020-gas-absolute-unknown-symbol.patch` SHA-256: `1d0a65b5e800785b58d8826baa87c1cb44dc217b47cb6da1b255787367e2383b`
  - component: gas from the same recovered tree; assembler SHA-256
    `2e020354a58d583ac647f051c39702fabd2d5d64816a20173bdd633d8fc3f376`
  - role: expand a relaxable gp pair to the retail `lui %hi` + `op %lo` form
    (the default expansion runs twice and left a copy of the second
    instruction in the first slot); deferred gp relaxation is preserved
  - fixtures: `textbin/fun_0023b590`, `textbin/fun_0023aba0`,
    `ee/initialize_streaming_state` (with `-mno-split-addresses`) -> 100.0
  - control parity: 58 controls, 26 -> 30 exact, zero exact regressions and no
    fuzzy changes on the other controls
