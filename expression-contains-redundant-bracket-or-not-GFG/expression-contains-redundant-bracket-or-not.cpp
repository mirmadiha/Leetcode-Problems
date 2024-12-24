class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if (s[i] == ')') {
            bool foundOperator = false;
                while(!st.empty() && st.top()!='('){
                    if(st.top()=='+' ||
                       st.top()=='-' ||
                       st.top()=='*' ||
                       st.top()=='/') 
                    {
                       
                       foundOperator=true;
                    }
                    st.pop();
                }
        
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                if(!foundOperator){
                    return 1;
                }
            }
            else{
                st.push(s[i]);
                }
        }
        return 0;
    }
};
