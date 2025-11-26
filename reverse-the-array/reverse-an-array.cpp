class Solution {
  public:
  
   void recursiveReverse(vector<int>&arr, int i,int j){
       if(i>=j){
           return;
       }
       swap(arr[i],arr[j]);
       recursiveReverse(arr,i+1,j-1);
   }
  
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        int i=0;
        int j=n-1;
        recursiveReverse(arr,i,j);
    }
};
