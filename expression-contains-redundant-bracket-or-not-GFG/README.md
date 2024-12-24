<h1><a href="https://www.geeksforgeeks.org/problems/expression-contains-redundant-bracket-or-not/1">Expression contains redundant bracket or not</a></h1>

Given a string of balanced expression str, find if it contains a redundant parenthesis or not. A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets. Return 1 ifit contains a redundant parenthesis, else 0.
Note: Expression may contain + , - , *, and / operators. Given expression is valid and there are no white spaces present.

<h3>Example 1:</h3>

<h3>Input:</h3>
exp = ((a+b))
<h3>Output:</h3>
Yes
<h3>Explanation:</h3>
((a+b)) can reduced to (a+b).
<h3>Example 2:</h3>

<h3>Input:</h3>
exp = (a+b+(c+d))
<h3>Output:</h3>
No
<h3>Explanation:</h3>
(a+b+(c+d)) doesn't have any redundant or multiple
brackets.
<h3>Your task:</h3>
You don't have to read input or print anything. Your task is to complete the function checkRedundancy() which takes the string s as input and returns 1 if it contains redundant parentheses else 0.

<h3>Constraints:</h3>
1<=|str|<=104

<h3>Expected Time Complexity:</h3> O(N)
<h3>Expected Auxiliary Space:</h3> O(N)
