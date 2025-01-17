class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            int element=q1.front();
            q1.pop();
            q2.push(element);
        }
        while(!q2.empty()){
            int element=q2.front();
            q2.pop();
            q1.push(element);
        }
    }
    
    int pop() {
        int number=q1.front();
        q1.pop();
        return number;
    }
    
    int top() {
        int number=q1.front();
        return number;
    }
    
    bool empty() {
       if(q1.empty()){
        return true;
       } 
       else{
        return false;
       }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */