<h1><a href="https://www.geeksforgeeks.org/problems/the-celebrity-problem/1">The Celebrity Problem</a></h1>

A celebrity is a person who is known to all but does not know anyone at a party. A party is being organized by some people.  A square matrix mat (n*n) is used to represent people at the party such that if an element of row i and column j is set to 1 it means ith person knows jth person. You need to return the index of the celebrity in the party, if the celebrity does not exist, return -1.

<h3>Note:</h3> Follow 0-based indexing.

<h3>Examples:</h3>

<h3>Input:</h3> mat[][] = [[0 1 0], [0 0 0], [0 1 0]]
<h3>Output:</h3> 1
<h3>Explanation:</h3> 0th and 2nd person both know 1. Therefore, 1 is the celebrity. 
<h3>Input:</h3> mat[][] = [[0 1], [1 0]]
<h3>Output:</h3> -1
<h3>Explanation:</h3> The two people at the party both know each other. None of them is a celebrity.
<h3>Input:</h3> mat[][] = [[0]]
<h3>Output:</h3> 0
<h3>Constraints:</h3>
1 <= mat.size()<= 3000<br>
0 <= mat[i][j]<= 1<br>
