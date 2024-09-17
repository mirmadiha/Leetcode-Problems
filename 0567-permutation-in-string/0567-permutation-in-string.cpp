class Solution {
public:
    bool ifEqual(int count1[26],int count2[26]){
        for(int i=0;i<26;i++){
            if(count1[i]!=count2[i])
                return 0;
            }
            return 1;
        }
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }

        int count2[26]={0};
        int i=0;
        int windowSize=s1.length();
        while(i<windowSize && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(ifEqual(count1,count2))
            return 1;
        
            while(i<s2.length()){
                char newElement=s2[i];
                int index=newElement-'a';
                count2[index]++;

                char oldElement=s2[i-windowSize];
                index=oldElement-'a';
                count2[index]--;
                i++;

                if(ifEqual(count1,count2)){
                return 1;
            }
            }
            return 0;
                }

};