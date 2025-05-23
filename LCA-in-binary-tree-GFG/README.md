# Lowest Common Ancestor in Binary Tree
```markdown

## Problem Statement

Given a **Binary Tree** with all **unique values**, and two node values `n1` and `n2`, find the **Lowest Common Ancestor (LCA)** of the given two nodes.

**LCA**: The Lowest Common Ancestor of two nodes `n1` and `n2` in a binary tree is defined as the **lowest node** in the tree that has both `n1` and `n2` as **descendants** (where we allow a node to be a descendant of itself).

You may assume:
- Either both `n1` and `n2` are present in the tree, or none of them are.

---

## Examples

### Example 1

**Input:**
```

Tree: \[1, 2, 3, 4, 5, 6, 7]
n1 = 5, n2 = 6

```

**Tree Structure:**
```

```
    1
   / \
  2   3
 / \ / \
4  5 6  7
```

```

**Output:** `1`

**Explanation:** LCA of 5 and 6 is 1.

---

### Example 2

**Input:**
```

Tree: \[5, 2, N, 3, 4]
n1 = 3, n2 = 4

```

**Tree Structure:**
```

```
 5
/
```

2
/&#x20;
3   4

```

**Output:** `2`

**Explanation:** LCA of 3 and 4 is 2.

---

### Example 3

**Input:**
```

Tree: \[5, 2, N, 3, 4]
n1 = 5, n2 = 4

```

**Output:** `5`

**Explanation:** LCA of 5 and 4 is 5.

---

## Constraints

- `1 ≤ number of nodes ≤ 10^5`
- `1 ≤ node->data ≤ 10^5`
- All node values are **unique**

