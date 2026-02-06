# Insertion at a Given Position in a Linked List

## Problem Statement
You are given the head of a singly linked list, a position `pos` (1-based index), and a value `val`.  
Insert a new node with value `val` at position `pos` in the linked list and return the head of the modified list.

## Examples
**Input:** `pos = 3, val = 4`  
**Output:** `1 -> 3 -> 4`

**Input:** `pos = 2, val = 5`  
**Output:** `1 -> 5 -> 2 -> 9`

## Constraints
- `1 ≤ List Size ≤ 10^4`
- `1 ≤ pos ≤ List Size + 1`
- `1 ≤ val ≤ 10^4`


## Time and Space Complexity
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
