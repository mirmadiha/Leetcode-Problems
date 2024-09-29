<h1>Max rectangle</h1>
<b>Difficulty:</b> Hard<br><b>Accuracy:</b> 36.43%<br>
Given a binary matrix M of size n X m. Find the maximum area of a rectangle formed only of 1s in the given matrix.

<h3>Example 1:</h3>

<h3>Input:</h3>
n = 4, m = 4
M[][] = {{0 1 1 0},<br>
         {1 1 1 1},<br>
         {1 1 1 1},<br>
         {1 1 0 0}}<br>
<h3>Output:</h3> 8
<h3>Explanation:</h3> For the above test case the
matrix will look like
0 1 1 0<br>
1 1 1 1<br>
1 1 1 1<br>
1 1 0 0<br>
the max size rectangle is <br>
1 1 1 1<br>
1 1 1 1<br>
and area is 4 *2 = 8.
<h3>Your Task:</h3>
Your task is to complete the function maxArea which returns the maximum size rectangle area in a binary-sub-matrix with all 1’s. The function takes 3 arguments the first argument is the Matrix M[ ] [ ] and the next two are two integers n and m which denotes the size of the matrix M. 

<h3>Constraints:</h3>
1<=n,m<=1000<br>
0<=M[][]<=1<br>
