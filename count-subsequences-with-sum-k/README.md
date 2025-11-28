# Count Subsequences With Sum K

## Problem Description
Given an integer array `nums` and a target integer `K`, count the total number of **subsequences** whose elements sum exactly to `K`.

Return the number of valid subsequences that satisfy the condition.

---

## 📥 Input
- `n` — number of elements in the array
- `nums[]` — integer array of size `n`
- `K` — target subsequence sum

## 📤 Output
- An integer representing the count of all subsequences that sum to `K`

---

## Example 1
**Input:**
```

n = 3
nums = [1, 2, 1]
K = 2

```
**Output:**
```

2

```
**Valid subsequences:** `[1,1]`, `[2]`

---

## Example 2
**Input:**
```

n = 4
nums = [1, 2, 3, -1]
K = 3

```
**Output:**
```

3

```
**Valid subsequences:** `[3]`, `[1,2]`, `[1,2,3,-1]`

---

## Example 3
**Input:**
```

n = 3
nums = [2, 2, 2]
K = 4

```
**Output:**
```

3

```
**Valid subsequences:** `[2,2]` (index 0,1), `[2,2]` (0,2), `[2,2]` (1,2)

---

## Example 4 (No Valid Case)
**Input:**
```

n = 3
nums = [1, 2, 3]
K = 7

```
**Output:**
```

0

```
**Explanation:** No subsequence sums to `7`

---

## Technical Note (Short)
A more efficient solution exists using **Dynamic Programming (DP)**, but in this problem the focus was on learning recursion with a time complexity of **O(2ⁿ)**.
