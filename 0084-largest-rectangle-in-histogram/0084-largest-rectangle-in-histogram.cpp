class Solution {
public:

    vector<int>nextSmallestElement(vector<int>heights , int n){
        vector<int>answer(n);
        stack<int>indexStack;
        for(int i=n-1;i>=0;i--){
            while(!indexStack.empty()  &&  heights[indexStack.top()]>=heights[i]){
                indexStack.pop();
            }
            if(indexStack.empty()){
                answer[i]=-1;
            }
            else if(heights[indexStack.top()]<heights[i]){
                answer[i]=indexStack.top();
            }
            indexStack.push(i);
        }
        return answer;
    }

    vector<int>previousSmallestElement(vector<int>heights , int n){
        vector<int>answer(n);
        stack<int>indexStack;
        for(int i=0;i<n;i++){
            while(!indexStack.empty()  &&  heights[indexStack.top()]>=heights[i]){
                indexStack.pop();
            }
            if(indexStack.empty()){
                answer[i]=-1;
            }
            else if(heights[indexStack.top()]<heights[i]){
                answer[i]=indexStack.top();
            }
            indexStack.push(i);
        }
        return answer;
    }

    int largestRectangleArea(vector<int>& heights) {
       int n=heights.size();
       vector<int>NSE=nextSmallestElement(heights , n);
       vector<int>PSE=previousSmallestElement(heights,n);
       int area=INT_MIN;
       for(int i=0;i<n;i++){
        int length=heights[i];
        if(NSE[i]<0){
            NSE[i]=n;
        }
        int breadth=NSE[i]-PSE[i]-1;
        int newArea=length*breadth;
        area=max(area , newArea);
       } 
       return area;
    }
};