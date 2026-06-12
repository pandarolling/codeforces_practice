#include <bits/stdc++.h>

using namespace std;

int main(){

	int tt;
	cin>>tt;

	while(tt--){
		int n, k ;
		cin >> n >> k;
		vector<int> nums(n);
		int i =0;
		for(int i =0; i < n; i++){
			cin >> nums[i];
		}

		if(is_sorted(nums.begin(), nums.end())){
			cout<< "YES" <<endl;
			continue;
		}

		if(is_sorted(nums.begin(), nums.end(), greater<int>()) && n == k ){
			cout<< "YES" <<endl;
			continue;
		}
		i =0;
		int cnt=0;
		while(i < nums.size()-1){
			if (nums[i] > nums[i+1]){
				reverse(nums.begin() + i, nums.begin()+i+1);
				cnt++;
			}
			i++;
		}

		if(cnt <= k){
			cout<< "YES" <<endl;
			continue;
		}

		if(k <=1){
			cout<< "NO" <<endl;
			continue;
		}
	}


	return 0;
}