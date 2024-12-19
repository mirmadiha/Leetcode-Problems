<h1>Flattening a Linked List</h1>

Given a Linked List, where every node represents a sub-linked-list and contains two pointers:<br>
(i) a next pointer to the next node,<br>
(ii) a bottom pointer to a linked list where this node is head.<br>
Each of the sub-linked lists is in sorted order.
Flatten the Link List so all the nodes appear in a single level while maintaining the sorted order.

<h3>Note:</h3> The flattened list will be printed using the bottom pointer instead of the next pointer. Look at the printList() function in the driver code for more clarity.

<h3>Examples:</h3>

<h3>Input:</h3><br>
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700192/Web/Other/blobid0_1722066129.png"/><br>

<h3>Output:</h3>  5-> 7-> 8- > 10 -> 19-> 20-> 22-> 28-> 30-> 35-> 40-> 45-> 50.
<h3>Explanation:</h3> The resultant linked lists has every node in a single level.(Note: | represents the bottom pointer.)
<h3>Input:</h3><br>
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700192/Web/Other/blobid1_1722066171.png"/><br>
 
<h3>Output: 5-> 7-> 8-> 10-> 19-> 22-> 28-> 30-> 50
<h3>Explanation:</h3> The resultant linked lists has every node in a single level.(Note: | represents the bottom pointer.)

<h3>Expected Time Complexity:</h3> O(n * n * m)
<h3>Expected Auxiliary Space:</h3> O(n)

<h3>Constraints:</h3>
0 <= number of nodes <= 50<br>
1 <= no. of nodes in sub-LinkesList(mi) <= 20<br>
1 <= node->data <= 103<br>
