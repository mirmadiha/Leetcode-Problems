class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int midpoint = start + (end - start) / 2;
            
            if (midpoint % 2 == 1) {
                midpoint--;  
            }
            
            if (nums[midpoint] == nums[midpoint + 1]) {
                start = midpoint + 2;
            } else {
                end = midpoint;
            }
        }

        return nums[start];  
}
};