class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        int sumDigit=0;
        int num=n;
        vector<int>rep;
        long long int mult=1;
        while(num!=0){
            int digit=num%10;
            int place=digit*mult;
            mult=mult*10;
            num=num/10;
            if(digit==0)continue;
            rep.push_back(place);
        }

        reverse(rep.begin(), rep.end());
        return rep;
        
    }
};