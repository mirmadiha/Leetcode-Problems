class Solution {
    char isLowercase(char ch){
        char temp;
        if(ch>='a'&&ch<='z' || ch>='0'&&ch<='9'){
            return ch;
        }
        else{
            temp=ch-'A'+'a';
            return temp;
        }
    }
    bool isValid(char ch){
        if(ch>='a'&&ch<='z' || ch>='A'&&ch<='Z' || ch>='0'&&ch<='9'){
            return 1;
        }
        else{
            return 0;
        }
    }
    bool checkPalindrone(string temp){
        int m=0;
        int n=temp.length()-1;
        while(m<=n){
            if(temp[m]==temp[n]){
                m++;
                n--;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string temp;
        int i=0;
        int j=0;
        while(j<s.length()){
            if(isValid(s[j])){
                temp.push_back(isLowercase(s[j]));
                j++;
            }
            else{
                j++;
            }
        }
        return checkPalindrone(temp);
    }
};