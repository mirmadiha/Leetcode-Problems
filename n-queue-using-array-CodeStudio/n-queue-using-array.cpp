#include <bits/stdc++.h> 
class NQueue{
public:
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freeSpot;
    int number;
    int size;
    NQueue(int n, int s){
        this->size=s;
        this->number=n;
        freeSpot=0;
        arr=new int[size];
        front=new int[number];
        rear=new int[number];
        for(int i=0;i<number;i++){
            front[i]=-1;
            rear[i]=-1;
        }
        next=new int[size];
        for(int i=0;i<size;i++){
            if(i==size-1){
                next[i]=-1;
            } else {
                next[i] = i + 1;
            }
        }
        freeSpot=0;
    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){
        if(freeSpot==-1){
            return false;
        }
        
        int index=freeSpot;
        freeSpot=next[index];
        arr[index]=x;

        if(front[m-1]==-1){
            front[m-1]=index;
        }
        else{
            next[rear[m-1]]=index;
        }
        next[index]=-1;

        rear[m-1]=index;

        arr[index]=x;
        return true;
    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        if(front[m-1]==-1){
            return -1;
        }

        int index=front[m-1];

        front[m-1]=next[index];

        next[index]=freeSpot;
        freeSpot=index;
        return arr[index];
    }
};
