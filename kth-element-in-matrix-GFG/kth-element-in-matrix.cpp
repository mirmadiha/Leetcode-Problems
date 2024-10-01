int smallestElement(int arr[],int n, int midPoint){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]<=midPoint){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  int start=mat[0][0];
  int end=mat[n-1][n-1];
  int mid=start+(end-start)/2;
  while(start<end){
      int count=0;
      for(int i=0;i<n;i++){
          count+=smallestElement(mat[i], n,mid);
      }
      
      if(count<k){
          start=mid+1;
      }
      else{
          end=mid;
      }
      
      mid=start+(end-start)/2;
  }
  return start;
}
