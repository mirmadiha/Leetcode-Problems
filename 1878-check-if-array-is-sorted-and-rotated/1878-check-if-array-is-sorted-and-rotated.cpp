class Solution {
public:
    bool check(vector<int>& nums) {
        int pivotCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                pivotCount++;
            }
        }
        return pivotCount<=1;
    }
};