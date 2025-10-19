class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        vector<int>nums;
        while(!st.empty()){
            nums.push_back(st.top());
            st.pop();
        }
        for(int i=0;i<nums.size();i++){
            swap(nums[i],nums[nums.size()-i-1]);
        }
        
        for(int i=0;i<nums.size();i++){
            st.push(nums[i]);
        }
    }
};
