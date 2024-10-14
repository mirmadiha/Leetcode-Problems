class Solution {
public:
    bool isPalindrome(int x) {
        long long int newNum=0;
        int num=x;
        if(x<0){
            return false;
        }
        while(num!=0){
            int remainder=0;
            remainder=num%10;
            newNum=newNum*10+remainder;
            num=num/10;
        }
        if(x==newNum){
            return true;
        }
        return false;
    }
};