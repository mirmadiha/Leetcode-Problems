class Solution {
public:
    void merge(int low,int mid, int high,vector<int>&nums){
        int left=low;
        int right=mid+1;
        vector<int>temp;
        while(left<=mid && right<=high){
            if(nums[left]<nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }

        while(right<=mid){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i=0;i<temp.size();i++){
            nums[low+i]=temp[i];
        }
    }

    void mergeSort(int low,int high,vector<int>&nums){
        int mid=(low+high)/2;
        if(low>=high){
            return;
        }
        mergeSort(low,mid,nums);
        mergeSort(mid+1,high,nums);
        merge(low,mid,high,nums);
    }
    vector<int> sortArray(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        mergeSort(low,high,nums);
        return nums;
    }
};