class Solution {
public:
    int minLengthAfterRemovals(string s) {
        string s2 = s;

        int a = 0;
        int b = 0;

        for (char c : s2) {
            if (c == 'a') a++;
            else b++;
        }

        return abs(a - b);
    }
};