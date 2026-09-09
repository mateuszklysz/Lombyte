# R&CRE — Ratchet & Clank (PS2, USA) matching decompilation
#
# The boot ELF is the only recompiled piece of the disc. It rebuilds
# byte-for-byte (full-ELF SHA gate), so `make iso` patches a rebuilt ELF into
# a copy of your legally owned disc image, preserving the ~4.2 GB of raw
# LBA-addressed game data untouched.
#
# Setup:
#   1. Drop a legally owned disc dump into dumps/ (e.g. dumps/game.iso).
#   2. Install the build prerequisites (see README.md): EE-GCC compilers
#      under tools/compilers/, ninja under tools/ninja/, objdiff-cli under
#      tools/objdiff/, and a Python venv with splat + pyyaml.
#   3. Run `make` below.

.PHONY: elf iso clean-iso

elf: ## Rebuild the boot ELF byte-for-byte (full baseline + SHA gate)
	./verify-baseline.sh
	@ls -l build/SCUS_971.99 2>/dev/null || echo "built ELF found in the baseline workspace (see verify-baseline.sh output)"

iso: elf ## Patch the rebuilt boot ELF into a copy of the disc image
	@iso="$$(ls dumps/*.iso 2>/dev/null | head -1)"; \
	test -n "$$iso" || (echo "no dumps/*.iso found; place a legally owned dump in dumps/"; exit 1); \
	python3 rebuild-iso.py --iso "$$iso"

clean-iso:
	@rm -f "build/Ratchet & Clank (USA) - rebuilt.iso"