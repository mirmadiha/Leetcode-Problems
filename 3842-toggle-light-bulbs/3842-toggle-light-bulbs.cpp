class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int>light;
        vector<int>result;
        int freq=0;
        for(int num: bulbs){
            light[num]++;
        }
        for(auto pair:light){
            if(pair.second%2!=0){
               result.push_back(pair.first); 
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};