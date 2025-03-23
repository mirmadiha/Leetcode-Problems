class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int sizeOfShip=n*n;
        int totalWeight=w*sizeOfShip;
        if(totalWeight<=maxWeight){
            return sizeOfShip;
        }
        else{
            int output=maxWeight/w;
            return output;
        }
    }
};