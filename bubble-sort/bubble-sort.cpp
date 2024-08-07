/*Write a program in C++ to sort an array using bubble sort algorithm*/
#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={9,5,0,8,1,3};
    for(int i=1;i<n;i++)
    //for round 1 to n-1
    {
    bool swapped = false;
    for(int j=0;j<n-i;j++)
    //process element till n-i th index
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
    }
    if(swapped==false)
    {
        break;
    }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}