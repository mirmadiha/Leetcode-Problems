# Sum Tree Checker

## Problem Statement
Given a Binary Tree, check if it is a Sum Tree. A Sum Tree is defined as a Binary Tree where the value of every non-leaf node is equal to the sum of the values of its left and right subtrees.

Return `true` if it is a Sum Tree, otherwise return `false`.

## Definitions
- A **Sum Tree** is a binary tree such that:
  - For every **non-leaf node**: `node->data == sum(left subtree) + sum(right subtree)`
  - Leaf nodes are considered valid Sum Trees.
  - An empty tree is also a valid Sum Tree (sum = 0).

## Examples

### Example 1
```
Input:
    3
  /   \    
 1     2

Output:
true

Explanation:
Sum of left and right subtree = 1 + 2 = 3. Root value = 3. Valid Sum Tree.
```

### Example 2
```
Input:
          10
        /    \
      20      30
    /   \
   10    10

Output:
false

Explanation:
Left Subtree sum = 10 + 10 = 20
Right Subtree sum = 30
Root value = 10 != 20 + 30 → Invalid Sum Tree
```

### Example 3
```
Input:
   25
  /   \    
 9     15

Output:
false

Explanation:
9 + 15 = 24, but root = 25 → Invalid
```

## Constraints
- `2 <= number of nodes <= 10^5`
- `1 <= node->data <= 10^5`

## Time & Space Complexity
- **Time**: O(n), where n is the number of nodes (each node is visited once)
- **Space**: O(h), where h is the height of the tree (due to recursion stack)

## Notes
- Always check for both left and right subtrees.
- Propagate the total subtree sum upwards for efficient validation.
- Ensure proper base case handling for leaf nodes and `NULL` nodes.

---


