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

- `0038-unannul-redundant.patch` SHA-256: `563a644f5a0102ce4150ffb938db6a287d17eb5d47f638a0ccb49091dc1fe767`
  - cc1 (P26..P34 + 0036 + 0037 + 0038 stack): `6b66b17be24bff8c47dafad65432ec1575d32c804cbbb54cfe1b4a1f70bea805`
  - role: default: clear a spuriously-annulled branch (`beqzl` where retail
    keeps plain `beqz`) in the one narrow shape where `reorg.c`'s generic
    delay-slot filler picks the annulled form only because its liveness walk
    (`mark_target_live_regs`/`next_insn_no_annul`) treats the very next
    already-delay-filled branch as opaque and never sees that branch's own
    delay-slot write - a genuine blind spot confirmed present in genuine
    upstream FSF gcc-2.95.2 too, not something this project's own patches
    introduced (reproduced on the bare P1 baseline)
  - root cause found by runtime instrumentation (fprintf traces at every real
    `INSN_ANNULLED_BRANCH_P` assignment site in a rebuilt `cc1`), not static
    source reading - three earlier static theories about this exact mechanism
    were each disproven first; see `docs/PROJECT_STATUS.md` in the tools repo
    for the full trace
  - fixture: `textbin/fun_002071c0` -> 100.0. The compiler patch alone only
    narrows this unit's residual (91.111 -> 92.778%, zero movement on every
    other unit in the corpus); reaching exact also required an independent,
    unrelated paired source-shape fix on the same file (an early-return guard
    inverted to the project's established positive-guard pattern)
  - wide sweep 276 -> 277 exact (+1/0 regressions across all 557); joint gate
    55/58 unchanged
  - published via ASTRA 2026-09-20

- `0037-game-no-strict-aliasing.patch` SHA-256: `5c25409ae438dd09e8720c93a0c81898ac3001c30d3f9fe1c59b1ebbbeeed261`
  - cc1 (P26..P34 + 0036 + 0037 stack): `82b332bbd4512c0e7d85c75d8af7d9fef398578b1e68d4b700d2c244aeae4866`
  - role: game-only default: disable strict-aliasing-based optimization at
    `-O2` (matches SN/retail codegen for pointer-aliased loads/stores); scoped
    to the game compiler, not the SDK route
  - fixtures: `assembly/textbin/fun_001f6250`, `textbin/fun_001fe898`,
    `textbin/attach_manipulator`, `textbin/audio_dec_begin_put`,
    `textbin/fun_00233980`, `textbin/fun_0012ee08` -> 100.0
  - game-only route-aware battery: 175/213 -> 178/213 exact (+3/0); P37
    controls 55/58 (not a clean same-stack comparator against the historical
    52/58 receipt)
  - Path-A: all four compiled objects link byte-equal to their retail slices;
    full ELF gate remains blocked by the known missing-expected-object units
    `fun_00221968`/`fun_002267b8` (documented exception, not a compiler gap)
  - published via ASTRA 2026-09-20

- `0036-retire-frame-save-pref.patch` SHA-256: `0c0970ecc7e2ca5d18bc3c1e1609a17d3600b35511a400a11e54ea6d0dee7711`
  - cc1 (P26..P34 + 0036 stack): `5c1bf8e5bcf0c40d03149bc1b50fd470ff260054f192de4844e77e77637940ea`
  - role: retire the P26/P33 frame-store preference. With P29's call-clobber
    graph the preference is no longer needed: all six P26 fixtures stay exact
    without it, and removing it fixes the last blocked `$ra`-placement residual
  - fixture: `textbin/fun_00201128` -> 100.0 (the `$ra` save now follows the
    last argument captures, matching retail)
  - evidence: sched2 ready lists vs the SN oracle are identical at all 38
    cycles only after the removal (with P26/P33, t=6/t=7 differ); the deciding
    pairs (ra save 100 vs capture moves 10/12) are never directly compared by
    qsort, so pairwise predicates could not act
  - parity: wide 272 -> 273 (+1 / zero regressions across all 557); joint gate
    54/58 unchanged; installed production cc1 `5c1bf8e5bcf0c40d`
  - note: 0026/0033 remain in the stack history and are neutralized by 0036;
    `0035-extern-buffer-default` is not part of the production stack (P34 stays
    opt-in)

- `0035-extern-buffer-default.patch` SHA-256: `e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855`
  - cc1 (P26..P35 stack): `f920538211f2b03699b15e6f8c97e4cc302e1b556f39bd0d8488e0cf5fa2d476`
  - role: enable the P34 R5900/GAS extern buffering by default
  - fixtures: `textbin/fun_0021f8e8`, `textbin/snd_unk_function_0012eb00` -> 100.0
  - in-scope textbin: +2 / 0 (161/213 exact); the 8 all-557 sweep regressions
    are units owned by other routes (patched profile, padless assembler,
    native EE-GCC 2.9) and are unaffected in the real build
  - joint gate 54/58 unchanged


- `0034-r5900-extern-buffer-optin.patch` SHA-256: `085ac4b30bf79e56c9f51c58013ac22cd77b62456c8f6669e909bca5435088bc`
  - cc1 (P26..P34 stack): `ad58bb494426663dcf73317db34eaea91c33449039723be9bf2e905c2deb09ab`
  - role: opt-in R5900/GAS extern buffering (`-mastra-r5900-extern-buffer`):
    the body is buffered and the `.extern name,size` declarations of
    GP-eligible bare integer references are emitted in front of it, so GAS can
    pick the retail gp-relative form; `TARGET_FILE_SWITCHING` is untouched
  - default-neutral: flag off = 272 exact, zero diffs
  - flag on: +4/-8 on the corpus; the 2 in-scope conversions are
    `textbin/fun_0021f8e8`, `textbin/snd_unk_function_0012eb00`; all 8
    regressions are units owned by other routes (patched profile, padless
    assembler, non-textbin)


- `0033-ra-not-vs-nonframe.patch` SHA-256: `c399a2055c8a4b743b5b39a826bc72c29a1f0b7d552e98f627a34777042a52e1`
  - cc1 (P26..P33 stack): `ac97dd50a166706506047e3ff1beed084cd2c5f070564357884e5bc449517165`
  - role: the P26 frame-save preference no longer applies to the `$ra` save
    against non-frame instructions (its priority/depend-count order is kept,
    matching retail), while `$ra` vs other saves is unchanged
  - fixtures: `textbin/fun_002144d8`, `textbin/fun_00238520` -> 100.0
  - parity: wide 270 -> 272 (+2 / zero regressions); joint gate 54/58 unchanged


- `0032-anchor-all-pads.patch` SHA-256: `da022fae877139914004aefc9e20293b5e7bc2d5fbf6a173602ca2bbf8ffd8dc`
  - cc1 (P26..P32 stack): `bc32cb311c2908fdce2ef582a1741582aec130725c863c9d58800737f4cd6307`
  - role: place every pad NOP before the instruction preceding the branch so
    the delay-slot filler sees that instruction first (retail geometry: two
    pads before the branch, loop increment in the slot)
  - fixture: `textbin/fun_002172c0` -> 100.0
  - parity: wide 268 -> 270 (+2 / zero regressions); joint gate 54/58 unchanged


- `0031-annul-traced-comparison.patch` SHA-256: `f1b0c7b29178733ef9e9a0994efb3704d736f19b4bd322480b5d11d0ad67d60b`
  - cc1 (P26..P31 stack): `11cd3fac9a5bd1dad6edc57215a27f2d6ff028f3b923eea9913b4061b0f17e2f`
  - role: default branch-likely fallback for branches whose tested register was
    produced by an arithmetic comparison (`slt` etc.); uses the branch's own
    zero test, safe because not-taken of `ne dest,0` implies dest is zero
  - fixture: `textbin/fun_00220790` -> 100.0
  - parity: wide 268 -> 269 (+1 / zero regressions); joint gate 54/58 unchanged


- `0030-pad-before-preceding.patch` SHA-256: `69c094e45910293e0d05a11a8fd6818a5a871246b69136bd6fbddcd01b5bf148`
  - cc1 (P26+P27+P28+P29+P30 stack): `3fc3a8e6aa24a0c9a538dae5cc933b1e3ace737dfabd2115c2a08bbd39c7fcd8`
  - role: R5900 short-loop padding placement; a single pad NOP goes before the
    instruction preceding the branch so the delay-slot filler can place a
    useful instruction (movn) in the slot, with the NOP as fallback before the
    branch (retail layout)
  - fixtures: `textbin/fun_00215290`, `textbin/fun_00215300`,
    `textbin/fun_00215348` -> 100.0
  - in-scope textbin parity: +3 / 0 (155/213 exact); all-557 sweep 267 (the
    four regressions are sdk/* units owned by the other compiler);
    joint gate 54/58 unchanged


- `0029-call-clobber-pending.patch` SHA-256: `c3031b4a0c88a03b19f82f74feb31455c5ee86f06f538ad869fbf9cf734f2af0`
  - cc1 (P26+P28+P29 stack): `864f7d4e7fa77d2fba88f84831e804ad29b807a8439ff0d93436514cb3ae4b53`
  - role: port the GCC 2.95.2 call-clobber dependency analysis (pending
    clobbers instead of `reg_pending_sets`; keep `reg_last_uses`)
  - effect: the a0/a1 argument-setup order, the `sq ra`/`sq s0` save order and
    several scheduler tie-break classes now match SN by default
  - wide promoted parity: 237 -> 266 exact (+29 / zero regressions);
    joint gate 52 -> 54/58
  - fixtures: fun_001f6940, fun_001f69d0, fun_001f6a60, fun_001f6af0,
    fun_001f6b88, fun_001f6c20, fun_0021eaf0, fun_0021fd78, fun_00221a88,
    fun_00222f58, fun_0023aa68, fun_0023bf18, fun_0023bb40, fun_0023bbb0


- `0028-annul-ne-zero-default.patch` SHA-256: `037ca6b28fdd05e81a7bf37fcbe642068f633d3aae315b77f72959c0939690e4`
  - cc1 (P26+P27+P28 stack): `d68136c9f12b886e0da0c5d4d7fa36a23b622fa569989b17a50e3ec6e7b530fb`
  - role: default branch-likely for the late fallback; the P25 pass now runs
    without a flag and only for the SN shape (NE zero-test with a const0
    delay-slot write of the tested register)
  - fixtures: `textbin/fun_0023d2d8`, `textbin/vo_buf_get_data` -> 100.0
  - wide promoted parity: 237 -> 239 exact (+2 / zero regressions);
    joint gate 52/58 unchanged
  - counterexamples kept: `fun_002212b8` (EQ zero-clear, retail plain),
    `fun_00215b10` (register-vs-register `bne`, retail plain)


- `0027-gas-inline-float-literals.patch` SHA-256: `0272bee08529c415490f3f565f5a38846a98872fb972c81f8f17f07682605682`
  - as (gas, with P20): `af95ed125045dcc0dd3549b25e2d73f44ed03b283d4129d09979e879eab34fff`
  - role: default assembler policy; synthesize `li.s` constants inline
    (lui/ori/mtc1) instead of pooling them in `.lit4`, matching the retail SN
    R5900 assembler; `li.d`/.lit8 pooling untouched
  - fixtures: `textbin/fun_00206e18`, `textbin/fun_00207300`,
    `textbin/fun_00213308`, `textbin/fun_002133d0` -> 100.0
  - wide promoted parity: 233 -> 237 exact (+4, zero regressions) on the
    production route; joint gate 52/58 unchanged


- `0026-frame-save-first.patch` SHA-256: `9d42deb1f3e92ce6ae8f46ae1672a5c03ca93f9fd80d3f4f664461c2c03a12de`
  - cc1 (P1+P15+P22+P16+P19+P21+P25+P26 stack): `9ea59250181268d93c75de980c04679e3ae529a262db820408836d4c4f35df6f`
  - role: default scheduler order; prefer frame-related stores (prologue saves)
    in `rank_for_schedule`, reproducing retail's save/move interleaving in the
    prologue (the previous chain let the depend-count heuristic rank the
    anti-dependent parameter move ahead of the next save)
  - fixtures: `textbin/fun_001f6530`, `textbin/fun_001f65b0`,
    `textbin/fun_001f6fd0`, `textbin/fun_001f7580`, `textbin/fun_001f75f0`,
    `textbin/fun_00214530` -> 100.0
  - wide promoted parity: 227 -> 233 exact (+6, zero regressions) on the
    production route (ELF as); 231 -> 237 through the ASTRA wrapper route
  - joint gate: 52/58 controls, zero change
  - rejected variants (all measured): remove depend_count 15/28; anti-dep
    class 2 1/7; flip sign 7/47; fewer true deps 9/65; prefer any memory insn
    5/12; prefer all frame-related insns 6/1


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
