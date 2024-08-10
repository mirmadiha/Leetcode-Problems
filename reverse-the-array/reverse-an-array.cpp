/*Write a program in C++ to reverse an array from position M*/
#include<iostream>
#include<vector>
using namespace std;


vector<int> reverse(vector<int>arr,int m){
    int start=m+1;
    int end=arr.size()-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return arr;
}

void print(vector<int>arr){
    cout<<"The reversed array is:"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}



int main()
{
    vector<int>arr;
    arr.push_back(11);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(8);
    int m=3;
    vector<int>ans=reverse(arr,m);
   print(ans);
}