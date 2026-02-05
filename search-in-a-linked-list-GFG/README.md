# Search in Linked List

## Difficulty
Easy

## Problem Statement
Given a linked list with the head node and a key, check whether the key is present in the linked list or not.  
Return `true` if the key is present, otherwise return `false`.

## Examples

**Input:**  
key = 3  

**Output:**  
true  

**Explanation:**  
3 is present in the linked list.

---

**Input:**  
key = 4  

**Output:**  
false  

**Explanation:**  
4 is not present in the linked list.

## Constraints
- 1 ≤ Number of nodes ≤ 10⁵  
- 1 ≤ node.data, key ≤ 10⁵  

## Approach
Traverse the linked list starting from the head node.  
Compare each node’s data with the given key.  
If a match is found, return `true`.  
If the end of the list is reached without a match, return `false`.

## Time Complexity
- O(n), where n is the number of nodes in the linked list.

## Space Complexity
- O(1)
