// Don't Try to Count.cpp

#include<iostream>
#include<string>

using namespace std;

int main(){

	int tt;
	cin >> tt;

	while(tt--){
		int n1, n2;
		string s1, s2;

		cin>> n1 >> n2 >> s1 >> s2;
		int cnt  =0;
		if(s1.find(s2) != string::npos){
			cout <<cnt<<"\n";
		}else{
			bool found = false;
			while(s1.size() <= 126){
				
				s1 = s1 + s1;
				cnt++;

				if(s1.find(s2) != string::npos){
				cout <<cnt<<"\n";
				found = true;
				break;
				}
			}
			if(!found)
			cout<<-1<<"\n";
		}
	}
}
