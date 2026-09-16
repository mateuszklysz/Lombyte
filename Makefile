# R&CRE — Ratchet & Clank (PS2, USA) matching decompilation
#
# Only the boot ELF is recompiled, and it must match retail byte-for-byte
# (full-ELF SHA gate). `make iso` patches it into a copy of your legally owned
# disc image, leaving the raw game data untouched.
#
# Setup: put a legally owned disc dump in dumps/ (e.g. dumps/game.iso) and
# install the prerequisites (see README.md). Then run `make`.

.PHONY: elf iso clean-iso check

check: ## Run the public CI checks locally (tests, script parse, source headers)
	python3 scripts/test_public_tools.py -v
	python3 -m py_compile scripts/*.py
	@if git rev-parse --git-dir >/dev/null 2>&1; then \
	  base=$$(git rev-parse HEAD^ 2>/dev/null || true); \
	  files=$$( { if [ -n "$$base" ]; then git diff --name-only --diff-filter=ACMR "$$base" HEAD -- 'src/**/*.c'; fi; \
	             git diff --name-only --diff-filter=ACMR HEAD -- 'src/**/*.c'; } | sort -u); \
	  if [ -z "$$files" ]; then echo "header check: no changed src/*.c files"; \
	  else echo "header check: $$(printf '%s\n' "$$files" | wc -l) file(s)"; \
	    python3 scripts/stamp_source_header.py --check --normalize $$files; fi; \
	else echo "header check: not a git checkout, skipped"; fi

elf: ## Rebuild the boot ELF byte-for-byte (full baseline + SHA gate)
	./verify-baseline.sh
	@ls -l build/SCUS_971.99 2>/dev/null || echo "built ELF found in the baseline workspace (see verify-baseline.sh output)"

iso: elf ## Patch the rebuilt boot ELF into a copy of the disc image
	@iso="$$(ls dumps/*.iso 2>/dev/null | head -1)"; \
	test -n "$$iso" || (echo "no dumps/*.iso found; place a legally owned dump in dumps/"; exit 1); \
	python3 rebuild-iso.py --iso "$$iso"

clean-iso:
	@rm -f "build/Ratchet & Clank (USA) - rebuilt.iso"
