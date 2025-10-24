class Solution {
private:

vector<int>nextSmallerElement(vector<int>&arr,int n){
        vector<int>num(n,-1);
        stack<int>st;
        st.push(-1);
        for(int i=n-1;i>=0;i--){
            while(st.top()!=-1 && arr[st.top()]>=arr[i]){
                st.pop();
            }
            num[i]=st.top();
            st.push(i);
        
        }
        return num;
}
vector<int>previousSmallerElement(vector<int>&arr,int n){
        vector<int>num(n,-1);
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++){
            while(st.top()!=-1 && arr[st.top()]>=arr[i]){
                st.pop();
            }
            num[i]=st.top();
            st.push(i);
        
        }
        return num;
}


public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next;
        next=nextSmallerElement(heights,n);
        vector<int>prev;
        prev=previousSmallerElement(heights,n);
        int area=INT_MIN;
        for(int i=0;i<n;i++){
            int l=heights[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            int newArea=l*b;
            area=max(area,newArea);
        }
        return area;
    }
};