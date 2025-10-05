class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int altSum =0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(i%2==0){
                altSum+=nums[i];
            }
            else{
                altSum-=nums[i];
            }
        }
        return altSum;
    }
};