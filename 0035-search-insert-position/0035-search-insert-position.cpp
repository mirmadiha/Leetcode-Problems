class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int midPoint=start+(end-start)/2;
        int result;
        while(start<=end){
            if(target==nums[midPoint]){
                return midPoint;
            }
            else if(target<nums[midPoint]){
                end=midPoint-1;
            }
            else{
                start=midPoint+1;
            }
            midPoint=start+(end-start)/2;
        }
        return start;
    }
};