class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }

        int maxi=0;
        for(auto p:freq){
            maxi=max(maxi,p.second);
        }

        int total=0;
        for(auto p:freq){
            if(p.second==maxi){
                total++;
            }
        }
        return total*maxi;

    }
};