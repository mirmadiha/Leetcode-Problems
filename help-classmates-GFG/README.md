<h1><a href="https://www.geeksforgeeks.org/problems/help-classmates--141631/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Help Classmates</a></h1>

Professor X wants his students to help each other in the chemistry lab. He suggests that every student should help out a classmate who scored less marks than him in chemistry and whose roll number appears after him. But the students are lazy and they don't want to search too far. They each pick the first roll number after them that fits the criteria. Find the marks of the classmate that each student picks.
Note: one student may be selected by multiple classmates.

<h3>Example 1:</h3>

<h3>Input:</h3> N = 5, arr[] = {3, 8, 5, 2, 25}
<h3>Output:</h3> 2 5 2 -1 -1
<h3>Explanation: </h3>
1. Roll number 1 has 3 marks. The first person 
who has less marks than him is roll number 4, 
who has 2 marks.<br>
2. Roll number 2 has 8 marks, he helps student 
with 5 marks.<br>
3. Roll number 3 has 5 marks, he helps student 
with 2 marks.<br>
4. Roll number 4 and 5 can not pick anyone as 
no student with higher roll number has lesser 
marks than them. This is denoted by -1.<br>
Output shows the marks of the weaker student that 
each roll number helps in order. ie- 2,5,2,-1,-1

<h3>Example 2:</h3>

<h3>Input:</h3> N = 4, a[] = {1, 2, 3, 4}
<h3>Output:</h3> -1 -1 -1 -1 
<h3>Explanation:</h3> As the marks ars in increasing order. 
None of the students can find a classmate who has 
a higher roll number and less marks than them.
<h3>Your Task: </h3> 
You don't need to read input or print anything. Complete the function help_classmate() which takes the array arr[] and size of array N as input parameters and returns a list of numbers. If a student is unable to find anyone then output is -1.

<h3>Expected Time Complexity:</h3> O(N)
<h3>Expected Auxiliary Space:</h3> O(N)

<h3>Constraints:</h3>
1 ≤ N ≤ 5*105
