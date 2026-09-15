# Patched EE-GCC profile (optional)
A small set of units in `src/` was matched with a locally built patched
version of the frozen EE-GCC 2.9-ee-991111-01 compiler. This profile is
**optional**: `make elf` works without it and still reproduces the retail
executable byte-for-byte. Without the profile those units are rebuilt from the
retail oracle instead of their C, so their matching C is not compiled or
verified in that build.
Build the profile when you want to compile and verify those units like any
other unit.
## What it is
- Base: the public Sony snapshot
  [`SSXModding/ps2-ee-toolchain`](https://github.com/SSXModding/ps2-ee-toolchain)
  at revision `b595ded`.
- Modification:
  [`patches/ee-gcc-2.9-991111-01/patched-ee-gcc.patch`](../patches/ee-gcc-2.9-991111-01/patched-ee-gcc.patch)
  (~124 inserted and 13 deleted lines across 8 files). It adds opt-in
  `-mastra-*` switches (inert unless selected), R5900 `sq`/`lq` callee saves,
  classic `mult`/`mflo` code generation, and the volatile/call-argument
  policies used by the units.
- Produced binaries: `cc1`, `cpp`, `xgcc` (about 3.2 MB total). The driver is
  used with `-S` and the assembler from the SN toolchain, so no linker or
  `gas` build is needed.
Check `HIMURO_PATCHED_UNITS` in [`configure.py`](../configure.py) for the
current unit list. A workspace built without the profile records it in
`config/us/oracle-fallback-units.json`.
## Build it
Requirements:
- Linux (WSL works) with 32-bit host build support: `gcc -m32` and 32-bit
  headers (`gcc-multilib` on Debian/Ubuntu).
- `git`, GNU make, and GNU bison 1.28. The script downloads and builds bison
  1.28 itself when no compatible bison is on `PATH` (a modern bison cannot
  parse the 991111 grammar).
```sh
python3 scripts/build-patched-toolchain.py
export HIMURO_PATCHED_ROOT="$PWD/tools/ee-gcc2.9-991111-01-patched"
make elf
```
The script clones the public snapshot at the pinned revision, verifies and
applies the patch, builds the three binaries into
`tools/ee-gcc2.9-991111-01-patched/`, runs a compile smoke test, and writes
`provenance.json` with the hashes.
Useful options:
| Option             | Purpose                                                          |
| :----------------- | :--------------------------------------------------------------- |
| `--source-dir DIR` | reuse an existing `ps2-ee-toolchain` checkout (offline)          |
| `--bison PATH`     | use an existing bison 1.2x binary                                |
| `--work DIR`       | build directory (default `build/toolchain-build`)                |
| `--check`          | verify the pinned revision and that the patch applies, then stop |
| `--verify-hashes`  | require the reference hashes (see below)                         |
## Verification and hashes
`provenance.json` records the built hashes. The reference hashes below identify
the maintainer's build of this profile:
```text
cc1   a1f7ac64514a5cdf772b349904f8caf100696c6aca8b736786dfff12b3bf4e3d
cpp   1f3b11af4a696d01180c3bf6a9dcd0ab3992ac4d57d2eb1be36d6743cdf3b5b9
xgcc  56bb73b37a91882c3038c61ccea5c3dd31b9562d5a8634dcbd7c7dbbc32ca6b1
```
GCC embeds build and source paths in its binaries, so a rebuild on another
machine or in another directory produces different hashes while behaving the
same. Treat the reference hashes as provenance for the maintainer's build, not
as a requirement; the script checks that the compiler runs and compiles a test
file. With the profile installed, the full-image gate in `make elf` is the
authoritative verification of the units that use it.
## Without the profile
When `HIMURO_PATCHED_ROOT` is not set (or does not contain `xgcc`),
`configure.py` routes those units to a rule that copies their retail-oracle
expected object, and writes `config/us/oracle-fallback-units.json`. C-level
symbol aliases declared by those units are provided to the linker through the
generated `config/us/oracle-aliases.txt` (only when nothing else defines
them). The link and the full-image SHA gate are unaffected.
`scripts/check-unit.py` refuses to report a score for such a unit and points
back here, so oracle bytes are never mistaken for a C match.
## License
The patch and the built binaries are derived from the GPLv2 EE-GCC source and
are distributed under the GNU GPL v2 or later; see
[`licenses/GPL-2.0.txt`](../licenses/GPL-2.0.txt). The built binaries are not
distributed with this repository.
