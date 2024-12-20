<h1>Two Stacks in an Array</h1>

Your task is to implement  2 stacks in one array efficiently. You need to implement 4 methods.

<h3>twoStacks :</h3> Initialize the data structures and variables to be used to implement  2 stacks in one array.
<h3>push1 :</h3> pushes element into the first stack.
<h3>push2 :</h3> pushes element into the second stack.
<h3>pop1 :</h3> pops an element from the first stack and returns the popped element. If the first stack is empty, it should return -1.
<h3>pop2 :</h3> pops an element from the second stack and returns the popped element. If the second stack is empty, it should return -1.

<h3>Examples:</h3>

<h3>Input:</h3>
push1(2) <br>
push1(3) <br>
push2(4)<br>
pop1()<br>
pop2()<br>
pop2()<br>
<h3>Output:</h3> [3, 4, -1]
<h3>Explanation:</h3>
push1(2) the stack1 will be {2} <br>
push1(3) the stack1 will be {2,3}<br>
push2(4) the stack2 will be {4}<br>
pop1()   the poped element will be 3 from stack1 and stack1 will be {2}<br>
pop2()   the poped element will be 4 from stack2 and now stack2 is empty<br>
pop2()   the stack2 is now empty hence returned -1.<br>
<h3>Input:</h3>
push1(1)<br>
push2(2)<br>
pop1()<br>
push1(3)<br>
pop1()<br>
pop1()<br>
<h3>Output:</h3> [1, 3, -1]
<h3>Explanation:</h3>
push1(1) the stack1 will be {1}<br>
push2(2) the stack2 will be {2}<br>
pop1()   the poped element will be 1 from stack1 and stack1 will be empty<br>
push1(3) the stack1 will be {3}<br>
pop1()   the poped element will be 3 from stack1 and stack1 will be empty<br>
pop1()   the stack1 is now empty hence returned -1.<br>
<h3>Input:</h3>
push1(2)<br>
push1(3)<br>
push1(4)<br>
pop2()<br>
pop2()<br>
pop2()<br>
Output: [-1, -1, -1]
<h3>Explanation:</h3>
push1(2) the stack1 will be {2}<br>
push1(3) the stack1 will be {2,3}<br>
push1(4) the stack1 will be {2,3,4}<br>
pop2()   the stack2 is empty hence returned -1.<br>
pop2()   the stack2 is empty hence returned -1.<br>
pop2()   the stack2 is empty hence returned -1.<br>
<h3>Constraints:</h3>
1 <= number of queries <= 104<br>
1 <= number of elements in the stack <= 100<br>
The sum of the count of elements in both the stacks < size of the given array
