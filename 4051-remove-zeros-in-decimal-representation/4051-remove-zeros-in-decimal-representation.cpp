class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string result="";
        for(char c:s){
            if(c!='0'){
                result+=c;
            }
        }
        return stoll(result);
    }
};