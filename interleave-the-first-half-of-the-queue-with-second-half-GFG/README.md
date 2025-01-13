# [Interleave the First Half of the Queue with Second Half](https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1)

### Difficulty: Medium

### Problem Statement
You are given a queue `Q` of `N` integers of even length. Your task is to rearrange the elements by interleaving the first half of the queue with the second half of the queue.

### Example

#### Example 1:
**Input:**
```
N = 4
Q = {2,4,3,1}
```

**Output:**
```
{2,3,4,1}
```

**Explanation:**
After interleaving the first half and the second half, the final queue will be `{2,3,4,1}`.

---

#### Example 2:
**Input:**
```
N = 2
Q = {3,5}
```

**Output:**
```
{3,5}
```

**Explanation:**
After interleaving the first half and the second half, the final queue will remain `{3,5}`.

---

### Expected Complexity
- **Time Complexity:** O(N)
- **Auxiliary Space:** O(N)

---

### Constraints
1. `2 \leq N \leq 10^5`
2. `N` is even.
3. `1 \leq Elements \ of \ Queue \ \leq 10^3`
4. Sum of `N` over all test cases does not exceed `10^6`.

---

### Approach
1. **Split the Queue:**
   - Divide the queue `Q` into two halves: the first half and the second half.

2. **Interleave Elements:**
   - Create a new result queue by alternately adding elements from the first half and the second half.

3. **Return Result:**
   - Return the modified queue as a vector/ArrayList.

---

### Algorithm
1. Create two separate queues or arrays for the first and second halves of `Q`.
2. Iterate through the original queue:
   - Add elements alternately from the first half and the second half into the result queue.
3. Return the result queue.

---

### Example Walkthrough

#### Example 1:
**Input:**
```
N = 4
Q = {2,4,3,1}
```

**Steps:**
1. Split the queue into two halves:
   - First half: `{2,4}`
   - Second half: `{3,1}`
2. Interleave the elements:
   - Start with the first element of the first half, then the first element of the second half.
   - `{2,3}`
   - Add the next element of the first half, then the next element of the second half.
   - `{2,3,4,1}`
3. Result: `{2,3,4,1}`

---


### Edge Cases
1. **Minimum Input Size:**
   - Input: `N = 2, Q = {1,2}`
   - Output: `{1,2}`

2. **All Elements are Identical:**
   - Input: `N = 4, Q = {5,5,5,5}`
   - Output: `{5,5,5,5}`

3. **Large Input:**
   - Input: `N = 10^5`
   - Ensure the algorithm handles the input efficiently within the constraints.

---

### Tips
- Use a deque for efficient popping from the front of the queue.
- Ensure the queue length is always even as per the problem constraints.

