#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        int sum = a+b;

        if(21 - sum > 10){
            cout<<"-1"<<endl;
        }
        else{
            cout<<21-sum<<endl;
        }
    }
}