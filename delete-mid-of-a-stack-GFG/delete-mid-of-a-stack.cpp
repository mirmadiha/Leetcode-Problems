class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        stack<int>st;
        int midIndex=(s.size()+1)/2;
        int iterations=(s.size()-midIndex);
        for(int i=0;i<iterations;i++){
            st.push(s.top());
            s.pop();
        }
        s.pop();
        while(!st.empty()){
            s.push(st.top());
            st.pop();
        }
    }
};
