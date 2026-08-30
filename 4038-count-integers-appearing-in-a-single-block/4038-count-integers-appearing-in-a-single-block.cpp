class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, int> groups;

        for(int i=0;i<nums.size();i++){
            if(i==0 || nums[i]!=nums[i-1]){
                groups[nums[i]]++;
            }
        }

        int count = 0 ;

        for(auto& [num, groupCount]: groups){
            if(groupCount == 1){
                count++;
            }
        }
        return count ;
    }
};