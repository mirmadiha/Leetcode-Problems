class Solution {
  public:
    void solveStack(stack<int>& s,int count,int n){
        int mid=(n/2);
        if(count==mid){
            s.pop();
            return ;
        }
        
        int num=s.top();
        s.pop();
        
        solveStack(s,count+1,n);
        
        s.push(num);
        
    }
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        int count=0;
        int n=s.size();
        solveStack(s,count,n);
    }
};
