class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int>arr;
        int index=0;
        for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
              arr.push_back(at[i][j]);
            }
        }
        sort(arr.begin(),arr.end());\
        for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
              Mat[i][j]=arr[index];
              index++;
            }
        }
        return Mat;
    }
};
