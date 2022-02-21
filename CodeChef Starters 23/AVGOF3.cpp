#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        int a = 1, b = 2, c = x*3 - a - b;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}