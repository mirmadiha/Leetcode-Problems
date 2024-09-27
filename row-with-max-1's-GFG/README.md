<h1>Row with max 1s</h1>
<b>Difficulty:</b> Medium<br><b>Accuracy:</b> 33.09%
You are given a 2D array consisting of only 1's and 0's, where each row is sorted in non-decreasing order. You need to find and return the index of the first row that has the most number of 1s. If no such row exists, return -1.
Note: 0-based indexing is followed.

<h3>Examples:</h3>

<h3>Input:</h3> 
    arr[][] = [[0, 1, 1, 1],<br>
               [0, 0, 1, 1],<br>
               [1, 1, 1, 1],<br>
               [0, 0, 0, 0]]<br>
<h3>Output:</h3> 2
<h3>Explanation:</h3> Row 2 contains 4 1's.
<h3>Input:</h3> 
    arr[][] = [[0, 0], <br>
               [1, 1]]
<h3>Output:</h3> 1
<h3>Explanation:</h3> Row 1 contains 2 1's.
<h3>Expected Time Complexity:</h3> O(n+m) 
<h3>Expected Auxiliary Space:</h3> O(1)

<h3>Note :</h3> Here n,m refers to the number of rows and columns respectively.

<h3>Constraints:</h3>
1 ≤ number of rows, number of columns ≤ 103
0 ≤ arr[i][j] ≤ 1 
