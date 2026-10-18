# Prioritized company practice

Scores are preparation priorities, not interview probabilities. Higher scores appear first in the extension Favorites view.

Source: [company snapshot](https://github.com/snehasishroy/leetcode-companywise-interview-questions), retrieved 18 October 2026. Its README labels the snapshot 12 July 2026. Recency buckets are relative to that snapshot, not today; exact interview dates and role levels are unavailable.

Formula: 50 × recency + 31.25 × min(recent company count / 5, 1) + 18.75 × frequency percentile.
Recency: 30-day bucket = 1, three-month bucket = 0.7, six-month bucket = 0.4; use the newest bucket found across target companies.
Frequency: average of the three highest within-company percentiles, using each company’s newest matching bucket. Percentages in the source are not interview counts.
Difficulty has zero weight. The previous difficulty weight is redistributed proportionally across the three evidence components; role-specific reporting is unavailable.
Targets: Google, Amazon, Meta, Apple, Netflix, Microsoft, Adobe, Salesforce. Missing company data counts as no evidence. Ties use ascending problem ID.
Accepted questions retain their score. Newly starred questions without a score appear after scored questions. Run `python3 ~/.leetcode/practice-priority/build_scores.py` and refresh the extension to score the current Favorites using this snapshot.

| Rank | Score / 100 | Question | Level | Newest source bucket | Companies |
| --- | --- | --- | --- | --- | --- |
| 1 | 100.00 | [1. Two Sum](https://leetcode.com/problems/two-sum/description/) | Easy | thirty-days | Google, Amazon, Meta, Apple, Microsoft, Adobe |
| 2 | 99.96 | [146. LRU Cache](https://leetcode.com/problems/lru-cache/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Netflix, Microsoft, Adobe, Salesforce |
| 3 | 99.77 | [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/) | Easy | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 4 | 99.53 | [49. Group Anagrams](https://leetcode.com/problems/group-anagrams/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft, Adobe, Salesforce |
| 5 | 99.50 | [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Netflix, Microsoft |
| 6 | 99.43 | [56. Merge Intervals](https://leetcode.com/problems/merge-intervals/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft, Salesforce |
| 7 | 99.23 | [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft, Salesforce |
| 8 | 99.18 | [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/description/) | Easy | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 9 | 98.90 | [5. Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 10 | 98.81 | [4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/description/) | Hard | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 11 | 98.44 | [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 12 | 98.44 | [215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 13 | 98.39 | [15. 3Sum](https://leetcode.com/problems/3sum/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 14 | 98.38 | [200. Number of Islands](https://leetcode.com/problems/number-of-islands/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 15 | 98.28 | [53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 16 | 98.22 | [210. Course Schedule II](https://leetcode.com/problems/course-schedule-ii/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Netflix, Microsoft, Salesforce |
| 17 | 98.21 | [7. Reverse Integer](https://leetcode.com/problems/reverse-integer/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 18 | 98.18 | [125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/description/) | Easy | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 19 | 98.18 | [189. Rotate Array](https://leetcode.com/problems/rotate-array/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 20 | 98.17 | [875. Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 21 | 97.84 | [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/description/) | Easy | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 22 | 97.73 | [48. Rotate Image](https://leetcode.com/problems/rotate-image/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 23 | 97.69 | [54. Spiral Matrix](https://leetcode.com/problems/spiral-matrix/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 24 | 97.30 | [23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/description/) | Hard | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 25 | 97.30 | [34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 26 | 97.27 | [8. String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/description/) | Medium | thirty-days | Google, Amazon, Meta, Netflix, Microsoft |
| 27 | 97.04 | [128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 28 | 96.98 | [75. Sort Colors](https://leetcode.com/problems/sort-colors/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 29 | 96.94 | [207. Course Schedule](https://leetcode.com/problems/course-schedule/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft, Salesforce |
| 30 | 96.85 | [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 31 | 96.81 | [127. Word Ladder](https://leetcode.com/problems/word-ladder/description/) | Hard | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 32 | 96.48 | [443. String Compression](https://leetcode.com/problems/string-compression/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft, Salesforce |
| 33 | 96.44 | [134. Gas Station](https://leetcode.com/problems/gas-station/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft, Adobe |
| 34 | 96.43 | [17. Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 35 | 96.43 | [238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 36 | 96.33 | [863. All Nodes Distance K in Binary Tree](https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 37 | 96.04 | [295. Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/description/) | Hard | thirty-days | Google, Amazon, Apple, Microsoft, Salesforce |
| 38 | 95.75 | [22. Generate Parentheses](https://leetcode.com/problems/generate-parentheses/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft, Salesforce |
| 39 | 95.30 | [122. Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 40 | 95.20 | [72. Edit Distance](https://leetcode.com/problems/edit-distance/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 41 | 95.06 | [412. Fizz Buzz](https://leetcode.com/problems/fizz-buzz/description/) | Easy | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 42 | 94.61 | [1344. Angle Between Hands of a Clock](https://leetcode.com/problems/angle-between-hands-of-a-clock/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft, Salesforce |
| 43 | 93.68 | [2. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 44 | 93.55 | [42. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 45 | 93.04 | [33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 46 | 92.98 | [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 47 | 92.79 | [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 48 | 92.65 | [567. Permutation in String](https://leetcode.com/problems/permutation-in-string/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple, Microsoft |
| 49 | 92.40 | [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 50 | 92.21 | [16. 3Sum Closest](https://leetcode.com/problems/3sum-closest/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 51 | 92.21 | [84. Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 52 | 91.89 | [621. Task Scheduler](https://leetcode.com/problems/task-scheduler/description/) | Medium | thirty-days | Google, Amazon, Apple, Microsoft |
| 53 | 91.82 | [1768. Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 54 | 91.79 | [74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 55 | 91.73 | [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 56 | 91.73 | [169. Majority Element](https://leetcode.com/problems/majority-element/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 57 | 91.73 | [1004. Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 58 | 91.59 | [175. Combine Two Tables](https://leetcode.com/problems/combine-two-tables/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 59 | 91.59 | [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 60 | 91.55 | [287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 61 | 91.55 | [1929. Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 62 | 91.51 | [199. Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 63 | 91.38 | [118. Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 64 | 91.36 | [485. Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 65 | 91.32 | [209. Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 66 | 91.21 | [73. Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 67 | 91.15 | [322. Coin Change](https://leetcode.com/problems/coin-change/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 68 | 91.11 | [62. Unique Paths](https://leetcode.com/problems/unique-paths/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 69 | 91.09 | [138. Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 70 | 91.05 | [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 71 | 91.04 | [31. Next Permutation](https://leetcode.com/problems/next-permutation/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 72 | 91.04 | [704. Binary Search](https://leetcode.com/problems/binary-search/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 73 | 91.00 | [101. Symmetric Tree](https://leetcode.com/problems/symmetric-tree/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 74 | 90.97 | [27. Remove Element](https://leetcode.com/problems/remove-element/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 75 | 90.97 | [202. Happy Number](https://leetcode.com/problems/happy-number/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 76 | 90.92 | [739. Daily Temperatures](https://leetcode.com/problems/daily-temperatures/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 77 | 90.90 | [198. House Robber](https://leetcode.com/problems/house-robber/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 78 | 90.89 | [424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 79 | 90.85 | [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 80 | 90.69 | [55. Jump Game](https://leetcode.com/problems/jump-game/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 81 | 90.68 | [540. Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 82 | 90.64 | [110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 83 | 90.58 | [58. Length of Last Word](https://leetcode.com/problems/length-of-last-word/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 84 | 90.52 | [46. Permutations](https://leetcode.com/problems/permutations/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 85 | 90.50 | [680. Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 86 | 90.47 | [167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 87 | 90.41 | [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 88 | 90.32 | [51. N-Queens](https://leetcode.com/problems/n-queens/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 89 | 90.31 | [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 90 | 90.28 | [994. Rotting Oranges](https://leetcode.com/problems/rotting-oranges/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 91 | 90.19 | [88. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 92 | 90.18 | [394. Decode String](https://leetcode.com/problems/decode-string/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 93 | 90.02 | [162. Find Peak Element](https://leetcode.com/problems/find-peak-element/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 94 | 90.02 | [543. Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 95 | 89.98 | [239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 96 | 89.89 | [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 97 | 89.78 | [32. Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 98 | 89.77 | [70. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 99 | 89.57 | [240. Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 100 | 89.57 | [392. Is Subsequence](https://leetcode.com/problems/is-subsequence/description/) | Easy | thirty-days | Google, Amazon, Microsoft, Adobe |
| 101 | 89.57 | [881. Boats to Save People](https://leetcode.com/problems/boats-to-save-people/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 102 | 89.49 | [344. Reverse String](https://leetcode.com/problems/reverse-string/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 103 | 89.39 | [50. Pow(x, n)](https://leetcode.com/problems/powx-n/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 104 | 89.31 | [496. Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 105 | 89.29 | [904. Fruit Into Baskets](https://leetcode.com/problems/fruit-into-baskets/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 106 | 89.23 | [1757. Recyclable and Low Fat Products](https://leetcode.com/problems/recyclable-and-low-fat-products/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 107 | 88.98 | [136. Single Number](https://leetcode.com/problems/single-number/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 108 | 88.97 | [92. Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 109 | 88.87 | [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 110 | 88.78 | [39. Combination Sum](https://leetcode.com/problems/combination-sum/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 111 | 88.66 | [387. First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 112 | 88.60 | [713. Subarray Product Less Than K](https://leetcode.com/problems/subarray-product-less-than-k/description/) | Medium | thirty-days | Google, Amazon, Meta, Apple |
| 113 | 88.47 | [182. Duplicate Emails](https://leetcode.com/problems/duplicate-emails/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 114 | 88.46 | [69. Sqrt(x)](https://leetcode.com/problems/sqrtx/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 115 | 88.44 | [312. Burst Balloons](https://leetcode.com/problems/burst-balloons/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 116 | 88.44 | [876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 117 | 88.43 | [114. Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 118 | 88.35 | [1752. Check if Array Is Sorted and Rotated](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 119 | 88.35 | [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 120 | 88.35 | [643. Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray-i/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 121 | 88.33 | [13. Roman to Integer](https://leetcode.com/problems/roman-to-integer/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 122 | 88.33 | [205. Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 123 | 88.26 | [1732. Find the Highest Altitude](https://leetcode.com/problems/find-the-highest-altitude/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 124 | 88.06 | [28. Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 125 | 88.05 | [10. Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 126 | 88.05 | [300. Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 127 | 88.05 | [503. Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 128 | 87.98 | [57. Insert Interval](https://leetcode.com/problems/insert-interval/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 129 | 87.98 | [98. Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 130 | 87.83 | [176. Second Highest Salary](https://leetcode.com/problems/second-highest-salary/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 131 | 87.81 | [41. First Missing Positive](https://leetcode.com/problems/first-missing-positive/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 132 | 87.74 | [1148. Article Views I](https://leetcode.com/problems/article-views-i/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 133 | 87.73 | [78. Subsets](https://leetcode.com/problems/subsets/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 134 | 87.64 | [18. 4Sum](https://leetcode.com/problems/4sum/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 135 | 87.64 | [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 136 | 87.61 | [150. Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 137 | 87.57 | [6. Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 138 | 87.56 | [181. Employees Earning More Than Their Managers](https://leetcode.com/problems/employees-earning-more-than-their-managers/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 139 | 87.55 | [584. Find Customer Referee](https://leetcode.com/problems/find-customer-referee/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 140 | 87.35 | [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 141 | 87.26 | [100. Same Tree](https://leetcode.com/problems/same-tree/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 142 | 87.16 | [61. Rotate List](https://leetcode.com/problems/rotate-list/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 143 | 87.09 | [45. Jump Game II](https://leetcode.com/problems/jump-game-ii/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 144 | 87.00 | [79. Word Search](https://leetcode.com/problems/word-search/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 145 | 86.91 | [438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 146 | 86.91 | [645. Set Mismatch](https://leetcode.com/problems/set-mismatch/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 147 | 86.66 | [3737. Count Subarrays With Majority Element I](https://leetcode.com/problems/count-subarrays-with-majority-element-i/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 148 | 86.57 | [152. Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 149 | 86.41 | [67. Add Binary](https://leetcode.com/problems/add-binary/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 150 | 86.17 | [230. Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 151 | 86.15 | [416. Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 152 | 85.94 | [212. Word Search II](https://leetcode.com/problems/word-search-ii/description/) | Hard | thirty-days | Google, Amazon, Meta, Microsoft |
| 153 | 85.94 | [90. Subsets II](https://leetcode.com/problems/subsets-ii/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 154 | 85.94 | [137. Single Number II](https://leetcode.com/problems/single-number-ii/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 155 | 85.52 | [977. Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/description/) | Easy | thirty-days | Google, Amazon, Meta |
| 156 | 85.35 | [278. First Bad Version](https://leetcode.com/problems/first-bad-version/description/) | Easy | thirty-days | Google, Amazon, Meta, Microsoft |
| 157 | 85.16 | [229. Majority Element II](https://leetcode.com/problems/majority-element-ii/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 158 | 84.15 | [236. Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/) | Medium | thirty-days | Google, Amazon, Meta |
| 159 | 84.00 | [237. Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/description/) | Medium | thirty-days | Google, Amazon, Meta, Microsoft |
| 160 | 83.96 | [253. Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/description/) | Medium | three-months | Google, Amazon, Meta, Apple, Microsoft |
| 161 | 83.58 | [907. Sum of Subarray Minimums](https://leetcode.com/problems/sum-of-subarray-minimums/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 162 | 83.58 | [380. Insert Delete GetRandom O(1)](https://leetcode.com/problems/insert-delete-getrandom-o1/description/) | Medium | thirty-days | Google, Amazon, Apple |
| 163 | 83.54 | [142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 164 | 82.98 | [1288. Remove Covered Intervals](https://leetcode.com/problems/remove-covered-intervals/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 165 | 82.93 | [410. Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/description/) | Hard | thirty-days | Google, Amazon, Microsoft |
| 166 | 82.93 | [3699. Number of ZigZag Arrays I](https://leetcode.com/problems/number-of-zigzag-arrays-i/description/) | Hard | thirty-days | Google, Amazon, Microsoft |
| 167 | 82.72 | [1011. Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 168 | 82.55 | [124. Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/description/) | Hard | three-months | Google, Amazon, Meta, Microsoft, Adobe |
| 169 | 82.19 | [901. Online Stock Span](https://leetcode.com/problems/online-stock-span/description/) | Medium | thirty-days | Google, Amazon, Meta |
| 170 | 82.19 | [268. Missing Number](https://leetcode.com/problems/missing-number/description/) | Easy | thirty-days | Google, Amazon, Microsoft |
| 171 | 82.19 | [1358. Number of Substrings Containing All Three Characters](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/) | Medium | thirty-days | Google, Meta, Microsoft |
| 172 | 82.18 | [197. Rising Temperature](https://leetcode.com/problems/rising-temperature/description/) | Easy | thirty-days | Google, Amazon, Microsoft |
| 173 | 82.10 | [1581. Customer Who Visited but Did Not Make Any Transactions](https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/description/) | Easy | thirty-days | Google, Amazon, Meta |
| 174 | 81.87 | [605. Can Place Flowers](https://leetcode.com/problems/can-place-flowers/description/) | Easy | thirty-days | Google, Amazon, Meta |
| 175 | 81.80 | [80. Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/) | Medium | thirty-days | Google, Amazon, Meta |
| 176 | 81.61 | [103. Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 177 | 81.58 | [518. Coin Change II](https://leetcode.com/problems/coin-change-ii/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 178 | 81.58 | [3754. Concatenate Non-Zero Digits and Multiply by Sum I](https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/description/) | Easy | thirty-days | Google, Amazon, Microsoft |
| 179 | 81.58 | [3532. Path Existence Queries in a Graph I](https://leetcode.com/problems/path-existence-queries-in-a-graph-i/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 180 | 81.52 | [135. Candy](https://leetcode.com/problems/candy/description/) | Hard | thirty-days | Google, Amazon, Microsoft |
| 181 | 81.52 | [371. Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 182 | 81.50 | [785. Is Graph Bipartite?](https://leetcode.com/problems/is-graph-bipartite/description/) | Medium | thirty-days | Amazon, Apple, Microsoft |
| 183 | 81.23 | [570. Managers with at Least 5 Direct Reports](https://leetcode.com/problems/managers-with-at-least-5-direct-reports/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 184 | 81.01 | [328. Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/description/) | Medium | three-months | Google, Amazon, Meta, Apple, Microsoft |
| 185 | 80.95 | [912. Sort an Array](https://leetcode.com/problems/sort-an-array/description/) | Medium | thirty-days | Google, Meta, Microsoft |
| 186 | 80.83 | [3020. Find the Maximum Number of Elements in Subset](https://leetcode.com/problems/find-the-maximum-number-of-elements-in-subset/description/) | Medium | thirty-days | Google, Amazon, Meta |
| 187 | 80.80 | [108. Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/) | Easy | thirty-days | Google, Meta, Microsoft |
| 188 | 80.32 | [1967. Number of Strings That Appear as Substrings in Word](https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/description/) | Easy | thirty-days | Google, Amazon, Meta |
| 189 | 80.17 | [974. Subarray Sums Divisible by K](https://leetcode.com/problems/subarray-sums-divisible-by-k/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 190 | 80.15 | [25. Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/description/) | Hard | thirty-days | Google, Amazon, Microsoft |
| 191 | 80.13 | [219. Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/description/) | Easy | thirty-days | Google, Amazon, Meta |
| 192 | 79.96 | [179. Largest Number](https://leetcode.com/problems/largest-number/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft, Adobe |
| 193 | 79.76 | [1046. Last Stone Weight](https://leetcode.com/problems/last-stone-weight/description/) | Easy | thirty-days | Google, Amazon, Microsoft |
| 194 | 79.69 | [1838. Frequency of the Most Frequent Element](https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 195 | 79.58 | [2812. Find the Safest Path in a Grid](https://leetcode.com/problems/find-the-safest-path-in-a-grid/description/) | Medium | thirty-days | Google, Meta, Microsoft |
| 196 | 79.42 | [151. Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/description/) | Medium | three-months | Google, Amazon, Meta, Apple, Microsoft |
| 197 | 79.40 | [30. Substring with Concatenation of All Words](https://leetcode.com/problems/substring-with-concatenation-of-all-words/description/) | Hard | thirty-days | Google, Amazon, Microsoft |
| 198 | 79.32 | [183. Customers Who Never Order](https://leetcode.com/problems/customers-who-never-order/description/) | Easy | thirty-days | Google, Amazon, Meta |
| 199 | 79.32 | [695. Max Area of Island](https://leetcode.com/problems/max-area-of-island/description/) | Medium | thirty-days | Google, Amazon, Meta |
| 200 | 79.17 | [1021. Remove Outermost Parentheses](https://leetcode.com/problems/remove-outermost-parentheses/description/) | Easy | thirty-days | Google, Amazon, Microsoft |
| 201 | 79.10 | [662. Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 202 | 78.99 | [148. Sort List](https://leetcode.com/problems/sort-list/description/) | Medium | thirty-days | Google, Amazon, Meta |
| 203 | 78.82 | [2571. Minimum Operations to Reduce an Integer to 0](https://leetcode.com/problems/minimum-operations-to-reduce-an-integer-to-0/description/) | Medium | thirty-days | Microsoft, Salesforce |
| 204 | 78.81 | [43. Multiply Strings](https://leetcode.com/problems/multiply-strings/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 205 | 78.81 | [303. Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/description/) | Easy | thirty-days | Google, Amazon, Microsoft |
| 206 | 78.73 | [528. Random Pick with Weight](https://leetcode.com/problems/random-pick-with-weight/description/) | Medium | thirty-days | Google, Amazon, Meta |
| 207 | 78.66 | [180. Consecutive Numbers](https://leetcode.com/problems/consecutive-numbers/description/) | Medium | thirty-days | Google, Amazon, Meta |
| 208 | 78.63 | [227. Basic Calculator II](https://leetcode.com/problems/basic-calculator-ii/description/) | Medium | three-months | Google, Amazon, Meta, Apple, Adobe |
| 209 | 78.59 | [228. Summary Ranges](https://leetcode.com/problems/summary-ranges/description/) | Easy | thirty-days | Google, Amazon, Microsoft |
| 210 | 78.33 | [1094. Car Pooling](https://leetcode.com/problems/car-pooling/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 211 | 78.33 | [1482. Minimum Number of Days to Make m Bouquets](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 212 | 78.15 | [94. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/description/) | Easy | thirty-days | Google, Amazon, Meta |
| 213 | 77.97 | [36. Valid Sudoku](https://leetcode.com/problems/valid-sudoku/description/) | Medium | three-months | Google, Amazon, Meta, Apple, Microsoft |
| 214 | 77.95 | [981. Time Based Key-Value Store](https://leetcode.com/problems/time-based-key-value-store/description/) | Medium | three-months | Google, Amazon, Meta, Apple, Netflix |
| 215 | 77.87 | [767. Reorganize String](https://leetcode.com/problems/reorganize-string/description/) | Medium | thirty-days | Google, Amazon |
| 216 | 77.75 | [225. Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/description/) | Easy | thirty-days | Google, Amazon, Microsoft |
| 217 | 77.75 | [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/description/) | Hard | thirty-days | Google, Amazon, Microsoft |
| 218 | 77.75 | [2095. Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/) | Medium | thirty-days | Google, Amazon, Microsoft |
| 219 | 77.60 | [1631. Path With Minimum Effort](https://leetcode.com/problems/path-with-minimum-effort/description/) | Medium | thirty-days | Google, Meta, Microsoft |
| 220 | 77.54 | [1189. Maximum Number of Balloons](https://leetcode.com/problems/maximum-number-of-balloons/description/) | Easy | thirty-days | Google, Amazon |
| 221 | 77.31 | [918. Maximum Sum Circular Subarray](https://leetcode.com/problems/maximum-sum-circular-subarray/description/) | Medium | thirty-days | Google, Amazon, Meta |
| 222 | 77.14 | [258. Add Digits](https://leetcode.com/problems/add-digits/description/) | Easy | thirty-days | Google, Amazon |
| 223 | 76.88 | [345. Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/description/) | Easy | thirty-days | Google, Amazon |
| 224 | 76.67 | [557. Reverse Words in a String III](https://leetcode.com/problems/reverse-words-in-a-string-iii/description/) | Easy | thirty-days | Google, Amazon, Meta |
| 225 | 76.48 | [196. Delete Duplicate Emails](https://leetcode.com/problems/delete-duplicate-emails/description/) | Easy | thirty-days | Google, Microsoft |
| 226 | 76.34 | [796. Rotate String](https://leetcode.com/problems/rotate-string/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 227 | 76.24 | [155. Min Stack](https://leetcode.com/problems/min-stack/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 228 | 75.90 | [349. Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 229 | 75.67 | [234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 230 | 75.44 | [343. Integer Break](https://leetcode.com/problems/integer-break/description/) | Medium | thirty-days | Google, Meta |
| 231 | 75.43 | [299. Bulls and Cows](https://leetcode.com/problems/bulls-and-cows/description/) | Medium | thirty-days | Google, Amazon |
| 232 | 75.43 | [743. Network Delay Time](https://leetcode.com/problems/network-delay-time/description/) | Medium | thirty-days | Google, Amazon |
| 233 | 75.32 | [1833. Maximum Ice Cream Bars](https://leetcode.com/problems/maximum-ice-cream-bars/description/) | Medium | thirty-days | Google, Amazon |
| 234 | 75.15 | [191. Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/description/) | Easy | thirty-days | Google, Meta |
| 235 | 75.15 | [1341. Movie Rating](https://leetcode.com/problems/movie-rating/description/) | Medium | thirty-days | Google, Meta |
| 236 | 75.00 | [3893. Maximum Team Size with Overlapping Intervals](https://leetcode.com/problems/maximum-team-size-with-overlapping-intervals/description/) | Medium | thirty-days | Salesforce |
| 237 | 74.88 | [3413. Maximum Coins From K Consecutive Bags](https://leetcode.com/problems/maximum-coins-from-k-consecutive-bags/description/) | Medium | thirty-days | Amazon |
| 238 | 74.78 | [143. Reorder List](https://leetcode.com/problems/reorder-list/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 239 | 74.70 | [460. LFU Cache](https://leetcode.com/problems/lfu-cache/description/) | Hard | three-months | Google, Amazon, Microsoft, Salesforce |
| 240 | 74.58 | [2150. Find All Lonely Numbers in the Array](https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/description/) | Medium | thirty-days | Google, Apple |
| 241 | 74.44 | [38. Count and Say](https://leetcode.com/problems/count-and-say/description/) | Medium | thirty-days | Google, Amazon |
| 242 | 74.44 | [403. Frog Jump](https://leetcode.com/problems/frog-jump/description/) | Hard | thirty-days | Google, Amazon |
| 243 | 74.44 | [417. Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/description/) | Medium | thirty-days | Google, Amazon |
| 244 | 74.44 | [741. Cherry Pickup](https://leetcode.com/problems/cherry-pickup/description/) | Hard | thirty-days | Google, Amazon |
| 245 | 74.44 | [1661. Average Time of Process per Machine](https://leetcode.com/problems/average-time-of-process-per-machine/description/) | Easy | thirty-days | Google, Amazon |
| 246 | 74.44 | [3043. Find the Length of the Longest Common Prefix](https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix/description/) | Medium | thirty-days | Google, Amazon |
| 247 | 74.34 | [224. Basic Calculator](https://leetcode.com/problems/basic-calculator/description/) | Hard | three-months | Google, Amazon, Meta, Microsoft |
| 248 | 74.21 | [66. Plus One](https://leetcode.com/problems/plus-one/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 249 | 74.21 | [131. Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 250 | 74.21 | [678. Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 251 | 74.21 | [1251. Average Selling Price](https://leetcode.com/problems/average-selling-price/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 252 | 74.19 | [1944. Number of Visible People in a Queue](https://leetcode.com/problems/number-of-visible-people-in-a-queue/description/) | Hard | thirty-days | Google, Amazon |
| 253 | 74.15 | [1143. Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 254 | 74.13 | [1552. Magnetic Force Between Two Balls](https://leetcode.com/problems/magnetic-force-between-two-balls/description/) | Medium | thirty-days | Amazon, Microsoft |
| 255 | 73.99 | [763. Partition Labels](https://leetcode.com/problems/partition-labels/description/) | Medium | thirty-days | Amazon, Microsoft |
| 256 | 73.90 | [628. Maximum Product of Three Numbers](https://leetcode.com/problems/maximum-product-of-three-numbers/description/) | Easy | thirty-days | Microsoft, Salesforce |
| 257 | 73.77 | [2281. Sum of Total Strength of Wizards](https://leetcode.com/problems/sum-of-total-strength-of-wizards/description/) | Hard | thirty-days | Amazon |
| 258 | 73.67 | [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/description/) | Easy | thirty-days | Google, Amazon |
| 259 | 73.67 | [1846. Maximum Element After Decreasing and Rearranging](https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/description/) | Medium | thirty-days | Google, Amazon |
| 260 | 73.66 | [1674. Minimum Moves to Make Array Complementary](https://leetcode.com/problems/minimum-moves-to-make-array-complementary/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 261 | 73.56 | [12. Integer to Roman](https://leetcode.com/problems/integer-to-roman/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 262 | 73.51 | [525. Contiguous Array](https://leetcode.com/problems/contiguous-array/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 263 | 73.45 | [1295. Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/) | Easy | thirty-days | Google, Meta |
| 264 | 73.32 | [700. Search in a Binary Search Tree](https://leetcode.com/problems/search-in-a-binary-search-tree/description/) | Easy | thirty-days | Google |
| 265 | 73.28 | [37. Sudoku Solver](https://leetcode.com/problems/sudoku-solver/description/) | Hard | thirty-days | Google, Amazon |
| 266 | 73.28 | [109. Convert Sorted List to Binary Search Tree](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/) | Medium | thirty-days | Google, Amazon |
| 267 | 73.28 | [1211. Queries Quality and Percentage](https://leetcode.com/problems/queries-quality-and-percentage/description/) | Easy | thirty-days | Google, Amazon |
| 268 | 73.17 | [746. Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 269 | 73.08 | [85. Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle/description/) | Hard | three-months | Google, Amazon, Meta, Microsoft |
| 270 | 72.98 | [64. Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 271 | 72.98 | [733. Flood Fill](https://leetcode.com/problems/flood-fill/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 272 | 72.85 | [130. Surrounded Regions](https://leetcode.com/problems/surrounded-regions/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 273 | 72.85 | [1979. Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/) | Easy | thirty-days | Google, Microsoft |
| 274 | 72.85 | [2484. Count Palindromic Subsequences](https://leetcode.com/problems/count-palindromic-subsequences/description/) | Hard | thirty-days | Google, Microsoft |
| 275 | 72.79 | [3620. Network Recovery Pathways](https://leetcode.com/problems/network-recovery-pathways/description/) | Hard | thirty-days | Amazon |
| 276 | 72.42 | [96. Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/description/) | Medium | thirty-days | Google, Amazon |
| 277 | 72.42 | [290. Word Pattern](https://leetcode.com/problems/word-pattern/description/) | Easy | thirty-days | Google, Amazon |
| 278 | 72.42 | [452. Minimum Number of Arrows to Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/) | Medium | thirty-days | Google, Amazon |
| 279 | 72.34 | [827. Making A Large Island](https://leetcode.com/problems/making-a-large-island/description/) | Hard | three-months | Google, Amazon, Meta, Microsoft |
| 280 | 72.26 | [1431. Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/) | Easy | thirty-days | Meta, Microsoft |
| 281 | 72.19 | [1971. Find if Path Exists in Graph](https://leetcode.com/problems/find-if-path-exists-in-graph/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 282 | 72.18 | [1502. Can Make Arithmetic Progression From Sequence](https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/) | Easy | thirty-days | Google, Meta |
| 283 | 72.18 | [3286. Find a Safe Walk Through a Grid](https://leetcode.com/problems/find-a-safe-walk-through-a-grid/description/) | Medium | thirty-days | Google, Meta |
| 284 | 72.13 | [402. Remove K Digits](https://leetcode.com/problems/remove-k-digits/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 285 | 71.98 | [105. Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/) | Medium | three-months | Google, Amazon, Microsoft, Salesforce |
| 286 | 71.88 | [2380. Time Needed to Rearrange a Binary String](https://leetcode.com/problems/time-needed-to-rearrange-a-binary-string/description/) | Medium | thirty-days | Salesforce |
| 287 | 71.82 | [104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 288 | 71.79 | [1193. Monthly Transactions I](https://leetcode.com/problems/monthly-transactions-i/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 289 | 71.64 | [396. Rotate Function](https://leetcode.com/problems/rotate-function/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 290 | 71.46 | [319. Bulb Switcher](https://leetcode.com/problems/bulb-switcher/description/) | Medium | thirty-days | Google, Amazon |
| 291 | 71.46 | [759. Employee Free Time](https://leetcode.com/problems/employee-free-time/description/) | Hard | thirty-days | Google, Amazon |
| 292 | 71.46 | [1373. Maximum Sum BST in Binary Tree](https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/description/) | Hard | thirty-days | Google, Amazon |
| 293 | 71.46 | [3756. Concatenate Non-Zero Digits and Multiply by Sum II](https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-ii/description/) | Medium | thirty-days | Google, Amazon |
| 294 | 71.34 | [362. Design Hit Counter](https://leetcode.com/problems/design-hit-counter/description/) | Medium | three-months | Google, Meta, Apple, Microsoft |
| 295 | 71.33 | [653. Two Sum IV - Input is a BST](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 296 | 71.30 | [113. Path Sum II](https://leetcode.com/problems/path-sum-ii/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 297 | 71.30 | [986. Interval List Intersections](https://leetcode.com/problems/interval-list-intersections/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 298 | 71.21 | [1475. Final Prices With a Special Discount in a Shop](https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 299 | 71.16 | [721. Accounts Merge](https://leetcode.com/problems/accounts-merge/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 300 | 71.16 | [1283. Find the Smallest Divisor Given a Threshold](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 301 | 71.15 | [3761. Minimum Absolute Distance Between Mirror Pairs](https://leetcode.com/problems/minimum-absolute-distance-between-mirror-pairs/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 302 | 70.75 | [542. 01 Matrix](https://leetcode.com/problems/01-matrix/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 303 | 70.09 | [547. Number of Provinces](https://leetcode.com/problems/number-of-provinces/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 304 | 69.93 | [1091. Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 305 | 69.82 | [1209. Remove All Adjacent Duplicates in String II](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/) | Medium | three-months | Google, Amazon, Microsoft, Salesforce |
| 306 | 69.78 | [332. Reconstruct Itinerary](https://leetcode.com/problems/reconstruct-itinerary/description/) | Hard | thirty-days | Google |
| 307 | 69.78 | [368. Largest Divisible Subset](https://leetcode.com/problems/largest-divisible-subset/description/) | Medium | thirty-days | Google |
| 308 | 69.78 | [457. Circular Array Loop](https://leetcode.com/problems/circular-array-loop/description/) | Medium | thirty-days | Google |
| 309 | 69.78 | [832. Flipping an Image](https://leetcode.com/problems/flipping-an-image/description/) | Easy | thirty-days | Google |
| 310 | 69.78 | [1110. Delete Nodes And Return Forest](https://leetcode.com/problems/delete-nodes-and-return-forest/description/) | Medium | thirty-days | Google |
| 311 | 69.78 | [1301. Number of Paths with Max Score](https://leetcode.com/problems/number-of-paths-with-max-score/description/) | Hard | thirty-days | Google |
| 312 | 69.78 | [1406. Stone Game III](https://leetcode.com/problems/stone-game-iii/description/) | Hard | thirty-days | Google |
| 313 | 69.78 | [1589. Maximum Sum Obtained of Any Permutation](https://leetcode.com/problems/maximum-sum-obtained-of-any-permutation/description/) | Medium | thirty-days | Google |
| 314 | 69.78 | [1795. Rearrange Products Table](https://leetcode.com/problems/rearrange-products-table/description/) | Easy | thirty-days | Google |
| 315 | 69.78 | [1907. Count Salary Categories](https://leetcode.com/problems/count-salary-categories/description/) | Medium | thirty-days | Google |
| 316 | 69.78 | [2007. Find Original Array From Doubled Array](https://leetcode.com/problems/find-original-array-from-doubled-array/description/) | Medium | thirty-days | Google |
| 317 | 69.78 | [2225. Find Players With Zero or One Losses](https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/) | Medium | thirty-days | Google |
| 318 | 69.78 | [2407. Longest Increasing Subsequence II](https://leetcode.com/problems/longest-increasing-subsequence-ii/description/) | Hard | thirty-days | Google |
| 319 | 69.78 | [2421. Number of Good Paths](https://leetcode.com/problems/number-of-good-paths/description/) | Hard | thirty-days | Google |
| 320 | 69.78 | [2492. Minimum Score of a Path Between Two Cities](https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities/description/) | Medium | thirty-days | Google |
| 321 | 69.78 | [2913. Subarrays Distinct Element Sum of Squares I](https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/description/) | Easy | thirty-days | Google |
| 322 | 69.78 | [3534. Path Existence Queries in a Graph II](https://leetcode.com/problems/path-existence-queries-in-a-graph-ii/description/) | Hard | thirty-days | Google |
| 323 | 69.78 | [3700. Number of ZigZag Arrays II](https://leetcode.com/problems/number-of-zigzag-arrays-ii/description/) | Hard | thirty-days | Google |
| 324 | 69.10 | [102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 325 | 68.88 | [779. K-th Symbol in Grammar](https://leetcode.com/problems/k-th-symbol-in-grammar/description/) | Medium | thirty-days | Microsoft |
| 326 | 68.88 | [111. Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/description/) | Easy | three-months | Google, Amazon, Meta, Microsoft |
| 327 | 68.85 | [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/) | Medium | three-months | Google, Amazon, Meta |
| 328 | 68.74 | [1922. Count Good Numbers](https://leetcode.com/problems/count-good-numbers/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 329 | 68.47 | [3634. Minimum Removals to Balance Array](https://leetcode.com/problems/minimum-removals-to-balance-array/description/) | Medium | three-months | Google, Amazon, Meta, Salesforce |
| 330 | 68.31 | [231. Power of Two](https://leetcode.com/problems/power-of-two/description/) | Easy | three-months | Google, Amazon, Meta |
| 331 | 68.11 | [516. Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/description/) | Medium | three-months | Google, Amazon, Meta, Microsoft |
| 332 | 67.99 | [1280. Students and Examinations](https://leetcode.com/problems/students-and-examinations/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 333 | 67.78 | [987. Vertical Order Traversal of a Binary Tree](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/) | Hard | three-months | Amazon, Meta, Microsoft |
| 334 | 67.76 | [1539. Kth Missing Positive Number](https://leetcode.com/problems/kth-missing-positive-number/description/) | Easy | three-months | Google, Amazon, Meta |
| 335 | 67.63 | [735. Asteroid Collision](https://leetcode.com/problems/asteroid-collision/description/) | Medium | three-months | Google, Amazon, Meta |
| 336 | 67.41 | [139. Word Break](https://leetcode.com/problems/word-break/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 337 | 67.27 | [204. Count Primes](https://leetcode.com/problems/count-primes/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 338 | 66.92 | [168. Excel Sheet Column Title](https://leetcode.com/problems/excel-sheet-column-title/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 339 | 66.83 | [297. Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/description/) | Hard | three-months | Google, Amazon, Microsoft |
| 340 | 66.75 | [658. Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 341 | 66.75 | [1141. User Activity for the Past 30 Days I](https://leetcode.com/problems/user-activity-for-the-past-30-days-i/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 342 | 66.64 | [1047. Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/) | Easy | three-months | Google, Amazon, Meta |
| 343 | 66.60 | [2574. Left and Right Sum Differences](https://leetcode.com/problems/left-and-right-sum-differences/description/) | Easy | three-months | Google, Amazon, Meta |
| 344 | 66.54 | [992. Subarrays with K Different Integers](https://leetcode.com/problems/subarrays-with-k-different-integers/description/) | Hard | three-months | Google, Amazon, Microsoft |
| 345 | 66.47 | [455. Assign Cookies](https://leetcode.com/problems/assign-cookies/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 346 | 66.26 | [44. Wildcard Matching](https://leetcode.com/problems/wildcard-matching/description/) | Hard | three-months | Google, Amazon, Microsoft |
| 347 | 66.26 | [232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 348 | 66.26 | [399. Evaluate Division](https://leetcode.com/problems/evaluate-division/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 349 | 66.26 | [2235. Add Two Integers](https://leetcode.com/problems/add-two-integers/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 350 | 66.20 | [63. Unique Paths II](https://leetcode.com/problems/unique-paths-ii/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 351 | 66.03 | [415. Add Strings](https://leetcode.com/problems/add-strings/description/) | Easy | three-months | Google, Amazon, Meta |
| 352 | 65.92 | [71. Simplify Path](https://leetcode.com/problems/simplify-path/description/) | Medium | three-months | Google, Amazon, Meta |
| 353 | 65.54 | [778. Swim in Rising Water](https://leetcode.com/problems/swim-in-rising-water/description/) | Hard | three-months | Google, Meta, Microsoft |
| 354 | 65.47 | [83. Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 355 | 65.47 | [86. Partition List](https://leetcode.com/problems/partition-list/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 356 | 65.38 | [1164. Product Price at a Given Date](https://leetcode.com/problems/product-price-at-a-given-date/description/) | Medium | three-months | Google, Amazon, Meta |
| 357 | 65.33 | [448. Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/) | Easy | three-months | Google, Meta, Microsoft |
| 358 | 65.29 | [77. Combinations](https://leetcode.com/problems/combinations/description/) | Medium | three-months | Google, Amazon, Meta |
| 359 | 65.24 | [208. Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/description/) | Medium | three-months | Google, Apple, Microsoft |
| 360 | 65.08 | [274. H-Index](https://leetcode.com/problems/h-index/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 361 | 65.07 | [456. 132 Pattern](https://leetcode.com/problems/132-pattern/description/) | Medium | thirty-days | Amazon |
| 362 | 65.07 | [1002. Find Common Characters](https://leetcode.com/problems/find-common-characters/description/) | Easy | thirty-days | Amazon |
| 363 | 65.07 | [1184. Distance Between Bus Stops](https://leetcode.com/problems/distance-between-bus-stops/description/) | Easy | thirty-days | Amazon |
| 364 | 65.07 | [1326. Minimum Number of Taps to Open to Water a Garden](https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden/description/) | Hard | thirty-days | Amazon |
| 365 | 65.07 | [1478. Allocate Mailboxes](https://leetcode.com/problems/allocate-mailboxes/description/) | Hard | thirty-days | Amazon |
| 366 | 65.07 | [1703. Minimum Adjacent Swaps for K Consecutive Ones](https://leetcode.com/problems/minimum-adjacent-swaps-for-k-consecutive-ones/description/) | Hard | thirty-days | Amazon |
| 367 | 65.07 | [2271. Maximum White Tiles Covered by a Carpet](https://leetcode.com/problems/maximum-white-tiles-covered-by-a-carpet/description/) | Medium | thirty-days | Amazon |
| 368 | 65.07 | [2643. Row With Maximum Ones](https://leetcode.com/problems/row-with-maximum-ones/description/) | Easy | thirty-days | Amazon |
| 369 | 65.07 | [2762. Continuous Subarrays](https://leetcode.com/problems/continuous-subarrays/description/) | Medium | thirty-days | Amazon |
| 370 | 65.07 | [2938. Separate Black and White Balls](https://leetcode.com/problems/separate-black-and-white-balls/description/) | Medium | thirty-days | Amazon |
| 371 | 65.07 | [3612. Process String with Special Operations I](https://leetcode.com/problems/process-string-with-special-operations-i/description/) | Medium | thirty-days | Amazon |
| 372 | 64.91 | [221. Maximal Square](https://leetcode.com/problems/maximal-square/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 373 | 64.90 | [24. Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/description/) | Medium | three-months | Google, Amazon, Meta |
| 374 | 64.85 | [437. Path Sum III](https://leetcode.com/problems/path-sum-iii/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 375 | 64.75 | [577. Employee Bonus](https://leetcode.com/problems/employee-bonus/description/) | Easy | three-months | Google, Meta, Microsoft |
| 376 | 64.57 | [2858. Minimum Edge Reversals So Every Node Is Reachable](https://leetcode.com/problems/minimum-edge-reversals-so-every-node-is-reachable/description/) | Hard | three-months | Amazon, Microsoft, Salesforce |
| 377 | 64.54 | [341. Flatten Nested List Iterator](https://leetcode.com/problems/flatten-nested-list-iterator/description/) | Medium | three-months | Amazon, Apple, Adobe |
| 378 | 64.42 | [383. Ransom Note](https://leetcode.com/problems/ransom-note/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 379 | 64.33 | [47. Permutations II](https://leetcode.com/problems/permutations-ii/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 380 | 64.27 | [193. Valid Phone Numbers](https://leetcode.com/problems/valid-phone-numbers/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 381 | 64.24 | [29. Divide Two Integers](https://leetcode.com/problems/divide-two-integers/description/) | Medium | three-months | Google, Amazon, Meta |
| 382 | 64.24 | [133. Clone Graph](https://leetcode.com/problems/clone-graph/description/) | Medium | three-months | Google, Amazon, Meta |
| 383 | 64.24 | [595. Big Countries](https://leetcode.com/problems/big-countries/description/) | Easy | three-months | Google, Amazon, Meta |
| 384 | 64.16 | [40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/description/) | Medium | three-months | Google, Amazon, Meta |
| 385 | 64.05 | [327. Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/description/) | Hard | three-months | Google, Amazon, Meta |
| 386 | 64.05 | [1861. Rotating the Box](https://leetcode.com/problems/rotating-the-box/description/) | Medium | three-months | Google, Amazon, Meta |
| 387 | 63.96 | [706. Design HashMap](https://leetcode.com/problems/design-hashmap/description/) | Easy | three-months | Amazon, Meta, Microsoft |
| 388 | 63.88 | [160. Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/description/) | Easy | three-months | Google, Amazon, Meta |
| 389 | 63.88 | [787. Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/description/) | Medium | three-months | Google, Amazon, Apple |
| 390 | 63.88 | [931. Minimum Falling Path Sum](https://leetcode.com/problems/minimum-falling-path-sum/description/) | Medium | three-months | Google, Amazon, Apple |
| 391 | 63.87 | [140. Word Break II](https://leetcode.com/problems/word-break-ii/description/) | Hard | three-months | Google, Amazon, Microsoft |
| 392 | 63.84 | [132. Palindrome Partitioning II](https://leetcode.com/problems/palindrome-partitioning-ii/description/) | Hard | three-months | Google, Amazon, Microsoft |
| 393 | 63.84 | [435. Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 394 | 63.84 | [572. Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 395 | 63.84 | [1559. Detect Cycles in 2D Grid](https://leetcode.com/problems/detect-cycles-in-2d-grid/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 396 | 63.84 | [3753. Total Waviness of Numbers in Range II](https://leetcode.com/problems/total-waviness-of-numbers-in-range-ii/description/) | Hard | three-months | Google, Amazon, Microsoft |
| 397 | 63.68 | [541. Reverse String II](https://leetcode.com/problems/reverse-string-ii/description/) | Easy | three-months | Google, Amazon, Meta |
| 398 | 63.68 | [636. Exclusive Time of Functions](https://leetcode.com/problems/exclusive-time-of-functions/description/) | Medium | three-months | Google, Amazon, Meta |
| 399 | 63.40 | [373. Find K Pairs with Smallest Sums](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/description/) | Medium | three-months | Google, Meta, Microsoft |
| 400 | 63.39 | [164. Maximum Gap](https://leetcode.com/problems/maximum-gap/description/) | Medium | three-months | Google, Amazon, Meta |
| 401 | 63.39 | [213. House Robber II](https://leetcode.com/problems/house-robber-ii/description/) | Medium | three-months | Google, Amazon, Meta |
| 402 | 63.39 | [1345. Jump Game IV](https://leetcode.com/problems/jump-game-iv/description/) | Hard | three-months | Google, Amazon, Meta |
| 403 | 63.21 | [120. Triangle](https://leetcode.com/problems/triangle/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 404 | 63.21 | [802. Find Eventual Safe States](https://leetcode.com/problems/find-eventual-safe-states/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 405 | 63.07 | [223. Rectangle Area](https://leetcode.com/problems/rectangle-area/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 406 | 63.07 | [703. Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 407 | 63.03 | [82. Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/) | Medium | three-months | Google, Amazon, Meta |
| 408 | 63.03 | [724. Find Pivot Index](https://leetcode.com/problems/find-pivot-index/description/) | Easy | three-months | Google, Amazon, Meta |
| 409 | 62.89 | [214. Shortest Palindrome](https://leetcode.com/problems/shortest-palindrome/description/) | Hard | three-months | Google, Amazon, Meta |
| 410 | 62.89 | [226. Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/description/) | Easy | three-months | Google, Amazon, Meta |
| 411 | 62.89 | [3689. Maximum Total Subarray Value I](https://leetcode.com/problems/maximum-total-subarray-value-i/description/) | Medium | three-months | Google, Amazon, Meta |
| 412 | 62.78 | [620. Not Boring Movies](https://leetcode.com/problems/not-boring-movies/description/) | Easy | three-months | Amazon, Meta, Microsoft |
| 413 | 62.63 | [144. Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/description/) | Easy | three-months | Google, Amazon, Microsoft |
| 414 | 62.60 | [3742. Maximum Path Score in a Grid](https://leetcode.com/problems/maximum-path-score-in-a-grid/description/) | Medium | three-months | Google, Microsoft |
| 415 | 62.53 | [68. Text Justification](https://leetcode.com/problems/text-justification/description/) | Hard | three-months | Google, Amazon, Apple |
| 416 | 62.49 | [329. Longest Increasing Path in a Matrix](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/) | Hard | three-months | Google, Amazon, Microsoft |
| 417 | 62.49 | [494. Target Sum](https://leetcode.com/problems/target-sum/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 418 | 62.49 | [853. Car Fleet](https://leetcode.com/problems/car-fleet/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 419 | 62.49 | [930. Binary Subarrays With Sum](https://leetcode.com/problems/binary-subarrays-with-sum/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 420 | 62.49 | [1423. Maximum Points You Can Obtain from Cards](https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/) | Medium | three-months | Google, Amazon, Microsoft |
| 421 | 62.42 | [2196. Create Binary Tree From Descriptions](https://leetcode.com/problems/create-binary-tree-from-descriptions/description/) | Medium | three-months | Google, Amazon |
| 422 | 62.30 | [81. Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/) | Medium | three-months | Google, Amazon |
| 423 | 62.30 | [3635. Earliest Finish Time for Land and Water Rides II](https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/description/) | Medium | three-months | Google, Amazon |
| 424 | 62.18 | [1207. Unique Number of Occurrences](https://leetcode.com/problems/unique-number-of-occurrences/description/) | Easy | three-months | Google, Amazon, Meta |
| 425 | 62.05 | [1914. Cyclically Rotating a Grid](https://leetcode.com/problems/cyclically-rotating-a-grid/description/) | Medium | three-months | Google, Amazon, Meta |
| 426 | 61.65 | [921. Minimum Add to Make Parentheses Valid](https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/) | Medium | three-months | Google, Meta |
| 427 | 61.62 | [1365. How Many Numbers Are Smaller Than the Current Number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/) | Easy | three-months | Amazon, Meta, Microsoft |
| 428 | 61.51 | [2965. Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/description/) | Easy | three-months | Google, Amazon |
| 429 | 61.49 | [815. Bus Routes](https://leetcode.com/problems/bus-routes/description/) | Hard | three-months | Google, Amazon |
| 430 | 61.49 | [1470. Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/description/) | Easy | three-months | Google, Amazon |
| 431 | 61.41 | [973. K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/description/) | Medium | three-months | Amazon, Meta |
| 432 | 61.19 | [273. Integer to English Words](https://leetcode.com/problems/integer-to-english-words/description/) | Hard | three-months | Amazon, Microsoft |
| 433 | 61.03 | [1456. Maximum Number of Vowels in a Substring of Given Length](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/) | Medium | three-months | Amazon, Meta, Microsoft |
| 434 | 60.94 | [354. Russian Doll Envelopes](https://leetcode.com/problems/russian-doll-envelopes/description/) | Hard | three-months | Google, Amazon |
| 435 | 60.78 | [97. Interleaving String](https://leetcode.com/problems/interleaving-string/description/) | Medium | three-months | Google, Amazon |
| 436 | 60.78 | [3633. Earliest Finish Time for Land and Water Rides I](https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/description/) | Easy | three-months | Google, Amazon |
| 437 | 60.78 | [3751. Total Waviness of Numbers in Range I](https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/description/) | Medium | three-months | Google, Amazon |
| 438 | 60.59 | [252. Meeting Rooms](https://leetcode.com/problems/meeting-rooms/description/) | Easy | three-months | Amazon, Apple |
| 439 | 60.56 | [359. Logger Rate Limiter](https://leetcode.com/problems/logger-rate-limiter/description/) | Easy | three-months | Google, Amazon |
| 440 | 60.56 | [2657. Find the Prefix Common Array of Two Arrays](https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/) | Medium | three-months | Google, Amazon |
| 441 | 60.56 | [3225. Maximum Score From Grid Operations](https://leetcode.com/problems/maximum-score-from-grid-operations/description/) | Hard | three-months | Google, Amazon |
| 442 | 60.03 | [60. Permutation Sequence](https://leetcode.com/problems/permutation-sequence/description/) | Hard | three-months | Google, Amazon |
| 443 | 60.03 | [126. Word Ladder II](https://leetcode.com/problems/word-ladder-ii/description/) | Hard | three-months | Google, Amazon |
| 444 | 60.03 | [304. Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/description/) | Medium | three-months | Google, Amazon |
| 445 | 60.03 | [610. Triangle Judgement](https://leetcode.com/problems/triangle-judgement/description/) | Easy | three-months | Google, Amazon |
| 446 | 60.03 | [707. Design Linked List](https://leetcode.com/problems/design-linked-list/description/) | Medium | three-months | Google, Amazon |
| 447 | 60.03 | [1277. Count Square Submatrices with All Ones](https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/) | Medium | three-months | Google, Amazon |
| 448 | 60.03 | [1603. Design Parking System](https://leetcode.com/problems/design-parking-system/description/) | Easy | three-months | Google, Amazon |
| 449 | 60.03 | [2615. Sum of Distances](https://leetcode.com/problems/sum-of-distances/description/) | Medium | three-months | Google, Amazon |
| 450 | 60.03 | [3488. Closest Equal Element Queries](https://leetcode.com/problems/closest-equal-element-queries/description/) | Medium | three-months | Google, Amazon |
| 451 | 59.89 | [1797. Design Authentication Manager](https://leetcode.com/problems/design-authentication-manager/description/) | Medium | three-months | Amazon, Microsoft |
| 452 | 59.89 | [2385. Amount of Time for Binary Tree to Be Infected](https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/description/) | Medium | three-months | Amazon, Microsoft |
| 453 | 59.80 | [289. Game of Life](https://leetcode.com/problems/game-of-life/description/) | Medium | three-months | Meta, Adobe |
| 454 | 59.78 | [337. House Robber III](https://leetcode.com/problems/house-robber-iii/description/) | Medium | three-months | Google, Amazon |
| 455 | 59.78 | [1512. Number of Good Pairs](https://leetcode.com/problems/number-of-good-pairs/description/) | Easy | three-months | Google, Amazon |
| 456 | 59.74 | [647. Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/description/) | Medium | six-months | Google, Amazon, Meta, Microsoft |
| 457 | 59.05 | [190. Reverse Bits](https://leetcode.com/problems/reverse-bits/description/) | Easy | three-months | Google, Amazon |
| 458 | 59.05 | [433. Minimum Genetic Mutation](https://leetcode.com/problems/minimum-genetic-mutation/description/) | Medium | three-months | Google, Amazon |
| 459 | 59.05 | [566. Reshape the Matrix](https://leetcode.com/problems/reshape-the-matrix/description/) | Easy | three-months | Google, Amazon |
| 460 | 59.05 | [701. Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree/description/) | Medium | three-months | Google, Amazon |
| 461 | 59.05 | [788. Rotated Digits](https://leetcode.com/problems/rotated-digits/description/) | Medium | three-months | Google, Amazon |
| 462 | 59.05 | [790. Domino and Tromino Tiling](https://leetcode.com/problems/domino-and-tromino-tiling/description/) | Medium | three-months | Google, Amazon |
| 463 | 59.05 | [1070. Product Sales Analysis III](https://leetcode.com/problems/product-sales-analysis-iii/description/) | Medium | three-months | Google, Amazon |
| 464 | 59.05 | [1340. Jump Game V](https://leetcode.com/problems/jump-game-v/description/) | Hard | three-months | Google, Amazon |
| 465 | 59.05 | [1584. Min Cost to Connect All Points](https://leetcode.com/problems/min-cost-to-connect-all-points/description/) | Medium | three-months | Google, Amazon |
| 466 | 59.05 | [1665. Minimum Initial Energy to Finish Tasks](https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/description/) | Hard | three-months | Google, Amazon |
| 467 | 59.05 | [2149. Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/description/) | Medium | three-months | Google, Amazon |
| 468 | 59.05 | [3629. Minimum Jumps to Reach End via Prime Teleportation](https://leetcode.com/problems/minimum-jumps-to-reach-end-via-prime-teleportation/description/) | Medium | three-months | Google, Amazon |
| 469 | 59.05 | [3660. Jump Game IX](https://leetcode.com/problems/jump-game-ix/description/) | Medium | three-months | Google, Amazon |
| 470 | 58.96 | [692. Top K Frequent Words](https://leetcode.com/problems/top-k-frequent-words/description/) | Medium | three-months | Google, Amazon |
| 471 | 58.88 | [2161. Partition Array According to Given Pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot/description/) | Medium | three-months | Amazon, Microsoft |
| 472 | 58.73 | [1353. Maximum Number of Events That Can Be Attended](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/description/) | Medium | three-months | Amazon, Microsoft |
| 473 | 58.36 | [3914. Minimum Operations to Make Array Non Decreasing](https://leetcode.com/problems/minimum-operations-to-make-array-non-decreasing/description/) | Medium | three-months | Amazon |
| 474 | 58.33 | [2553. Separate the Digits in an Array](https://leetcode.com/problems/separate-the-digits-in-an-array/description/) | Easy | three-months | Google, Microsoft |
| 475 | 58.33 | [2784. Check if Array is Good](https://leetcode.com/problems/check-if-array-is-good/description/) | Easy | three-months | Google, Microsoft |
| 476 | 58.13 | [684. Redundant Connection](https://leetcode.com/problems/redundant-connection/description/) | Medium | three-months | Amazon, Microsoft |
| 477 | 58.05 | [3300. Minimum Element After Replacement With Digit Sum](https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/description/) | Easy | three-months | Google, Meta |
| 478 | 58.05 | [3932. Count K-th Roots in a Range](https://leetcode.com/problems/count-k-th-roots-in-a-range/description/) | Medium | three-months | Google, Meta |
| 479 | 58.00 | [3408. Design Task Manager](https://leetcode.com/problems/design-task-manager/description/) | Medium | three-months | Amazon, Apple |
| 480 | 58.00 | [752. Open the Lock](https://leetcode.com/problems/open-the-lock/description/) | Medium | three-months | Amazon, Microsoft |
| 481 | 57.85 | [1650. Lowest Common Ancestor of a Binary Tree III](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree-iii/description/) | Medium | three-months | Amazon, Meta |
| 482 | 57.67 | [1200. Minimum Absolute Difference](https://leetcode.com/problems/minimum-absolute-difference/description/) | Easy | six-months | Google, Amazon, Microsoft, Salesforce |
| 483 | 57.52 | [714. Best Time to Buy and Sell Stock with Transaction Fee](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/description/) | Medium | three-months | Google, Apple |
| 484 | 57.45 | [188. Best Time to Buy and Sell Stock IV](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/) | Hard | three-months | Google, Microsoft |
| 485 | 57.45 | [409. Longest Palindrome](https://leetcode.com/problems/longest-palindrome/description/) | Easy | three-months | Google, Microsoft |
| 486 | 57.45 | [1441. Build an Array With Stack Operations](https://leetcode.com/problems/build-an-array-with-stack-operations/description/) | Medium | three-months | Google, Microsoft |
| 487 | 57.43 | [475. Heaters](https://leetcode.com/problems/heaters/description/) | Medium | three-months | Microsoft, Adobe |
| 488 | 57.23 | [222. Count Complete Tree Nodes](https://leetcode.com/problems/count-complete-tree-nodes/description/) | Easy | three-months | Google, Amazon |
| 489 | 57.23 | [260. Single Number III](https://leetcode.com/problems/single-number-iii/description/) | Medium | three-months | Google, Amazon |
| 490 | 57.23 | [305. Number of Islands II](https://leetcode.com/problems/number-of-islands-ii/description/) | Hard | three-months | Google, Amazon |
| 491 | 57.23 | [771. Jewels and Stones](https://leetcode.com/problems/jewels-and-stones/description/) | Easy | three-months | Google, Amazon |
| 492 | 57.23 | [953. Verifying an Alien Dictionary](https://leetcode.com/problems/verifying-an-alien-dictionary/description/) | Easy | three-months | Google, Amazon |
| 493 | 57.23 | [1008. Construct Binary Search Tree from Preorder Traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/) | Medium | three-months | Google, Amazon |
| 494 | 57.23 | [1235. Maximum Profit in Job Scheduling](https://leetcode.com/problems/maximum-profit-in-job-scheduling/description/) | Hard | three-months | Google, Amazon |
| 495 | 57.23 | [1658. Minimum Operations to Reduce X to Zero](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/description/) | Medium | three-months | Google, Amazon |
| 496 | 57.23 | [1934. Confirmation Rate](https://leetcode.com/problems/confirmation-rate/description/) | Medium | three-months | Google, Amazon |
| 497 | 57.14 | [2418. Sort the People](https://leetcode.com/problems/sort-the-people/description/) | Easy | three-months | Amazon, Microsoft |
| 498 | 57.02 | [165. Compare Version Numbers](https://leetcode.com/problems/compare-version-numbers/description/) | Medium | three-months | Google, Amazon |
| 499 | 57.02 | [326. Power of Three](https://leetcode.com/problems/power-of-three/description/) | Easy | three-months | Google, Amazon |
| 500 | 57.02 | [367. Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/description/) | Easy | three-months | Google, Amazon |
| 501 | 57.02 | [414. Third Maximum Number](https://leetcode.com/problems/third-maximum-number/description/) | Easy | three-months | Google, Amazon |
| 502 | 57.02 | [507. Perfect Number](https://leetcode.com/problems/perfect-number/description/) | Easy | three-months | Google, Amazon |
| 503 | 57.02 | [673. Number of Longest Increasing Subsequence](https://leetcode.com/problems/number-of-longest-increasing-subsequence/description/) | Medium | three-months | Google, Amazon |
| 504 | 57.02 | [864. Shortest Path to Get All Keys](https://leetcode.com/problems/shortest-path-to-get-all-keys/description/) | Hard | three-months | Google, Amazon |
| 505 | 57.02 | [1043. Partition Array for Maximum Sum](https://leetcode.com/problems/partition-array-for-maximum-sum/description/) | Medium | three-months | Google, Amazon |
| 506 | 57.02 | [1075. Project Employees I](https://leetcode.com/problems/project-employees-i/description/) | Easy | three-months | Google, Amazon |
| 507 | 57.02 | [1248. Count Number of Nice Subarrays](https://leetcode.com/problems/count-number-of-nice-subarrays/description/) | Medium | three-months | Google, Amazon |
| 508 | 57.02 | [1321. Restaurant Growth](https://leetcode.com/problems/restaurant-growth/description/) | Medium | three-months | Google, Amazon |
| 509 | 57.02 | [2011. Final Value of Variable After Performing Operations](https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/) | Easy | three-months | Google, Amazon |
| 510 | 57.02 | [2078. Two Furthest Houses With Different Colors](https://leetcode.com/problems/two-furthest-houses-with-different-colors/description/) | Easy | three-months | Google, Amazon |
| 511 | 57.02 | [2089. Find Target Indices After Sorting Array](https://leetcode.com/problems/find-target-indices-after-sorting-array/description/) | Easy | three-months | Google, Amazon |
| 512 | 57.01 | [3481. Apply Substitutions](https://leetcode.com/problems/apply-substitutions/description/) | Medium | three-months | Google |
| 513 | 56.95 | [622. Design Circular Queue](https://leetcode.com/problems/design-circular-queue/description/) | Medium | six-months | Google, Amazon, Apple, Microsoft |
| 514 | 56.86 | [1871. Jump Game VII](https://leetcode.com/problems/jump-game-vii/description/) | Medium | three-months | Amazon, Meta |
| 515 | 56.26 | [171. Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/description/) | Easy | three-months | Amazon, Microsoft |
| 516 | 56.26 | [310. Minimum Height Trees](https://leetcode.com/problems/minimum-height-trees/description/) | Medium | three-months | Amazon, Microsoft |
| 517 | 56.26 | [1823. Find the Winner of the Circular Game](https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/) | Medium | three-months | Amazon, Microsoft |
| 518 | 56.26 | [2050. Parallel Courses III](https://leetcode.com/problems/parallel-courses-iii/description/) | Hard | three-months | Amazon, Microsoft |
| 519 | 56.26 | [2974. Minimum Number Game](https://leetcode.com/problems/minimum-number-game/description/) | Easy | three-months | Amazon, Microsoft |
| 520 | 56.23 | [2104. Sum of Subarray Ranges](https://leetcode.com/problems/sum-of-subarray-ranges/description/) | Medium | three-months | Google, Meta |
| 521 | 55.98 | [2502. Design Memory Allocator](https://leetcode.com/problems/design-memory-allocator/description/) | Medium | three-months | Amazon, Apple |
| 522 | 55.41 | [112. Path Sum](https://leetcode.com/problems/path-sum/description/) | Easy | six-months | Google, Amazon, Meta, Apple |
| 523 | 55.27 | [1840. Maximum Building Height](https://leetcode.com/problems/maximum-building-height/description/) | Hard | three-months | Meta, Microsoft |
| 524 | 55.12 | [586. Customer Placing the Largest Number of Orders](https://leetcode.com/problems/customer-placing-the-largest-number-of-orders/description/) | Easy | three-months | Amazon, Microsoft |
| 525 | 55.12 | [1932. Merge BSTs to Create Single BST](https://leetcode.com/problems/merge-bsts-to-create-single-bst/description/) | Hard | three-months | Amazon, Microsoft |
| 526 | 55.08 | [3920. Maximize Fixed Points After Deletions](https://leetcode.com/problems/maximize-fixed-points-after-deletions/description/) | Hard | three-months | Amazon |
| 527 | 55.00 | [2366. Minimum Replacements to Sort the Array](https://leetcode.com/problems/minimum-replacements-to-sort-the-array/description/) | Hard | three-months | Salesforce |
| 528 | 53.99 | [172. Factorial Trailing Zeroes](https://leetcode.com/problems/factorial-trailing-zeroes/description/) | Medium | three-months | Google |
| 529 | 53.99 | [355. Design Twitter](https://leetcode.com/problems/design-twitter/description/) | Medium | three-months | Google |
| 530 | 53.99 | [366. Find Leaves of Binary Tree](https://leetcode.com/problems/find-leaves-of-binary-tree/description/) | Medium | three-months | Google |
| 531 | 53.99 | [377. Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/description/) | Medium | three-months | Google |
| 532 | 53.99 | [386. Lexicographical Numbers](https://leetcode.com/problems/lexicographical-numbers/description/) | Medium | three-months | Google |
| 533 | 53.99 | [421. Maximum XOR of Two Numbers in an Array](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/description/) | Medium | three-months | Google |
| 534 | 53.99 | [427. Construct Quad Tree](https://leetcode.com/problems/construct-quad-tree/description/) | Medium | three-months | Google |
| 535 | 53.99 | [442. Find All Duplicates in an Array](https://leetcode.com/problems/find-all-duplicates-in-an-array/description/) | Medium | three-months | Google |
| 536 | 53.99 | [444. Sequence Reconstruction](https://leetcode.com/problems/sequence-reconstruction/description/) | Medium | three-months | Google |
| 537 | 53.99 | [461. Hamming Distance](https://leetcode.com/problems/hamming-distance/description/) | Easy | three-months | Google |
| 538 | 53.99 | [511. Game Play Analysis I](https://leetcode.com/problems/game-play-analysis-i/description/) | Easy | three-months | Google |
| 539 | 53.99 | [532. K-diff Pairs in an Array](https://leetcode.com/problems/k-diff-pairs-in-an-array/description/) | Medium | three-months | Google |
| 540 | 53.99 | [546. Remove Boxes](https://leetcode.com/problems/remove-boxes/description/) | Hard | three-months | Google |
| 541 | 53.99 | [642. Design Search Autocomplete System](https://leetcode.com/problems/design-search-autocomplete-system/description/) | Hard | three-months | Google |
| 542 | 53.99 | [679. 24 Game](https://leetcode.com/problems/24-game/description/) | Hard | three-months | Google |
| 543 | 53.99 | [754. Reach a Number](https://leetcode.com/problems/reach-a-number/description/) | Medium | three-months | Google |
| 544 | 53.99 | [777. Swap Adjacent in LR String](https://leetcode.com/problems/swap-adjacent-in-lr-string/description/) | Medium | three-months | Google |
| 545 | 53.99 | [834. Sum of Distances in Tree](https://leetcode.com/problems/sum-of-distances-in-tree/description/) | Hard | three-months | Google |
| 546 | 53.99 | [963. Minimum Area Rectangle II](https://leetcode.com/problems/minimum-area-rectangle-ii/description/) | Medium | three-months | Google |
| 547 | 53.99 | [1049. Last Stone Weight II](https://leetcode.com/problems/last-stone-weight-ii/description/) | Medium | three-months | Google |
| 548 | 53.99 | [1101. The Earliest Moment When Everyone Become Friends](https://leetcode.com/problems/the-earliest-moment-when-everyone-become-friends/description/) | Medium | three-months | Google |
| 549 | 53.99 | [1109. Corporate Flight Bookings](https://leetcode.com/problems/corporate-flight-bookings/description/) | Medium | three-months | Google |
| 550 | 53.99 | [1160. Find Words That Can Be Formed by Characters](https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/) | Easy | three-months | Google |
| 551 | 53.99 | [1161. Maximum Level Sum of a Binary Tree](https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/) | Medium | three-months | Google |
| 552 | 53.99 | [1240. Tiling a Rectangle with the Fewest Squares](https://leetcode.com/problems/tiling-a-rectangle-with-the-fewest-squares/description/) | Hard | three-months | Google |
| 553 | 53.99 | [1281. Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/) | Easy | three-months | Google |
| 554 | 53.99 | [1296. Divide Array in Sets of K Consecutive Numbers](https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/description/) | Medium | three-months | Google |
| 555 | 53.99 | [1320. Minimum Distance to Type a Word Using Two Fingers](https://leetcode.com/problems/minimum-distance-to-type-a-word-using-two-fingers/description/) | Hard | three-months | Google |
| 556 | 53.99 | [1378. Replace Employee ID With The Unique Identifier](https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/description/) | Easy | three-months | Google |
| 557 | 53.99 | [1391. Check if There is a Valid Path in a Grid](https://leetcode.com/problems/check-if-there-is-a-valid-path-in-a-grid/description/) | Medium | three-months | Google |
| 558 | 53.99 | [1437. Check If All 1's Are at Least Length K Places Away](https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/description/) | Easy | three-months | Google |
| 559 | 53.99 | [1722. Minimize Hamming Distance After Swap Operations](https://leetcode.com/problems/minimize-hamming-distance-after-swap-operations/description/) | Medium | three-months | Google |
| 560 | 53.99 | [1729. Find Followers Count](https://leetcode.com/problems/find-followers-count/description/) | Easy | three-months | Google |
| 561 | 53.99 | [1731. The Number of Employees Which Report to Each Employee](https://leetcode.com/problems/the-number-of-employees-which-report-to-each-employee/description/) | Easy | three-months | Google |
| 562 | 53.99 | [1763. Longest Nice Substring](https://leetcode.com/problems/longest-nice-substring/description/) | Easy | three-months | Google |
| 563 | 53.99 | [2074. Reverse Nodes in Even Length Groups](https://leetcode.com/problems/reverse-nodes-in-even-length-groups/description/) | Medium | three-months | Google |
| 564 | 53.99 | [2126. Destroying Asteroids](https://leetcode.com/problems/destroying-asteroids/description/) | Medium | three-months | Google |
| 565 | 53.99 | [2140. Solving Questions With Brainpower](https://leetcode.com/problems/solving-questions-with-brainpower/description/) | Medium | three-months | Google |
| 566 | 53.99 | [2337. Move Pieces to Obtain a String](https://leetcode.com/problems/move-pieces-to-obtain-a-string/description/) | Medium | three-months | Google |
| 567 | 53.99 | [2356. Number of Unique Subjects Taught by Each Teacher](https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher/description/) | Easy | three-months | Google |
| 568 | 53.99 | [2396. Strictly Palindromic Number](https://leetcode.com/problems/strictly-palindromic-number/description/) | Medium | three-months | Google |
| 569 | 53.99 | [2452. Words Within Two Edits of Dictionary](https://leetcode.com/problems/words-within-two-edits-of-dictionary/description/) | Medium | three-months | Google |
| 570 | 53.99 | [2540. Minimum Common Value](https://leetcode.com/problems/minimum-common-value/description/) | Easy | three-months | Google |
| 571 | 53.99 | [3121. Count the Number of Special Characters II](https://leetcode.com/problems/count-the-number-of-special-characters-ii/description/) | Medium | three-months | Google |
| 572 | 53.99 | [3161. Block Placement Queries](https://leetcode.com/problems/block-placement-queries/description/) | Hard | three-months | Google |
| 573 | 53.99 | [3432. Count Partitions with Even Sum Difference](https://leetcode.com/problems/count-partitions-with-even-sum-difference/description/) | Easy | three-months | Google |
| 574 | 53.99 | [3464. Maximize the Distance Between Points on a Square](https://leetcode.com/problems/maximize-the-distance-between-points-on-a-square/description/) | Hard | three-months | Google |
| 575 | 53.99 | [3559. Number of Ways to Assign Edge Weights II](https://leetcode.com/problems/number-of-ways-to-assign-edge-weights-ii/description/) | Hard | three-months | Google |
| 576 | 53.99 | [3573. Best Time to Buy and Sell Stock V](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-v/description/) | Medium | three-months | Google |
| 577 | 53.99 | [3592. Inverse Coin Change](https://leetcode.com/problems/inverse-coin-change/description/) | Medium | three-months | Google |
| 578 | 53.99 | [3691. Maximum Total Subarray Value II](https://leetcode.com/problems/maximum-total-subarray-value-ii/description/) | Hard | three-months | Google |
| 579 | 53.99 | [3738. Longest Non-Decreasing Subarray After Replacing at Most One Element](https://leetcode.com/problems/longest-non-decreasing-subarray-after-replacing-at-most-one-element/description/) | Medium | three-months | Google |
| 580 | 53.99 | [3962. Maximum Subarray Sum After at Most K Swaps](https://leetcode.com/problems/maximum-subarray-sum-after-at-most-k-swaps/description/) | Hard | three-months | Google |
| 581 | 52.86 | [419. Battleships in a Board](https://leetcode.com/problems/battleships-in-a-board/description/) | Medium | six-months | Amazon, Meta, Microsoft |
| 582 | 52.53 | [407. Trapping Rain Water II](https://leetcode.com/problems/trapping-rain-water-ii/description/) | Hard | six-months | Google, Amazon, Meta, Microsoft |
| 583 | 52.53 | [523. Continuous Subarray Sum](https://leetcode.com/problems/continuous-subarray-sum/description/) | Medium | six-months | Google, Amazon, Meta, Microsoft |
| 584 | 52.22 | [1653. Minimum Deletions to Make String Balanced](https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/description/) | Medium | six-months | Google, Meta, Microsoft |
| 585 | 51.78 | [3507. Minimum Pair Removal to Sort Array I](https://leetcode.com/problems/minimum-pair-removal-to-sort-array-i/description/) | Easy | six-months | Google, Meta, Microsoft |
| 586 | 51.67 | [696. Count Binary Substrings](https://leetcode.com/problems/count-binary-substrings/description/) | Easy | six-months | Google, Amazon, Microsoft |
| 587 | 51.65 | [3010. Divide an Array Into Subarrays With Minimum Cost I](https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/description/) | Easy | six-months | Google, Amazon, Microsoft |
| 588 | 51.61 | [59. Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/description/) | Medium | three-months | Amazon |
| 589 | 51.61 | [174. Dungeon Game](https://leetcode.com/problems/dungeon-game/description/) | Hard | three-months | Amazon |
| 590 | 51.61 | [211. Design Add and Search Words Data Structure](https://leetcode.com/problems/design-add-and-search-words-data-structure/description/) | Medium | three-months | Amazon |
| 591 | 51.61 | [376. Wiggle Subsequence](https://leetcode.com/problems/wiggle-subsequence/description/) | Medium | three-months | Amazon |
| 592 | 51.61 | [857. Minimum Cost to Hire K Workers](https://leetcode.com/problems/minimum-cost-to-hire-k-workers/description/) | Hard | three-months | Amazon |
| 593 | 51.61 | [859. Buddy Strings](https://leetcode.com/problems/buddy-strings/description/) | Easy | three-months | Amazon |
| 594 | 51.61 | [861. Score After Flipping Matrix](https://leetcode.com/problems/score-after-flipping-matrix/description/) | Medium | three-months | Amazon |
| 595 | 51.61 | [895. Maximum Frequency Stack](https://leetcode.com/problems/maximum-frequency-stack/description/) | Hard | three-months | Amazon |
| 596 | 51.61 | [968. Binary Tree Cameras](https://leetcode.com/problems/binary-tree-cameras/description/) | Hard | three-months | Amazon |
| 597 | 51.61 | [969. Pancake Sorting](https://leetcode.com/problems/pancake-sorting/description/) | Medium | three-months | Amazon |
| 598 | 51.61 | [1028. Recover a Tree From Preorder Traversal](https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/description/) | Hard | three-months | Amazon |
| 599 | 51.61 | [1068. Product Sales Analysis I](https://leetcode.com/problems/product-sales-analysis-i/description/) | Easy | three-months | Amazon |
| 600 | 51.61 | [1151. Minimum Swaps to Group All 1's Together](https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together/description/) | Medium | three-months | Amazon |
| 601 | 51.61 | [1152. Analyze User Website Visit Pattern](https://leetcode.com/problems/analyze-user-website-visit-pattern/description/) | Medium | three-months | Amazon |
| 602 | 51.61 | [1236. Web Crawler](https://leetcode.com/problems/web-crawler/description/) | Medium | three-months | Amazon |
| 603 | 51.61 | [1268. Search Suggestions System](https://leetcode.com/problems/search-suggestions-system/description/) | Medium | three-months | Amazon |
| 604 | 51.61 | [1306. Jump Game III](https://leetcode.com/problems/jump-game-iii/description/) | Medium | three-months | Amazon |
| 605 | 51.61 | [1315. Sum of Nodes with Even-Valued Grandparent](https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/description/) | Medium | three-months | Amazon |
| 606 | 51.61 | [1319. Number of Operations to Make Network Connected](https://leetcode.com/problems/number-of-operations-to-make-network-connected/description/) | Medium | three-months | Amazon |
| 607 | 51.61 | [1429. First Unique Number](https://leetcode.com/problems/first-unique-number/description/) | Medium | three-months | Amazon |
| 608 | 51.61 | [1438. Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/description/) | Medium | three-months | Amazon |
| 609 | 51.61 | [1463. Cherry Pickup II](https://leetcode.com/problems/cherry-pickup-ii/description/) | Hard | three-months | Amazon |
| 610 | 51.61 | [1492. The kth Factor of n](https://leetcode.com/problems/the-kth-factor-of-n/description/) | Medium | three-months | Amazon |
| 611 | 51.61 | [1494. Parallel Courses II](https://leetcode.com/problems/parallel-courses-ii/description/) | Hard | three-months | Amazon |
| 612 | 51.61 | [1614. Maximum Nesting Depth of the Parentheses](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/) | Easy | three-months | Amazon |
| 613 | 51.61 | [1648. Sell Diminishing-Valued Colored Balls](https://leetcode.com/problems/sell-diminishing-valued-colored-balls/description/) | Medium | three-months | Amazon |
| 614 | 51.61 | [1652. Defuse the Bomb](https://leetcode.com/problems/defuse-the-bomb/description/) | Easy | three-months | Amazon |
| 615 | 51.61 | [1691. Maximum Height by Stacking Cuboids ](https://leetcode.com/problems/maximum-height-by-stacking-cuboids/description/) | Hard | three-months | Amazon |
| 616 | 51.61 | [1903. Largest Odd Number in String](https://leetcode.com/problems/largest-odd-number-in-string/description/) | Easy | three-months | Amazon |
| 617 | 51.61 | [1920. Build Array from Permutation](https://leetcode.com/problems/build-array-from-permutation/description/) | Easy | three-months | Amazon |
| 618 | 51.61 | [2115. Find All Possible Recipes from Given Supplies](https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/description/) | Medium | three-months | Amazon |
| 619 | 51.61 | [2130. Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/) | Medium | three-months | Amazon |
| 620 | 51.61 | [2144. Minimum Cost of Buying Candies With Discount](https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/description/) | Easy | three-months | Amazon |
| 621 | 51.61 | [2262. Total Appeal of A String](https://leetcode.com/problems/total-appeal-of-a-string/description/) | Hard | three-months | Amazon |
| 622 | 51.61 | [2272. Substring With Largest Variance](https://leetcode.com/problems/substring-with-largest-variance/description/) | Hard | three-months | Amazon |
| 623 | 51.61 | [2384. Largest Palindromic Number](https://leetcode.com/problems/largest-palindromic-number/description/) | Medium | three-months | Amazon |
| 624 | 51.61 | [2405. Optimal Partition of String](https://leetcode.com/problems/optimal-partition-of-string/description/) | Medium | three-months | Amazon |
| 625 | 51.61 | [2661. First Completely Painted Row or Column](https://leetcode.com/problems/first-completely-painted-row-or-column/description/) | Medium | three-months | Amazon |
| 626 | 51.61 | [2770. Maximum Number of Jumps to Reach the Last Index](https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/description/) | Medium | three-months | Amazon |
| 627 | 51.61 | [3093. Longest Common Suffix Queries](https://leetcode.com/problems/longest-common-suffix-queries/description/) | Hard | three-months | Amazon |
| 628 | 51.61 | [3120. Count the Number of Special Characters I](https://leetcode.com/problems/count-the-number-of-special-characters-i/description/) | Easy | three-months | Amazon |
| 629 | 51.61 | [3304. Find the K-th Character in String Game I](https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/description/) | Easy | three-months | Amazon |
| 630 | 51.61 | [3459. Length of Longest V-Shaped Diagonal Segment](https://leetcode.com/problems/length-of-longest-v-shaped-diagonal-segment/description/) | Hard | three-months | Amazon |
| 631 | 51.61 | [3462. Maximum Sum With at Most K Elements](https://leetcode.com/problems/maximum-sum-with-at-most-k-elements/description/) | Medium | three-months | Amazon |
| 632 | 51.61 | [3558. Number of Ways to Assign Edge Weights I](https://leetcode.com/problems/number-of-ways-to-assign-edge-weights-i/description/) | Medium | three-months | Amazon |
| 633 | 51.61 | [3614. Process String with Special Operations II](https://leetcode.com/problems/process-string-with-special-operations-ii/description/) | Hard | three-months | Amazon |
| 634 | 51.61 | [3644. Maximum K to Sort a Permutation](https://leetcode.com/problems/maximum-k-to-sort-a-permutation/description/) | Medium | three-months | Amazon |
| 635 | 51.61 | [3752. Lexicographically Smallest Negated Permutation that Sums to Target](https://leetcode.com/problems/lexicographically-smallest-negated-permutation-that-sums-to-target/description/) | Medium | three-months | Amazon |
| 636 | 51.61 | [3872. Longest Arithmetic Sequence After Changing At Most One Element](https://leetcode.com/problems/longest-arithmetic-sequence-after-changing-at-most-one-element/description/) | Medium | three-months | Amazon |
| 637 | 51.61 | [3928. Minimum Cost to Buy Apples II](https://leetcode.com/problems/minimum-cost-to-buy-apples-ii/description/) | Hard | three-months | Amazon |
| 638 | 51.61 | [3942. Minimum Operations to Sort a Permutation](https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/description/) | Medium | three-months | Amazon |
| 639 | 51.60 | [1382. Balance a Binary Search Tree](https://leetcode.com/problems/balance-a-binary-search-tree/description/) | Medium | six-months | Amazon, Meta, Microsoft |
| 640 | 51.25 | [3035. Maximum Palindromes After Operations](https://leetcode.com/problems/maximum-palindromes-after-operations/description/) | Medium | three-months | Salesforce |
| 641 | 50.70 | [698. Partition to K Equal Sum Subsets](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/description/) | Medium | six-months | Google, Amazon, Microsoft |
| 642 | 50.52 | [173. Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/description/) | Medium | six-months | Google, Meta, Microsoft |
| 643 | 50.52 | [1888. Minimum Number of Flips to Make the Binary String Alternating](https://leetcode.com/problems/minimum-number-of-flips-to-make-the-binary-string-alternating/description/) | Medium | six-months | Google, Meta, Microsoft |
| 644 | 50.40 | [868. Binary Gap](https://leetcode.com/problems/binary-gap/description/) | Easy | six-months | Google, Amazon, Microsoft |
| 645 | 50.17 | [526. Beautiful Arrangement](https://leetcode.com/problems/beautiful-arrangement/description/) | Medium | three-months | Microsoft |
| 646 | 50.17 | [829. Consecutive Numbers Sum](https://leetcode.com/problems/consecutive-numbers-sum/description/) | Hard | three-months | Microsoft |
| 647 | 50.17 | [1696. Jump Game VI](https://leetcode.com/problems/jump-game-vi/description/) | Medium | three-months | Microsoft |
| 648 | 50.17 | [3946. Maximum Number of Items From Sale I](https://leetcode.com/problems/maximum-number-of-items-from-sale-i/description/) | Medium | three-months | Microsoft |
| 649 | 49.98 | [1071. Greatest Common Divisor of Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/description/) | Easy | six-months | Google, Amazon, Microsoft |
| 650 | 49.98 | [1461. Check If a String Contains All Binary Codes of Size K](https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/description/) | Medium | six-months | Google, Amazon, Microsoft |
| 651 | 49.98 | [1727. Largest Submatrix With Rearrangements](https://leetcode.com/problems/largest-submatrix-with-rearrangements/description/) | Medium | six-months | Google, Amazon, Microsoft |
| 652 | 49.89 | [1146. Snapshot Array](https://leetcode.com/problems/snapshot-array/description/) | Medium | six-months | Google, Amazon, Apple |
| 653 | 49.82 | [3713. Longest Balanced Substring I](https://leetcode.com/problems/longest-balanced-substring-i/description/) | Medium | six-months | Google, Amazon, Meta |
| 654 | 49.54 | [983. Minimum Cost For Tickets](https://leetcode.com/problems/minimum-cost-for-tickets/description/) | Medium | six-months | Google, Amazon, Adobe |
| 655 | 49.51 | [1545. Find Kth Bit in Nth Binary String](https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/description/) | Medium | six-months | Google, Amazon, Meta |
| 656 | 49.08 | [938. Range Sum of BST](https://leetcode.com/problems/range-sum-of-bst/description/) | Easy | six-months | Google, Amazon, Meta |
| 657 | 48.81 | [852. Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/description/) | Medium | six-months | Google, Amazon, Meta |
| 658 | 48.70 | [657. Robot Return to Origin](https://leetcode.com/problems/robot-return-to-origin/description/) | Easy | six-months | Google, Amazon, Microsoft |
| 659 | 48.54 | [91. Decode Ways](https://leetcode.com/problems/decode-ways/description/) | Medium | six-months | Google, Meta, Microsoft |
| 660 | 48.54 | [334. Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/description/) | Medium | six-months | Google, Meta, Microsoft |
| 661 | 48.28 | [178. Rank Scores](https://leetcode.com/problems/rank-scores/description/) | Medium | six-months | Google, Amazon, Microsoft |
| 662 | 48.28 | [235. Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/) | Medium | six-months | Google, Amazon, Microsoft |
| 663 | 48.28 | [1791. Find Center of Star Graph](https://leetcode.com/problems/find-center-of-star-graph/description/) | Easy | six-months | Google, Amazon, Microsoft |
| 664 | 47.98 | [233. Number of Digit One](https://leetcode.com/problems/number-of-digit-one/description/) | Hard | six-months | Google, Amazon, Microsoft |
| 665 | 47.84 | [177. Nth Highest Salary](https://leetcode.com/problems/nth-highest-salary/description/) | Medium | six-months | Google, Amazon, Meta |
| 666 | 47.54 | [309. Best Time to Buy and Sell Stock with Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description/) | Medium | six-months | Google, Amazon, Apple |
| 667 | 47.53 | [3129. Find All Possible Stable Binary Arrays I](https://leetcode.com/problems/find-all-possible-stable-binary-arrays-i/description/) | Medium | six-months | Google, Amazon, Meta |
| 668 | 47.53 | [3453. Separate Squares I](https://leetcode.com/problems/separate-squares-i/description/) | Medium | six-months | Google, Amazon, Meta |
| 669 | 47.39 | [249. Group Shifted Strings](https://leetcode.com/problems/group-shifted-strings/description/) | Medium | six-months | Google, Meta |
| 670 | 47.22 | [99. Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/description/) | Medium | six-months | Google, Amazon |
| 671 | 46.93 | [799. Champagne Tower](https://leetcode.com/problems/champagne-tower/description/) | Medium | six-months | Google, Amazon |
| 672 | 46.90 | [277. Find the Celebrity](https://leetcode.com/problems/find-the-celebrity/description/) | Medium | six-months | Amazon, Apple, Microsoft |
| 673 | 46.82 | [761. Special Binary String](https://leetcode.com/problems/special-binary-string/description/) | Hard | six-months | Google, Microsoft |
| 674 | 46.28 | [116. Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/) | Medium | six-months | Google, Amazon, Microsoft |
| 675 | 46.28 | [154. Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/description/) | Hard | six-months | Google, Amazon, Microsoft |
| 676 | 46.28 | [933. Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/description/) | Easy | six-months | Google, Amazon, Microsoft |
| 677 | 46.28 | [2840. Check if Strings Can be Made Equal With Operations II](https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/description/) | Medium | six-months | Google, Amazon, Microsoft |
| 678 | 46.16 | [841. Keys and Rooms](https://leetcode.com/problems/keys-and-rooms/description/) | Medium | six-months | Google, Meta, Apple |
| 679 | 45.88 | [93. Restore IP Addresses](https://leetcode.com/problems/restore-ip-addresses/description/) | Medium | six-months | Amazon, Microsoft |
| 680 | 45.88 | [1547. Minimum Cost to Cut a Stick](https://leetcode.com/problems/minimum-cost-to-cut-a-stick/description/) | Hard | six-months | Amazon, Microsoft |
| 681 | 45.83 | [860. Lemonade Change](https://leetcode.com/problems/lemonade-change/description/) | Easy | six-months | Google, Amazon, Meta |
| 682 | 45.83 | [980. Unique Paths III](https://leetcode.com/problems/unique-paths-iii/description/) | Hard | six-months | Google, Amazon, Meta |
| 683 | 45.83 | [1351. Count Negative Numbers in a Sorted Matrix](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/) | Easy | six-months | Google, Amazon, Meta |
| 684 | 45.83 | [3714. Longest Balanced Substring II](https://leetcode.com/problems/longest-balanced-substring-ii/description/) | Medium | six-months | Google, Amazon, Meta |
| 685 | 45.77 | [350. Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/description/) | Easy | six-months | Google, Amazon |
| 686 | 45.77 | [3026. Maximum Good Subarray Sum](https://leetcode.com/problems/maximum-good-subarray-sum/description/) | Medium | six-months | Google, Amazon |
| 687 | 45.61 | [480. Sliding Window Median](https://leetcode.com/problems/sliding-window-median/description/) | Hard | six-months | Meta, Microsoft |
| 688 | 44.84 | [346. Moving Average from Data Stream](https://leetcode.com/problems/moving-average-from-data-stream/description/) | Easy | six-months | Google, Meta |
| 689 | 44.56 | [123. Best Time to Buy and Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/) | Hard | six-months | Amazon, Meta |
| 690 | 44.56 | [441. Arranging Coins](https://leetcode.com/problems/arranging-coins/description/) | Easy | six-months | Amazon, Meta |
| 691 | 44.26 | [404. Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/description/) | Easy | six-months | Google, Microsoft |
| 692 | 44.26 | [504. Base 7](https://leetcode.com/problems/base-7/description/) | Easy | six-months | Google, Microsoft |
| 693 | 44.26 | [1356. Sort Integers by The Number of 1 Bits](https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/) | Easy | six-months | Google, Microsoft |
| 694 | 44.00 | [428. Serialize and Deserialize N-ary Tree](https://leetcode.com/problems/serialize-and-deserialize-n-ary-tree/description/) | Hard | six-months | Apple, Microsoft |
| 695 | 43.92 | [3637. Trionic Array I](https://leetcode.com/problems/trionic-array-i/description/) | Easy | six-months | Google, Amazon |
| 696 | 43.87 | [545. Boundary of Binary Tree](https://leetcode.com/problems/boundary-of-binary-tree/description/) | Medium | six-months | Meta, Microsoft |
| 697 | 43.22 | [269. Alien Dictionary](https://leetcode.com/problems/alien-dictionary/description/) | Hard | six-months | Google, Amazon |
| 698 | 43.22 | [279. Perfect Squares](https://leetcode.com/problems/perfect-squares/description/) | Medium | six-months | Google, Amazon |
| 699 | 43.22 | [389. Find the Difference](https://leetcode.com/problems/find-the-difference/description/) | Easy | six-months | Google, Amazon |
| 700 | 43.22 | [430. Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/description/) | Medium | six-months | Google, Amazon |
| 701 | 43.22 | [502. IPO](https://leetcode.com/problems/ipo/description/) | Hard | six-months | Google, Amazon |
| 702 | 43.22 | [554. Brick Wall](https://leetcode.com/problems/brick-wall/description/) | Medium | six-months | Google, Amazon |
| 703 | 43.22 | [693. Binary Number with Alternating Bits](https://leetcode.com/problems/binary-number-with-alternating-bits/description/) | Easy | six-months | Google, Amazon |
| 704 | 43.22 | [874. Walking Robot Simulation](https://leetcode.com/problems/walking-robot-simulation/description/) | Medium | six-months | Google, Amazon |
| 705 | 43.22 | [947. Most Stones Removed with Same Row or Column](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/description/) | Medium | six-months | Google, Amazon |
| 706 | 43.22 | [1192. Critical Connections in a Network](https://leetcode.com/problems/critical-connections-in-a-network/description/) | Hard | six-months | Google, Amazon |
| 707 | 43.22 | [1293. Shortest Path in a Grid with Obstacles Elimination](https://leetcode.com/problems/shortest-path-in-a-grid-with-obstacles-elimination/description/) | Hard | six-months | Google, Amazon |
| 708 | 43.22 | [1680. Concatenation of Consecutive Binary Numbers](https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/description/) | Medium | six-months | Google, Amazon |
| 709 | 43.22 | [1700. Number of Students Unable to Eat Lunch](https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/) | Easy | six-months | Google, Amazon |
| 710 | 43.19 | [95. Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/description/) | Medium | six-months | Google, Microsoft |
| 711 | 43.19 | [119. Pascal's Triangle II](https://leetcode.com/problems/pascals-triangle-ii/description/) | Easy | six-months | Google, Microsoft |
| 712 | 43.19 | [2035. Partition Array Into Two Arrays to Minimize Sum Difference](https://leetcode.com/problems/partition-array-into-two-arrays-to-minimize-sum-difference/description/) | Hard | six-months | Google, Microsoft |
| 713 | 42.94 | [550. Game Play Analysis IV](https://leetcode.com/problems/game-play-analysis-iv/description/) | Medium | six-months | Google, Meta |
| 714 | 42.94 | [1404. Number of Steps to Reduce a Number in Binary Representation to One](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/description/) | Medium | six-months | Google, Meta |
| 715 | 42.94 | [3640. Trionic Array II](https://leetcode.com/problems/trionic-array-ii/description/) | Hard | six-months | Google, Meta |
| 716 | 42.87 | [1594. Maximum Non Negative Product in a Matrix](https://leetcode.com/problems/maximum-non-negative-product-in-a-matrix/description/) | Medium | six-months | Amazon, Microsoft |
| 717 | 42.76 | [561. Array Partition](https://leetcode.com/problems/array-partition/description/) | Easy | six-months | Google, Amazon |
| 718 | 42.76 | [844. Backspace String Compare](https://leetcode.com/problems/backspace-string-compare/description/) | Easy | six-months | Google, Amazon |
| 719 | 42.76 | [1137. N-th Tribonacci Number](https://leetcode.com/problems/n-th-tribonacci-number/description/) | Easy | six-months | Google, Amazon |
| 720 | 42.76 | [1415. The k-th Lexicographical String of All Happy Strings of Length n](https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/description/) | Medium | six-months | Google, Amazon |
| 721 | 42.76 | [3721. Longest Balanced Subarray II](https://leetcode.com/problems/longest-balanced-subarray-ii/description/) | Hard | six-months | Google, Amazon |
| 722 | 42.25 | [187. Repeated DNA Sequences](https://leetcode.com/problems/repeated-dna-sequences/description/) | Medium | six-months | Amazon, Microsoft |
| 723 | 42.25 | [348. Design Tic-Tac-Toe](https://leetcode.com/problems/design-tic-tac-toe/description/) | Medium | six-months | Amazon, Microsoft |
| 724 | 42.25 | [1980. Find Unique Binary String](https://leetcode.com/problems/find-unique-binary-string/description/) | Medium | six-months | Amazon, Microsoft |
| 725 | 41.98 | [498. Diagonal Traverse](https://leetcode.com/problems/diagonal-traverse/description/) | Medium | six-months | Meta, Microsoft |
| 726 | 41.98 | [529. Minesweeper](https://leetcode.com/problems/minesweeper/description/) | Medium | six-months | Meta, Microsoft |
| 727 | 41.59 | [3315. Construct the Minimum Bitwise Array II](https://leetcode.com/problems/construct-the-minimum-bitwise-array-ii/description/) | Medium | six-months | Amazon, Meta |
| 728 | 41.49 | [472. Concatenated Words](https://leetcode.com/problems/concatenated-words/description/) | Hard | six-months | Amazon |
| 729 | 41.49 | [1848. Minimum Distance to the Target Element](https://leetcode.com/problems/minimum-distance-to-the-target-element/description/) | Easy | six-months | Amazon |
| 730 | 41.49 | [2488. Count Subarrays With Median K](https://leetcode.com/problems/count-subarrays-with-median-k/description/) | Hard | six-months | Amazon |
| 731 | 41.49 | [2910. Minimum Number of Groups to Create a Valid Assignment](https://leetcode.com/problems/minimum-number-of-groups-to-create-a-valid-assignment/description/) | Medium | six-months | Amazon |
| 732 | 40.68 | [626. Exchange Seats](https://leetcode.com/problems/exchange-seats/description/) | Medium | six-months | Microsoft |
| 733 | 40.68 | [1335. Minimum Difficulty of a Job Schedule](https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/description/) | Hard | six-months | Microsoft |
| 734 | 40.68 | [2472. Maximum Number of Non-overlapping Palindrome Substrings](https://leetcode.com/problems/maximum-number-of-non-overlapping-palindrome-substrings/description/) | Hard | six-months | Microsoft |
| 735 | 40.68 | [3814. Maximum Capacity Within Budget](https://leetcode.com/problems/maximum-capacity-within-budget/description/) | Medium | six-months | Microsoft |
| 736 | 40.63 | [216. Combination Sum III](https://leetcode.com/problems/combination-sum-iii/description/) | Medium | six-months | Google, Microsoft |
| 737 | 40.63 | [257. Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/description/) | Easy | six-months | Google, Microsoft |
| 738 | 40.63 | [401. Binary Watch](https://leetcode.com/problems/binary-watch/description/) | Easy | six-months | Google, Microsoft |
| 739 | 40.63 | [772. Basic Calculator III](https://leetcode.com/problems/basic-calculator-iii/description/) | Hard | six-months | Google, Microsoft |
| 740 | 40.63 | [847. Shortest Path Visiting All Nodes](https://leetcode.com/problems/shortest-path-visiting-all-nodes/description/) | Hard | six-months | Google, Microsoft |
| 741 | 40.63 | [867. Transpose Matrix](https://leetcode.com/problems/transpose-matrix/description/) | Easy | six-months | Google, Microsoft |
| 742 | 40.63 | [939. Minimum Area Rectangle](https://leetcode.com/problems/minimum-area-rectangle/description/) | Medium | six-months | Google, Microsoft |
| 743 | 40.63 | [1413. Minimum Value to Get Positive Step by Step Sum](https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/description/) | Easy | six-months | Google, Microsoft |
| 744 | 40.63 | [3546. Equal Sum Grid Partition I](https://leetcode.com/problems/equal-sum-grid-partition-i/description/) | Medium | six-months | Google, Microsoft |
| 745 | 40.63 | [3741. Minimum Distance Between Three Equal Elements II](https://leetcode.com/problems/minimum-distance-between-three-equal-elements-ii/description/) | Medium | six-months | Google, Microsoft |
| 746 | 40.45 | [450. Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/description/) | Medium | six-months | Google |
| 747 | 40.45 | [459. Repeated Substring Pattern](https://leetcode.com/problems/repeated-substring-pattern/description/) | Easy | six-months | Google |
| 748 | 40.45 | [581. Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/) | Medium | six-months | Google |
| 749 | 40.45 | [715. Range Module](https://leetcode.com/problems/range-module/description/) | Hard | six-months | Google |
| 750 | 40.45 | [833. Find And Replace in String](https://leetcode.com/problems/find-and-replace-in-string/description/) | Medium | six-months | Google |
| 751 | 40.45 | [843. Guess the Word](https://leetcode.com/problems/guess-the-word/description/) | Hard | six-months | Google |
| 752 | 40.45 | [1044. Longest Duplicate Substring](https://leetcode.com/problems/longest-duplicate-substring/description/) | Hard | six-months | Google |
| 753 | 40.45 | [1781. Sum of Beauty of All Substrings](https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/) | Medium | six-months | Google |
| 754 | 40.45 | [1877. Minimize Maximum Pair Sum in Array](https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/) | Medium | six-months | Google |
| 755 | 40.45 | [2188. Minimum Time to Finish the Race](https://leetcode.com/problems/minimum-time-to-finish-the-race/description/) | Hard | six-months | Google |
| 756 | 40.45 | [3110. Score of a String](https://leetcode.com/problems/score-of-a-string/description/) | Easy | six-months | Google |
| 757 | 40.45 | [3474. Lexicographically Smallest Generated String](https://leetcode.com/problems/lexicographically-smallest-generated-string/description/) | Hard | six-months | Google |
| 758 | 40.21 | [316. Remove Duplicate Letters](https://leetcode.com/problems/remove-duplicate-letters/description/) | Medium | six-months | Google, Amazon |
| 759 | 40.21 | [463. Island Perimeter](https://leetcode.com/problems/island-perimeter/description/) | Easy | six-months | Google, Amazon |
| 760 | 40.21 | [506. Relative Ranks](https://leetcode.com/problems/relative-ranks/description/) | Easy | six-months | Google, Amazon |
| 761 | 40.21 | [530. Minimum Absolute Difference in BST](https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/) | Easy | six-months | Google, Amazon |
| 762 | 40.21 | [896. Monotonic Array](https://leetcode.com/problems/monotonic-array/description/) | Easy | six-months | Google, Amazon |
| 763 | 40.21 | [941. Valid Mountain Array](https://leetcode.com/problems/valid-mountain-array/description/) | Easy | six-months | Google, Amazon |
| 764 | 40.21 | [962. Maximum Width Ramp](https://leetcode.com/problems/maximum-width-ramp/description/) | Medium | six-months | Google, Amazon |
| 765 | 40.21 | [1009. Complement of Base 10 Integer](https://leetcode.com/problems/complement-of-base-10-integer/description/) | Easy | six-months | Google, Amazon |
| 766 | 40.21 | [1050. Actors and Directors Who Cooperated At Least Three Times](https://leetcode.com/problems/actors-and-directors-who-cooperated-at-least-three-times/description/) | Easy | six-months | Google, Amazon |
| 767 | 40.21 | [1376. Time Needed to Inform All Employees](https://leetcode.com/problems/time-needed-to-inform-all-employees/description/) | Medium | six-months | Google, Amazon |
| 768 | 40.21 | [1689. Partitioning Into Minimum Number Of Deci-Binary Numbers](https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/description/) | Medium | six-months | Google, Amazon |
| 769 | 40.21 | [1832. Check if the Sentence Is Pangram](https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/) | Easy | six-months | Google, Amazon |
| 770 | 40.21 | [2344. Minimum Deletions to Make Array Divisible](https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/description/) | Hard | six-months | Google, Amazon |
| 771 | 40.21 | [2413. Smallest Even Multiple](https://leetcode.com/problems/smallest-even-multiple/description/) | Easy | six-months | Google, Amazon |
| 772 | 40.21 | [2943. Maximize Area of Square Hole in Grid](https://leetcode.com/problems/maximize-area-of-square-hole-in-grid/description/) | Medium | six-months | Google, Amazon |
| 773 | 40.21 | [2946. Matrix Similarity After Cyclic Shifts](https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/description/) | Easy | six-months | Google, Amazon |
| 774 | 40.21 | [2976. Minimum Cost to Convert String I](https://leetcode.com/problems/minimum-cost-to-convert-string-i/description/) | Medium | six-months | Google, Amazon |
| 775 | 40.21 | [3296. Minimum Number of Seconds to Make Mountain Height Zero](https://leetcode.com/problems/minimum-number-of-seconds-to-make-mountain-height-zero/description/) | Medium | six-months | Google, Amazon |
| 776 | 40.21 | [3454. Separate Squares II](https://leetcode.com/problems/separate-squares-ii/description/) | Hard | six-months | Google, Amazon |
| 777 | 40.21 | [3651. Minimum Cost Path with Teleportations](https://leetcode.com/problems/minimum-cost-path-with-teleportations/description/) | Hard | six-months | Google, Amazon |
| 778 | 39.97 | [406. Queue Reconstruction by Height](https://leetcode.com/problems/queue-reconstruction-by-height/description/) | Medium | six-months | Google, Meta |
| 779 | 39.97 | [413. Arithmetic Slices](https://leetcode.com/problems/arithmetic-slices/description/) | Medium | six-months | Google, Meta |
| 780 | 39.97 | [585. Investments in 2016](https://leetcode.com/problems/investments-in-2016/description/) | Medium | six-months | Google, Meta |
| 781 | 39.97 | [1466. Reorder Routes to Make All Paths Lead to the City Zero](https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero/description/) | Medium | six-months | Google, Meta |
| 782 | 39.97 | [2833. Furthest Point From Origin](https://leetcode.com/problems/furthest-point-from-origin/description/) | Easy | six-months | Google, Meta |
| 783 | 39.95 | [664. Strange Printer](https://leetcode.com/problems/strange-printer/description/) | Hard | six-months | Salesforce |
| 784 | 39.95 | [2603. Collect Coins in a Tree](https://leetcode.com/problems/collect-coins-in-a-tree/description/) | Hard | six-months | Salesforce |
| 785 | 39.31 | [432. All O`one Data Structure](https://leetcode.com/problems/all-oone-data-structure/description/) | Hard | six-months | Amazon, Apple |
| 786 | 39.24 | [728. Self Dividing Numbers](https://leetcode.com/problems/self-dividing-numbers/description/) | Easy | six-months | Amazon, Microsoft |
| 787 | 39.24 | [1000. Minimum Cost to Merge Stones](https://leetcode.com/problems/minimum-cost-to-merge-stones/description/) | Hard | six-months | Amazon, Microsoft |
| 788 | 39.24 | [3418. Maximum Amount of Money Robot Can Earn](https://leetcode.com/problems/maximum-amount-of-money-robot-can-earn/description/) | Medium | six-months | Amazon, Microsoft |
| 789 | 39.01 | [1204. Last Person to Fit in the Bus](https://leetcode.com/problems/last-person-to-fit-in-the-bus/description/) | Medium | six-months | Meta, Microsoft |
| 790 | 38.58 | [149. Max Points on a Line](https://leetcode.com/problems/max-points-on-a-line/description/) | Hard | six-months | Amazon |
| 791 | 38.58 | [203. Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/description/) | Easy | six-months | Amazon |
| 792 | 38.58 | [338. Counting Bits](https://leetcode.com/problems/counting-bits/description/) | Easy | six-months | Amazon |
| 793 | 38.58 | [390. Elimination Game](https://leetcode.com/problems/elimination-game/description/) | Medium | six-months | Amazon |
| 794 | 38.58 | [395. Longest Substring with At Least K Repeating Characters](https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/description/) | Medium | six-months | Amazon |
| 795 | 38.58 | [633. Sum of Square Numbers](https://leetcode.com/problems/sum-of-square-numbers/description/) | Medium | six-months | Amazon |
| 796 | 38.58 | [797. All Paths From Source to Target](https://leetcode.com/problems/all-paths-from-source-to-target/description/) | Medium | six-months | Amazon |
| 797 | 38.58 | [878. Nth Magical Number](https://leetcode.com/problems/nth-magical-number/description/) | Hard | six-months | Amazon |
| 798 | 38.58 | [990. Satisfiability of Equality Equations](https://leetcode.com/problems/satisfiability-of-equality-equations/description/) | Medium | six-months | Amazon |
| 799 | 38.58 | [1392. Longest Happy Prefix](https://leetcode.com/problems/longest-happy-prefix/description/) | Hard | six-months | Amazon |
| 800 | 38.58 | [1622. Fancy Sequence](https://leetcode.com/problems/fancy-sequence/description/) | Hard | six-months | Amazon |
| 801 | 38.58 | [1636. Sort Array by Increasing Frequency](https://leetcode.com/problems/sort-array-by-increasing-frequency/description/) | Easy | six-months | Amazon |
| 802 | 38.58 | [1685. Sum of Absolute Differences in a Sorted Array](https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/description/) | Medium | six-months | Amazon |
| 803 | 38.58 | [1856. Maximum Subarray Min-Product](https://leetcode.com/problems/maximum-subarray-min-product/description/) | Medium | six-months | Amazon |
| 804 | 38.58 | [2033. Minimum Operations to Make a Uni-Value Grid](https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/description/) | Medium | six-months | Amazon |
| 805 | 38.58 | [2460. Apply Operations to an Array](https://leetcode.com/problems/apply-operations-to-an-array/description/) | Easy | six-months | Amazon |
| 806 | 38.58 | [2583. Kth Largest Sum in a Binary Tree](https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/description/) | Medium | six-months | Amazon |
| 807 | 38.58 | [3013. Divide an Array Into Subarrays With Minimum Cost II](https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-ii/description/) | Hard | six-months | Amazon |
| 808 | 38.58 | [3371. Identify the Largest Outlier in an Array](https://leetcode.com/problems/identify-the-largest-outlier-in-an-array/description/) | Medium | six-months | Amazon |
| 809 | 38.58 | [3379. Transformed Array](https://leetcode.com/problems/transformed-array/description/) | Easy | six-months | Amazon |
| 810 | 38.58 | [3434. Maximum Frequency After Subarray Operation](https://leetcode.com/problems/maximum-frequency-after-subarray-operation/description/) | Medium | six-months | Amazon |
| 811 | 38.58 | [3510. Minimum Pair Removal to Sort Array II](https://leetcode.com/problems/minimum-pair-removal-to-sort-array-ii/description/) | Hard | six-months | Amazon |
| 812 | 38.58 | [3650. Minimum Cost Path with Edge Reversals](https://leetcode.com/problems/minimum-cost-path-with-edge-reversals/description/) | Medium | six-months | Amazon |
| 813 | 38.58 | [3863. Minimum Operations to Sort a String](https://leetcode.com/problems/minimum-operations-to-sort-a-string/description/) | Medium | six-months | Amazon |
| 814 | 38.58 | [286. Walls and Gates](https://leetcode.com/problems/walls-and-gates/description/) | Medium | six-months | Amazon, Meta |
| 815 | 38.58 | [301. Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/description/) | Hard | six-months | Amazon, Meta |
| 816 | 38.58 | [378. Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/description/) | Medium | six-months | Amazon, Meta |
| 817 | 38.58 | [1572. Matrix Diagonal Sum](https://leetcode.com/problems/matrix-diagonal-sum/description/) | Easy | six-months | Amazon, Meta |
| 818 | 35.62 | [1962. Remove Stones to Minimize the Total](https://leetcode.com/problems/remove-stones-to-minimize-the-total/description/) | Medium | six-months | Salesforce |
| 819 | 35.62 | [2534. Time Taken to Cross the Door](https://leetcode.com/problems/time-taken-to-cross-the-door/description/) | Hard | six-months | Salesforce |
| 820 | 35.35 | [87. Scramble String](https://leetcode.com/problems/scramble-string/description/) | Hard | six-months | Google |
| 821 | 35.35 | [107. Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/) | Medium | six-months | Google |
| 822 | 35.35 | [166. Fraction to Recurring Decimal](https://leetcode.com/problems/fraction-to-recurring-decimal/description/) | Medium | six-months | Google |
| 823 | 35.35 | [194. Transpose File](https://leetcode.com/problems/transpose-file/description/) | Medium | six-months | Google |
| 824 | 35.35 | [262. Trips and Users](https://leetcode.com/problems/trips-and-users/description/) | Hard | six-months | Google |
| 825 | 35.35 | [282. Expression Add Operators](https://leetcode.com/problems/expression-add-operators/description/) | Hard | six-months | Google |
| 826 | 35.35 | [358. Rearrange String k Distance Apart](https://leetcode.com/problems/rearrange-string-k-distance-apart/description/) | Hard | six-months | Google |
| 827 | 35.35 | [360. Sort Transformed Array](https://leetcode.com/problems/sort-transformed-array/description/) | Medium | six-months | Google |
| 828 | 35.35 | [363. Max Sum of Rectangle No Larger Than K](https://leetcode.com/problems/max-sum-of-rectangle-no-larger-than-k/description/) | Hard | six-months | Google |
| 829 | 35.35 | [382. Linked List Random Node](https://leetcode.com/problems/linked-list-random-node/description/) | Medium | six-months | Google |
| 830 | 35.35 | [400. Nth Digit](https://leetcode.com/problems/nth-digit/description/) | Medium | six-months | Google |
| 831 | 35.35 | [440. K-th Smallest in Lexicographical Order](https://leetcode.com/problems/k-th-smallest-in-lexicographical-order/description/) | Hard | six-months | Google |
| 832 | 35.35 | [445. Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/description/) | Medium | six-months | Google |
| 833 | 35.35 | [468. Validate IP Address](https://leetcode.com/problems/validate-ip-address/description/) | Medium | six-months | Google |
| 834 | 35.35 | [486. Predict the Winner](https://leetcode.com/problems/predict-the-winner/description/) | Medium | six-months | Google |
| 835 | 35.35 | [501. Find Mode in Binary Search Tree](https://leetcode.com/problems/find-mode-in-binary-search-tree/description/) | Easy | six-months | Google |
| 836 | 35.35 | [583. Delete Operation for Two Strings](https://leetcode.com/problems/delete-operation-for-two-strings/description/) | Medium | six-months | Google |
| 837 | 35.35 | [594. Longest Harmonious Subsequence](https://leetcode.com/problems/longest-harmonious-subsequence/description/) | Easy | six-months | Google |
| 838 | 35.35 | [596. Classes With at Least 5 Students](https://leetcode.com/problems/classes-with-at-least-5-students/description/) | Easy | six-months | Google |
| 839 | 35.35 | [601. Human Traffic of Stadium](https://leetcode.com/problems/human-traffic-of-stadium/description/) | Hard | six-months | Google |
| 840 | 35.35 | [641. Design Circular Deque](https://leetcode.com/problems/design-circular-deque/description/) | Medium | six-months | Google |
| 841 | 35.35 | [674. Longest Continuous Increasing Subsequence](https://leetcode.com/problems/longest-continuous-increasing-subsequence/description/) | Easy | six-months | Google |
| 842 | 35.35 | [686. Repeated String Match](https://leetcode.com/problems/repeated-string-match/description/) | Medium | six-months | Google |
| 843 | 35.35 | [705. Design HashSet](https://leetcode.com/problems/design-hashset/description/) | Easy | six-months | Google |
| 844 | 35.35 | [762. Prime Number of Set Bits in Binary Representation](https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/description/) | Easy | six-months | Google |
| 845 | 35.35 | [766. Toeplitz Matrix](https://leetcode.com/problems/toeplitz-matrix/description/) | Easy | six-months | Google |
| 846 | 35.35 | [784. Letter Case Permutation](https://leetcode.com/problems/letter-case-permutation/description/) | Medium | six-months | Google |
| 847 | 35.35 | [789. Escape The Ghosts](https://leetcode.com/problems/escape-the-ghosts/description/) | Medium | six-months | Google |
| 848 | 35.35 | [798. Smallest Rotation with Highest Score](https://leetcode.com/problems/smallest-rotation-with-highest-score/description/) | Hard | six-months | Google |
| 849 | 35.35 | [806. Number of Lines To Write String](https://leetcode.com/problems/number-of-lines-to-write-string/description/) | Easy | six-months | Google |
| 850 | 35.35 | [807. Max Increase to Keep City Skyline](https://leetcode.com/problems/max-increase-to-keep-city-skyline/description/) | Medium | six-months | Google |
| 851 | 35.35 | [811. Subdomain Visit Count](https://leetcode.com/problems/subdomain-visit-count/description/) | Medium | six-months | Google |
| 852 | 35.35 | [862. Shortest Subarray with Sum at Least K](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/description/) | Hard | six-months | Google |
| 853 | 35.35 | [866. Prime Palindrome](https://leetcode.com/problems/prime-palindrome/description/) | Medium | six-months | Google |
| 854 | 35.35 | [879. Profitable Schemes](https://leetcode.com/problems/profitable-schemes/description/) | Hard | six-months | Google |
| 855 | 35.35 | [900. RLE Iterator](https://leetcode.com/problems/rle-iterator/description/) | Medium | six-months | Google |
| 856 | 35.35 | [905. Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/description/) | Easy | six-months | Google |
| 857 | 35.35 | [909. Snakes and Ladders](https://leetcode.com/problems/snakes-and-ladders/description/) | Medium | six-months | Google |
| 858 | 35.35 | [914. X of a Kind in a Deck of Cards](https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/description/) | Easy | six-months | Google |
| 859 | 35.35 | [934. Shortest Bridge](https://leetcode.com/problems/shortest-bridge/description/) | Medium | six-months | Google |
| 860 | 35.35 | [956. Tallest Billboard](https://leetcode.com/problems/tallest-billboard/description/) | Hard | six-months | Google |
| 861 | 35.35 | [975. Odd Even Jump](https://leetcode.com/problems/odd-even-jump/description/) | Hard | six-months | Google |
| 862 | 35.35 | [976. Largest Perimeter Triangle](https://leetcode.com/problems/largest-perimeter-triangle/description/) | Easy | six-months | Google |
| 863 | 35.35 | [1015. Smallest Integer Divisible by K](https://leetcode.com/problems/smallest-integer-divisible-by-k/description/) | Medium | six-months | Google |
| 864 | 35.35 | [1022. Sum of Root To Leaf Binary Numbers](https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/description/) | Easy | six-months | Google |
| 865 | 35.35 | [1025. Divisor Game](https://leetcode.com/problems/divisor-game/description/) | Easy | six-months | Google |
| 866 | 35.35 | [1048. Longest String Chain](https://leetcode.com/problems/longest-string-chain/description/) | Medium | six-months | Google |
| 867 | 35.35 | [1095. Find in Mountain Array](https://leetcode.com/problems/find-in-mountain-array/description/) | Hard | six-months | Google |
| 868 | 35.35 | [1114. Print in Order](https://leetcode.com/problems/print-in-order/description/) | Easy | six-months | Google |
| 869 | 35.35 | [1129. Shortest Path with Alternating Colors](https://leetcode.com/problems/shortest-path-with-alternating-colors/description/) | Medium | six-months | Google |
| 870 | 35.35 | [1154. Day of the Year](https://leetcode.com/problems/day-of-the-year/description/) | Easy | six-months | Google |
| 871 | 35.35 | [1169. Invalid Transactions](https://leetcode.com/problems/invalid-transactions/description/) | Medium | six-months | Google |
| 872 | 35.35 | [1179. Reformat Department Table](https://leetcode.com/problems/reformat-department-table/description/) | Easy | six-months | Google |
| 873 | 35.35 | [1229. Meeting Scheduler](https://leetcode.com/problems/meeting-scheduler/description/) | Medium | six-months | Google |
| 874 | 35.35 | [1233. Remove Sub-Folders from the Filesystem](https://leetcode.com/problems/remove-sub-folders-from-the-filesystem/description/) | Medium | six-months | Google |
| 875 | 35.35 | [1254. Number of Closed Islands](https://leetcode.com/problems/number-of-closed-islands/description/) | Medium | six-months | Google |
| 876 | 35.35 | [1292. Maximum Side Length of a Square with Sum Less than or Equal to Threshold](https://leetcode.com/problems/maximum-side-length-of-a-square-with-sum-less-than-or-equal-to-threshold/description/) | Medium | six-months | Google |
| 877 | 35.35 | [1314. Matrix Block Sum](https://leetcode.com/problems/matrix-block-sum/description/) | Medium | six-months | Google |
| 878 | 35.35 | [1448. Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/) | Medium | six-months | Google |
| 879 | 35.35 | [1484. Group Sold Products By The Date](https://leetcode.com/problems/group-sold-products-by-the-date/description/) | Easy | six-months | Google |
| 880 | 35.35 | [1489. Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/description/) | Hard | six-months | Google |
| 881 | 35.35 | [1514. Path with Maximum Probability](https://leetcode.com/problems/path-with-maximum-probability/description/) | Medium | six-months | Google |
| 882 | 35.35 | [1518. Water Bottles](https://leetcode.com/problems/water-bottles/description/) | Easy | six-months | Google |
| 883 | 35.35 | [1523. Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/) | Easy | six-months | Google |
| 884 | 35.35 | [1544. Make The String Great](https://leetcode.com/problems/make-the-string-great/description/) | Easy | six-months | Google |
| 885 | 35.35 | [1557. Minimum Number of Vertices to Reach All Nodes](https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/description/) | Medium | six-months | Google |
| 886 | 35.35 | [1582. Special Positions in a Binary Matrix](https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/) | Easy | six-months | Google |
| 887 | 35.35 | [1583. Count Unhappy Friends](https://leetcode.com/problems/count-unhappy-friends/description/) | Medium | six-months | Google |
| 888 | 35.35 | [1590. Make Sum Divisible by P](https://leetcode.com/problems/make-sum-divisible-by-p/description/) | Medium | six-months | Google |
| 889 | 35.35 | [1637. Widest Vertical Area Between Two Points Containing No Points](https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/) | Easy | six-months | Google |
| 890 | 35.35 | [1657. Determine if Two Strings Are Close](https://leetcode.com/problems/determine-if-two-strings-are-close/description/) | Medium | six-months | Google |
| 891 | 35.35 | [1695. Maximum Erasure Value](https://leetcode.com/problems/maximum-erasure-value/description/) | Medium | six-months | Google |
| 892 | 35.35 | [1749. Maximum Absolute Sum of Any Subarray](https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/description/) | Medium | six-months | Google |
| 893 | 35.35 | [1755. Closest Subsequence Sum](https://leetcode.com/problems/closest-subsequence-sum/description/) | Hard | six-months | Google |
| 894 | 35.35 | [1855. Maximum Distance Between a Pair of Values](https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/description/) | Medium | six-months | Google |
| 895 | 35.35 | [1878. Get Biggest Three Rhombus Sums in a Grid](https://leetcode.com/problems/get-biggest-three-rhombus-sums-in-a-grid/description/) | Medium | six-months | Google |
| 896 | 35.35 | [1895. Largest Magic Square](https://leetcode.com/problems/largest-magic-square/description/) | Medium | six-months | Google |
| 897 | 35.35 | [1915. Number of Wonderful Substrings](https://leetcode.com/problems/number-of-wonderful-substrings/description/) | Medium | six-months | Google |
| 898 | 35.35 | [1926. Nearest Exit from Entrance in Maze](https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/description/) | Medium | six-months | Google |
| 899 | 35.35 | [1970. Last Day Where You Can Still Cross](https://leetcode.com/problems/last-day-where-you-can-still-cross/description/) | Hard | six-months | Google |
| 900 | 35.35 | [1975. Maximum Matrix Sum](https://leetcode.com/problems/maximum-matrix-sum/description/) | Medium | six-months | Google |
| 901 | 35.35 | [1976. Number of Ways to Arrive at Destination](https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/description/) | Medium | six-months | Google |
| 902 | 35.35 | [1984. Minimum Difference Between Highest and Lowest of K Scores](https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/description/) | Easy | six-months | Google |
| 903 | 35.35 | [2001. Number of Pairs of Interchangeable Rectangles](https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles/description/) | Medium | six-months | Google |
| 904 | 35.35 | [2022. Convert 1D Array Into 2D Array](https://leetcode.com/problems/convert-1d-array-into-2d-array/description/) | Easy | six-months | Google |
| 905 | 35.35 | [2034. Stock Price Fluctuation ](https://leetcode.com/problems/stock-price-fluctuation/description/) | Medium | six-months | Google |
| 906 | 35.35 | [2058. Find the Minimum and Maximum Number of Nodes Between Critical Points](https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/) | Medium | six-months | Google |
| 907 | 35.35 | [2092. Find All People With Secret](https://leetcode.com/problems/find-all-people-with-secret/description/) | Hard | six-months | Google |
| 908 | 35.35 | [2094. Finding 3-Digit Even Numbers](https://leetcode.com/problems/finding-3-digit-even-numbers/description/) | Easy | six-months | Google |
| 909 | 35.35 | [2215. Find the Difference of Two Arrays](https://leetcode.com/problems/find-the-difference-of-two-arrays/description/) | Easy | six-months | Google |
| 910 | 35.35 | [2236. Root Equals Sum of Children](https://leetcode.com/problems/root-equals-sum-of-children/description/) | Easy | six-months | Google |
| 911 | 35.35 | [2332. The Latest Time to Catch a Bus](https://leetcode.com/problems/the-latest-time-to-catch-a-bus/description/) | Medium | six-months | Google |
| 912 | 35.35 | [2351. First Letter to Appear Twice](https://leetcode.com/problems/first-letter-to-appear-twice/description/) | Easy | six-months | Google |
| 913 | 35.35 | [2400. Number of Ways to Reach a Position After Exactly k Steps](https://leetcode.com/problems/number-of-ways-to-reach-a-position-after-exactly-k-steps/description/) | Medium | six-months | Google |
| 914 | 35.35 | [2461. Maximum Sum of Distinct Subarrays With Length K](https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/) | Medium | six-months | Google |
| 915 | 35.35 | [2520. Count the Digits That Divide a Number](https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/) | Easy | six-months | Google |
| 916 | 35.35 | [2707. Extra Characters in a String](https://leetcode.com/problems/extra-characters-in-a-string/description/) | Medium | six-months | Google |
| 917 | 35.35 | [2815. Max Pair Sum in an Array](https://leetcode.com/problems/max-pair-sum-in-an-array/description/) | Easy | six-months | Google |
| 918 | 35.35 | [2839. Check if Strings Can be Made Equal With Operations I](https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/description/) | Easy | six-months | Google |
| 919 | 35.35 | [2895. Minimum Processing Time](https://leetcode.com/problems/minimum-processing-time/description/) | Medium | six-months | Google |
| 920 | 35.35 | [2942. Find Words Containing Character](https://leetcode.com/problems/find-words-containing-character/description/) | Easy | six-months | Google |
| 921 | 35.35 | [2956. Find Common Elements Between Two Arrays](https://leetcode.com/problems/find-common-elements-between-two-arrays/description/) | Easy | six-months | Google |
| 922 | 35.35 | [2975. Maximum Square Area by Removing Fences From a Field](https://leetcode.com/problems/maximum-square-area-by-removing-fences-from-a-field/description/) | Medium | six-months | Google |
| 923 | 35.35 | [3014. Minimum Number of Pushes to Type Word I](https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/description/) | Easy | six-months | Google |
| 924 | 35.35 | [3070. Count Submatrices with Top-Left Element and Sum Less Than k](https://leetcode.com/problems/count-submatrices-with-top-left-element-and-sum-less-than-k/description/) | Medium | six-months | Google |
| 925 | 35.35 | [3285. Find Indices of Stable Mountains](https://leetcode.com/problems/find-indices-of-stable-mountains/description/) | Easy | six-months | Google |
| 926 | 35.35 | [3314. Construct the Minimum Bitwise Array I](https://leetcode.com/problems/construct-the-minimum-bitwise-array-i/description/) | Easy | six-months | Google |
| 927 | 35.35 | [3356. Zero Array Transformation II](https://leetcode.com/problems/zero-array-transformation-ii/description/) | Medium | six-months | Google |
| 928 | 35.35 | [3380. Maximum Area Rectangle With Point Constraints I](https://leetcode.com/problems/maximum-area-rectangle-with-point-constraints-i/description/) | Medium | six-months | Google |
| 929 | 35.35 | [3512. Minimum Operations to Make Array Sum Divisible by K](https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/description/) | Easy | six-months | Google |
| 930 | 35.35 | [3548. Equal Sum Grid Partition II](https://leetcode.com/problems/equal-sum-grid-partition-ii/description/) | Hard | six-months | Google |
| 931 | 35.35 | [3567. Minimum Absolute Difference in Sliding Submatrix](https://leetcode.com/problems/minimum-absolute-difference-in-sliding-submatrix/description/) | Medium | six-months | Google |
| 932 | 35.35 | [3583. Count Special Triplets](https://leetcode.com/problems/count-special-triplets/description/) | Medium | six-months | Google |
| 933 | 35.35 | [3600. Maximize Spanning Tree Stability with Upgrades](https://leetcode.com/problems/maximize-spanning-tree-stability-with-upgrades/description/) | Hard | six-months | Google |
| 934 | 35.35 | [3643. Flip Square Submatrix Vertically](https://leetcode.com/problems/flip-square-submatrix-vertically/description/) | Easy | six-months | Google |
| 935 | 35.35 | [3668. Restore Finishing Order](https://leetcode.com/problems/restore-finishing-order/description/) | Easy | six-months | Google |
| 936 | 35.35 | [3710. Maximum Partition Factor](https://leetcode.com/problems/maximum-partition-factor/description/) | Hard | six-months | Google |
| 937 | 35.35 | [3719. Longest Balanced Subarray I](https://leetcode.com/problems/longest-balanced-subarray-i/description/) | Medium | six-months | Google |
| 938 | 35.35 | [3731. Find Missing Elements](https://leetcode.com/problems/find-missing-elements/description/) | Easy | six-months | Google |
| 939 | 35.35 | [3743. Maximize Cyclic Partition Score](https://leetcode.com/problems/maximize-cyclic-partition-score/description/) | Hard | six-months | Google |
| 940 | 35.35 | [3783. Mirror Distance of an Integer](https://leetcode.com/problems/mirror-distance-of-an-integer/description/) | Easy | six-months | Google |
| 941 | 35.35 | [3815. Design Auction System](https://leetcode.com/problems/design-auction-system/description/) | Medium | six-months | Google |
| 942 | 35.35 | [3821. Find Nth Smallest Integer With K One Bits](https://leetcode.com/problems/find-nth-smallest-integer-with-k-one-bits/description/) | Hard | six-months | Google |
| 943 | 35.35 | [3838. Weighted Word Mapping](https://leetcode.com/problems/weighted-word-mapping/description/) | Easy | six-months | Google |
| 944 | 35.35 | [3850. Count Sequences to K](https://leetcode.com/problems/count-sequences-to-k/description/) | Hard | six-months | Google |
| 945 | 35.35 | [3875. Construct Uniform Parity Array I](https://leetcode.com/problems/construct-uniform-parity-array-i/description/) | Easy | six-months | Google |
| 946 | 35.35 | [3894. Traffic Signal Color](https://leetcode.com/problems/traffic-signal-color/description/) | Easy | six-months | Google |
| 947 | 35.35 | [3896. Minimum Operations to Transform Array into Alternating Prime](https://leetcode.com/problems/minimum-operations-to-transform-array-into-alternating-prime/description/) | Medium | six-months | Google |
| 948 | 33.42 | [115. Distinct Subsequences](https://leetcode.com/problems/distinct-subsequences/description/) | Hard | six-months | Microsoft |
| 949 | 33.42 | [264. Ugly Number II](https://leetcode.com/problems/ugly-number-ii/description/) | Medium | six-months | Microsoft |
| 950 | 33.42 | [324. Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/description/) | Medium | six-months | Microsoft |
| 951 | 33.42 | [388. Longest Absolute File Path](https://leetcode.com/problems/longest-absolute-file-path/description/) | Medium | six-months | Microsoft |
| 952 | 33.42 | [405. Convert a Number to Hexadecimal](https://leetcode.com/problems/convert-a-number-to-hexadecimal/description/) | Easy | six-months | Microsoft |
| 953 | 33.42 | [632. Smallest Range Covering Elements from K Lists](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/description/) | Hard | six-months | Microsoft |
| 954 | 33.42 | [661. Image Smoother](https://leetcode.com/problems/image-smoother/description/) | Easy | six-months | Microsoft |
| 955 | 33.42 | [747. Largest Number At Least Twice of Others](https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/) | Easy | six-months | Microsoft |
| 956 | 33.42 | [765. Couples Holding Hands](https://leetcode.com/problems/couples-holding-hands/description/) | Hard | six-months | Microsoft |
| 957 | 33.42 | [898. Bitwise ORs of Subarrays](https://leetcode.com/problems/bitwise-ors-of-subarrays/description/) | Medium | six-months | Microsoft |
| 958 | 33.42 | [1111. Maximum Nesting Depth of Two Valid Parentheses Strings](https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/description/) | Medium | six-months | Microsoft |
| 959 | 33.42 | [1163. Last Substring in Lexicographical Order](https://leetcode.com/problems/last-substring-in-lexicographical-order/description/) | Hard | six-months | Microsoft |
| 960 | 33.42 | [1202. Smallest String With Swaps](https://leetcode.com/problems/smallest-string-with-swaps/description/) | Medium | six-months | Microsoft |
| 961 | 33.42 | [1287. Element Appearing More Than 25% In Sorted Array](https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/description/) | Easy | six-months | Microsoft |
| 962 | 33.42 | [1493. Longest Subarray of 1's After Deleting One Element](https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/) | Medium | six-months | Microsoft |
| 963 | 33.42 | [1710. Maximum Units on a Truck](https://leetcode.com/problems/maximum-units-on-a-truck/description/) | Easy | six-months | Microsoft |
| 964 | 33.42 | [1776. Car Fleet II](https://leetcode.com/problems/car-fleet-ii/description/) | Hard | six-months | Microsoft |
| 965 | 33.42 | [1834. Single-Threaded CPU](https://leetcode.com/problems/single-threaded-cpu/description/) | Medium | six-months | Microsoft |
| 966 | 33.42 | [1928. Minimum Cost to Reach Destination in Time](https://leetcode.com/problems/minimum-cost-to-reach-destination-in-time/description/) | Hard | six-months | Microsoft |
| 967 | 33.42 | [2080. Range Frequency Queries](https://leetcode.com/problems/range-frequency-queries/description/) | Medium | six-months | Microsoft |
| 968 | 33.42 | [2439. Minimize Maximum of Array](https://leetcode.com/problems/minimize-maximum-of-array/description/) | Medium | six-months | Microsoft |
| 969 | 33.42 | [2466. Count Ways To Build Good Strings](https://leetcode.com/problems/count-ways-to-build-good-strings/description/) | Medium | six-months | Microsoft |
| 970 | 33.42 | [2760. Longest Even Odd Subarray With Threshold](https://leetcode.com/problems/longest-even-odd-subarray-with-threshold/description/) | Easy | six-months | Microsoft |
| 971 | 33.42 | [2906. Construct Product Matrix](https://leetcode.com/problems/construct-product-matrix/description/) | Medium | six-months | Microsoft |
| 972 | 33.42 | [2977. Minimum Cost to Convert String II](https://leetcode.com/problems/minimum-cost-to-convert-string-ii/description/) | Hard | six-months | Microsoft |
| 973 | 33.42 | [3047. Find the Largest Area of Square Inside Two Rectangles](https://leetcode.com/problems/find-the-largest-area-of-square-inside-two-rectangles/description/) | Medium | six-months | Microsoft |
| 974 | 32.56 | [89. Gray Code](https://leetcode.com/problems/gray-code/description/) | Medium | six-months | Amazon |
| 975 | 32.56 | [106. Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/) | Medium | six-months | Amazon |
| 976 | 32.56 | [184. Department Highest Salary](https://leetcode.com/problems/department-highest-salary/description/) | Medium | six-months | Amazon |
| 977 | 32.56 | [185. Department Top Three Salaries](https://leetcode.com/problems/department-top-three-salaries/description/) | Hard | six-months | Amazon |
| 978 | 32.56 | [256. Paint House](https://leetcode.com/problems/paint-house/description/) | Medium | six-months | Amazon |
| 979 | 32.56 | [313. Super Ugly Number](https://leetcode.com/problems/super-ugly-number/description/) | Medium | six-months | Amazon |
| 980 | 32.56 | [318. Maximum Product of Word Lengths](https://leetcode.com/problems/maximum-product-of-word-lengths/description/) | Medium | six-months | Amazon |
| 981 | 32.56 | [385. Mini Parser](https://leetcode.com/problems/mini-parser/description/) | Medium | six-months | Amazon |
| 982 | 32.56 | [449. Serialize and Deserialize BST](https://leetcode.com/problems/serialize-and-deserialize-bst/description/) | Medium | six-months | Amazon |
| 983 | 32.56 | [569. Median Employee Salary](https://leetcode.com/problems/median-employee-salary/description/) | Hard | six-months | Amazon |
| 984 | 32.56 | [599. Minimum Index Sum of Two Lists](https://leetcode.com/problems/minimum-index-sum-of-two-lists/description/) | Easy | six-months | Amazon |
| 985 | 32.56 | [726. Number of Atoms](https://leetcode.com/problems/number-of-atoms/description/) | Hard | six-months | Amazon |
| 986 | 32.56 | [729. My Calendar I](https://leetcode.com/problems/my-calendar-i/description/) | Medium | six-months | Amazon |
| 987 | 32.56 | [740. Delete and Earn](https://leetcode.com/problems/delete-and-earn/description/) | Medium | six-months | Amazon |
| 988 | 32.56 | [817. Linked List Components](https://leetcode.com/problems/linked-list-components/description/) | Medium | six-months | Amazon |
| 989 | 32.56 | [821. Shortest Distance to a Character](https://leetcode.com/problems/shortest-distance-to-a-character/description/) | Easy | six-months | Amazon |
| 990 | 32.56 | [854. K-Similar Strings](https://leetcode.com/problems/k-similar-strings/description/) | Hard | six-months | Amazon |
| 991 | 32.56 | [855. Exam Room](https://leetcode.com/problems/exam-room/description/) | Medium | six-months | Amazon |
| 992 | 32.56 | [871. Minimum Number of Refueling Stops](https://leetcode.com/problems/minimum-number-of-refueling-stops/description/) | Hard | six-months | Amazon |
| 993 | 32.56 | [886. Possible Bipartition](https://leetcode.com/problems/possible-bipartition/description/) | Medium | six-months | Amazon |
| 994 | 32.56 | [888. Fair Candy Swap](https://leetcode.com/problems/fair-candy-swap/description/) | Easy | six-months | Amazon |
| 995 | 32.56 | [945. Minimum Increment to Make Array Unique](https://leetcode.com/problems/minimum-increment-to-make-array-unique/description/) | Medium | six-months | Amazon |
| 996 | 32.56 | [979. Distribute Coins in Binary Tree](https://leetcode.com/problems/distribute-coins-in-binary-tree/description/) | Medium | six-months | Amazon |
| 997 | 32.56 | [988. Smallest String Starting From Leaf](https://leetcode.com/problems/smallest-string-starting-from-leaf/description/) | Medium | six-months | Amazon |
| 998 | 32.56 | [1029. Two City Scheduling](https://leetcode.com/problems/two-city-scheduling/description/) | Medium | six-months | Amazon |
| 999 | 32.56 | [1162. As Far from Land as Possible](https://leetcode.com/problems/as-far-from-land-as-possible/description/) | Medium | six-months | Amazon |
| 1000 | 32.56 | [1166. Design File System](https://leetcode.com/problems/design-file-system/description/) | Medium | six-months | Amazon |
| 1001 | 32.56 | [1228. Missing Number In Arithmetic Progression](https://leetcode.com/problems/missing-number-in-arithmetic-progression/description/) | Easy | six-months | Amazon |
| 1002 | 32.56 | [1299. Replace Elements with Greatest Element on Right Side](https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/) | Easy | six-months | Amazon |
| 1003 | 32.56 | [1464. Maximum Product of Two Elements in an Array](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/) | Easy | six-months | Amazon |
| 1004 | 32.56 | [1472. Design Browser History](https://leetcode.com/problems/design-browser-history/description/) | Medium | six-months | Amazon |
| 1005 | 32.56 | [1536. Minimum Swaps to Arrange a Binary Grid](https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/description/) | Medium | six-months | Amazon |
| 1006 | 32.56 | [1574. Shortest Subarray to be Removed to Make Array Sorted](https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/description/) | Medium | six-months | Amazon |
| 1007 | 32.56 | [1642. Furthest Building You Can Reach](https://leetcode.com/problems/furthest-building-you-can-reach/description/) | Medium | six-months | Amazon |
| 1008 | 32.56 | [1667. Fix Names in a Table](https://leetcode.com/problems/fix-names-in-a-table/description/) | Easy | six-months | Amazon |
| 1009 | 32.56 | [1679. Max Number of K-Sum Pairs](https://leetcode.com/problems/max-number-of-k-sum-pairs/description/) | Medium | six-months | Amazon |
| 1010 | 32.56 | [1693. Daily Leads and Partners](https://leetcode.com/problems/daily-leads-and-partners/description/) | Easy | six-months | Amazon |
| 1011 | 32.56 | [1721. Swapping Nodes in a Linked List](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/) | Medium | six-months | Amazon |
| 1012 | 32.56 | [1784. Check if Binary String Has at Most One Segment of Ones](https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/description/) | Easy | six-months | Amazon |
| 1013 | 32.56 | [1886. Determine Whether Matrix Can Be Obtained By Rotation](https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/description/) | Easy | six-months | Amazon |
| 1014 | 32.56 | [1901. Find a Peak Element II](https://leetcode.com/problems/find-a-peak-element-ii/description/) | Medium | six-months | Amazon |
| 1015 | 32.56 | [2006. Count Number of Pairs With Absolute Difference K](https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/) | Easy | six-months | Amazon |
| 1016 | 32.56 | [2055. Plates Between Candles](https://leetcode.com/problems/plates-between-candles/description/) | Medium | six-months | Amazon |
| 1017 | 32.56 | [2064. Minimized Maximum of Products Distributed to Any Store](https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/description/) | Medium | six-months | Amazon |
| 1018 | 32.56 | [2070. Most Beautiful Item for Each Query](https://leetcode.com/problems/most-beautiful-item-for-each-query/description/) | Medium | six-months | Amazon |
| 1019 | 32.56 | [2101. Detonate the Maximum Bombs](https://leetcode.com/problems/detonate-the-maximum-bombs/description/) | Medium | six-months | Amazon |
| 1020 | 32.56 | [2226. Maximum Candies Allocated to K Children](https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/) | Medium | six-months | Amazon |
| 1021 | 32.56 | [2273. Find Resultant Array After Removing Anagrams](https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/description/) | Easy | six-months | Amazon |
| 1022 | 32.56 | [2288. Apply Discount to Prices](https://leetcode.com/problems/apply-discount-to-prices/description/) | Medium | six-months | Amazon |
| 1023 | 32.56 | [2359. Find Closest Node to Given Two Nodes](https://leetcode.com/problems/find-closest-node-to-given-two-nodes/description/) | Medium | six-months | Amazon |
| 1024 | 32.56 | [2402. Meeting Rooms III](https://leetcode.com/problems/meeting-rooms-iii/description/) | Hard | six-months | Amazon |
| 1025 | 32.56 | [2426. Number of Pairs Satisfying Inequality](https://leetcode.com/problems/number-of-pairs-satisfying-inequality/description/) | Hard | six-months | Amazon |
| 1026 | 32.56 | [2477. Minimum Fuel Cost to Report to the Capital](https://leetcode.com/problems/minimum-fuel-cost-to-report-to-the-capital/description/) | Medium | six-months | Amazon |
| 1027 | 32.56 | [2487. Remove Nodes From Linked List](https://leetcode.com/problems/remove-nodes-from-linked-list/description/) | Medium | six-months | Amazon |
| 1028 | 32.56 | [2515. Shortest Distance to Target String in a Circular Array](https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/description/) | Easy | six-months | Amazon |
| 1029 | 32.56 | [2561. Rearranging Fruits](https://leetcode.com/problems/rearranging-fruits/description/) | Hard | six-months | Amazon |
| 1030 | 32.56 | [2593. Find Score of an Array After Marking All Elements](https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/description/) | Medium | six-months | Amazon |
| 1031 | 32.56 | [2653. Sliding Subarray Beauty](https://leetcode.com/problems/sliding-subarray-beauty/description/) | Medium | six-months | Amazon |
| 1032 | 32.56 | [2751. Robot Collisions](https://leetcode.com/problems/robot-collisions/description/) | Hard | six-months | Amazon |
| 1033 | 32.56 | [2843.   Count Symmetric Integers](https://leetcode.com/problems/count-symmetric-integers/description/) | Easy | six-months | Amazon |
| 1034 | 32.56 | [2860. Happy Students](https://leetcode.com/problems/happy-students/description/) | Medium | six-months | Amazon |
| 1035 | 32.56 | [3005. Count Elements With Maximum Frequency](https://leetcode.com/problems/count-elements-with-maximum-frequency/description/) | Easy | six-months | Amazon |
| 1036 | 32.56 | [3130. Find All Possible Stable Binary Arrays II](https://leetcode.com/problems/find-all-possible-stable-binary-arrays-ii/description/) | Hard | six-months | Amazon |
| 1037 | 32.56 | [3201. Find the Maximum Length of Valid Subsequence I](https://leetcode.com/problems/find-the-maximum-length-of-valid-subsequence-i/description/) | Medium | six-months | Amazon |
| 1038 | 32.56 | [3212. Count Submatrices With Equal Frequency of X and Y](https://leetcode.com/problems/count-submatrices-with-equal-frequency-of-x-and-y/description/) | Medium | six-months | Amazon |
| 1039 | 32.56 | [3552. Grid Teleportation Traversal](https://leetcode.com/problems/grid-teleportation-traversal/description/) | Medium | six-months | Amazon |
| 1040 | 32.56 | [3655. XOR After Range Multiplication Queries II](https://leetcode.com/problems/xor-after-range-multiplication-queries-ii/description/) | Hard | six-months | Amazon |
| 1041 | 32.56 | [3661. Maximum Walls Destroyed by Robots](https://leetcode.com/problems/maximum-walls-destroyed-by-robots/description/) | Hard | six-months | Amazon |
| 1042 | 32.56 | [3806. Maximum Bitwise AND After Increment Operations](https://leetcode.com/problems/maximum-bitwise-and-after-increment-operations/description/) | Hard | six-months | Amazon |
| 1043 | 32.56 | [3828. Final Element After Subarray Deletions](https://leetcode.com/problems/final-element-after-subarray-deletions/description/) | Medium | six-months | Amazon |
| 1044 | 32.56 | [3857. Minimum Cost to Split into Ones](https://leetcode.com/problems/minimum-cost-to-split-into-ones/description/) | Medium | six-months | Amazon |
| 1045 | 32.56 | [3901. Good Subsequence Queries](https://leetcode.com/problems/good-subsequence-queries/description/) | Hard | six-months | Amazon |
| 1046 | 32.56 | [3948. Lexicographically Maximum MEX Array](https://leetcode.com/problems/lexicographically-maximum-mex-array/description/) | Hard | six-months | Amazon |
