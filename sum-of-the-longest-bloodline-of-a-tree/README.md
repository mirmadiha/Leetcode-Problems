
````markdown
# 🌳 Sum of Nodes on the Longest Path in a Binary Tree

### 🔸 Difficulty: Medium  
### 🔹 Accuracy: 52.39%  
### 🧠 Submissions: 113K+  
### 🏅 Points: 4

---

## 🧾 Problem Statement

Given a binary tree, you are required to find the **sum of the nodes on the longest path from the root to any leaf node**.

- If **multiple paths** have the **same length**, consider the one with the **maximum sum** of node values.

---

## ✅ Input Format

- A binary tree represented as an array: `root[]`
  - Here, `N` or `null` denotes a null node.

## 🎯 Output Format

- An integer representing the sum of the nodes on the longest root-to-leaf path.

---

## 🧪 Examples

### Example 1:
```plaintext
Input: root[] = [4, 2, 5, 7, 1, 1, 2, 3, N, 6]

Longest Path: 4 → 2 → 1 → 6  
Output: 13
Explanation: Sum = 4 + 2 + 1 + 6 = 13
````

### Example 2:

```plaintext
Input: root[] = [1, 2, 3, 4, 5, 6, 7]

        1
      /   \
     2     3
    / \   / \
   4   5 6   7

Longest Path: 1 → 3 → 7  
Output: 11
Explanation: Sum = 1 + 3 + 7 = 11
```

### Example 3:

```plaintext
Input: root[] = [10, 5, 15, 3, 7, N, 20, 1]

         10
        /  \
       5    15
      / \     \
     3   7     20
    /
   1

Longest Path: 10 → 5 → 3 → 1  
Output: 19
Explanation: Sum = 10 + 5 + 3 + 1 = 19
```

---

## 🧷 Constraints

* `1 <= Number of nodes <= 10⁶`
* `0 <= Node value <= 10⁴`

---
