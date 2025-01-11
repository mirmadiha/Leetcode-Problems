class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int>st;
        int size=q.size();
        for(int i=0;i<k;i++){
            int x=q.front();
            q.pop();
            st.push(x);
        }
        
        while(!st.empty()){
            int y=st.top();
            st.pop();
            q.push(y);
        }
        
        for(int i=0;i<size-k;i++){
            int z=q.front();
            q.pop();
            q.push(z);
        }
        return q;
    }
};
