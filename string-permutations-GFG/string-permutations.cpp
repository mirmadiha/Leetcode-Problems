Class Solution{
public:
    void getPermutations(string S,int index,
    vector<string> &ans){
        if(index>=S.length()){
            ans.push_back(S);
            return;
        }
        int i=index;
        while(i<S.length()){
            swap(S[i],S[index]);
            getPermutations(S,index+1,ans);
            swap(S[i],S[index]);
            i++;
        }
    }
    
    vector<string> permutation(string S)
    {
        vector<string>ans;
        int index=0;
        getPermutations(S,index,ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
