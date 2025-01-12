class Solution {
  public:
    int circularTour(vector<int>& a1, vector<int>& a2) {
        queue<int>q;
        int size=a1.size();
        int gas_Sum=0;
        int cost_Sum=0;
        int startingIndex=0;
        int currentGas=0;
        for (int i=0;i<size;i++){
            gas_Sum+=a1[i];
            cost_Sum+=a2[i];
        }
        if((gas_Sum - cost_Sum)<0){
            return -1;
        }
        for(int i=0;i<size;++i){
           currentGas+=a1[i]-a2[i];
           q.push(i);
           while(currentGas<0 && !q.empty()){
               int front=q.front();
               q.pop();
               currentGas-=a1[front]-a2[front];
               if(q.empty()){
                   startingIndex=front+1;
               }
               
           }
           
           
        }
        return startingIndex;
    }
};
