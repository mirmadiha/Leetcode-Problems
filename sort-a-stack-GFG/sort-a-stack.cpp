class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        vector<int>num;
        while(!st.empty()){
            num.push_back(st.top());
            st.pop();
        }
        sort(num.begin(),num.end());
        for(int i=0;i<num.size();i++){
            st.push(num[i]);
        }
    }
};
