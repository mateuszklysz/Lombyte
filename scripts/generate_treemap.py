#!/usr/bin/env python3
"""Generate decomp_map.svg - a treemap of decompilation progress.

What the map shows
  Every configured C unit from the linker config
  (``config/us/rnc1.us.yaml`` rows ``- [0xADDR, c, owner]``) is one tile whose
  area is proportional to the unit's executable byte size (the distance to the
  next configured row).

    * bolt orange (#dd8b30) - unit is matching C: either a promoted path (not
      under ``src/assembly/``) with a source file in ``src/``, or a legacy
      exact unit listed in ``config/us/unit_categories.json``. Promotions retag
      the linker config, so the map keeps up automatically.
    * chrome (#c3cbd8) - intentional low-level asm: hand-written SIMD/VU0/MMI
      code that is kept as assembly and excluded from the C goal, listed in
      ``config/us/unit_categories.json``.
    * dark plate (#2e3644) - C still pending: assembly-backed units whose
      readable C is not byte-exact yet.

  The palette follows the *Ratchet & Clank* (2002) logo: Ratchet's bolt
  orange, Clank's chrome, and the dark riveted plate behind them.

  With ``--workspace`` the map also reports C_FUZZY over the same recoverable
  units as C_EXACT: matching units count 100%, every pending unit contributes
  its measured objdiff ``.text`` similarity, weighted by unit bytes.  The
  scores come from ``scripts/list-functions.py --score``.

  Units below ``--min-bytes`` are grouped per class so a compact map stays
  readable; the default (0) draws every configured C unit as its own tile and
  relies on the tall default canvas for label room.

Layout
  The treemap is laid out with the ``squarify`` package when it is installed
  (``pip install squarify``), otherwise with the bundled equivalent
  implementation. The tile order is stable across runs, so a unit's rectangle
  keeps its place and flips grey -> green when it is promoted.

Usage
  python3 scripts/generate_treemap.py
  python3 scripts/generate_treemap.py --min-bytes 512 --output assets/decomp_map.svg
  python3 scripts/generate_treemap.py --width 800 --height 400   # compact variant
"""

from __future__ import annotations

import argparse
import datetime as dt
import html
import json
import os
import re
import subprocess
from pathlib import Path
import sys

# Ratchet & Clank (2002) logo palette: Ratchet's bolt orange, Clank's chrome,
# and the dark riveted plate behind them. The canvas stays GitHub dark.
ORANGE = "#dd8b30"
CHROME = "#c3cbd8"
PLATE = "#2e3644"
BACKGROUND = "#0d1117"
STROKE = "#0d1117"
TEXT = "#e8edf5"
MUTED = "#a6adc8"
FONT = "ui-sans-serif, -apple-system, 'Segoe UI', Roboto, Helvetica, Arial, sans-serif"

# 12x12 hex-nut "bolt" mark (the series' currency) used as the title glyph.
BOLT_PATH = (
    "M6 0.7 L11.3 3.5 L11.3 8.5 L6 11.3 L0.7 8.5 L0.7 3.5 Z "
    "M3.8 6 A2.2 2.2 0 1 1 8.2 6 A2.2 2.2 0 1 1 3.8 6 Z"
)
# Tile label inks: dark ink on the bright orange and chrome plates, light ink
# on the dark pending plate.
LABEL_FILLS = {
    "exact": ("#2b1604", "#5d3512"),
    "asm": ("#10161e", "#4d5768"),
    "pending": (TEXT, MUTED),
}
# Flat plate fills per class; a single soft sheen is laid over the whole map
# instead of repeating a gradient inside every tile.
TILE_FILLS = {"exact": ORANGE, "asm": CHROME, "pending": PLATE}

ROW_RE = re.compile(
    r"^\s*-\s*\[(0x[0-9A-Fa-f]+)\s*,\s*([A-Za-z_][A-Za-z0-9_]*)\s*,\s*([^\]]+?)\s*\]\s*$"
)

# --------------------------------------------------------------------------
# Display names: presentation-only tile labels.  Canonical identity (the unit
# path and its FUN_xxxx symbol) never changes; every renderer keeps it in the
# tile tooltip.  Sources, in priority order:
#   1. the first function name in the unit's C source,
#   2. ``config/us/recovered_names.json`` entries with ``match == "full"``
#      whose recovered function starts exactly at the unit start,
#   3. no evidence -> the unit basename (address name).
# --------------------------------------------------------------------------
FUNC_DEF_RE = re.compile(
    r"(?m)^[A-Za-z_][A-Za-z0-9_ \t\*]*?\b([A-Za-z_]\w*)\s*\([^;{]*\)\s*\{"
)
INCLUDE_ASM_RE = re.compile(r'INCLUDE_ASM\s*\(\s*"[^"]*"\s*,\s*([A-Za-z_]\w*)\s*\)')
ADDR_SYMBOL_RE = re.compile(r"^(?:FUN_|func_|D_|DAT_)[0-9A-Fa-f]+$")


def demangle_cfront(name: str) -> str:
    """`videoDecAbort__FP8VideoDec` -> `videoDecAbort` (display only)."""
    stem = name.split("__F", 1)[0]
    return stem if stem[:1].isalpha() else name


def load_recovered_full(config_dir: Path) -> dict[str, str]:
    """owner -> recovered name for `full` matches starting at the unit start."""
    path = config_dir / "recovered_names.json"
    if not path.is_file():
        return {}
    try:
        payload = json.loads(path.read_text())
    except (OSError, json.JSONDecodeError):
        return {}
    names: dict[str, str] = {}
    for entry in payload.get("symbols", []):
        if entry.get("match") != "full":
            continue
        unit = entry.get("unit")
        name = str(entry.get("name") or "")
        if not unit or not name:
            continue
        address, unit_address = entry.get("address"), entry.get("unit_address")
        if address and unit_address and address != unit_address:
            continue
        # The yaml owner and the recovered table agree on one of these forms.
        names.setdefault(unit, name)
        names.setdefault(unit.removeprefix("assembly/"), name)
    return names


def load_overlay_names(repo: Path) -> dict[int, str]:
    """boot address -> recovered name from the overlay name-evidence tables.

    The overlay maps carry exact boot-match evidence (``name_evidence`` with
    ``boot_addr``/``words``); a unit that starts at ``boot_addr`` is the same
    function (or its beginning), so the name is display-safe.
    """
    names: dict[int, str] = {}
    names_dir = repo / "config" / "overlays" / "us" / "names"
    if not names_dir.is_dir():
        return names
    for path in sorted(names_dir.glob("level-*.json")):
        try:
            payload = json.loads(path.read_text())
        except (OSError, json.JSONDecodeError):
            continue
        for entry in payload.get("functions", []):
            evidence = entry.get("name_evidence") or {}
            name = evidence.get("name")
            boot = evidence.get("boot_addr")
            if name and isinstance(boot, int):
                names.setdefault(boot, str(name))
    return names


def source_symbol(source: Path) -> str | None:
    """First function name (or INCLUDE_ASM symbol) in a unit source, or None."""
    text = source.read_text(errors="replace")
    match = FUNC_DEF_RE.search(text)
    if match:
        return match.group(1)
    match = INCLUDE_ASM_RE.search(text)
    return match.group(1) if match else None


def display_for(owner: str, source: Path, recovered: dict[str, str]) -> str | None:
    if source.is_file():
        name = source_symbol(source)
        if name and not ADDR_SYMBOL_RE.match(name):
            return demangle_cfront(name)
    name = recovered.get(owner) or recovered.get(owner.removeprefix("assembly/"))
    return demangle_cfront(name) if name else None


def tile_tooltip(tile) -> str:
    if tile.get("group"):
        return (
            f"{tile['count']} units < {tile.get('threshold', 0)} B ({tile['category']})"
        )
    parts = []
    if tile.get("display"):
        parts.append(tile["display"])
    parts.append(tile["owner"])
    parts.append(f"0x{tile['address']:X}")
    parts.append(f"{tile['size']} B")
    label = {"exact": "exact C", "asm": "intentional asm", "pending": "pending C"}[
        tile["category"]
    ]
    if tile["category"] == "pending" and tile.get("score") is not None:
        label = f"{label} · {float(tile['score']):.2f}%"
    parts.append(label)
    return " · ".join(parts)


# --------------------------------------------------------------------------
# squarify: use the package when available, otherwise the same algorithm
# bundled here (MIT, https://github.com/laserson/squarify).
# --------------------------------------------------------------------------
def _layoutrow(sizes, x, y, dx, dy):
    covered = sum(sizes)
    width = covered / dy if dy else 0.0
    rects = []
    for size in sizes:
        height = size / width if width else 0.0
        rects.append({"x": x, "y": y, "dx": width, "dy": height})
        y += height
    return rects


def _layoutcol(sizes, x, y, dx, dy):
    covered = sum(sizes)
    height = covered / dx if dx else 0.0
    rects = []
    for size in sizes:
        width = size / height if height else 0.0
        rects.append({"x": x, "y": y, "dx": width, "dy": height})
        x += width
    return rects


def _layout(sizes, x, y, dx, dy):
    return (
        _layoutrow(sizes, x, y, dx, dy) if dx >= dy else _layoutcol(sizes, x, y, dx, dy)
    )


def _leftover(sizes, x, y, dx, dy):
    if dx >= dy:
        width = sum(sizes) / dy if dy else 0.0
        return (x + width, y, dx - width, dy)
    height = sum(sizes) / dx if dx else 0.0
    return (x, y + height, dx, dy - height)


def _worst_ratio(sizes, x, y, dx, dy):
    ratios = []
    for rect in _layout(sizes, x, y, dx, dy):
        if rect["dx"] <= 0 or rect["dy"] <= 0:
            continue
        ratios.append(max(rect["dx"] / rect["dy"], rect["dy"] / rect["dx"]))
    return max(ratios) if ratios else float("inf")


def _squarify(sizes, x, y, dx, dy):
    if not sizes:
        return []
    if len(sizes) == 1:
        return _layout(sizes, x, y, dx, dy)
    index = 1
    while index < len(sizes) and _worst_ratio(
        sizes[:index], x, y, dx, dy
    ) >= _worst_ratio(sizes[: index + 1], x, y, dx, dy):
        index += 1
    current, remaining = sizes[:index], sizes[index:]
    leftover = _leftover(current, x, y, dx, dy)
    return _layout(current, x, y, dx, dy) + _squarify(remaining, *leftover)


try:  # pragma: no cover - exercised by whichever branch is installed
    import squarify as _squarify_pkg
except ImportError:  # pragma: no cover
    _squarify_pkg = None


def treemap(sizes, x, y, dx, dy):
    sizes = [float(size) for size in sizes]
    total = sum(sizes)
    if total <= 0 or dx <= 0 or dy <= 0:
        return []
    # squarify (both the package and the bundled copy) expects areas, not raw
    # byte weights.
    normalized = [size * dx * dy / total for size in sizes]
    if _squarify_pkg is not None:
        return _squarify_pkg.squarify(normalized, x, y, dx, dy)
    return _squarify(normalized, x, y, dx, dy)


# --------------------------------------------------------------------------
# Data
# --------------------------------------------------------------------------
def parse_units(config: Path):
    """Configured C units as (owner, address, size) sorted by address."""
    rows = []
    for line in config.read_text().splitlines():
        match = ROW_RE.match(line)
        if match:
            rows.append((int(match.group(1), 16), match.group(2), match.group(3)))
    rows.sort(key=lambda row: row[0])
    units = []
    for index, (address, kind, owner) in enumerate(rows):
        if kind != "c":
            continue
        end = rows[index + 1][0] if index + 1 < len(rows) else address
        size = end - address
        if size > 0:
            units.append((owner, address, size))
    return units


def load_categories(path: Path | None):
    """Return (exact under assembly, intentional asm) name sets."""
    if path is None or not path.is_file():
        return set(), set()
    try:
        payload = json.loads(path.read_text())
    except (OSError, json.JSONDecodeError):
        return set(), set()
    return (
        set(payload.get("exact_under_assembly", [])),
        set(payload.get("intentional_asm", [])),
    )


def build_units(repo: Path, config: Path, categories: Path | None):
    exact_assembly, intentional = load_categories(categories)
    recovered = load_recovered_full(config.parent)
    overlay = load_overlay_names(repo)
    result = []
    for owner, address, size in parse_units(config):
        source = repo / "src" / f"{owner}.c"
        if owner in exact_assembly or (
            not owner.startswith("assembly/") and source.is_file()
        ):
            category = "exact"
        elif owner in intentional:
            category = "asm"
        else:
            category = "pending"
        result.append(
            {
                "owner": owner,
                "address": address,
                "size": size,
                "category": category,
                "display": display_for(owner, source, recovered)
                or (demangle_cfront(overlay[address]) if address in overlay else None),
            }
        )
    return result


# --------------------------------------------------------------------------
# C_FUZZY: byte-weighted similarity over the C_EXACT denominator
# --------------------------------------------------------------------------
def fuzzy_progress(units, scores) -> float:
    """Byte-weighted mean similarity, in percent, of the recoverable units.

    C_EXACT counts a unit 0 or 100; C_FUZZY replaces the pending units with
    their measured ``.text`` similarity, weighted by unit bytes.  Intentional
    asm stays out of numerator and denominator, exactly like C_EXACT, and
    unmeasured pending units contribute 0.
    """
    recoverable = sum(unit["size"] for unit in units if unit["category"] != "asm")
    if not recoverable:
        return 0.0
    similar = 0.0
    for unit in units:
        if unit["category"] == "exact":
            similarity = 100.0
        elif unit["category"] == "pending":
            similarity = min(100.0, max(0.0, float(scores.get(unit["owner"], 0.0))))
        else:
            continue
        similar += unit["size"] * similarity
    return similar / recoverable


def measure_scores(workspace: Path, scores_out: Path) -> tuple[dict[str, float], Path] | None:
    """Per-unit similarity from the work-list scorer plus its persisted index.

    Delegates to ``scripts/list-functions.py --score`` so C_FUZZY reuses the
    same objdiff measurement as the contribution tooling; ``--out`` makes that
    same pass write the ``rnc-pending-similarity-v1`` index next to the
    measured objects.
    """
    script = Path(__file__).resolve().parent / "list-functions.py"
    process = subprocess.run(
        [
            sys.executable,
            str(script),
            "--score",
            "--limit",
            "0",
            "--json",
            "--out",
            str(scores_out),
            "--workspace",
            str(workspace),
        ],
        stdout=subprocess.PIPE,
        text=True,
    )
    if process.returncode != 0:
        print("scripts/list-functions.py --score failed", file=sys.stderr)
        return None
    try:
        payload = json.loads(process.stdout)
    except json.JSONDecodeError:
        print("list-functions.py --score returned no usable JSON", file=sys.stderr)
        return None
    scores = {
        str(item["unit"]): float(item["score"])
        for item in payload
        if item.get("unit") and item.get("score") is not None
    }
    return scores, Path(scores_out)


# --------------------------------------------------------------------------
# SVG
# --------------------------------------------------------------------------
def esc(value) -> str:
    return html.escape(str(value), quote=True)


def base_name(tile) -> str:
    if tile.get("group"):
        return f"{tile['count']} units"
    return tile["owner"].rsplit("/", 1)[-1]


def match_percent(tile) -> str:
    if tile["category"] == "exact":
        return "100.00%"
    if tile["category"] == "asm":
        return "asm"
    score = tile.get("score")
    if score is not None:
        return f"{float(score):.2f}%"
    return "0.00%"


def draw_tile_label(lines, tile, x, y, dx, dy) -> None:
    """Draw `name · sizekB · percent`, degrading gracefully on small tiles.

    Evidence-backed display names replace the unit path; unnamed units show
    their basename (the tooltip keeps the full owner and canonical identity).
    """
    name = tile.get("display") or base_name(tile)
    short = name
    kb = f"{tile['size'] / 1000:.2f}kB"
    pct = match_percent(tile)
    name_fill, detail_fill = LABEL_FILLS.get(tile["category"], (TEXT, MUTED))

    def fits(text: str, size: float) -> bool:
        return len(text) * size * 0.56 <= dx - 8

    options = [
        (name, f"{kb} · {pct}"),  # two lines: path, then size + percent
        (f"{name} · {kb} · {pct}", None),  # single line, full detail
        (f"{name} · {kb}", None),
        (short, f"{kb} · {pct}"),  # compact two-line: name, then details
        (f"{short} · {kb} · {pct}", None),
        (f"{short} · {kb}", None),
        (short, None),
    ]
    for line1, line2 in options:
        for size in (10, 9, 8, 7):
            needed = size * 3.3 if line2 else size + 6
            if dy < needed or not fits(line1, size):
                continue
            if line2 and not fits(line2, size - 1.5):
                continue
            lines.append(
                f'<text x="{x + 4:.2f}" y="{y + size + 3:.2f}" '
                f'font-family="{esc(FONT)}" font-size="{size}" fill="{name_fill}">'
                f"{esc(line1)}</text>"
            )
            if line2:
                lines.append(
                    f'<text x="{x + 4:.2f}" y="{y + size + 15:.2f}" '
                    f'font-family="{esc(FONT)}" font-size="{size - 1.5}" fill="{detail_fill}">'
                    f"{esc(line2)}</text>"
                )
            return


def render_svg(
    units,
    *,
    width,
    height,
    margin,
    header,
    footer,
    min_bytes,
    title,
    fuzzy_percent=None,
) -> str:
    # Chrome (margins, header, footer, legend) scales with the canvas, while
    # tile label fonts stay at a fixed readable size so a larger map fits
    # names on many more tiles.
    scale = max(1.0, min(width / 800.0, height / 400.0))
    # Keep the chrome compact on large canvases so tiles stay as big as
    # possible and more unit names fit.
    chrome_scale = 1.0 + (scale - 1.0) * 0.1
    text_scale = chrome_scale
    margin_px = round(margin * chrome_scale)
    header_px = round(header * chrome_scale)
    footer_px = round(footer * chrome_scale)
    map_x, map_y = margin_px, header_px
    map_dx = width - 2 * margin_px
    map_dy = height - header_px - footer_px - margin_px

    big = [unit for unit in units if unit["size"] >= min_bytes]
    small = [unit for unit in units if unit["size"] < min_bytes]
    tiles = [
        {
            "owner": unit["owner"],
            "address": unit["address"],
            "size": unit["size"],
            "category": unit["category"],
            "group": False,
            "display": unit.get("display"),
            "score": unit.get("score"),
        }
        for unit in big
    ]
    for category in ("exact", "asm", "pending"):
        group = [unit for unit in small if unit["category"] == category]
        if group:
            tiles.append(
                {
                    "owner": f"{len(group)} units < {min_bytes} B",
                    "address": min(unit["address"] for unit in group),
                    "size": sum(unit["size"] for unit in group),
                    "category": category,
                    "group": True,
                    "count": len(group),
                    "threshold": min_bytes,
                }
            )

    total_units = len(units)
    total_bytes = sum(unit["size"] for unit in units)
    exact = [unit for unit in units if unit["category"] == "exact"]
    asm = [unit for unit in units if unit["category"] == "asm"]
    pending = [unit for unit in units if unit["category"] == "pending"]
    exact_bytes = sum(unit["size"] for unit in exact)
    asm_bytes = sum(unit["size"] for unit in asm)
    pending_bytes = total_bytes - exact_bytes - asm_bytes
    recoverable = total_bytes - asm_bytes
    exact_percent = (100.0 * exact_bytes / total_bytes) if total_bytes else 0.0
    recoverable_percent = (100.0 * exact_bytes / recoverable) if recoverable else 0.0

    # Stable order: biggest first, then by address, so tiles keep their place.
    order = sorted(
        tiles, key=lambda tile: (-tile["size"], tile["address"], tile["owner"])
    )
    sizes = [tile["size"] for tile in order]
    rects = treemap(sizes, map_x, map_y, map_dx, map_dy)

    lines = [
        '<?xml version="1.0" encoding="UTF-8"?>',
        f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" height="{height}" '
        f'viewBox="0 0 {width} {height}" role="img" '
        f'aria-label="Decompilation progress treemap">',
        f"<title>{esc(title)}</title>",
        f'<rect width="{width}" height="{height}" fill="{BACKGROUND}"/>',
        '<defs><linearGradient id="sheen" x1="0" y1="0" x2="0" y2="1">'
        '<stop offset="0" stop-color="#ffffff" stop-opacity="0.05"/>'
        '<stop offset="0.45" stop-color="#ffffff" stop-opacity="0"/>'
        '<stop offset="1" stop-color="#000000" stop-opacity="0.16"/>'
        "</linearGradient></defs>",
    ]

    # Header: bolt mark and two-tone title on the left, legend on the right.
    head, separator, tail = title.partition(" - ")
    ratchet, ampersand, clank = head.partition(" & ")
    title_spans = f'<tspan fill="{ORANGE}">{esc(ratchet)}</tspan>'
    if ampersand:
        title_spans += f'<tspan fill="{CHROME}"> &amp; {esc(clank)}</tspan>'
    if separator:
        title_spans += f'<tspan fill="{MUTED}" font-weight="500"> - {esc(tail)}</tspan>'
    mark = round(10 * text_scale)
    lines.append(
        f'<path d="{BOLT_PATH}" fill="{ORANGE}" fill-rule="evenodd" '
        f'transform="translate({margin_px} {round(24 * scale) - mark}) scale({mark / 12:.3f})"/>'
    )
    lines.append(
        f'<text x="{margin_px + round(16 * text_scale)}" y="{round(24 * scale)}" '
        f'font-family="{esc(FONT)}" font-size="{14 * text_scale:.1f}" '
        f'font-weight="700" letter-spacing="0.2">{title_spans}</text>'
    )
    lines.append(
        f'<text x="{margin_px}" y="{round(41 * scale)}" font-family="{esc(FONT)}" '
        f'font-size="{10 * text_scale:.1f}" '
        f'fill="{MUTED}">{len(exact)} matching C &#183; {len(asm)} intentional asm '
        f"&#183; {len(pending)} pending</text>"
    )
    legend_font = 10 * text_scale
    swatch = round(10 * scale)
    gap = round(15 * scale)
    legend_rows = (
        (ORANGE, f"matching C &#183; {exact_bytes:,} B"),
        (CHROME, f"intentional asm &#183; {asm_bytes:,} B"),
        (PLATE, f"pending C &#183; {pending_bytes:,} B"),
    )
    # All rows share a left edge and hug the right edge as one block.
    # 0.56em/char is the same width estimate the tile labels use.
    widest = max(
        len(html.unescape(text)) * legend_font * 0.56 for _, text in legend_rows
    )
    row_x = width - margin_px - round(widest) - gap
    for offset, (color, text) in enumerate(legend_rows):
        y = round(14 * scale) + offset * round(17 * scale)
        lines.append(
            f'<rect x="{row_x}" y="{y}" width="{swatch}" height="{swatch}" rx="2" fill="{color}"/>'
        )
        lines.append(
            f'<text x="{row_x + gap}" y="{y + round(9 * scale)}" '
            f'font-family="{esc(FONT)}" font-size="{legend_font:.1f}" fill="{MUTED}">{text}</text>'
        )

    # Hero stat: the goal-tracking percentage, HUD-style.
    status_x = row_x - round(10 * chrome_scale)
    lines.append(
        f'<text x="{status_x}" y="{round(38 * scale)}" text-anchor="end" '
        f'font-family="{esc(FONT)}" font-size="{28 * text_scale:.1f}" font-weight="800" '
        f'fill="{ORANGE}">{recoverable_percent:.1f}%</text>'
    )
    lines.append(
        f'<text x="{status_x}" y="{round(52 * scale)}" text-anchor="end" '
        f'font-family="{esc(FONT)}" font-size="{9 * text_scale:.1f}" fill="{MUTED}">'
        f"of recoverable C decompiled</text>"
    )

    placed = []
    for tile, rect in zip(order, rects):
        x, y = rect["x"], rect["y"]
        dx, dy = max(rect["dx"], 0.0), max(rect["dy"], 0.0)
        if dx <= 0 or dy <= 0:
            continue
        fill = TILE_FILLS[tile["category"]]
        dash = ' stroke-dasharray="3 2"' if tile.get("group") else ""
        lines.append(
            f'<rect x="{x:.2f}" y="{y:.2f}" width="{dx:.2f}" height="{dy:.2f}" rx="1" '
            f'fill="{fill}" stroke="{STROKE}" stroke-width="0.6"{dash} '
            f'shape-rendering="geometricPrecision">'
            f"<title>{esc(tile_tooltip(tile))}</title></rect>"
        )
        placed.append((tile, x, y, dx, dy))

    # One soft light across the whole plate: a single gradient reads as depth,
    # where a gradient inside every tile reads as noise.
    lines.append(
        f'<rect x="{map_x}" y="{map_y}" width="{map_dx}" height="{map_dy}" fill="url(#sheen)"/>'
    )
    for tile, x, y, dx, dy in placed:
        draw_tile_label(lines, tile, x, y, dx, dy)

    generated = dt.datetime.now(dt.timezone.utc).strftime("%Y-%m-%d")
    separator_y = height - footer_px
    lines.append(
        f'<line x1="{margin_px}" y1="{separator_y:.1f}" x2="{width - margin_px}" '
        f'y2="{separator_y:.1f}" stroke="{PLATE}" stroke-width="1" opacity="0.8"/>'
    )
    if fuzzy_percent is None:
        progress_text = f"C_EXACT {recoverable_percent:.1f}% of recoverable C"
    else:
        progress_text = (
            f"C_EXACT {recoverable_percent:.1f}% / C_FUZZY {fuzzy_percent:.1f}% "
            "of recoverable C"
        )
    lines.append(
        f'<text x="{margin_px}" y="{height - round(20 * scale)}" '
        f'font-family="{esc(FONT)}" font-size="{9 * text_scale:.1f}" fill="{MUTED}" opacity="0.85">'
        f"{exact_bytes:,} of {total_bytes:,} configured bytes are matching C &#183; "
        f"{exact_percent:.1f}% of all configured code</text>"
    )
    lines.append(
        f'<text x="{margin_px}" y="{height - round(8 * scale)}" '
        f'font-family="{esc(FONT)}" font-size="{9 * text_scale:.1f}" fill="{MUTED}" opacity="0.85">'
        f"{progress_text}</text>"
    )
    lines.append(
        f'<text x="{width - margin_px}" y="{height - round(8 * scale)}" text-anchor="end" '
        f'font-family="{esc(FONT)}" font-size="{9 * text_scale:.1f}" fill="{MUTED}" opacity="0.85">'
        f"generated {generated} &#183; scripts/generate_treemap.py</text>"
    )
    lines.append("</svg>")
    return "\n".join(lines) + "\n"


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter
    )
    parser.add_argument(
        "--repo", type=Path, default=Path(__file__).resolve().parents[1]
    )
    parser.add_argument(
        "--config",
        type=Path,
        help="linker config (default: <repo>/config/us/rnc1.us.yaml)",
    )
    parser.add_argument(
        "--categories",
        type=Path,
        help="derived categories JSON (default: <repo>/config/us/unit_categories.json)",
    )
    parser.add_argument(
        "--output", type=Path, help="SVG path (default: <repo>/assets/decomp_map.svg)"
    )
    parser.add_argument("--width", type=int, default=800)
    parser.add_argument("--height", type=int, default=1600)
    parser.add_argument("--margin", type=int, default=10)
    parser.add_argument(
        "--header",
        type=int,
        default=62,
        help="header band above the map; must fit the three legend rows",
    )
    parser.add_argument(
        "--footer",
        type=int,
        default=34,
        help="footer band below the map; fits the two footer lines",
    )
    parser.add_argument(
        "--min-bytes",
        type=int,
        default=0,
        help="units below this size are grouped per class; 0 (default) "
        "draws every unit as its own tile",
    )
    parser.add_argument("--title", default="Ratchet & Clank - decompilation progress")
    parser.add_argument(
        "--no-scores",
        action="store_true",
        help="skip the pending-unit measurement (tiles show 0.00%% instead of "
        "their measured similarity)",
    )
    parser.add_argument(
        "--workspace",
        type=Path,
        help="baseline workspace; measure the pending C bodies with "
        "scripts/list-functions.py --score and also report C_FUZZY",
    )
    parser.add_argument(
        "--scores-out",
        type=Path,
        default=None,
        help="rnc-pending-similarity-v1 index path for --workspace "
        "(default: WORKSPACE/c_fuzzy_scores.json)",
    )
    args = parser.parse_args(argv)

    repo = args.repo.resolve()
    config = (args.config or repo / "config/us/rnc1.us.yaml").resolve()
    if not config.is_file():
        print(f"error: linker config not found: {config}", file=sys.stderr)
        return 2
    categories = (args.categories or repo / "config/us/unit_categories.json").resolve()
    output = (args.output or repo / "assets" / "decomp_map.svg").resolve()

    units = build_units(repo, config, categories)
    if not units:
        print("error: no configured C units found", file=sys.stderr)
        return 1

    fuzzy_percent = None
    scores: dict[str, float] = {}
    index_path = None
    workspace = args.workspace
    if workspace is None and not args.no_scores:
        candidate = (
            Path(os.environ["BASELINE_ROOT"]).expanduser()
            if os.environ.get("BASELINE_ROOT")
            else repo / "build" / "baseline"
        )
        if (candidate / "config").is_dir():
            workspace = candidate
    if workspace is not None:
        workspace = workspace.expanduser().resolve()
        scores_out = (
            args.scores_out.expanduser().resolve()
            if args.scores_out
            else workspace / "c_fuzzy_scores.json"
        )
        measured = measure_scores(workspace, scores_out)
        if measured is None:
            return 2
        scores, index_path = measured
        fuzzy_percent = fuzzy_progress(units, scores)
        for unit in units:
            unit["score"] = scores.get(unit["owner"])

    svg = render_svg(
        units,
        width=args.width,
        height=args.height,
        margin=args.margin,
        header=args.header,
        footer=args.footer,
        min_bytes=args.min_bytes,
        title=args.title,
        fuzzy_percent=fuzzy_percent,
    )
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(svg)

    total = sum(unit["size"] for unit in units)
    exact = [unit for unit in units if unit["category"] == "exact"]
    asm = [unit for unit in units if unit["category"] == "asm"]
    pending = [unit for unit in units if unit["category"] == "pending"]
    exact_bytes = sum(unit["size"] for unit in exact)
    asm_bytes = sum(unit["size"] for unit in asm)
    # Single source of truth for public progress: the workbench status bar and
    # any other surface reads this file, so the SVG footer and the status values
    # can never drift apart.
    stats_path = output.with_suffix(".json")
    recoverable = total - asm_bytes
    stats = {
        "schema": "rnc-public-progress-v1",
        "source": "scripts/generate_treemap.py",
        "units_total": len(units),
        "matching_c": len(exact),
        "intentional_asm": len(asm),
        "pending_c": len(pending),
        "bytes_total": total,
        "bytes_matching_c": exact_bytes,
        "bytes_intentional_asm": asm_bytes,
        "bytes_pending_c": recoverable - exact_bytes,
        "c_exact_percent_of_recoverable": round(100.0 * exact_bytes / recoverable, 4) if recoverable else 0.0,
        "c_fuzzy_percent_of_recoverable": round(fuzzy_percent, 4) if fuzzy_percent is not None else None,
    }
    stats_path.write_text(json.dumps(stats, indent=2) + "\n")
    print(f"  stats: {stats_path}")
    shown = sum(1 for unit in units if unit["size"] >= args.min_bytes)
    print(f"wrote {output}")
    print(
        f"  matching C: {len(exact)}/{len(units)} units, {exact_bytes:,}/{total:,} bytes "
        f"({100.0 * exact_bytes / total:.2f}%; "
        f"{100.0 * exact_bytes / (total - asm_bytes):.2f}% of recoverable C)"
    )
    if fuzzy_percent is not None:
        measured = sum(1 for unit in pending if unit["owner"] in scores)
        print(
            f"  fuzzy C (C_FUZZY): {fuzzy_percent:.2f}% of recoverable C "
            f"({measured}/{len(pending)} pending units measured)"
        )
        if index_path is not None:
            print(f"  similarity index: {index_path}")
    print(f"  intentional asm: {len(asm)} units, {asm_bytes:,} B")
    print(f"  pending C: {len(pending)} units, {total - exact_bytes - asm_bytes:,} B")
    print(
        f"  tiles: {shown} individual + grouped units below {args.min_bytes} B"
        if args.min_bytes > 0
        else f"  tiles: {shown} individual (no grouping)"
    )
    print(
        f"  layout: {'squarify' if _squarify_pkg is not None else 'bundled fallback'}"
    )
    if categories.is_file():
        print(
            f"  categories: {categories.relative_to(repo) if categories.is_relative_to(repo) else categories}"
        )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
