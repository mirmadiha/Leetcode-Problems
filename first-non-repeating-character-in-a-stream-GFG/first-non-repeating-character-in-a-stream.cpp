class Solution {
  public:
    string FirstNonRepeating(string &s) {
        queue<char>q;
        map<char,int>count;
        string stream;
        for(char i='a';i<='z';i++){
            count[i]=0;
        }
        for(int i=0;i<s.length();i++){
            count[s[i]]++;
            if(count[s[i]]==1){
                q.push(s[i]);
            }
            while(!q.empty() && count[q.front()]>1){
                q.pop();
            }
            
            if(q.empty()){
                stream+='#';
            }
            else{
                stream+=q.front();
            }
        }
        return stream;
        
    }
};
