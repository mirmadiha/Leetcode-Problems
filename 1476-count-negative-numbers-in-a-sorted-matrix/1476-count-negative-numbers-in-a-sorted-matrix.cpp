class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size(); 
        int rowIndex=0;
        int colIndex=n-1;
        while(rowIndex<m && colIndex>=0){
            if(grid[rowIndex][colIndex]<0){
                colIndex--;
                count+=m-rowIndex;
            }
            else{
                rowIndex++;
            }
        }
        return count;
    }
};