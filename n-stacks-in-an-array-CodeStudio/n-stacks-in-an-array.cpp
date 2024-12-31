#include <bits/stdc++.h> 
class NStack
{
public:
    int *arr;
    int *top;
    int *next;
    int  free;
    int n,s;
    NStack(int N, int S)
    {
        n=N;
        s=S;
        arr=new int[S];
        top=new int[n];
        for(int i=0;i<n;i++){
            top[i]=-1;
        }
        next=new int[s];
        for(int i=0;i<s;i++){
            if(i==s-1){
                next[i]=-1;
            } else {
                next[i] = i + 1;
            }
        }
        free=0;

    }
    bool push(int x, int m)
    {
        if(free==-1){
            return false;
        }
        int index=free;
        free=next[index];
        arr[index]=x;
        next[index]=top[m-1];
        top[m-1]=index;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
       if(top[m-1]==-1){
           return -1;
       }
       else{
           int index=top[m-1];
           top[m-1]=next[index];
           next[index]=free;
           free=index;
           return arr[index];
       }
        
    }
};
