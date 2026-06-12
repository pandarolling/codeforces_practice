// Game with Integers.cpp

#include<iostream>
using namespace std;

int main(){

	int tt;
	cin>> tt;
	while(tt--){
		int n;
		cin>>n;

		if(n % 3 == 0){
			cout<<"Second"<<endl;
		}else{
			cout<<"First"<<endl;
		}
	}


	return 0;
}