class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) { 
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    for(int j = 0; j < n; j++) {
        int top = 0, bottom = n - 1;
        while(top < bottom) {
            swap(arr[top][j], arr[bottom][j]);
            top++;
            bottom--;
        }
    }
	}

};
