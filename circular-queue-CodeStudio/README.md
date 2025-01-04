<h1><a href="">Circular Queue</a></h1>
 
<h3>Problem statement</h3>
You will be given ‘Q’ queries. You need to implement a circular queue according to those queries. Each query will belong to one of these two types:<br>

1 ‘X’: Enqueue element ‘X’ into the end of the nth queue. Returns true if the element is enqueued, otherwise false.<br>

2: Dequeue the element at the front of the nth queue. Returns -1 if the queue is empty, otherwise, returns the dequeued element.<br>
Note:
Enqueue means adding an element to the end of the queue, while Dequeue means removing the element from the front of the queue.<br>

Constraints:
1 <= N <= 1000<br>
1 <= Q <= 10^5<br>
1 <= P <= 2<br>
1 <= X <= 10^5<br>

<h3>Time limit:</h3> 1 sec
<h3>Sample Input 1:</h3>
3 7<br>
1 2 <br>
1 3<br> 
2<br>
1 4<br>
1 6<br>
1 7<br>
2<br>
<h3>Sample Output 1:</h3>
True<br>
True<br>
2<br>
True<br>
True<br>
False<br>
3<br>
<h3>Explanation of Sample Output 1:</h3>
For this input, we have the size of the queue, 'N' = 3, and the number of queries, 'Q' = 7.<br>

Operations performed on the queue are as follows:<br>

push(2): Push element ‘2’ into the queue. This returns true.<br>
push(3): Push element ‘3’ into the queue. This returns true.<br>
pop(): Pop the top element from the queue. This returns 2.<br>
push(4): Push element ‘4’ into the queue. This returns true.<br>
push(6): Push element ‘6’ into the queue. This returns true.<br>
push(7): Push element ‘7’ into the queue. This returns false because the queue is full.<br>
pop(): Pop the top element from the queue. This returns 3.<br>
<h3>Sample Input 2:</h3>
4 7<br>
1 11 <br>
1 51 <br>
1 26 <br>
2 <br>
1 6<br>
2<br>
2 <br>
<h3>Sample Output 2:</h3>
True<br>
True<br>
True<br>
11<br>
True<br>
51<br>
26<br>
<h3>Explanation for Sample Output 2:</h3>
For this input, we have the size of the queue, 'N' = 3, and the number of queries, 'Q' = 7.<br>

Operations performed on the queue are as follows:<br>

push(11): Push element ‘11’ into the queue. This returns true.<br>
push(51): Push element ‘51’ into the queue. This returns true.<br>
push(26): Push element ‘26’ into the queue. This returns true.<br>
pop(): Pop the top element from the queue. This returns 11.<br>
push(6): Push element ‘6’ into the queue. This returns true.<br>
pop(): Pop the top element from the queue. This returns 51.<br>
pop(): Pop the top element from the queue. This returns 26.<br>
