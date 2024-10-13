class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=0;
        int end=num;
        int midPoint=start+(end-start)/2;
        while(start<=end){
            long long int square=(long long int)midPoint*midPoint;
            if(square==num){
                return true;
            }
            else if(square<num){
                start=midPoint+1;
            }
            else{
                end=midPoint-1;
            }
            midPoint=start+(end-start)/2;
        }
        return false;
    }
};