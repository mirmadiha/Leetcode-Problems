<h1>Aggressive Cows</h1>

<h3>Problem statement</h3>
You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
You are also given an integer 'k' which denotes the number of aggressive cows.
You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.

Print the maximum possible minimum distance.

<h3>Example:</h3>
Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}

<h3>Output:</h3> 2

<h3>Explanation:</h3> The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.
Detailed explanation ( Input/output format, Notes, Images )
<h3>Sample Input 1 :</h3>
6 4
0 3 4 7 10 9

<h3>Sample Output 1 :</h3>
3

<h3>Explanation to Sample Input 1 :</h3>
The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here distance between cows are 3, 4 and 3 respectively.

<h3>Sample Input 2 :</h3>
5 2
4 2 1 3 6

<h3>Sample Output 2 :</h3>
5

<h3>Expected time complexity:</h3>
Can you solve this in O(n * log(n)) time complexity?

<h3>Constraints :</h3>
2 <= 'n' <= 10 ^ 5
2 <= 'k' <= n
0 <= 'arr[i]' <= 10 ^ 9
Time Limit: 1 sec.
