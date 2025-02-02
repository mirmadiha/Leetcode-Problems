class Solution {
public:
    int maxDifference(string s) {
        int freq[26]={0};
        for(int i=0;i<s.length();i++){
            char c=s[i];
            int index=c - 'a';
            freq[index]++;
        }

        int maxOdd=0;
        int minEven=INT_MAX;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                if(freq[i]%2==0){
                    minEven=min(freq[i],minEven);
                    
                }
                else{
                   maxOdd=max(freq[i],maxOdd); 
                }
            }
        }
        int answer = maxOdd-minEven;
        return answer;
    }
};