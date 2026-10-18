"""Rank current LeetCode Favorites using the saved company snapshot."""
import csv
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parent
COMPANIES = ['google', 'amazon', 'meta', 'apple', 'netflix', 'microsoft', 'adobe', 'salesforce']
WINDOWS = [('thirty-days', 1.0), ('three-months', 0.7), ('six-months', 0.4)]
DISPLAY = {'meta': 'Meta', **{x: x.title() for x in COMPANIES if x != 'meta'}}

def build():
    evidence = {}
    for company in COMPANIES:
        for window, recency in WINDOWS:
            source = ROOT / 'source' / company / (window + '.csv')
            if not source.exists():
                continue
            with source.open(newline='') as handle:
                rows = list(csv.DictReader(handle))
            frequencies = [float(r['Frequency %'].rstrip('%')) for r in rows]
            for row, frequency in zip(rows, frequencies):
                entry = evidence.setdefault(str(int(row['ID'])), {})
                if company in entry:
                    continue
                entry[company] = {
                    'company': DISPLAY[company], 'window': window,
                    'recency': recency, 'frequencyPercent': frequency,
                    'frequencyPercentile': sum(f <= frequency for f in frequencies) / len(frequencies),
                }

    problems = json.loads((Path.home() / '.lc/leetcode/cache/problems.json').read_text())
    scored = []
    for p in problems:
        if not p.get('starred'):
            continue
        fid = str(p['fid'])
        reports = list(evidence.get(fid, {}).values())
        recent = max((r['recency'] for r in reports), default=0)
        frequency = sorted((r['frequencyPercentile'] for r in reports), reverse=True)[:3]
        components = {
            'recency': round(50 * recent, 4),
            'companyCoverage': round(31.25 * min(len(reports) / 5, 1), 4),
            'frequency': round(18.75 * sum(frequency) / len(frequency), 4) if frequency else 0,
        }
        # No company evidence means unranked, regardless of difficulty.
        score = round(sum(components.values()), 4) if reports else 0
        scored.append({'id': fid, 'title': p['name'], 'difficulty': p['level'],
                       'url': p['link'], 'score': score, 'components': components,
                       'companies': reports, 'statusAtBuild': p['state'], 'locked': p['locked']})
    scored.sort(key=lambda p: (-p['score'], int(p['id'])))
    for rank, p in enumerate(scored, 1):
        p['rank'] = rank
    data = {
        'schemaVersion': 1,
        'source': 'https://github.com/snehasishroy/leetcode-companywise-interview-questions',
        'sourceCommit': 'e095c25', 'retrievedOn': '2026-10-18',
        'sourceDateNote': 'README labels snapshot 12 July 2026; bucket labels are relative to the source snapshot. Exact interview dates are unavailable.',
        'scoringNote': 'Difficulty and role level do not affect scores. Role-specific interview labels are unavailable.',
        'problems': {p['id']: p for p in scored},
    }
    (ROOT / 'scores.json').write_text(json.dumps(data, indent=2) + '\n')
    lines = ['# Prioritized company practice', '',
             'Scores are preparation priorities, not interview probabilities. Higher scores appear first in the extension Favorites view.', '',
             'Source: [company snapshot](https://github.com/snehasishroy/leetcode-companywise-interview-questions), retrieved 18 October 2026. Its README labels the snapshot 12 July 2026. Recency buckets are relative to that snapshot, not today; exact interview dates and role levels are unavailable.', '',
             'Formula: 50 × recency + 31.25 × min(recent company count / 5, 1) + 18.75 × frequency percentile.',
             'Recency: 30-day bucket = 1, three-month bucket = 0.7, six-month bucket = 0.4; use the newest bucket found across target companies.',
             'Frequency: average of the three highest within-company percentiles, using each company’s newest matching bucket. Percentages in the source are not interview counts.',
             'Difficulty has zero weight. The previous difficulty weight is redistributed proportionally across the three evidence components; role-specific reporting is unavailable.',
             'Targets: Google, Amazon, Meta, Apple, Netflix, Microsoft, Adobe, Salesforce. Missing company data counts as no evidence. Ties use ascending problem ID.',
             'Accepted questions retain their score. Newly starred questions without a score appear after scored questions. Run `python3 ~/.leetcode/practice-priority/build_scores.py` and refresh the extension to score the current Favorites using this snapshot.', '',
             '| Rank | Score / 100 | Question | Level | Newest source bucket | Companies |',
             '| --- | --- | --- | --- | --- | --- |']
    for p in scored:
        newest = max(p['companies'], key=lambda r: r['recency'])['window'] if p['companies'] else 'No evidence'
        names = ', '.join(r['company'] for r in p['companies'])
        lines.append(f"| {p['rank']} | {p['score']:.2f} | [{p['id']}. {p['title']}]({p['url']}) | {p['difficulty']} | {newest} | {names} |")
    (ROOT / 'ranked-questions.md').write_text('\n'.join(lines) + '\n')
    print(json.dumps({'count': len(scored), 'top10': [{k:p[k] for k in ('id','title','score')} for p in scored[:10]]}))

if __name__ == '__main__':
    build()
