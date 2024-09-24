class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int rowIndex=0;
        int colIndex=col-1;
        while(rowIndex<row && colIndex>=0){
            if(target==matrix[rowIndex][colIndex]){
                return 1;
            }
            else if(target<matrix[rowIndex][colIndex]){
                colIndex--;
            }
            else if(target>matrix[rowIndex][colIndex]){
                rowIndex++;
            }
        }
        return 0;
    }
};