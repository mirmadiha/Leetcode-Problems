#include <iostream>
using namespace std;

 int countSubsequence(vector<int> &nums,int index,int sum, int target,int n){
    if(index>=n){
        if(sum==target){
            return 1;
        }
        return 0;
    }
    sum+=nums[index];
    int left=countSubsequence(nums,index+1,sum,target,n);

    sum-=nums[index];
    int right=countSubsequence(nums,index+1,sum,target,n);
    return left+right;
 }   
int main () {
    vector<int>nums={1,2,1};
    int index=0;
    int sum=0;
    int target=2;
    cout<<countSubsequence(nums,index,sum,target,3)<<endl;
}
