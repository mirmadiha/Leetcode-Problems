class Solution {
public:

  bool checkPower(int n ,unsigned long long num){
    if(num==n){
        return true;
    }
    if(num>n || n<=0){
        return false;
    }
    num*=2;
    return checkPower(n,num);
  }
    bool isPowerOfTwo(int n) {
        return checkPower(n,1);
    }
};