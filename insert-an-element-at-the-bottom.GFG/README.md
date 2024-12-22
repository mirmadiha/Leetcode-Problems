<h1><a href="https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Insert an Element at the Bottom of a Stack</a></h1>

You are given a stack st of n integers and an element x. You have to insert x at the bottom of the given stack. 

<h3>Note:</h3> Everywhere in this problem, the bottommost element of the stack is shown first while priniting the stack.

<h3>Example 1:</h3>

<h3>Input:</h3>
n = 5
x = 2
st = {4,3,2,1,8}
<h3>Output:</h3>
{2,4,3,2,1,8}
<h3>Explanation:</h3>
After insertion of 2, the final stack will be {2,4,3,2,1,8}.
<h3>Example 2:</h3>

<h3>Input:</h3>
n = 3<br>
x = 4<br>
st = {5,3,1}<br>
<h3>Output:</h3>
{4,5,3,1}
<h3>Explanation:</h3>
After insertion of 4, the final stack will be {4,5,3,1}.
Your Task:

You don't need to read input or print anything. Your task is to complete the function insertAtBottom() which takes a stack st and an integer x as inputs and returns the modified stack after insertion.

<h3>Expected Time Complexity:</h3> O(n)
<h3>Expected Auxiliary Space:</h3> O(n)

<h3>Constraints:</h3>
1 <= n <= 105<br>
0 <= x, elements of stack <= 109<br>
