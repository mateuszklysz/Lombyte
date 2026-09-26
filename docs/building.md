> Moved verbatim from README.md when the front page was simplified.
> Paths, commands and links below are relative to the repository root, as they
> were in README.md; read them from the checkout root.

## Building

### 1. Prepare the build tools

The verified environment is Linux/WSL: the SN compiler is a Windows executable and must be runnable, so a plain Linux setup is not enough by itself.

Install Git, Make, Bash, Python 3 with virtual-environment support, and the following tools:

| Tool                                                | Required location or configuration                                                     |
| :-------------------------------------------------- | :------------------------------------------------------------------------------------- |
| EE-GCC `2.9-ee-991111-01`                           | `tools/compilers/ee-gcc2.9-991111-01/`                                                 |
| SN EE-GCC `2.95.2`                                  | `tools/compilers/ee-gcc-2.95.2/` (including `bin/ee-gcc.exe` and its supporting tools) |
| R5900 binutils                                      | `mips-ps2-decompals-*` executables; set `BINUTILS_ROOT` to their directory             |
| [objdiff CLI](https://github.com/encounter/objdiff) | `tools/objdiff/objdiff-cli`                                                            |
| Ninja and Python build dependencies                 | Installed into `.venv` below                                                           |

Compiler versions matter for matching. Preserve the directory layouts and executable permissions; toolchain binaries are not downloaded.

A few units were matched with an optional patched EE-GCC profile. `make elf` does not need it — those units fall back to the retail oracle — but install it to work on their C:

```sh
python3 scripts/build-patched-toolchain.py
export EE_GCC_PATCHED_ROOT="$PWD/tools/ee-gcc2.9-991111-01-patched"
```

See [docs/patched-toolchain.md](../docs/patched-toolchain.md).

From your checkout, for example `~/Lombyte`:

```sh
cd ~/Lombyte
python3 -m venv .venv
.venv/bin/python -m pip install -r requirements.txt

# Point this at your installed R5900 binutils.
export BINUTILS_ROOT="$HOME/tools/binutils-mips-ps2-decompals"
```

Use the versions in [requirements.txt](../requirements.txt); spimdisasm is pinned to match the expected disassembly.

### 2. Supply the original game files

Extract `SCUS_971.99` from the root of your USA disc image and place it at:

```text
config/us/SCUS_971.99
```

Verify it against the hash in [Supported version](#supported-version):

```sh
sha256sum config/us/SCUS_971.99
```

For an ISO rebuild, also place your original disc image at `dumps/game.iso` (create `dumps/` if needed). These inputs are ignored by Git.

### 3. Build the executable

```sh
make elf
```

The build stages the sources, splits the reference executable, prepares assembly-backed units, compiles and links the code, generates an objdiff report, and verifies the reconstructed executable against retail.

The default staging directory is `build/baseline` inside the checkout. **It is recreated on each run.** If the checkout is on a Windows-mounted drive (`/mnt/c/...`), set `BASELINE_ROOT` to a native Linux directory such as `$HOME/rnc-baseline` so the frozen 32-bit compiler works on a local filesystem.

| Output                   | Default location                                  |
| :----------------------- | :------------------------------------------------ |
| Reconstructed boot ELF   | `build/baseline/config/us/build/SCUS_971.99`      |
| Object comparison report | `build/baseline/config/us/report.json`            |

A successful run ends with:

```text
PASS: reconstructed boot ELF matches retail
baseline build OK
```

### 4. Rebuild a disc image

```sh
make iso
```

This rebuilds the executable, then patches it into a copy of the first `dumps/*.iso` found. Keep one input ISO in that directory to make selection unambiguous.

The output is written to:

```text
build/Ratchet & Clank (USA) - rebuilt.iso
```

The original disc image is preserved. With a byte-identical boot ELF, the rebuilt image matches your original.

<details>
<summary><strong>Build configuration</strong></summary>

The build and ISO scripts support these environment overrides. Use absolute paths for custom tool and staging locations.

| Variable              | Default / usage                                                          |
| :-------------------- | :----------------------------------------------------------------------- |
| `VENV`                | `.venv` in the checkout                                                  |
| `BASELINE_ROOT`       | `build/baseline` in the checkout; disposable staging directory           |
| `BINUTILS_ROOT`       | Set to the directory containing your `mips-ps2-decompals-*` tools        |
| `EE_GCC_PATCHED_ROOT` | Optional patched EE-GCC profile                                          |
| `COMPILER_ROOT`       | `tools/compilers` in the checkout                                        |
| `SN_TOOLCHAIN_ROOT`   | `tools/compilers/ee-gcc-2.95.2` in the checkout                          |

For example:

```sh
# Override only when the checkout is on a Windows-mounted drive.
export BASELINE_ROOT="$HOME/rnc-baseline"
export BINUTILS_ROOT="$HOME/tools/binutils-mips-ps2-decompals"
make elf
```

To patch an already-built ELF with explicit input and output paths:

```sh
python3 rebuild-iso.py \
  --iso dumps/game.iso \
  --elf "$BASELINE_ROOT/config/us/build/SCUS_971.99" \
  --out build/rebuilt.iso
```

</details>
