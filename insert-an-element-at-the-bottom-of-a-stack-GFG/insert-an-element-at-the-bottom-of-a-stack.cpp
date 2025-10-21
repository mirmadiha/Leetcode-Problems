// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        int n=st.size();
        int arr[n];
        for(int i=n-1;i>=0;i--){
            arr[i]=st.top();
            st.pop();
        }
        st.push(x);
        for(int i=0;i<n;i++){
            st.push(arr[i]);
        }
        return st;
    }
};
