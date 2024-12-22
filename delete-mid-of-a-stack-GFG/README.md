<h1><a href="https://www.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1">Delete Mid of a Stack</a></h1>

Given a stack s, delete the middle element of the stack without using any additional data structure.

<h3>Middle element:-</h3> floor((size_of_stack+1)/2) (1-based indexing) from the bottom of the stack.

<h3>Note:</h3> The output shown by the compiler is the stack from top to bottom.

<h3>Examples:</h3>

<h3>Input:</h3> s = [10, 20, 30, 40, 50]
<h3>Output:</h3> [50, 40, 20, 10]
<h3>Explanation: </h3>The bottom-most element will be 10 and the top-most element will be 50. Middle element will be element at index 3 from bottom, which is 30. Deleting 30, stack will look like {10 20 40 50}.
<h3>Input:</h3> s = [10, 20, 30, 40]
<h3>Output:</h3> [40, 30, 10]
<h3>Explanation:</h3> The bottom-most element will be 10 and the top-most element will be 40. Middle element will be element at index 2 from bottom, which is 20. Deleting 20, stack will look like {10 30 40}.
<h3>Input: </h3>s = [5, 8, 6, 7, 6, 6, 5, 10, 12, 9]
<h3>Output:</h3> [9, 12, 10, 5, 6, 7, 6, 8, 5]
<h3>Constraints:</h3>
2 ≤ element of stack ≤ 105<br>
2 ≤ s.size() ≤ 104<br>
