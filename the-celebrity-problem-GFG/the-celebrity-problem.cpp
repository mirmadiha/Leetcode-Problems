// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        stack<int>st;
        int n=mat.size();
        int A;
        int B;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        while(st.size()!=1){
            A=st.top();
            st.pop();
            B=st.top();
            st.pop();
            if(mat[A][B]==1){
                st.push(B);
            }
            else{
                st.push(A);
            }
        }
        int ans=st.top();
        
        for(int i=0;i<n;i++){
             if(ans==i){
                continue;
             }
             
             if(mat[ans][i]==1 || mat[i][ans]==0){
                 return -1;
             }
        }
        return ans;
    }
};
