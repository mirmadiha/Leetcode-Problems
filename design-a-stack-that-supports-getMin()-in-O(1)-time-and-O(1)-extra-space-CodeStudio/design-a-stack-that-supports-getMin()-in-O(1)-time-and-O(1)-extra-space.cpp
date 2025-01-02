#include<stack>
class SpecialStack {
    public:
        stack<int>st;
        int mini;

    void push(int data) {
        if(st.empty()){
            st.push(data);
            mini=data;
        }
        else{
            if(data<mini){
                int value=2*data-mini;
                st.push(value);
                mini=min(data,mini);
            }
            else{
                st.push(data);
            }
        }
    }

    void pop() {

        if(st.empty()){
            return;
        }
        else{
            int current=st.top();
            st.pop();
            if(current<mini){
                int val=2*mini-current;
                mini=val;
            }
        }
    }

    int top() {
        if(st.empty()){
            return -1;
        } else {
            int current=st.top();
            if(mini<current){
                return current;
            }
            else{
                return mini;
            }
        }
    }

    int getMin() {
        return mini;
    }  
};
