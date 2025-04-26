# Top View of Binary Tree

## Problem Statement
Given a binary tree, return its top view. The top view of a binary tree is the set of nodes visible when the tree is viewed from the top.

## Notes
- Return the nodes from the leftmost node to the rightmost node.
- If two nodes are at the same position (horizontal distance) and are outside the shadow of the tree, consider the leftmost node only.

## Examples

### Example 1
```
Input: root[] = [1, 2, 3]
Output: [2, 1, 3]
```

### Example 2
```
Input: root[] = [10, 20, 30, 40, 60, 90, 100]
Output: [40, 20, 10, 30, 100]
Explanation: The root 10 is visible. On the left, 40 is the leftmost node and visible, followed by 20. On the right, 30 and 100 are visible. Thus, the top view is 40 20 10 30 100.
```

### Example 3
```
Input: root[] = [1, 2, 3, N, 4, N, N, N, 5, N, 6]
Tree structure:
       1
     /   \
    2     3
     \
      4
       \
        5
         \
