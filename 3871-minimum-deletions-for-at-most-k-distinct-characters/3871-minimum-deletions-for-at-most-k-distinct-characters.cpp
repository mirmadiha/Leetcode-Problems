class Solution {
public:
    int minDeletion(string s, int k) {
        stack<char>st;
        map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        vector<int>freqValues;
        for(auto &pair:freq){
            freqValues.push_back(pair.second);
            st.push(pair.first);
        }
        sort(freqValues.begin(),freqValues.end());
    
        int deletion=0;
        if(st.size()<=k){
            return 0;
        }
        else{
            int diff=st.size()-k;
            for(int i=0;i<diff;i++){
                deletion+=freqValues[i];
            }

            return deletion;
        }
    }
};