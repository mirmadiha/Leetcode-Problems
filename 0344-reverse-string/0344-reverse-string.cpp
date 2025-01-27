class Solution {
public:

    void recursiveReverse(vector<char>& s,int i,int size){
        if(i>size-i-1){
            return;
        }
        swap(s[i],s[size-i-1]);
        recursiveReverse(s,++i,size);
    }

    void reverseString(vector<char>& s) {
        recursiveReverse(s,0,s.size());
    }
};