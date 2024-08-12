class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int p=nums.size()-k;
        int i=0;
        int j=p-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        int n=nums.size()-1;
        while(p<=n){
            swap(nums[p],nums[n]);
            p++;
            n--;
        }
        int x=0;
        int y=nums.size()-1;
        while(x<=y){
            swap(nums[x],nums[y]);
            x++;
            y--;
        }
    }
};