```markdown

## 🧩 Problem Statement

Given a binary tree, return an array representing the **bottom view** of the binary tree from **left to right**.

> If there are multiple bottom-most nodes for a horizontal distance from the root, the **last node** encountered in **level-order traversal** is considered.

---

## 📌 Example

### Input Tree:
```

```
                  20
                /    \
              8       22
            /   \     /   \
          5      3   4    25
                /  \
              10    14
```

```

### Output:
```

5 10 4 14 25

```

---

## 📥 More Examples

### Example 1
**Input:**
```

```
   1
 /   \
3     2
```

```
**Output:**  
`3 1 2`

---

### Example 2
**Input:**
```

```
     10
   /    \
  20    30
 /  \
40  60
```

```
**Output:**  
`40 20 60 30`

---

### Example 3
**Input:**
```

```
1
```

/
2

```
**Output:**  
`2 1`

---

## ✅ Constraints

- `1 <= Number of nodes <= 10^5`  
- `1 <= Node value <= 10`

---

## 🧠 Concept Summary

- Assign each node a **Horizontal Distance (HD)** from the root.
- Traverse the tree using **level-order traversal (BFS)**.
- Track and update the node value for each HD.
- The **bottom view** consists of the **last updated** values at each HD when traversal completes.
- Finally, sort by HD from **left to right** to get the result.

---
