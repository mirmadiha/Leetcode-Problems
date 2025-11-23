#include <bits/stdc++.h> 
class Deque
{
public:
    // Initialize your data structure.
    vector<int>dq;
    int size,rear,front;
    Deque(int n)
    {
        // Write your code here.
        dq.resize(n);
        size=n;
        rear=-1;
        front=-1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        if(isFull())return false;
        if(isEmpty()){
            front++;
            rear++;
        }
        else{
            front=((front-1)+size)%size;
        }
        dq[front]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        if(isFull())return false;
        if(isEmpty()){
            front++;
            rear++;
        }
        else{
            rear = (rear + 1) % size;

        }
        dq[rear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        int num=dq[front];
        if (front == rear) {
            front = rear = -1;
        }
        else{
            front = (front + 1) % size;
        }
        return num;
    }


    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        int num=dq[rear];
        if (front == rear) {
            front = rear = -1;
        }
        else{
            rear = (rear - 1 + size) % size;
        }
        return num;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return dq[front];
        
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return dq[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        return front==-1;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        return front==(rear+1)%size;
    }
};
