/*Write a program in C++ to sort the array in ascending order using selection sort*/
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={4,6,2,7,0};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            int minimum=i;
            if(arr[minimum]>arr[j]){
                swap(arr[minimum],arr[j]);
            }
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
}