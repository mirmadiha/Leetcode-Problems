class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int occurrence[26]={0};
        for(int i=0;i<str.length();i++){
            int number=0;
            number=str[i]-'a';
            occurrence[number]++;
        }
        
        int maxi=-1;
        int ans=0;
        for(int i=0;i<26;i++){
            if(maxi<occurrence[i]){
                ans=i;
                maxi=occurrence[i];
            }
        }
        char finalAnswer=ans+'a';
        return finalAnswer;
    }

};
