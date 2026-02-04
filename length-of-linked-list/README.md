# Length of Linked List

## Problem Statement
Given the head of a singly linked list, find the length of the linked list.  
The length is defined as the number of nodes present in the linked list.

## Examples

**Input:**  
`1 -> 2 -> 3 -> 4 -> 5`  
**Output:**  
`5`  

**Explanation:**  
There are 5 nodes present in the linked list.

---

**Input:**  
`2 -> 4 -> 6 -> 7 -> 5 -> 1 -> 0`  
**Output:**  
`7`  

**Explanation:**  
There are 7 nodes present in the linked list.

## Constraints
- `1 ≤ number of nodes ≤ 4 × 10^4`
- `1 ≤ node->data ≤ 10^3`

## Approach
Traverse the linked list starting from the head node.  
Maintain a counter and increment it for each node visited until the end of the list (`NULL`) is reached.

## Complexity Analysis
- **Time Complexity:** `O(n)`  
- **Space Complexity:** `O(1)`
