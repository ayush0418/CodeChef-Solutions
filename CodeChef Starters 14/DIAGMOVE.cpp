#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        int z = abs(x-y);

        if(z%2 == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}