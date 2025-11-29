class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx = 0;  // avoid using keyword 'max'
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                if (count > maxx) {
                    maxx = count;
                }
                count = 0; // reset after updating
            }
        }

        // check again in case array ends with 1s
        if (count > maxx) {
            maxx = count;
        }

        return maxx;  
    }
};