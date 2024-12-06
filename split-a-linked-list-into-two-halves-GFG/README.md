<h1>Split a Linked List into two halves</h1>

Given a Circular linked list. The task is split into two Circular Linked lists. If there are an odd number of nodes in the given circular linked list then out of the resulting two halved lists, the first list should have one node more than the second list.

<h3>Examples :</h3>

<h3>Input:</h3> LinkedList : 10->4->9
<h3>Output:</h3> 10->4 , 9
 
<h3>Explanation:</h3> After dividing linked list into 2 parts , the first part contains 10, 4 and second part contain only 9.
<h3>Input:</h3> LinkedList : 10->4->9->10
<h3>Output:</h3> 10->4 , 9->10
<h3>Explanation:</h3> After dividing linked list into 2 parts , the first part contains 10, 4 and second part contain 9, 10.
<h3>Expected Time Complexity:</h3> O(n)
<h3>Expected Auxilliary Space:</h3> O(1)

<h3>Constraints:</h3>
2 <= number of nodes <= 105<br>
1 <= node->data <= 103<br>
