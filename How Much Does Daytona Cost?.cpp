// How Much Does Daytona Cost?.cpp
#include<iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){

	int tt;
	cin >> tt;
	while( tt--){

		int n;
		int k;

		cin >> n >> k;

		int temp = n;
		vector<int>arr(n);
		unordered_set<int> st;
		for(int i = 0; i < n; i++){
			cin >>arr[i];
			st.insert(arr[i]);
		}

		if(st.count(k)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}

	return 0;
}