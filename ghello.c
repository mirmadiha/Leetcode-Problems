<h1>Sum of Two Numbers Represented as Arrays</h1>
Given two numbers represented by two different arrays, arr1[] and arr2[], the task is to find their sum as a new array. Each array represents a number where each element corresponds to a digit in that number. The resulting sum array should also represent the sum of the two numbers in the same digit-by-digit format.

Note: No leading zeroes in array arr1 and arr2.

Examples:

Input: arr1[] = [5, 6, 3], arr2[] = [8, 4, 2]
Output: [1, 4, 0, 5]
Explanation: As 563 + 842 = 1405.
Input: arr1[] = [2, 2, 7, 5, 3, 3], arr2[] = [4, 3, 3, 8]
Output: [2, 3, 1, 8, 7, 1]
Explanation: As 227533 + 4338 = 231871.
Expected Time Complexity: O(max(n, m))
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr1.size() ≤ arr2.size() ≤ 106
0 ≤ arr1i, arr2i ≤ 9
