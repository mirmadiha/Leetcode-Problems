# [Sum of Minimum and Maximum Elements of All Subarrays of Size "K"](https://www.naukri.com/code360/problems/sum-of-minimum-and-maximum-elements-of-all-subarrays-of-size-k_1171047)

### Problem Statement
You are given an array consisting of **N** integers, and an integer, **K**. Your task is to determine the total sum of the minimum element and the maximum element of all subarrays of size **K**.

### Note:
- The array may contain duplicate elements.
- The array can also contain negative integers.
- The size of the array is at least 2.
- There exists at least one such subarray of size **K**.

### Constraints:
- 1 <= T <= 10
- 1 <= N <= 10<sup>5</sup>
- 1 <= K <= N
- 1 <= arr[i] <= 10<sup>9</sup>

**Time Limit:** 1 sec

---

### Input/Output Format

#### Sample Input 1:
```
1
5 3
1 2 3 4 5
```

#### Sample Output 1:
```
18
```

#### Explanation for Sample Input 1:
For the subarray starting from the 0th index and ending at the 2nd index, its minimum element is 1 and the maximum element is 3. Similarly, for the next subarray starting at the 1st index and ending at the 3rd index, the minimum value is 2 and the maximum is 4. And, for the last subarray, the minimum value is 3 and the maximum is 5. So, the total sum will be:

```
1 + 3 + 2 + 4 + 3 + 5 = 18
```

#### Sample Input 2:
```
1
6 4
2 4 7 3 8 1
```

#### Sample Output 2:
```
29
```

#### Explanation for Sample Input 2:
For the subarray starting from the 0th index and ending at the 3rd index, its minimum element is 2 and the maximum element is 7. Similarly, for the next subarray starting at the 1st index and ending at the 4th index, the minimum value is 3 and the maximum is 8. And, for the last subarray, the minimum value is 1 and the maximum is 8. So, the total sum will be:

```
2 + 7 + 3 + 8 + 1 + 8 = 29

