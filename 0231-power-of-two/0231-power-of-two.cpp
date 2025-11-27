class Solution {
public:

  bool checkPower(int n , int i ,unsigned long long num){
    if(num==n){
        return true;
    }
    if(n==1){
        return true;
    }
    if(i>n/2){
        return false;
    }
    num*=2;
    return checkPower(n,i+1,num);
  }
    bool isPowerOfTwo(int n) {
        return checkPower(n,1,1);
    }
};