class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        stack<int>st;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            st.push(x);
        }
        while(!st.empty()){
            int x=st.top();
            st.pop();
            q.push(x);
        }
        return q;
    }
};
