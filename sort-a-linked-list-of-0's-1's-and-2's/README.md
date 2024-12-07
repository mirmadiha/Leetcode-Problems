<h1>Sort a linked list of 0s, 1s and 2s</h1>

Given a linked list where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to the head side, 2s at the end of the linked list, and 1s in the middle of 0s and 2s.

<h3>Examples:</h3>

<h3>Input:</h3> LinkedList: 1->2->2->1->2->0->2->2
<h3>Output:</h3> 0->1->1->2->2->2->2->2
<h3>Explanation:</h3> All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between.
 
<h3>Input:</h3> LinkedList: 2->2->0->1
<h3>Output:</h3> 0->1->2->2
<h3>Explanation:</h3> After arranging all the 0s,1s and 2s in the given format, the output will be 0 1 2 2.

<h3>Expected Time Complexity:</h3> O(n).
<h3>Expected Auxiliary Space:</h3> O(n).

<h3>Constraints:</h3>
1 <= no. of nodes <= 106<br>
0 <= node->data <= 2
