# K Sum Paths in a Binary Tree


---

## 📝 Problem Statement

Given a binary tree and an integer `k`, determine the number of **downward-only paths** where the sum of the node values in the path equals `k`.  
A path can start and end at any node within the tree but must always move **downward** (from parent to child).

---

## 📌 Examples

### Example 1:
**Input:**  
`k = 7`  

**Output:**  
`3`  

**Explanation:**  
Three paths in the tree sum up to `7`.

---

### Example 2:
**Input:**  
`k = 3`  

**Output:**  
`2`  

**Explanation:**  
- Path 1: `1 → 2` (Sum = 3)  
- Path 2: `3` (Sum = 3)

---

## 📚 Constraints

- `1 ≤ number of nodes ≤ 10⁴`  
- `-100 ≤ node value ≤ 100`  
- `-10⁹ ≤ k ≤ 10⁹`

