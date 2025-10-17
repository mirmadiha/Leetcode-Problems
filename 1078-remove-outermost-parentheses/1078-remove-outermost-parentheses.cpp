class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string validParanthesis;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(count>0) {
                    validParanthesis+=s[i];
                }
                count++;
            }
            else if(s[i]==')'){
                if(count>1){
                    validParanthesis +=s[i];
                } 
                count--;
            }
        }
        return validParanthesis;
    }
};