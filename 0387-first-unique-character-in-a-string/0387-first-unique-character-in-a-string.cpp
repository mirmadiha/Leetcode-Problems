class Solution {
public:
    int firstUniqChar(string s) {
        queue<int>q;
        map<char,int> count;
        
        for(int i=0;i<s.length();i++){
            count[s[i]]+=1;
        }
        for(int i=0;i<s.length();i++){
            if(count[s[i]]==1)
            q.push(i);
        }

        while(!q.empty()){
            int index=q.front();
            q.pop();
            if(count[s[index]]==1){
                return index;
            }
        }
        return -1;
    }
};