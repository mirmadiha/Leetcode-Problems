<h1>N Stacks In An Array</h1>

<h3>Problem statement</h3>
Design a data structure to implement ‘N’ stacks using a single array of size ‘S’. It should support the following operations:

<h3>push(X, M):</h3> Pushes an element X into the Mth stack. Returns true if the element is pushed into the stack, otherwise false.

<h3>pop(M):</h3> Pops the top element from Mth Stack. Returns -1 if the stack is empty, otherwise, returns the popped element.
Two types of queries denote these operations :

<h3>Type 1:</h3> for push(X, M) operation.
<h3>Type 2:</h3> for pop(M) operation.
<h3>Constraints :</h3>
1 <= N <= S <= 1000<br>
1 <= Q <= 10^5<br> 
1 <= P <= 2<br>
1 <= X <= 10^5<br>

<h3>Time Limit:</h3> 1 sec

Where ‘S’ represents the size of the array, ‘N’ represents the number of stacks, ‘Q’ represents the number of queries, ‘P’ represents the type of operation and ‘X’ represents the element.
<h3>Sample Input 1 :</h3>
3 6 5<br>
1 10 1<br>
1 20 1<br>
1 30 2<br>
2 1<br>
2 2<br>
<h3>Sample Output 1 :</h3>
True <br>
True<br>
True<br>
20<br>
30<br>
<h3>Explanation 1 :</h3>
For the given input, we have the number of stacks, N = 3, size of the array, S = 6 and number of queries, Q = 5.
Operations performed on the stack are as follows:
push(10, 1): Push element ‘10’ into the 1st stack. This returns true.
push(20, 1): Push element ‘20’ into the 1st stack. This returns true.
push(30, 2): Push element ‘30’ into the 2nd stack. This returns true.
pop(1): Pop the top element from the 1st stack. This returns 20.
pop(2): Pop the top element from the 2nd stack. This returns 30.

<h3>Sample Input 2 :</h3>
1 5 5<br>
1 15 1<br>
1 25 1<br>
2 1<br>
1 30 1<br>
2 1<br>
<h3>Sample Output 2 :</h3>
True<br>
True<br>
25<br>
True<br>
30<br>
