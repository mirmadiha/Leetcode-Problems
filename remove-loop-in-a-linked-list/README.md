<h1>Remove loop in Linked List</h1>
<br>
Given the head of a linked list that may contain a loop.  A loop means that the last node of the linked list is connected back to a node in the same list.  So if the next of the previous node is null. then there is no loop.  Remove the loop from the linked list, if it is present (we mainly need to make the next of the last node null). Otherwise, keep the linked list as it is.

<h3>Note:</h3> Given an integer, pos (1 based index)  Position of the node to which the last node links back if there is a loop. If the linked list does not have any loop, then pos = 0.

The generated output will be true if your submitted code is correct, otherwise, false.

<h3>Examples:</h3><br>

<h3>Input:</h3> Linked list: 1->3->4, pos = 2
<h3>Output:</h3> true

<h3>Input:</h3> Linked list: 1->8->3->4, pos = 0
<h3>Output:</h3> true

<h3>Input:</h3> Linked list: 1->2->3->4, pos = 1
<h3>Output:</h3> true

<h3>Expected Time Complexity:</h3> O(n)
<h3>Expected Space Complexity:</h3> O(1)

<h3>Constraints:</h3>
1 ≤ size of linked list ≤ 105
