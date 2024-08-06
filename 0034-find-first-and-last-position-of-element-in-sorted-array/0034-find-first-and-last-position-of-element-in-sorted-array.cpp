class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int start=0;
        int end=nums.size()-1;
        int midPoint=start+(end-start)/2;
        while(start<=end){
            if(nums[midPoint]==target){
                ans[0]=midPoint;
                end=midPoint-1;
            }
            else if(nums[midPoint]>target){
                end=midPoint-1;
            }
            else{
                start=midPoint+1;
            }
            midPoint=start+(end-start)/2;
        }


        start=0;
        end=nums.size()-1;
        midPoint=start+(end-start)/2;
        while(start<=end){
            if(nums[midPoint]==target){
                ans[1]=midPoint;
                start=midPoint+1;
            }
            else if(nums[midPoint]>target){
                end=midPoint-1;
            }
            else{
                start=midPoint+1;
            }
            midPoint=start+(end-start)/2;
        }
        return ans;
    }
};