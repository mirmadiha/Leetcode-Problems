<h1>N-Queen Problem</h1>

The n-queens puzzle is the problem of placing n queens on a (n×n) chessboard such that no two queens can attack each other.
Given an integer n, find all distinct solutions to the n-queens puzzle. Each solution contains distinct board configurations of the n-queens placement, where the solutions are a permutation of [1,2,3..n] in increasing order, here the number in the ith place denotes that the ith-column queen is placed in the row with that number. For eg below figure represents a chessboard [3 1 4 2].



<h3>Examples:</h3>

<h3>Input:</h3> 1
<h3>Output:</h3> [1]
<h3>Explaination:</h3> Only one queen can be placed in the single cell available.
<h3>Input:</h3> 4
<h3>Output:</h3> [[2 4 1 3 ],[3 1 4 2 ]]
<h3>Explaination:</h3> These are the 2 possible solutions.
<h3>Expected Time Complexity:</h3> O(n!)
<h3>Expected Auxiliary Space:</h3> O(n2) 

<h3>Constraints:</h3>
1 ≤ n ≤ 10
