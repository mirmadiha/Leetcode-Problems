class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            int start=max(0,i-nums[i]);
            for(int j=start;j<=i;j++){
                sum+=nums[j];
            }
        }
        return sum;
    }
};