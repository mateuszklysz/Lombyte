# Patched EE-GCC 2.9-ee-991111-01
Source patch for the optional code-generation profile used by a small set of
units in `src/` (see [`docs/patched-toolchain.md`](../../docs/patched-toolchain.md)).
`make elf` works without the profile: those units are rebuilt from the retail
oracle and the full-image gate still passes.
## Base
- [`patched-ee-gcc.patch`](patched-ee-gcc.patch), `git apply`-able at the
  source root.
- Base: <https://github.com/SSXModding/ps2-ee-toolchain> at revision
  `b595ded` (`Init (EE-GCC 2.9-ee-991111, IOP GCC 2.8.1)`, the public Sony
  EE-GCC 2.9 snapshot).
- Patch SHA-256:
  `d1ec36b24eea0d7fbf854690d144a1f19c75ef54cebe1eff6e2ec64a5b863163`.
## Contents
| File                                                                   | Change                                                                                              |
| :--------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------- |
| `ee/gcc/c-parse.in`                                                    | typed midrule actions (`$<ttype>$`) so the 991111 grammar parses with bison 1.28 on modern hosts    |
| `ee/gcc/config/mips/mips.h`                                            | opt-in `-mastra-*` target options (all inert unless selected)                                       |
| `ee/gcc/config/mips/mips.c`                                            | R5900 `sq`/`lq` callee saves, volatile AT-split policy, call-argument reversal and reload/CSE hooks |
| `ee/gcc/config/mips/mips.md`                                           | `mulsi3` falls through to classic `mult`/`mflo`                                                     |
| `ee/gcc/calls.c`, `ee/gcc/cse.c`, `ee/gcc/reload1.c`, `ee/gcc/reorg.c` | ASTRA experiment blocks gated by the opt-in flags                                                   |
124 inserted and 13 deleted lines across 8 files.
## Build
```sh
python3 scripts/build-patched-toolchain.py
export HIMURO_PATCHED_ROOT="$PWD/tools/ee-gcc2.9-991111-01-patched"
```
The script clones the pinned base revision, applies this patch, builds
`cc1`/`cpp`/`xgcc`, and installs them with a `provenance.json`. Requirements:
a 32-bit host build environment (`gcc -m32`), GNU make, git; the script
downloads and builds bison 1.28 when needed.
## License
The patch modifies GPLv2-licensed GCC sources and is distributed under the GNU
GPL v2 or later, like the base. See
[`licenses/GPL-2.0.txt`](../../licenses/GPL-2.0.txt). Built binaries are not
distributed with this repository.
