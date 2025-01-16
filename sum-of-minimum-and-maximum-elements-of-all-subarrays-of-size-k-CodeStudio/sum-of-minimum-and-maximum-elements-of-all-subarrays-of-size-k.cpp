#include <bits/stdc++.h> 
long long sumOfMaxAndMin(vector<int> &nums, int n, int k) {
	deque<int>maxi;
	deque<int>mini;
	long long ans=0;
	for(int i=0;i<k;i++){

		while(!maxi.empty() && nums[maxi.back()] <= nums[i]){
			maxi.pop_back();
		}

		while(!mini.empty() && nums[mini.back()] >= nums[i]){
			mini.pop_back();
		}

		maxi.push_back(i);
		mini.push_back(i);
	}
	ans+=nums[maxi.front()] + nums[mini.front()];
	for(int i=k; i<n ;i++){

		while(!maxi.empty() &&  maxi.front() <= i - k){
			maxi.pop_front();
		}

		while(!mini.empty() &&  mini.front() <= i - k){
			mini.pop_front();
		}

		while(!maxi.empty() && nums[maxi.back()] <= nums[i]){
			maxi.pop_back();
		}

		while(!mini.empty() && nums[mini.back()] >= nums[i]){
			mini.pop_back();
		}

		maxi.push_back(i);
		mini.push_back(i);

		ans+=nums[maxi.front()] + nums[mini.front()];
	}
	return ans;
}
