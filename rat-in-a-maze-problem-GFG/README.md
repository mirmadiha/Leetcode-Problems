<h1>Rat in a Maze Problem - I</h1>
<br>
Consider a rat placed at (0, 0) in a square matrix mat of order n* n. It has to reach the destination at (n - 1, n - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell. In case of no path, return an empty list. The driver will output "-1" automatically.

<h3>Examples:</h3>

<h3>Input:</h3> mat[][] = [[1, 0, 0, 0],<br>
                [1, 1, 0, 1],<br>
                [1, 1, 0, 0],<br>
                [0, 1, 1, 1]]<br>
<h3>Output:</h3> DDRDRR DRDDRR
<h3>Explanation:</h3> The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.
<h3>Input:</h3> mat[][] = [[1, 0],<br>
                [1, 0]]<br>
<h3>Output:</h3> -1
<h3>Explanation:</h3> No path exists and destination cell is blocked.
<h3>Expected Time Complexity:</h3> O(3n^2)
<h3>Expected Auxiliary Space:</h3> O(l * x)
Here l = length of the path, x = number of paths.

<h3>Constraints:</h3>
2 ≤ n ≤ 5<br>
0 ≤ mat[i][j] ≤ 1<br>
