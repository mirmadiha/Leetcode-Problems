# Day 17: Count Leaf Nodes

### Problem Statement
You are given a Binary Tree. You have to count and return the number of leaf nodes present in it.

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

A node is a leaf node if both left and right child nodes of it are `NULL`.

---

### Input/Output Format

**Input**:  
1. An integer `T`, the number of test cases.  
2. For each test case:  
   - A space-separated representation of the binary tree in level order where `-1` represents a `NULL` node.

**Output**:  
- For each test case, output the count of leaf nodes in the tree.

---

### Constraints
- \( 1 \leq T \leq 100 \)  
- \( 1 \leq N \leq 10^3 \)  
- \( 1 \leq \text{data} \leq 10^9 \)  
- Time Limit: 1 second  

---

### Sample Input 1
```
3
1 -1 -1
1 2 3 -1 -1 -1 4 -1 -1
1 2 -1 -1 3 -1 4 -1 -1
```

### Sample Output 1
```
1
2
1
```

### Explanation for Sample Input 1
1. `1` is the only node present in the tree, hence it is the only leaf node.  
2. `2` and `4` are leaf nodes. All other nodes have at least one child.  
3. `4` is the only leaf node as all other nodes have at least one child.  

---

### Sample Input 2
```
3
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
1 -1 2 -1 3 -1 -1
1 2 -1 3 4 5 6 7 8 -1 -1 -1 -1 -1 -1 -1 -1
```

### Sample Output 2
```
4
1
4
```

### Explanation for Sample Input 2
1. `4`, `5`, `6`, and `7` are leaf nodes. All other nodes have at least one child.  
2. `3` is the only leaf node as all other nodes have at least one child.  
3. `5`, `6`, `7`, and `8` are leaf nodes. All other nodes have at least one child.  

--- 
