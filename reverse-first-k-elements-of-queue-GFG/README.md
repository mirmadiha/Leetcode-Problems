<h1><a href="https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1">Reverse First K elements of Queue</a></h1>

Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

Only following standard operations are allowed on queue.<br>

enqueue(x) : Add an item x to rear of queue<br>
dequeue() : Remove an item from front of queue<br>
size() : Returns number of elements in queue.<br>
front() : Finds front item.<br>
Note: The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.<br>

<h3>Example 1:</h3>

<h3>Input:</h3>
5 3<br>
1 2 3 4 5<br>
<h3>Output:</h3> 
3 2 1 4 5<br>
<h3>Explanation:</h3> 
After reversing the given<br>
input from the 3rd position the resultant<br>
output will be 3 2 1 4 5.<br>
<h3>Example 2:</h3>

<h3>Input:</h3>
4 4<br>
4 3 2 1<br>
<h3>Output:</h3> 
1 2 3 4<br>
<h3>Explanation:</h3> 
After reversing the given
input from the 4th position the resultant
output will be 1 2 3 4.
<h3>Your Task:</h3>
Complete the provided function modifyQueue() that takes queue and K as parameters and returns a modified queue. The printing is done automatically by the driver code.

<h3>Expected Time Complexity :</h3> O(N)<br>
<h3>Expected Auxiliary Space :</h3> O(K)<br>

<h3>Constraints:</h3>
1 <= K <= N <= 105<br>
