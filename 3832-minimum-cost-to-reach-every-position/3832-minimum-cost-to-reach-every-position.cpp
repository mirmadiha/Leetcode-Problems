class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int>answer(cost.size());
        answer[0]=cost[0];
        int min=cost[0];
        for(int i=1;i<cost.size();i++){
            if(cost[i]<min){
                min=cost[i];
                answer[i]=min;
            }
            else{
                answer[i]=min;
            }
        }
        return answer;
    }
};