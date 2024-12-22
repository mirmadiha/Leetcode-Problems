class Solution{
public:

    void solveProblem(stack<int>&st,int x,int count,int size){
        if(count==size){
            st.push(x);
            return;
        }
        
        int num=st.top();
        st.pop();
        solveProblem(st,x,count+1,size);
        st.push(num);
    }

    stack<int> insertAtBottom(stack<int> st,int x){
        int count=0;
        int size=st.size();
        solveProblem(st,x,count,size);
        return st;
    }
};
