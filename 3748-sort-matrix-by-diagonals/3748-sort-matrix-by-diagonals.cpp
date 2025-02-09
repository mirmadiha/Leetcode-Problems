class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int row=0;row<n;row++){
            int col=0;
            int rowCount=row;
            vector<int>diagonal;
            while(rowCount<n && col<n){
                diagonal.push_back(grid[rowCount][col]);
                col++;
                rowCount++;
            }
            sort(diagonal.begin(), diagonal.end(), greater<int>());

            int r=row,c=0,index=0;
            while(r<n && c<n){
                grid[r][c]=diagonal[index++];
                r++;
                c++;
            }
        }


        for(int col=1;col<n;col++){
            int row=0;
            int colCount=col;
            vector<int>diagonal;
            while(row<n && colCount<n){
                diagonal.push_back(grid[row][colCount]);
                row++;
                colCount++;
            }
            sort(diagonal.begin(), diagonal.end());

            int r=0,c=col,index=0;
            while(r<n && c<n){
                grid[r][c]=diagonal[index++];
                r++;
                c++;
            }
        }

        return grid;
    }
};