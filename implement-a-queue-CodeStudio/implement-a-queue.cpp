#include <bits/stdc++.h> 
class Queue {
public:
    int *arr;
    int top;
    int rear;
    int size;
    Queue() {
        this->size=100001;
        arr=new int[size];
        top=-1;
        rear=-1;
    }
    /*----------------- Public Functions of Queue -----------------*/
    bool isEmpty() {
        if(top==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(top==-1 && rear==-1){
            top++;
            rear++;
            arr[top]=data;
        }
        else if(rear>=size){
            cout<<"queue overflow"<<endl;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }

    int dequeue() {
        int x=arr[top];
        if(top==-1){
            return -1;
        }
        else{
            if(top==rear){
                top=-1;
                rear=-1;
            }
            else{
                top++;
            }
        }
        return x;
    }

    int front() {
        if(top==-1){
            return -1;
        }
        else{
            return arr[top];
        }
    }
};
