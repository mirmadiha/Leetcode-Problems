class Solution {
public:
    vector<int> nextSmallestElement(vector<int>& heights , int n){
        stack<int>st;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }

    vector<int> previousSmallestElement(vector<int>& heights , int n){
        stack<int>st;
        vector<int>ans(n);
        for(int i=0;i<=n-1;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>NSE(n);
        vector<int>PSE(n);
        int area=INT_MIN;
        NSE=nextSmallestElement(heights,n);
        PSE=previousSmallestElement(heights,n);
        for(int i=0;i<heights.size();i++){
            if(NSE[i]==-1){
                NSE[i]=n;
            }
            int breadth=NSE[i]-PSE[i]-1;
            int length=heights[i];
            int newArea=length*breadth;
            area=max(area,newArea);
        }
        return area;
    }
};