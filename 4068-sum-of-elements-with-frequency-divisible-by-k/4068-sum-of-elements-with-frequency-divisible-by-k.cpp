class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum = 0;
        vector<int> visited(nums.size(), 0);
        
        for (int i = 0; i < nums.size(); i++) {
            if (visited[i]) continue; 
            
            int freq = 0;
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] == nums[i]) {
                    freq++;
                    visited[j] = 1; 
                }
            }
            
            if (freq % k == 0) {
                sum += freq * nums[i];
            }
        }
        return sum;
    }
};