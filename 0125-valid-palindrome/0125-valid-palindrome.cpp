class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(char c:s){
            if(isalnum(c))
            st+=tolower(c);
        }
        int n=st.length();
        int i=0;
        int j=n-1;

        while(i<=j){
            if(st[i]==st[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};