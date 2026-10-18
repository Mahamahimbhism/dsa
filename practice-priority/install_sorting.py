"""Prepare or install a reversible Favorites sorting customization."""
import hashlib
import json
import shutil
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent
EXT = Path.home() / '.vscode/extensions/leetcode.vscode-leetcode-0.18.4'
FILES = ['out/src/explorer/explorerNodeManager.js', 'out/src/explorer/LeetCodeTreeDataProvider.js']
HOOK = '\n// Local company practice priority customization.\nconst practicePriority = (() => { try { return require(require("path").join(require("os").homedir(), ".leetcode", "practice-priority", "ranking.js")); } catch (_) { return null; } })();\n'

def digest(data):
    return hashlib.sha256(data).hexdigest()

def prepare():
    manifest = {}
    for relative in FILES:
        original = (EXT / relative).read_bytes()
        text = original.decode()
        if '// Local company practice priority customization.' in text:
            raise RuntimeError('Customization already present; use restore before preparing again')
        marker = 'class ExplorerNodeManager {' if 'explorerNodeManager' in relative else 'class LeetCodeTreeDataProvider {'
        text = text.replace(marker, HOOK + marker, 1)
        if 'explorerNodeManager' in relative:
            old = '        return this.applySortingStrategy(res);\n    }\n    getChildrenNodesById(id) {'
            new = '        return practicePriority ? practicePriority.sort(res) : this.applySortingStrategy(res);\n    }\n    getChildrenNodesById(id) {'
        else:
            old = '            tooltip: this.getSubCategoryTooltip(element),'
            new = '            description: practicePriority ? practicePriority.description(element) : undefined,\n            tooltip: (practicePriority && practicePriority.tooltip(element)) || this.getSubCategoryTooltip(element),'
        if text.count(old) != 1:
            raise RuntimeError(f'Unexpected extension source: {relative}')
        text = text.replace(old, new, 1)
        for folder, data in [('backup', original), ('staged', text.encode())]:
            target = ROOT / folder / relative
            target.parent.mkdir(parents=True, exist_ok=True)
            target.write_bytes(data)
        manifest[relative] = {'original': digest(original), 'patched': digest(text.encode())}
    (ROOT / 'install-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    print('Prepared two extension files; originals backed up in practice-priority/backup.')

def install(restore=False):
    manifest = json.loads((ROOT / 'install-manifest.json').read_text())
    # Validate both files before changing either one.
    for relative, hashes in manifest.items():
        expected = hashes['patched' if restore else 'original']
        if digest((EXT / relative).read_bytes()) != expected:
            raise RuntimeError(f'File changed since preparation: {relative}')
    for relative in FILES:
        shutil.copyfile(ROOT / ('backup' if restore else 'staged') / relative, EXT / relative)
    print('Restored original extension files.' if restore else 'Installed Favorites priority sorting and score tooltips.')

if __name__ == '__main__':
    action = sys.argv[1] if len(sys.argv) > 1 else 'prepare'
    if action == 'prepare':
        prepare()
    elif action in ('install', 'restore'):
        install(action == 'restore')
    else:
        raise SystemExit('Usage: install_sorting.py prepare|install|restore')
