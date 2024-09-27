class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        int row=arr.size();
        int col=arr[0].size();
        for(int colIndex=0;colIndex<col;colIndex++){
            for(int rowIndex=0;rowIndex<row;rowIndex++){
                if(arr[rowIndex][colIndex]==1){
                    return rowIndex;
                }
            }
        }
        return -1;
    }
};
