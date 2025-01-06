<h1>Implement Deque</h1>

<h3>Problem statement</h3>
Design a data structure to implement deque of size ‘N’. It should support the following operations:<br>

pushFront(X): Inserts an element X in the front of the deque. Returns true if the element is inserted, otherwise false.<br>

pushRear(X): Inserts an element X in the back of the deque. Returns true if the element is inserted, otherwise false.<br>

popFront(): Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.<br>

popRear(): Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.<br>

getFront(): Returns the first element of the deque. If the deque is empty, it returns -1.<br>

getRear(): Returns the last element of the deque. If the deque is empty, it returns -1.<br>

isEmpty(): Returns true if the deque is empty, otherwise false.<br>

isFull(): Returns true if the deque is full, otherwise false.<br><br>
Following types of queries denote these operations:<br>

Type 1: for pushFront(X) operation.<br>
Type 2: for pushRear(X) operation.<br>
Type 3: for popFront() operation.<br>
Type 4: for popRear() operation.<br>
Type 5: for getFront() operation.<br>
Type 6: for getRear() operation.<br>
Type 7: for isEmpty() operation.<br>
Type 8: for isFull() operation.<br>

<h3>Constraints:</h3>
1 <= N <= 1000<br>
1 <= Q <= 10^5 <br>
1 <= P <= 8<br>
1 <= X <= 10^5<br>

<h3>Time Limit:</h3> 1 sec<br>

Where ‘N’ represents the size of the deque, ‘Q’ represents the number of queries, ‘P’ represents the type of operation and ‘X’ represents the element.<br>
<h3>Sample Input 1:</h3><br>
5 7<br>
7<br>
1 10<br>
1 20<br>
2 30<br>
5<br>
4<br>
4<br>
<h3>Sample Output 1:</h3>
True <br>
True <br>
True<br>
True<br>
20<br>
30<br>
10<br>
<h3>Explanation 1:</h3>
For the given input, we have the number of queries, Q = 7.<br>
Operations performed on the deque are as follows:<br>

isEmpty(): Deque is initially empty. So, this returns true.<br>
pushFront(10): Insert the element ‘10’ in the front of the deque. This returns true.<br>
pushFront(20): Insert the element ‘20’ in the front of the deque. This returns true.<br>
pushRear(30): Insert the element ‘30’ in the back of the deque. This returns true.<br>
getFront(): Returns the front element of the deque i.e. 20<br>
popRear(): Pop an element from the back of the deque. This returns 30.<br>
popRear(): Pop an element from the back of the deque. This returns 10.<br>

The following image shows the snapshots of the deque after each operation:<br>

<h3>Sample Input 2</h3>:<br>
2 5<br>
1 15<br>
2 25<br>
1 20<br>
8<br>
6<br>
<h3>Sample Output 2:</h3><br>
True<br>
True<br>
False<br>
True<br>
25<br>
