void countSubsequences(vector<int>& arr, int k , int index,int sum,int &count){
	int n=arr.size();
	if(index>=n){
		if(sum==k){
		count++;
	}
		return;
	}
	sum+=arr[index];
	countSubsequences(arr,k,index+1,sum,count);

	sum-=arr[index];
	countSubsequences(arr,k,index+1,sum,count);
}


int findWays(vector<int>& arr, int k)
{
	// Write your code here.
	int count=0;
	countSubsequences(arr,k,0,0,count);
	return count;

}
