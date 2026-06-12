// Jagged swaps.cpp

// watermelon.cpp

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

	
	int tt;
	cin >> tt;

	while(tt--){

		int n;
		cin >> n;

		vector<int>arr;
		for(int i =0; i <n; i++){
			int temp;
			cin >>temp;
			arr.push_back(temp);
		}

		if (arr[0] == 1) {
        std::cout << "YES\n";
	    } else {
	        std::cout << "NO\n";
	    }


	}

	return 0;
}