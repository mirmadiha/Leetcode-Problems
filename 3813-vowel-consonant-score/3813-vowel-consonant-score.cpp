class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0;
        int c=0;
        for(int x=0;x<s.length();x++){
            if(s[x]=='a'|| s[x]=='e'|| s[x]=='i'|| s[x]=='o'|| s[x]=='u'){
                v++;
            }
            else if(s[x]>'a' && s[x]<='z'){
                c++;
            }
        }
        if(c==0){
            return 0;
        }
        int score=floor(v/c);
        return score;
    }
};