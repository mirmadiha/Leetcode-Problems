class Solution {
public:
    int maxProduct(int n) {
        vector<int>num;
        int digit=n;

        while(digit!=0){
            num.push_back(digit%10);
            digit=digit/10;
        }

        int maxi1=0;
        int maxi2=0;
        if(num.size()==2){
            return num[0]*num[1];
        }
        else{
            for(int i=0;i<num.size();i++){
                if(num[i]>maxi1){
                    maxi2=maxi1;
                    maxi1=num[i];
                }
                else if(num[i]>maxi2){
                        maxi2=num[i];
                }
            }
           
        }
        return maxi1*maxi2;
    }
};