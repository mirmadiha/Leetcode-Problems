class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int>ans(n);
        stack<int>st;
        for(int i=n-1; i>=0 ;i--){
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            
            if(st.empty()) {
                ans[i]=-1;
            }
            else{
                ans[i]=st.top();
            }
            
            st.push(arr[i]);
        }
        return ans;
    } 
};
