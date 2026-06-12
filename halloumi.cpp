#include <iostream>
using namespace std;

bool non_decreasing(int arr[], int len){
	for(int i = 0; i < len -1; i++){
		if(arr[i] > arr[i+1])
			return false;
	}
	return true;
}
int main(){

	int tt;
	cin>>tt;

	while(tt--){
		int n, k ;
		cin >> n >> k;
		int arr[n];
		for(int i =0; i < n; i++){
			cin >> arr[i];
		}

		if(k > 1 || non_decreasing(arr, n)){
			cout<< "YES\n";
		}else{
			cout<< "NO\n";
		}

	}


	return 0;
}