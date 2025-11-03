class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
         vector<int>ans;
        ans.push_back(cost[0]);
        int val = cost[0];
        for(int i=1;i<cost.size();i++)
        {
            if(val<cost[i])
            {
                ans.push_back(val);
            }
            else
            {
                val = cost[i];
                ans.push_back(val);
            }
        }
        return ans;
    }
};