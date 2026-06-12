// Line Trip.cpp
#include<iostream>
using namespace std;

int main(){

	int tt;
	cin >> tt;

	while(tt--){

		int n, end;
		cin>> n >>end;
		int arr[n];

		int maxdiff =0;
		for(int i = 0; i < n; i++){
			cin >>arr[i];

			if(i == 0)
			maxdiff = arr[i];
			else
			maxdiff = max(maxdiff, arr[i] - arr[i-1] );
		}

		maxdiff = max(maxdiff, 2*(end - arr[n-1]));

		cout<<maxdiff<<"\n";
	}


	return 0;
}