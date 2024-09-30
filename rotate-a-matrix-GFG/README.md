<h1>Rotate a Matrix</h1>
<b>Difficulty:</b> Medium<br><b>Accuracy:</b> 63.1%<br>
Given a N x N 2D matrix Arr representing an image. Rotate the image by 90 degrees (anti-clockwise direction). You need to do this in place. Note that if you end up using an additional array, you will only receive the partial score.

<h3>Example 1:</h3>

<h3>Input:</h3>
N = 3<br>
Arr[][] = {{1,  2,  3}<br>
           {4,  5,  6}<br>
           {7,  8,  9}}<br>
<h3>Output:</h3>
 3  6  9 <br>
 2  5  8 <br>
 1  4  7 <br>
<h3>Explanation:</h3> The given matrix is rotated
by 90 degree in anti-clockwise direction.
<h3>Example 2:</h3>

<h3>Input:</h3>
N = 4<br>
Arr[][] = {{1,  2,  3,  4}<br>
           {5,  6,  7,  8}<br>
           {9, 10, 11, 12}<br>
           {13, 14, 15, 16}}<br>
<h3>Output:</h3>
 4  8 12 16 <br>
 3  7 11 15 <br>
 2  6 10 14 <br>
 1  5  9 13<br>
<h3>Explanation:</h3> The given matrix is rotated
by 90 degree in anti-clockwise direction.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function rotateMatrix() which takes the 2D array of integers arr and n as parameters and returns void. You need to change the array itself.

<h3>Expected Time Complexity:</h3> O(N*N)
<h3>Expected Auxiliary Space:</h3> O(1)

<h3>Constraints:</h3>
1 ≤ N ≤ 1000<br>
1 ≤ Arr[i][j] ≤ 1000<br>
