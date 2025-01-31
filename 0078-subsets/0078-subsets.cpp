class Solution {
public:

    void formSubsets(vector<int>& nums ,vector<int>& ans, int i,vector<vector<int>>&result){
        int size=nums.size();
        if(i==size){
            result.push_back(ans);
            return ;
        }

        ans.push_back(nums[i]);
        formSubsets(nums,ans,i+1,result);

        ans.pop_back();
        formSubsets(nums,ans,i+1,result);

    }     

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>result;
        formSubsets(nums,ans,0,result);
        return result;
    }
};