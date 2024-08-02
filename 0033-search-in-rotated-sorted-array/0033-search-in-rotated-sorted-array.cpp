class Solution {
public:
    
int pivotIndex(vector<int>& nums){
    int start=0;
    int end=nums.size()-1;
    int midPoint=start+(end-start)/2;
    while(start<end){
        if(nums[midPoint]>=nums[0]){
            start=midPoint+1;
        }
        else{
            end=midPoint;
        }
        midPoint=start+(end-start)/2;
    }
    return start;
}


int binarySearch(vector<int>& nums,int s,int e,int target){
    int start=s;
    int end=e;
    int midPoint=start+(end-start)/2;
    while(start<=end){
    if(target==nums[midPoint]){
        return midPoint;
    }
    else if(target<nums[midPoint]){
        end=midPoint-1;
    }
    else{
        start=midPoint+1;
    }
    midPoint=(start+end)/2;
    }
    return -1;
}
    
    int search(vector<int>& nums, int target) {
        int pivot=pivotIndex(nums);
    if(nums[pivot]<=target && nums[nums.size()-1]>=target){
        return binarySearch(nums,pivot,nums.size()-1,target);
    }
    else{
        return binarySearch(nums,0,pivot-1,target);
    }
    }
};
