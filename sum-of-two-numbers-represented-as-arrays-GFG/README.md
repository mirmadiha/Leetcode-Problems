<h1>Sum of two numbers reoresented as arrays</h1>
Given two numbers represented by two different arrays, arr1[] and arr2[], the task is to find their sum as a new array. Each array represents a number where each element corresponds to a digit in that number. The resulting sum array should also represent the sum of the two numbers in the same digit-by-digit format.

<h3>Note:</h3> No leading zeroes in array arr1 and arr2.

<h3>Examples:</h3>

<h3>Input:</h3> arr1[] = [5, 6, 3], arr2[] = [8, 4, 2]
<h3>Output:</h3> [1, 4, 0, 5]
<h3>Explanation:</h3> As 563 + 842 = 1405.
<h3>Input:</h3> arr1[] = [2, 2, 7, 5, 3, 3], arr2[] = [4, 3, 3, 8]
<h3>Output:</h3> [2, 3, 1, 8, 7, 1]
<h3>Explanation:</h3> As 227533 + 4338 = 231871.
<h3>Expected Time Complexity:</h3> O(max(n, m))
<h3>Expected Auxiliary Space:</h3> O(1)

<h3>Constraints:</h3>
1 ≤ arr1.size() ≤ arr2.size() ≤ 106<br>
0 ≤ arr1i, arr2i ≤ 9
