<h1>String Permutations</h1>

Given a string S. The task is to find all permutations (need not be different) of a given string.

<h3>Note:</h3> return the permutations in lexicographically increasing order.

<h3>Example 1:</h3>

<h3>Input:</h3>
S = AAA
<h3>Output:</h3> AAA AAA AAA AAA AAA AAA
<h3>Explanation:</h3> There are total 6 permutations, as given in the output.
<h3>Example 2:</h3>

<h3>Input:</h3>
S = ABSG
<h3>Output:</h3> ABGS ABSG AGBS AGSB ASBG ASGB
BAGS BASG BGAS BGSA BSAG BSGA GABS
GASB GBAS GBSA GSAB GSBA SABG SAGB
SBAG SBGA SGAB SGBA
<h3>Explanation:</h3> There are total 24 permutations, as given in the output.
<h3>Your Task:</h3>
This is a function problem. You only need to complete the function permutation that takes S as parameter and returns the list of permutations in lexicographically increasing order. The newline is automatically added by driver code.

<h3>Constraints:</h3>
1 ≤ size of string ≤ 5

<h3>Expected Time Complexity:</h3> O(N * N!), N = length of string.
<h3>Expected Auxiliary Space:</h3> O(N!)

