bool ifPossible(int arr[],int n,int k,long long int midPoint){
    long long int timeSum=0;
    int painterCount=1;
    for(int i=0;i<n;i++){
        if(timeSum+arr[i]<=midPoint){
            timeSum+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount>k||arr[i]>midPoint){
                return false;
            }
            timeSum=arr[i];
        }
    }
     return true;
}
class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    long long int start=0;
    long long int end=sum;
    long long int midPoint=start+(end-start)/2;
    long long int ans=-1;
    while(start<=end){
        if(ifPossible(arr,n,k,midPoint)){
            ans=midPoint;
            end=midPoint-1;
        }
        else{
            start=midPoint+1;
        }
        midPoint=start+(end-start)/2;
    }
    return ans;

    }
};
