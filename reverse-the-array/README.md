<h1>Reverse the Array</h1>
<h3>Problem statement</h3>
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

<h3>Example:</h3>

We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
based indexing so the subarray {5, 6} will be reversed and our 
output array will be {1, 2, 3, 4, 6, 5}.
<h3>Constraints:</h3>
1 <= T <= 10<br>
0 <= M <= N <= 5*10^4<br>
-10^9 <= ARR[i] <= 10^9<br>

<h3>Time Limit:</h3> 1 sec
<h3>Sample Input 1:</h3>
2<br>
6 3<br>
1 2 3 4 5 6<br>
5 2<br>
10 9 8 7 6<br>
<h3>Sample Output 1:</h3>
1 2 3 4 6 5<br>
10 9 8 6 7<br>
<h3>Explanation 1:</h3>
For the first test case, 
Considering 0-based indexing we have M = 3 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {1, 2, 3, 4, 6, 5}.

For the second test case, 
Considering 0-based indexing we have M = 2 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {10, 9, 8, 6, 7}.
<h3>Sample Input 2:</h3>
2<br>
7 3<br>
1 4 5 6 6 7 7 <br>
9 3<br>
10 4 5 2 3 6 1 3 6<br>
<h3>Sample Output 2:</h3>
 1 4 5 6 7 7 6<br>
 10 4 5 2 6 3 1 6 3 <br>
