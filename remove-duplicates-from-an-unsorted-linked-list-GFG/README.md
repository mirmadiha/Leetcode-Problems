<h1>Remove duplicates from an unsorted linked list</h1>

Given an unsorted linked list. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all other duplicates are to be removed.

<h3>Examples:</h3>

<h3>Input:</h3> LinkedList: 5->2->2->4
<h3>Output:</h3> 5->2->4
<h3>Explanation:</h3> Given linked list elements are 5->2->2->4, in which 2 is repeated only. So, we will delete the extra repeated elements 2 from the linked list and the resultant linked list will contain 5->2->4
 
<h3>Input:</h3> LinkedList: 2->2->2->2->2
<h3>Output:</h3> 2
<h3>Explanation:</h3>Given linked list elements are 2->2->2->2->2, in which 2 is repeated. So, we will delete the extra repeated elements 2 from the linked list and the resultant linked list will contain only 2.
<h3>Expected Time Complexity:</h3> O(n)
<h3>Expected Space Complexity:</h3> O(n)

<h3>Constraints:</h3>
1 <= number of nodes <= 106<br>
0 <= node->data <= 106<br>
