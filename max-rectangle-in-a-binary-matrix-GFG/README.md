<h1><a href="https://www.geeksforgeeks.org/problems/max-rectangle/1">Max rectangle</a></h1>

Given a binary matrix mat[][] of size n * m. Find the maximum area of a rectangle formed only of 1s in the given matrix.

<h3>Examples:</h3>

<h3>Input:</h3> mat[][] = [[0, 1, 1, 0],
                [1, 1, 1, 1],<br>
                [1, 1, 1, 1],<br>
                [1, 1, 0, 0]]<br>
<h3>Output:</h3> 8
<h3>Explanation:</h3> The largest rectangle with only 1’s is from (1, 0) to (2, 3) which is
[1, 1, 1, 1]<br>
[1, 1, 1, 1]<br>
and area is 4 *2 = 8.<br>
<h3>Input:</h3> mat[][] = [[0, 1, 1],<br>
                [1, 1, 1],<br>
                [0, 1, 1]]<br>
<h3>Output:</h3> 6
<h3>Explanation:</h3> The largest rectangle with only 1’s is from (0, 1) to (2, 2) which is
[1, 1]<br>
[1, 1]<br>
[1, 1]<br>
<h3>Constraints:</h3>
1<= mat.size(), mat[0].size()<=1000<br>
0<=mat[][]<=1<br>
