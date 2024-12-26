int countRev (string s)
{
    // your code here
    if(s.length()%2!=0){
        return -1;
    }
    stack<char>st;
     
    for(int i=0;i<s.length();i++){
        
        if(s[i]=='{'){
            st.push(s[i]);
        }
        
        else{
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    
    if(st.empty()){
        return 0;
    }
    
    int open=0;
    int close=0;
    while(!st.empty()){
        if(st.top()=='{'){
            open++;
        }
        else{
            close++;
        }
        st.pop();
    }
    
    return (open+1)/2 + (close+1)/2;
}
