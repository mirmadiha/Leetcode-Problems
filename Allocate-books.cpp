/*Write a program in C++ to allocate books to students */
#include<iostream>
using namespace std;
        bool ifPossible(int arr[],int n,int m, int midPoint){
        int pageSum=0;
        int studentCount=1;
        for(int i=0;i<n;i++){
            if(midPoint>=pageSum+arr[i]){
                pageSum+=arr[i];
            }
            else{
                studentCount++;
                if(studentCount>m||arr[i]>midPoint){
                    return false;
                }
                pageSum=arr[i];
            }
        }
        return true;
    }


        int noOfPages(int arr[],int n,int m){
            int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int start=0;
        int end=sum;
        int ans=-1;
        int midPoint=start+(end-start)/2;
        while(start<=end){
        if(ifPossible(arr,n,m,midPoint)){
            ans=midPoint;
            end=midPoint - 1;
        }
        else{
            start=midPoint+1;
        }
        midPoint=start+(end-start)/2;
    }
    return ans;
    }

   
int main()
{
    int arr[]={12, 34,67,90};
    int n=4;
    int m=5;
    int result=noOfPages(arr,n,m);
    cout<<"The max number of pages="<<result;
}

