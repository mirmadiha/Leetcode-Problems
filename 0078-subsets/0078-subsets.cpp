class Solution {
    void getSubsets(vector<int>nums,int index,vector<int>output,vector<vector<int>> &ans){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }

        getSubsets(nums,index+1,output,ans);

        int element=nums[index];
        output.push_back(element);
        getSubsets(nums,index+1,output,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        int index=0;
        getSubsets(nums,index,output,ans);
        return ans;
    }
};