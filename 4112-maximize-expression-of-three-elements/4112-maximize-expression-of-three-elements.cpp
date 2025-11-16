class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        if (nums.size() < 3) return 0;

        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int min1 = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];

            if (x > max1) {
                max2 = max1;
                max1 = x;
            }
            else if (x > max2) {
                max2 = x;
            }

            if (x < min1) {
                min1 = x;
            }
        }

        return max1 + max2 - min1;
    }
};