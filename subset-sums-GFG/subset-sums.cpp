class Solution {
  public:
  void calculateSum(vector<int>&arr, vector<int>&sum, int index,int subsetSum){
      int n=arr.size();
      if(index>=n){
          sum.push_back(subsetSum);
          subsetSum=0;
          return;
      }
      subsetSum+=arr[index];
      calculateSum(arr,sum,index+1,subsetSum);
      subsetSum-=arr[index];
      calculateSum(arr,sum,index+1,subsetSum);
  }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>sum;
        int subsetSum=0;
        int index=0;
        calculateSum(arr,sum,index,subsetSum);
        return sum;
    }
};
