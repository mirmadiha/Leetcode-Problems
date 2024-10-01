<h1>Kth element in Matrix</h1>
<b>Difficulty:</b> Medium<br><b>Accuracy:</b> 61.42%<br>
Given a N x N matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.

<h3>Example 1:</h3>
<h3>Input:</h3>
N = 4<br>
mat[][] =     {{16, 28, 60, 64},<br>
                   {22, 41, 63, 91},<br>
                   {27, 50, 87, 93},<br>
                   {36, 78, 87, 94 }}<br>
K = 3
<h3>Output:</h3> 27
<h3>Explanation:</h3> 27 is the 3rd smallest element.
 

<h3>Example 2:</h3>
<h3>Input:</h3>
N = 4<br>
mat[][] =     {{10, 20, 30, 40}<br>
                   {15, 25, 35, 45}<br>
                   {24, 29, 37, 48}<br>
                   {32, 33, 39, 50}}<br>
K = 7
<h3>Output:</h3> 30
<h3>Explanation:</h3> 30 is the 7th smallest element.


<h3>Your Task:</h3>
You don't need to read input or print anything. Complete the function kthsmallest() which takes the mat,<br> N and K as input parameters and returns the kth smallest element in the matrix.
 

<h3>Expected Time Complexity:</h3> O(K*Log(N))<br>
<h3>Expected Auxiliary Space:</h3> O(N)<br>

 

<h3>Constraints:</h3>
1 <= N <= 50<br>
1 <= mat[][] <= 10000<br>
1 <= K <= N*N<br>
