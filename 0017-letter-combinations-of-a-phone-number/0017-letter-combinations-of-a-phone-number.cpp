class Solution {
    void getCombinations(string digits,int index,string output,string mapping[],vector<string> &ans){
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }

        int element=digits[index]-'0';
        string value=mapping[element];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            getCombinations(digits,index+1,output,mapping,ans);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0){
            return ans;
        }
        string output;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        getCombinations(digits,index,output,mapping,ans);
        return ans;
    }
};