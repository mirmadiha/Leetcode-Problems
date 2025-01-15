# [N Queue Using Array](https://www.naukri.com/code360/problems/n-queue-using-array_1170053)

## Problem Statement
You will be given ‘N’ queries. You need to implement ‘N’ queues using an array according to those queries. Each query will belong to one of these two types:

1. `1 X N`: Enqueue element `X` into the end of the nth queue. Returns `true` if the element is enqueued, otherwise `false`.
2. `2 N`: Dequeue the element at the front of the nth queue. Returns `-1` if the queue is empty, otherwise returns the dequeued element.

### Notes:
- **Enqueue** means adding an element to the end of the queue.
- **Dequeue** means removing the element from the front of the queue.

---

## Input Format
1. The first line contains three integers:
   - `N`: The number of queues.
   - `S`: The size of the array.
   - `Q`: The number of queries.
2. The next `Q` lines contain the queries, either:
   - `1 X N` (to enqueue `X` into the nth queue).
   - `2 N` (to dequeue from the nth queue).

---

## Output Format
- For `1 X N` queries, output `true` if the element is successfully enqueued, otherwise `false`.
- For `2 N` queries, output `-1` if the queue is empty, otherwise output the dequeued element.

---

## Constraints
- `1 ≤ N ≤ S ≤ 1000`
- `1 ≤ Q ≤ 10^5`
- `1 ≤ P ≤ 2`
- `1 ≤ X ≤ 10^5`

---

## Sample Input 1
```
2 5 5
1 2 1 
1 3 2 
1 4 1
2 2
2 1
```

### Sample Output 1
```
true 
true
true
3
2
```

### Explanation of Sample Output 1
- **Input Details:**
  - Number of queues (`N`): 2
  - Array size (`S`): 5
  - Number of queries (`Q`): 5
- **Operations:**
  1. `push(2, 1)`: Push element `2` into the 1st queue. Returns `true`.
  2. `push(3, 2)`: Push element `3` into the 2nd queue. Returns `true`.
  3. `push(4, 1)`: Push element `4` into the 1st queue. Returns `true`.
  4. `pop(2)`: Pop the front element from the 2nd queue. Returns `3`.
  5. `pop(1)`: Pop the front element from the 1st queue. Returns `2`.

---

## Sample Input 2
```
3 10 7
1 11 1
1 51 2
1 26 3 
1 16 2
1 5 3
2 2 
2 3
```

### Sample Output 2
```
true 
true
true
true
true
51
26
```

### Explanation of Sample Output 2
- **Input Details:**
  - Number of queues (`N`): 3
  - Array size (`S`): 10
  - Number of queries (`Q`): 7
- **Operations:**
  1. `push(11, 1)`: Push element `11` into the 1st queue. Returns `true`.
  2. `push(51, 2)`: Push element `51` into the 2nd queue. Returns `true`.
  3. `push(26, 3)`: Push element `26` into the 3rd queue. Returns `true`.
  4. `push(16, 2)`: Push element `16` into the 2nd queue. Returns `true`.
  5. `push(5, 3)`: Push element `5` into the 3rd queue. Returns `true`.
  6. `pop(2)`: Pop the front element from the 2nd queue. Returns `51`.
  7. `pop(3)`: Pop the front element from the 3rd queue. Returns `26`.

---

## Approach
1. **Data Structure:**
   - Use an array of queues to represent `N` queues.
   - Each queue will operate independently using enqueue and dequeue operations.

2. **Steps:**
   - For `1 X N`, append `X` to the nth queue.
   - For `2 N`, remove the front element from the nth queue.

3. **Edge Cases:**
   - Handle empty queues for dequeue operations.
   - Ensure the total size of all queues does not exceed `S`.

---

## Complexity
- **Time Complexity:**
  - Enqueue: `O(1)` per operation.
  - Dequeue: `O(1)` per operation.
- **Space Complexity:** `O(S)` for storing elements in the array.

---

## Implementation
To implement this problem, use a programming language of your choice, such as Python, Java, or C++. The logic will involve maintaining an array of queues and performing operations based on the input queries.
