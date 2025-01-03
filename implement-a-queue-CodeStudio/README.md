<h1><a href="https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTabValue=PROBLEM">Implement a Queue</a></h1>

<h3>Problem statement</h3>
Implement a Queue Data Structure specifically to store integer data using a Singly Linked List or an array.

You need to implement the following public functions :<br>

1. Constructor: It initializes the data members as required.<br>

2. enqueue(data): This function should take one argument of type integer. It enqueues the element into the queue.<br>

3. dequeue(): It dequeues/removes the element from the front of the queue and in turn, returns the element being dequeued or removed. In case the queue is empty, it returns -1.<br>

4. front(): It returns the element being kept at the front of the queue. In case the queue is empty, it returns -1.<br>

5. isEmpty(): It returns a boolean value indicating whether the queue is empty or not.<br>
<h3>Operations Performed on the Queue :</h3>
Query-1(Denoted by an integer 1): Enqueues integer data to the queue.<br>

Query-2(Denoted by an integer 2): Dequeues the data kept at the front of the queue and returns it to the caller, return -1 if no element is present in the queue.<br>

Query-3(Denoted by an integer 3): Fetches and returns the data being kept at the front of the queue but doesn't remove it, unlike the dequeue function, return -1 if no element is present in the queue.<br>

Query-4(Denoted by an integer 4): Returns a boolean value denoting whether the queue is empty or not.<br>

<h3>Constraints :</h3>
1 <= t <= 5<br>
1 <= q <= 5000<br>
1 <= x <= 4<br>
1 <= data <= 2^31 - 1<br>

<h3>Time Limit:</h3> 1 sec
<h3>Sample Input 1 :</h3>
1<br>
7<br>
1 17<br>
1 23<br>
1 11<br>
2<br>
2<br>
2<br>
2<br>
<h3>Sample Output 1 :</h3>
17<br>
23<br>
11<br>
-1<br>
<h3>Explanation for Sample Output 1 :</h3>
The first three queries are of enQueue, so we will push 17, 23, and 11 into the queue.<br>

The next four queries are of deQueue, so we will starting removing elements from the queue, so the first element will be 17, then 23, and then 11. And after the third dequeue query, the queue is now empty so for the fourth query, we will return -1.<br>
<h3>Sample Input 2 :</h3>
1<br>
3<br>
2<br>
1 10<br>
3<br>
<h3>Sample Output 2 :</h3>
-1 <br>
10<br>
