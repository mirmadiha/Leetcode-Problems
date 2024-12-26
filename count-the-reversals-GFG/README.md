<h1><a href="https://www.geeksforgeeks.org/problems/count-the-reversals0401/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Count the Reversals</a></h1>

Given a string S consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals required to convert the string into a balanced expression.
A reversal means changing '{' to '}' or vice-versa.

<h3>Example 1:</h3>

<h3>Input:</h3>
S = "}{{}}{{{"
<h3>Output:</h3> 3
<h3>Explanation:</h3> One way to balance is:
"{{{}}{}}". There is no balanced sequence
that can be formed in lesser reversals.
Example 2:

<h3>Input: </h3>
S = "{{}{{{}{{}}{{"
<h3>Output:</h3> -1
<h3>Explanation:</h3> There's no way we can balance
this sequence of braces.
<h3>Your Task:</h3>
You don't need to read input or print anything. Your task is to complete the function countRev() which takes the string S as the input parameter and returns the minimum number of reversals required to balance the bracket sequence. If balancing is not possible, return -1. 

<h3>Expected Time Complexity:</h3> O(|S|).
<h3>Expected Auxiliary Space:</h3> O(1).

<h3>Constraints:</h3>
1 ≤ |S| ≤ 105
