class Solution {
  public:
  int firstOccurence(vector<int> &arr,int target){
      int start=0;
      int end=arr.size()-1;
      int mid;
      int result=-1;
      while(start<=end){
          mid=start+(end-start)/2;
          if(arr[mid]==target){
              end=mid-1;
              result=mid;
          }
          else if(arr[mid]<target){
              start=mid+1;
          }
          else{
              end=mid-1;
          }
      }
      return result;
  }
  
  int lastOccurence(vector<int> &arr,int target){
      int start=0;
      int end=arr.size()-1;
      int mid;
      int result=-1;
      while(start<=end){
          mid=start+(end-start)/2;
          if(arr[mid]==target){
              start=mid+1;
              result=mid;
          }
          else if(arr[mid]<target){
              start=mid+1;
          }
          else{
              end=mid-1;
          }
      }
      return result;
  }
    int countFreq(vector<int>& arr, int target) {
        // code here
        int finalResult;
        int first=firstOccurence(arr,target);
        int last=lastOccurence(arr,target);
        if(first==-1||last==-1){
            finalResult=0;
        }
        
        else{
        finalResult=last-first+1;
    }
    return finalResult;
    }
};
