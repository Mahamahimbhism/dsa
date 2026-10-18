# Favorites priority sorting

The VS Code LeetCode extension's Favorites view sorts the 1,046 scored questions by descending preparation priority. Scores appear beside questions; hover for the component breakdown and company evidence.

See [the ranked list and scoring formula](ranked-questions.md). Recency uses the public snapshot's buckets, not live interview dates. Difficulty has zero weight. Scores use recency (50%), company coverage (31.25%), and frequency (18.75%). Role-specific interview data is unavailable.

## Maintenance

`build_scores.py` reads the local source snapshot and the extension's cached Favorites. To regenerate scores after changing Favorites, run:

```sh
python3 ~/.leetcode/practice-priority/build_scores.py
```

Then refresh the LeetCode panel. This does not download newer company data.

The customization changes two files in LeetCode extension 0.18.4. An extension update may overwrite it. Original files and integrity hashes are saved in `backup/` and `install-manifest.json`.

To restore the original extension files, run:

```sh
python3 ~/.leetcode/practice-priority/install_sorting.py restore
```

Then run **Developer: Restart Extension Host** in VS Code. Restoration refuses to overwrite files whose hashes do not match the installed customization.
