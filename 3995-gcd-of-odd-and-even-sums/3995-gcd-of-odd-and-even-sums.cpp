class Solution {
public:

    int gcd(int a, int b){
        a=abs(a);
        b=abs(b);
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    
    int gcdOfOddEvenSums(int n) {
        int odd=0;
        int even=0;
        for(int i=1 ; i<=n;i++){
                even+=2*i;
        }

        for(int i=0 ; i<n;i++){
                odd+=2*i+1;
        }

        int result=gcd(even,odd);

        return result;
    }
};