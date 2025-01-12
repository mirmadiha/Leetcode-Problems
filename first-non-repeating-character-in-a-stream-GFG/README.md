# [Stream First Non-repeating](https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1)

---

### Problem Statement:

Given an input stream `s` consisting only of lowercase alphabets, determine the first non-repeating character in the stream up to each character's position. If no non-repeating character exists at any point, append `#` to the result.

### Note:
1. For every index `i` (0 <= i < n), consider the string from the starting position up to `i`.
2. The first non-repeating character is determined by its order of appearance in the stream.

---

### Examples:

#### Example 1:
**Input:**  
`s = "aabc"`

**Output:**  
`"a#bb"`

**Explanation:**  
- For `i = 0`: Substring = `"a"`, first non-repeating = `"a"`  
- For `i = 1`: Substring = `"aa"`, no non-repeating = `"#"`  
- For `i = 2`: Substring = `"aab"`, first non-repeating = `"b"`  
- For `i = 3`: Substring = `"aabc"`, first non-repeating = `"b"`  

**Final Output:** `"a#bb"`

---

#### Example 2:
**Input:**  
`s = "zz"`

**Output:**  
`"z#"`

**Explanation:**  
- For `i = 0`: Substring = `"z"`, first non-repeating = `"z"`  
- For `i = 1`: Substring = `"zz"`, no non-repeating = `"#"`  

**Final Output:** `"z#"`

---

#### Example 3:
**Input:**  
`s = "bb"`

**Output:**  
`"b#"`

**Explanation:**  
- For `i = 0`: Substring = `"b"`, first non-repeating = `"b"`  
- For `i = 1`: Substring = `"bb"`, no non-repeating = `"#"`  

**Final Output:** `"b#"`

---

### Constraints:
- `1 <= s.size() <= 10^5`
- `'a' <= s[i] <= 'z'`

---

### Approach:
1. **Data Structures:** Use a queue to maintain the order of characters and a hash map (or array) to track the frequency of each character.
2. **Algorithm:**
   - Iterate through the input string.
   - For each character:
     - Increment its frequency in the hash map.
     - Push it into the queue if it's the first occurrence.
     - Remove characters from the front of the queue if their frequency is greater than 1.
     - Append the front of the queue to the result string if it's not empty, otherwise append `#`.
3. **Time Complexity:**
   - Processing each character takes O(1) (amortized due to queue operations).
   - Overall complexity is O(n), where `n` is the size of the string.

---

### Example Walkthrough:

#### Input: `s = "aabc"`
- **Step 1:** Add `a`. Queue: `[a]`. Output: `"a"`
- **Step 2:** Add `a`. Queue: `[]`. Output: `"a#"`
- **Step 3:** Add `b`. Queue: `[b]`. Output: `"a#b"`
- **Step 4:** Add `c`. Queue: `[b, c]`. Output: `"a#bb"`

**Final Output:** `"a#bb"`

---

### Edge Cases:
1. **All Repeating Characters:**
   - Input: `"aaaa"`
   - Output: `"a###"`

2. **Single Character Input:**
   - Input: `"z"`
   - Output: `"z"`

3. **Mixed Characters:**
   - Input: `"abacabad"`
   - Output: `"aabbcbdd"`

---

### Key Points:
- Efficient solution with O(n) complexity.
- Handles edge cases like all repeating or single-character strings.
- Uses queue for order and hash map for frequency tracking.

---

### Additional Notes:
- The solution can be extended to handle uppercase characters by modifying constraints.
- Ensure memory optimization for larger inputs by using appropriate data structures.


