class Solution {
public:

    int getPivot(vector<int>& nums){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        while(start<end){
            if(nums[mid]>=nums[0]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        return start;
    }

    int binarySearch(vector<int>& nums , int start ,int end,int target){
        int mid=start+(end-start)/2;
        while(start<=end){
            if(target==nums[mid]){
                return mid;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        if(nums.size()==0){
            return -1;
        }
        int pivotIndex=getPivot(nums);
        if(nums[pivotIndex]<=target && nums[nums.size()-1]>=target){
            return binarySearch(nums,pivotIndex,nums.size(),target);
        }
        else{
            return binarySearch(nums,0,pivotIndex-1,target);
        }
    }
};