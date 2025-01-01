class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        int ans=0;
        long long int midPoint=start+(end-start)/2;
        while(start<=end){
            if(x==0){
                return 0;
            }
            if(x==1){
                return 1;
            }
            long long int sqrt=midPoint*midPoint;
            if(sqrt==x){
                return midPoint;
            }
            else if(sqrt<x){
                ans=midPoint;
                start=midPoint+1;
            }
            else{
                end=midPoint-1;
            }
            midPoint=start+(end-start)/2;
        }
        return ans;
    }
};