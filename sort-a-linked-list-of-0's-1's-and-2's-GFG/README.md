# Sort a Linked List of 0s, 1s and 2s

## Problem Statement

Given the head of a linked list where each node contains only `0`, `1`, or `2`, rearrange the list so that all `0`s appear first, followed by all `1`s, and all `2`s appear at the end.

## Examples

**Input:**

```
1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
```

**Output:**

```
0 → 1 → 1 → 2 → 2 → 2 → 2 → 2
```

**Input:**

```
2 → 2 → 0 → 1
```

**Output:**

```
0 → 1 → 2 → 2
```

## Constraints

* `1 ≤ number of nodes ≤ 10^6`
* `0 ≤ node->data ≤ 2`

## Expected Complexity

* **Time:** O(n)
* **Space:** O(1)

## Approach

* Traverse the list once and separate nodes into three lists based on values `0`, `1`, and `2`.
* Join the three lists in the order: zeros → ones → twos.

## Difficulty

Medium

## Tags

Linked List, Two Pointers
