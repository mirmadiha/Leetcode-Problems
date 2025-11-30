class Solution {
public:

    void merge(vector<int>&nums, int low, int high, int mid){
        vector<int>arr;
        int left=low;
        int right=mid+1;
        if(low==high)return;
        while(left<=mid && right<=high){
            if(nums[left]<nums[right]){
                arr.push_back(nums[left]);
                left++;
            }
            else{
                arr.push_back(nums[right]);
                right++;
            }
        }

        while(left<=mid){
            arr.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            arr.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=arr[i-low];
        }
    }

    void mergeSort(vector<int>& nums,int low,int high){
        int mid=(low+high)/2;
        if(low>=high){
            return;
        }
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,high,mid);
    }

    vector<int> sortArray(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        mergeSort(nums,low,high);
        return nums;
    }
};