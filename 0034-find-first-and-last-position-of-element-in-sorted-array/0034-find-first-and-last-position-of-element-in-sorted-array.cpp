class Solution {
public:
    int firstOccurence(vector<int>& nums , int target){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int result=-1;
        while(start<=end){
            if(nums[mid]==target){
                result=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return result;
    }

    int lastOccurence(vector<int>& nums , int target){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int result=-1;
        while(start<=end){
            if(nums[mid]==target){
                result=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOccurence(nums,target);
        int last=lastOccurence(nums,target);
        if(first==-1 || last==-1){
            return{-1,-1};
        }
        else{
            return{first,last};
        }
    }
};