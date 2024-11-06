class Solution {
    void listPath(vector<vector<int>> &mat,string output, int i ,int j, vector<string> &ans){
         int n = mat.size();
         if (i < 0 || j < 0 || i >= n || j >= n || mat[i][j] == 0) {
            return;
        }
        
        if (i == n - 1 && j == n - 1) {
            ans.push_back(output);
            return;
        }
        
        mat[i][j] = 0;

         if (j + 1 < n && mat[i][j + 1] == 1) {
            listPath(mat, output + 'R', i, j + 1, ans);
        }
        if (i + 1 < n && mat[i + 1][j] == 1) {
            listPath(mat, output + 'D', i + 1, j, ans);
        }
        if (j - 1 >= 0 && mat[i][j - 1] == 1) {
            listPath(mat, output + 'L', i, j - 1, ans);
        }
        if (i - 1 >= 0 && mat[i - 1][j] == 1) {
            listPath(mat, output + 'U', i - 1, j, ans);
        }
         mat[i][j] = 1;
    }
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string>ans;
        string output;
        int i=0;
        int j=0;
        listPath(mat,output,i,j,ans);
        return ans;
    }
};
