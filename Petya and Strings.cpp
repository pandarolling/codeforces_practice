#include<iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    
    cin>>s1 >> s2;
    int len = s1.size();
    int i;
    for( i = 0 ; i <len; i++){
        if(s1[i] <= 90){
            s1[i] = s1[i] +32;
        }
    }
    for(i = 0 ; i <len; i++){
        if(s2[i] <= 90){
            s2[i] = s2[i] +32;
        }
    }
    
    
    i = 0;

    
    if(s1<s2)
    cout<<"-1"<<endl;
    else if(s2<s1)
    cout<<"1"<<endl;
    else if(s1==s2)
    cout<<"0"<<endl;
    
    
    
    
    
    return 0;
}