// Goals of Victory.cpp


#include<iostream>
using namespace std;

int main(){

	int tt;
	cin >> tt;

	while(tt--){
		int n;
		cin >> n;
		int temp;
		int sum = 0;
		for(int i = 0; i < n-1; i++){
			cin >>temp;
			sum += temp;
		}

		cout<<-sum<<"\n";
	}



	return 0;
}