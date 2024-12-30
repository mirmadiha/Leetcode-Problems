class Solution {
  public:
    vector<int>nextSmallestElement(vector<int>matrix , int n){
        vector<int>answer(n);
        stack<int>indexStack;
        for(int i=n-1;i>=0;i--){
            while(!indexStack.empty()  &&  matrix[indexStack.top()]>=matrix[i]){
                indexStack.pop();
            }
            if(indexStack.empty()){
                answer[i]=-1;
            }
            else if(matrix[indexStack.top()]<matrix[i]){
                answer[i]=indexStack.top();
            }
            indexStack.push(i);
        }
        return answer;
    }

    vector<int>previousSmallestElement(vector<int>matrix , int n){
        vector<int>answer(n);
        stack<int>indexStack;
        for(int i=0;i<n;i++){
            while(!indexStack.empty()  &&  matrix[indexStack.top()]>=matrix[i]){
                indexStack.pop();
            }
            if(indexStack.empty()){
                answer[i]=-1;
            }
            else if(matrix[indexStack.top()]<matrix[i]){
                answer[i]=indexStack.top();
            }
            indexStack.push(i);
        }
        return answer;
    }
    
    int largestRectangleArea(vector<int>& matrix , int n) {
       vector<int>NSE=nextSmallestElement(matrix , n);
       vector<int>PSE=previousSmallestElement(matrix,n);
       int area=INT_MIN;
       for(int i=0;i<n;i++){
        int length=matrix[i];
        if(NSE[i]<0){
            NSE[i]=n;
        }
        int breadth=NSE[i]-PSE[i]-1;
        int newArea=length*breadth;
        area=max(area , newArea);
       } 
       return area;
    }
    
    int maxArea(vector<vector<int>> &matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
       int area=largestRectangleArea(matrix[0],m);
       for(int i=1;i<n;i++){
           for(int j=0;j<m;j++){
              if(matrix[i][j]!=0){
                  matrix[i][j]=matrix[i-1][j]+matrix[i][j];
              }
              else{
                  matrix[i][j]=0;
              }
           }
           area=max(area,largestRectangleArea(matrix[i],m));
       }
       return area;
    }
};
