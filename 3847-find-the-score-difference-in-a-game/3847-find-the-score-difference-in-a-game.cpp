class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int size = nums.size();
        bool player1 = true;
        bool player2 = false;
        int score1=0;
        int score2=0;
        for (int i=0;i<size;i++){
            if(nums[i]%2!=0){
                if(player1){
                    player2=true;
                    player1=false;
                }
                else{
                    player1=true;
                    player2=false;
                }
            }
            if((i + 1) % 6 == 0){
                 if(player1){
                    player2=true;
                    player1=false;
                }
                else{
                    player1=true;
                    player2=false;
                }
            }
            if(player1){
                score1+=nums[i];
            }
            else{
                score2+=nums[i];
            }
        }
        int difference = score1-score2;
        return difference;
    }
};