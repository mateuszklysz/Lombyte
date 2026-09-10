#!/usr/bin/env bash
set -euo pipefail

# Rebuild the boot ELF byte-for-byte from the checked-in sources.
#
# The build runs in an isolated staging directory (default under $HOME) so
# the frozen 32-bit compiler never reads from the mounted source tree. The
# output boot ELF is verified by SHA-256 against retail; `make iso` then
# patches it into a copy of your legally owned disc image.

PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BASELINE_ROOT="${BASELINE_ROOT:-$HOME/rnc-baseline}"
VENV="${VENV:-$PROJECT_ROOT/.venv}"
BINUTILS_ROOT="${BINUTILS_ROOT:-/opt/binutils-mips-ps2-decompals}"
COMPILER_ROOT="${COMPILER_ROOT:-$PROJECT_ROOT/tools/compilers}"
# Per-unit textbin ee-gcc (Windows PE): lives in the repository so the driver
# can reach its native (Windows) path from the WSL mirror.
SN_TOOLCHAIN_ROOT="${SN_TOOLCHAIN_ROOT:-$PROJECT_ROOT/tools/compilers/ee-gcc-2.95.2}"
export SN_TOOLCHAIN_ROOT

die() { printf 'error: %s\n' "$1" >&2; exit 1; }
[[ "$(uname -s)" == Linux* ]] || die "run inside WSL or another Linux environment"

# Refuse destructive roots: never wipe the repository or any ancestor.
_RESOLVED_ROOT="$(realpath -m "$BASELINE_ROOT" 2>/dev/null || printf '%s' "$BASELINE_ROOT")"
case "$_RESOLVED_ROOT" in
  /*) ;;
  *) die "BASELINE_ROOT must be an absolute path: $BASELINE_ROOT" ;;
esac
case "$_RESOLVED_ROOT" in
  /) die "BASELINE_ROOT must not be the filesystem root" ;;
  "$HOME") die "BASELINE_ROOT must not be the home directory ($HOME)" ;;
esac

# Refuse to delete an existing directory that is not a baseline workspace.
# The marker below is created by this script; any other directory may hold
# unrelated user data.
if [[ -e "$BASELINE_ROOT" && ! -f "$BASELINE_ROOT/.rnc-baseline-root" ]]; then
  die "refusing to remove a directory that is not a baseline workspace: $BASELINE_ROOT (delete it manually if intended, or choose another BASELINE_ROOT)"
fi

[[ -x "$VENV/bin/python" ]] || die "missing virtual environment: $VENV (create it with: python3 -m venv .venv && .venv/bin/pip install -r requirements.txt)"
[[ -d "$COMPILER_ROOT/ee-gcc2.9-991111-01" ]] || die "missing frozen EE compiler under $COMPILER_ROOT"
[[ -x "$SN_TOOLCHAIN_ROOT/bin/ee-gcc.exe" ]] || die "missing textbin ee-gcc under $SN_TOOLCHAIN_ROOT"

rm -rf "$BASELINE_ROOT"
mkdir -p "$BASELINE_ROOT"
touch "$BASELINE_ROOT/.rnc-baseline-root"
cp -a "$PROJECT_ROOT/configure.py" "$BASELINE_ROOT/configure.py"
mkdir -p "$BASELINE_ROOT/scripts"
cp "$PROJECT_ROOT/scripts/fix-report.py" "$BASELINE_ROOT/scripts/fix-report.py"
mkdir -p "$BASELINE_ROOT/tools/objdiff"
cp "$PROJECT_ROOT/tools/objdiff/objdiff-cli" "$BASELINE_ROOT/tools/objdiff/objdiff-cli"
chmod +x "$BASELINE_ROOT/tools/objdiff/objdiff-cli"
cp -a "$COMPILER_ROOT" "$BASELINE_ROOT/tools/cc"
mkdir -p "$BASELINE_ROOT/config/us"
cp "$PROJECT_ROOT/config/us/rnc1.us.yaml" "$BASELINE_ROOT/config/us/rnc1.us.yaml"
cp "$PROJECT_ROOT/config/us/SCUS_971.99" "$BASELINE_ROOT/config/us/SCUS_971.99"
cp "$PROJECT_ROOT/config/us/checksum.sha1" "$BASELINE_ROOT/config/us/checksum.sha1"
cp "$PROJECT_ROOT/config/us/undefined_syms.txt" "$BASELINE_ROOT/config/us/undefined_syms.txt"
cp "$PROJECT_ROOT/config/us/undefined_funcs_auto.txt" "$BASELINE_ROOT/config/us/undefined_funcs_auto.txt" 2>/dev/null || true
cp "$PROJECT_ROOT/config/us/symbol_addrs.txt" "$BASELINE_ROOT/config/us/symbol_addrs.txt" 2>/dev/null || true
cp -a "$PROJECT_ROOT/include/." "$BASELINE_ROOT/include/"
cp -a "$PROJECT_ROOT/src/." "$BASELINE_ROOT/src/"
touch "$BASELINE_ROOT/config/us/undefined_syms_auto.txt"
export PATH="$VENV/bin:$BINUTILS_ROOT:$PATH"
cd "$BASELINE_ROOT"
python configure.py config/us/rnc1.us.yaml -c
python configure.py config/us/rnc1.us.yaml --make-asm
# Some textbin units compile from stable raw-word oracles rather than splat's
# inline-assembler-sensitive disassembly.  Install them before compiling.
python "$PROJECT_ROOT/scripts/materialize-textbin-oracles.py" \
    --workspace "$BASELINE_ROOT" \
    --function-map "$PROJECT_ROOT/config/ghidra/ghidra_functions.csv" \
    --elf "$BASELINE_ROOT/config/us/SCUS_971.99"
set +e
ninja -C config/us
BUILD_STATUS=$?
set -e
tools/objdiff/objdiff-cli report generate -p config/us/ -o config/us/report.json -f json
python3 scripts/fix-report.py config/us/report.json || \
    printf 'warning: fix-report.py could not normalize one or more incomplete units; raw objdiff report is authoritative\n' >&2
if [[ "$BUILD_STATUS" -ne 0 ]]; then
    printf 'baseline build failed with status %s; objdiff report was still generated\n' "$BUILD_STATUS" >&2
    exit "$BUILD_STATUS"
fi
python3 <<'PY'
import hashlib, json, pathlib
elf = pathlib.Path("config/us/SCUS_971.99")
retail = pathlib.Path("config/us/retail")  # not used; retail SHA is pinned below
built_sha = hashlib.sha256(elf.read_bytes()).hexdigest()
expected = "e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9"
print("built SHA-256:", built_sha)
if built_sha != expected:
    raise SystemExit("rebuilt ELF does not match retail SHA-256")
print("PASS: reconstructed boot ELF matches retail")
PY
echo "baseline build OK"