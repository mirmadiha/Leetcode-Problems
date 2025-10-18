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
        while(st1.size()>1){
            int top1=st1.top();
            st1.pop();
            st2.push(top1);
        }
        int popNum=st1.top();
        st1.pop();
        while(!st2.empty()){
            int top2=st2.top();
            st2.pop();
            st1.push(top2);
        }
        return popNum;
    }
    
    int peek() {
        while(st1.size()>1){
            int top1=st1.top();
            st1.pop();
            st2.push(top1);
        }
        int frontNum=st1.top();
        while(!st2.empty()){
            int top2=st2.top();
            st2.pop();
            st1.push(top2);
        }
        return frontNum;
    }
    
    bool empty() {
        return st1.empty();
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