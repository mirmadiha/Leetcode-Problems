<h1>Print Like a Wave</h1>
<h3>Problem statement</h3>
For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

<h3>For eg:-</h3>

The sine wave for the matrix:-
1 2<br>
3 4<br>
will be [1, 3, 4, 2].<br>

<h3>Constraints :</h3>
1 <= T <= 10<br>
1 <= N <= 100<br>
1 <= M <= 100<br>
0 <= ARR[i][j] <= 100<br>

<h3>Time Limit:</h3> 1sec
<h3>Sample Input 1:</h3>
2<br>
3 4<br>
1 2 3 4<br>
5 6 7 8<br>
9 10 11 12<br>
4 4<br>
1 2 4 5<br>
3 6 8 10<br>
11 12 13 15<br>
16 14 9 7<br>
<h3>Sample Output 1:</h3>
1 5 9 10 6 2 3 7 11 12 8 4<br>
1 3 11 16 14 12 6 2 4 8 13 9 7 15 10 5 <br>
<h3>Explanation For Sample Input 1:</h3>
Here, the elements are printed in a form of a wave, first, the 0th column is printed from top to bottom then the 1st column from bottom to top, and so on. Basically, the even column is printed from top to bottom and the odd column in the opposite direction.
<h3>Sample Input 2:</h3>
2<br>
1 1<br>
3<br>
1 2<br>
6 5<br>
<h3>Sample Output 2:</h3>
3<br>
6 5 <br>
