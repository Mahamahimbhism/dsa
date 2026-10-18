'use strict';
const fs = require('fs');
const path = require('path');
const scoreFile = path.join(__dirname, 'scores.json');
let cachedStamp = '';
let scores = {};
function readScores() {
  try {
    const stat = fs.statSync(scoreFile);
    const stamp = `${stat.mtimeMs}:${stat.size}`;
    if (stamp !== cachedStamp) {
      const data = JSON.parse(fs.readFileSync(scoreFile, 'utf8'));
      if (data.schemaVersion !== 1 || !data.problems) throw new Error('Invalid score file');
      scores = data.problems;
      cachedStamp = stamp;
    }
  } catch (_) {
    scores = {};
    cachedStamp = '';
  }
  return scores;
}
function entry(node) {
  const value = readScores()[String(node.id)];
  return value && Number.isFinite(value.score) ? value : undefined;
}
function sort(nodes) {
  const data = readScores();
  const value = node => Number.isFinite(data[String(node.id)]?.score) ? data[String(node.id)].score : -1;
  return nodes.sort((a, b) => value(b) - value(a) || String(a.id).localeCompare(String(b.id), undefined, {numeric: true}));
}
function description(node) {
  const p = node.isProblem && node.isFavorite && entry(node);
  return p ? `${p.score.toFixed(2)}/100` : undefined;
}
function tooltip(node) {
  const p = node.isProblem && node.isFavorite && entry(node);
  if (!p) return '';
  const c = p.components;
  return `${p.title}\nPractice priority: ${p.score.toFixed(2)}/100\nRecency ${c.recency.toFixed(2)}/50 · Company coverage ${c.companyCoverage.toFixed(2)}/31.25 · Frequency ${c.frequency.toFixed(2)}/18.75\n${p.companies.map(x => `${x.company}: ${x.window}`).join(', ')}\nRecency is relative to the public snapshot. Difficulty does not affect the score.`;
}
module.exports = {sort, description, tooltip};
