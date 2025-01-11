<h1><a href="https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1">First negative in every window of size k</a></h1>

Given an array arr[]  and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

<h3>Note:</h3> If a window does not contain a negative integer, then return 0 for that window.

<h3>Examples:</h3>

<h3>Input:</h3> arr[] = [-8, 2, 3, -6, 10] , k = 2
<h3>Output:</h3> [-8, 0, -6, -6]
<h3>Explanation:</h3>
Window {-8, 2}: First negative integer is -8.<br>
Window {2, 3}: No negative integers, output is 0.<br>
Window {3, -6}: First negative integer is -6.<br>
Window {-6, 10}: First negative integer is -6.<br>
Input: arr[] = [12, -1, -7, 8, -15, 30, 16, 28] , k = 3<br>
Output: [-1, -1, -7, -15, -15, 0]<br> 
<h3>Explanation:</h3>
Window {12, -1, -7}: First negative integer is -1.<br>
Window {-1, -7, 8}: First negative integer is -1.<br>
Window {-7, 8, -15}: First negative integer is -7.<br>
Window {8, -15, 30}: First negative integer is -15.<br>
Window {-15, 30, 16}: First negative integer is -15.<br>
Window {30, 16, 28}: No negative integers, output is 0.<br>
Input: arr[] = [12, 1, 3, 5] , k = 3
Output: [0, 0] 
<h3>Explanation:</h3>
Window {12, 1, 3}: No negative integers, output is 0.<br>
Window {1, 3, 5}: No negative integers, output is 0.<br>

<h3>Constraints:</h3>
1 <= arr.size() <= 106<br>
-105 <= arr[i] <= 105<br>
1 <= k <= arr.size()<br>

