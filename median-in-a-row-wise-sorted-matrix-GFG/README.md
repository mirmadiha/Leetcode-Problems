<h1>Median in a row-wise sorted Matrix</h1>
<b>Difficulty:</b> Hard<br>      <b>Accuracy:</b> 55.05%<br><br>          
Given a row wise sorted matrix of size R*C where R and C are always odd, find the median of the matrix.

<h3>Example 1:</h3>

<h3>Input:</h3>
R = 3, C = 3
M = [[1, 3, 5], <br>
     [2, 6, 9], <br>
     [3, 6, 9]]<br>
<h3>Output:</h3> 5
<h3>Explanation:</h3> Sorting matrix elements gives 
us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
 

<h3>Example 2:</h3>

<h3>Input:</h3>
R = 3, C = 1<br>
M = [[1], [2], [3]]<br>
<h3>Output:</h3> 2
<h3>Explanation:</h3> Sorting matrix elements gives 
us {1,2,3}. Hence, 2 is median.

<h3>Your Task:</h3>  
You don't need to read input or print anything. Your task is to complete the function median() which takes the integers R and C along with the 2D matrix as input parameters and returns the median of the matrix.

<h3>Expected Time Complexity:</h3> O(32 * R * log(C))
<h3>Expected Auxiliary Space:</h3> O(1)


<h3>Constraints:</h3>
1 <= R, C <= 400<br>
1 <= matrix[i][j] <= 2000<br>
