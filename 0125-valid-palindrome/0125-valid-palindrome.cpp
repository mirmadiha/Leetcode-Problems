class Solution {
public:
    bool reverseFun(string &s, int i,int j){
        if(i>=j){
            return true;
        }
        if(s[i]!=s[j]){
            return false;
        }
        return reverseFun(s,i+1,j-1);
    }

    bool isPalindrome(string s) {
        string st;
        for(char c:s){
            if(isalnum(c))
            st+=tolower(c);
        }
        int n=st.length();
        int i=0;
        int j=n-1;
         
        return reverseFun(st,i,j);
    }
};