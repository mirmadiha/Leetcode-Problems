<h1>Sorted matrix</h1>
<b>Difficulty:</b> Basic<br><b>Accuracy:</b> 63.49%<br>
Given an NxN matrix Mat. Sort all elements of the matrix.

<h3>Example 1:</h3>

<h3>Input:</h3><br>
N=4<br>
Mat=[[10,20,30,40],<br>
[15,25,35,45] <br>
[27,29,37,48] <br>
[32,33,39,50]]<br>
<h3>Output:</h3><br>
10 15 20 25 <br>
27 29 30 32<br>
33 35 37 39<br>
40 45 48 50<br>
<h3>Explanation:</h3><br>
Sorting the matrix gives this result.
<h3>Example 2:</h3><br>

<h3>Input:</h3><br>
N=3<br>
Mat=[[1,5,3],[2,8,7],[4,6,9]]<br>
<h3>Output:</h3><br>
1 2 3 <br>
4 5 6<br>
7 8 9<br>
<h3>Explanation:</h3><br>
Sorting the matrix gives this result.<br>
<h3>Your Task:</h3><br>
You don't need to read input or print anything. Your task is to complete the function sortedMatrix() <br>which takes the integer N and the matrix Mat as input parameters and returns the sorted matrix.


<h3>Expected Time Complexity:</h3>O(N2LogN)<br>
<h3>Expected Auxillary Space:</h3>O(N2)<br>


<h3>Constraints:<br></h3>
1<=N<=1000<br>
1<=Mat[i][j]<=105<br>
