class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int>indexes;
        vector<int>values;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>=0){
                indexes.push_back(i);
                values.push_back(nums[i]);
            }
        }
        int n=values.size();
        if(n==0)return nums;
        k = k%n;
        vector<int>cyclic(n);
        for(int i=0;i<n;i++){
            cyclic[(i-k+n)%n]=values[i];
        }
        for(int i=0;i<indexes.size();i++){
            nums[indexes[i]]=cyclic[i];
        }
        return nums;
    }
};