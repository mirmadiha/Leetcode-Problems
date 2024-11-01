#include <bits/stdc++.h> 

void getSubsequences(string str,int index,
string output,vector<string> &ans){
	if(index>=str.length()){
		if(output.length()>0){
			ans.push_back(output);
		}
		return;
	}

	getSubsequences(str,index+1,output,ans);

	char element=str[index];
	output.push_back(element);
	getSubsequences(str,index+1,output,ans);
}

vector<string> subsequences(string str){
	
	vector<string>ans;
	string output;
	int index=0;
	getSubsequences(str,index,output,ans);
	return ans;
	
}
