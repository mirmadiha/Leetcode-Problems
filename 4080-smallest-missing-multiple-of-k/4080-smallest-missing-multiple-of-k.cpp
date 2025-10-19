class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s(nums.begin(), nums.end()); 
        int missingNum=k;
        while(true){
        if(s.find(missingNum)==s.end()){
            return missingNum;
        }
            missingNum+=k;
        }
    }
};