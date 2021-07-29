#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        if(__gcd(x,y) > 1){
            cout<<"0"<<endl;
        }
        else if(__gcd(x,y+1) > 1 || __gcd(x+1,y) > 1){
               cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    } 
}