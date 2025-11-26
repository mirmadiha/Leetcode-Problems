class Solution {
public:
    void subsequences(vector<int>& nums,int index,vector<int>arr,vector<vector<int>>&subsetArray){
        int n=nums.size();
        if(index>=n){
            subsetArray.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        subsequences(nums,index+1,arr,subsetArray);
        arr.pop_back();
        subsequences(nums,index+1,arr,subsetArray);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<vector<int>>subsetArray;
        vector<int>arr;
        subsequences(nums,index,arr,subsetArray);
        return subsetArray;
    }
};