<h1><a href="https://www.naukri.com/code360/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465?leftPanelTabValue=PROBLEM">Design a stack that supports getMin() in O(1) time and O(1) extra space</a></h1>

<h3>Problem statement</h3>
Create a stack data structure that allows operations such as push (adding an element), pop (removing the top element), top (retrieving the top element), and also provides a way to retrieve the minimum element in constant time.



<h3>Implement the following public functions :</h3>

1. push(data) :<br>
This function should take one argument of type integer. It pushes the element into the stack and returns nothing.<br>

2. pop() :<br>
It pops the element from the top of the stack and returns nothing.<br>

3. top() :<br>
It returns the element being kept at the top of the stack.<br>

4.  getMin() :<br>
It returns the smallest element present in the stack.<br>

<h3>Operations Performed on the Stack:</h3>
Query-1(Denoted by an integer 1): Pushes integer data to the stack. (push function)<br>

Query-2(Denoted by an integer 2): Pops the data kept at the top of the stack. (pop function)<br>

Query-3(Denoted by an integer 3): Fetches and returns the data being kept at the top of the stack. (top function)<br>

Query-4(Denoted by an integer 4): Returns the smallest element present in the stack. (getMin() function)<br>

<h3>Sample Input 1:</h3>
6<br>
1 13<br>
1 47<br>
3<br>
1 8<br>
2<br>
4<br>
<h3>Sample Output 1:</h3>
47<br>
13<br>
<h3>Explanation of Input 1:</h3>
Here we have six queries in total.<br>

Query 1: Integer 1 represents the push function. Hence we push element ‘13’ onto the stack.<br>

Query 2: Integer 1 represents the push function. Hence we push element ‘47’ onto the stack.<br>

Query 3: Integer 3 represents the top function. Hence we print the top element in stack i.e. '47'.<br>

Query 4: Integer 1 represents the push function. Hence we push element ‘8’ onto the stack.<br>

Query 5: Integer 2 represents the pop function. The stack contains element ‘8’ at the top. We remove/pop ‘8’ from the stack and we have 13, 47 left in stack.<br>

Query 6: Integer 4 represents the getMin function. Hence the min of current stack is '13'.<br>
<h3>Sample Input 2:</h3>
8<br>
1 45<br>
2<br>
1 53<br>
4<br>
1 46<br>
4<br>
2<Br>
4<br>
<h3>Sample Output 2:</h3>
53<br>
46<br>
53<br>
<h3>Constraints:</h3>
1 <= 'Q' <= 1000<br>
1 <= query type <= 4<br>
-10^9 <= data <= 10^9 and data != -1<br>

where 'Q' is the total number of queries being performed on the stack and 'data' represents the integer pushed into the stack.<br>

Operations like pop, top and getMin  will always be called on non-empty stacks.<br>

<h3>Time Limit:</h3> 1 sec
