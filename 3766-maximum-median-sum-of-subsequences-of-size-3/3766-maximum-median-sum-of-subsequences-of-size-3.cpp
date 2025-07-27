class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        int length=nums.size();
        int right=length-1;
        long long median=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<length/3;i++){
            right--;
            median+=nums[right];
            right--;
        }
        return median;
    }
};