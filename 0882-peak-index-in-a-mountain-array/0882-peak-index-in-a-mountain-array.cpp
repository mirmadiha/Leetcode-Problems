class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start)/2;
        while(start<end){
            if(arr[mid+1]<arr[mid]){
                end=mid;
            }
            
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return start;
    }
};