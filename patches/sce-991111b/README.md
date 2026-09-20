# Sony EE-GCC 2.9-ee-991111b (recovered source)

Second patch surface for the Sony/Cygnus EE line. The published patches form the
cumulative **game-compiler** stack (P1 prerequisite, P15, P16, P19, P20); the result
reproduces **37 of 44 game-line** parity controls with zero exact regressions;
the joint gate (adding the 14 SDK-line controls on the Sony 991111-01 route) is 52/58.

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

- `0020-gas-absolute-unknown-symbol.patch` SHA-256: `4a1726ac272b83648eea77e07e3fb13c4440a378cb3e69831c71f596838392dc`
  - component: gas from the same recovered tree; assembler SHA-256
    `4f76f5b6eca8e66240ab7b98efef8071a6740b8d33e32238427dbcba9f87cfba`
  - role: reproduce the retail R5900 absolute/gp decision: reorder-mode
    references to a symbol whose size is not yet known become `lui %hi` +
    `op %lo` at the use, known-small symbols stay `%gp_rel`, and noreorder
    delay slots always use the single `%gp_rel` form
  - fixtures: `textbin/fun_0023b590`, `textbin/fun_0023aba0`,
    `ee/initialize_streaming_state` (with `-mno-split-addresses`), plus
    `textbin/fun_001eda60` and `textbin/fun_00233d90` (default route) -> 100.0
  - control parity: 58 controls, 34 -> 36 exact, zero exact regressions

- `0021-sched-keep-frame-related-order.patch` SHA-256: `5d9feea0d193c4dc7dc376129661084531392dab69735c4b11fcadc2912d9ff5`
  - cc1 (P1+P15+P16+P19+P20+P21 stack): `52099c6af010389c59593b3f05750a3411634e45ed97da6c6a886e1dee5d2cd9`
  - role: opt-in `-mastra-keep-frame-order` keeps prologue saves / epilogue
    restores in `save_restore_insns` emission order under the scheduler
    (default scheduler behavior is unchanged, since retail objects mix both
    orders across units)
  - fixtures: `textbin/fun_0023c610` -> 100.0 with
    `-fno-schedule-insns -mastra-keep-frame-order`; `textbin/fun_0023aa68`
    -> 100.0 with `-mastra-keep-frame-order`
  - parity: joint gate 50 -> 52 with zero exact regressions

- `0022-sibcall-default-off.patch` SHA-256: `b5749a54934b569190571ea5a867f20e6508e9e4ed349333fffc73449a0e2ea0`
  - cc1 (P1+P15+P22+P16+P19+P20+P21 stack): `ac549856a020b23b608052c3a6b66bfb52d47ccf3662d318ca725e5091993c98`
  - role: sibling-call expansion off by default (retail behavior);
    `-mastra-sibcall` re-enables it per unit
  - evidence: 547 measurable promoted sources -> 37 converted, 6 regressions
    (all genuine retail tail calls); wide 557-source sample exactness 196 -> 231
  - fixtures: `textbin/fun_001f6250`, `textbin/fun_00201f58`,
    `textbin/fun_0020d3b0`, `textbin/fun_00235840`, `textbin/memcard_init` on the
    default route; `core/set_image_buffer_flag` stays exact with `-mastra-sibcall`

- `0025-annul-dead-delay-slots.patch` SHA-256: `7ea7e0ecdb20ed4be7777eaada61299adb5e1a3a5563b2146b6b505fb1d59659`
  - cc1 (stack through P25): `4622bb1bd38a03dece9ee49cd2ccc3069c57aff690b32a8fcfdb66668cf00121`
  - role: opt-in `-mastra-annul-dead-slots`; annuls a branch whose
    delay slot writes the branch-tested register and that register is dead
    on the not-taken path (retail `bnezl v0,L; move v0,zero`)
  - default-neutral (wide sweep byte-identical with the flag off)
  - fixtures: `textbin/fun_0023d2d8`, `textbin/vo_buf_get_data` -> 100.0
  - rejected as a default: +2 / -9 narrowed, +2 / -29 blanket
