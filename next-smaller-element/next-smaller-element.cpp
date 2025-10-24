class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int n=arr.size();
        vector<int>num(n,-1);
        stack<int>st;
        st.push(-1);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            num[i]=st.top();
            st.push(arr[i]);
        
        }
        return num;
    }
};
