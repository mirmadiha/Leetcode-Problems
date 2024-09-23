class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0;
        int end=(row*col)-1;
        int midPoint=start+(end-start)/2;
        while(start<=end){
            int element=matrix[midPoint/col][midPoint%col];
            if(target==element){
                return 1;
            }
            else if(target<element){
                end=midPoint-1;
            }
            else{
                start=midPoint+1;
            }
            midPoint=start+(end-start)/2;
        }
        return 0;
        }
};