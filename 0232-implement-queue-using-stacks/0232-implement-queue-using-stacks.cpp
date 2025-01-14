class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;
    MyQueue() {
        stack<int>st1;
        stack<int>st2; 
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st1.empty()){
            return -1;
        }
        while(!st1.empty()){
            int temp=st1.top();
            st1.pop();
            st2.push(temp);
        }
        int remove=st2.top();
        st2.pop();
        while(!st2.empty()){
            int temp=st2.top();
            st2.pop();
            st1.push(temp);
        }
        return remove;
    }
    
    int peek() {
        while(!st1.empty()){
            int temp=st1.top();
            st1.pop();
            st2.push(temp);
        }
        int front=st2.top();

        while(!st2.empty()){
            int temp=st2.top();
            st2.pop();
            st1.push(temp);
        }
        return front;
    }
    
    bool empty() {
        if(st1.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */