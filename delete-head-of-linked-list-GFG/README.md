# Delete Head of Linked List

## Problem Statement
Given a linked list, delete the head (first node) of the linked list and return the new head of the modified linked list.  
Note: Set the original head to `NULL`.

## Examples

**Input:**  
1 -> 2 -> 3 -> 1 -> 7  

**Output:**  
2 -> 3 -> 1 -> 7  

**Explanation:**  
After deleting the head from the given linked list, the remaining list is 2 -> 3 -> 1 -> 7.

---

**Input:**  
10 -> 5 -> 7 -> 8 -> 99 -> 100  

**Output:**  
5 -> 7 -> 8 -> 99 -> 100  

**Explanation:**  
After deleting the head from the given linked list, the remaining list is 5 -> 7 -> 8 -> 99 -> 100.

## Approach
- If the linked list is empty, return `NULL`.
- Store the current head in a temporary variable.
- Move the head pointer to the next node.
- Set the original head to `NULL`.
- Return the new head.

## Algorithm
1. If `head` is `NULL`, return `NULL`.
2. Let `temp = head`.
3. Update `head = head->next`.
4. Set `temp = NULL`.
5. Return `head`.

## Time and Space Complexity
- **Time Complexity:** O(1)  
- **Space Complexity:** O(1)
