#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll int a, ll int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

ll lcm(ll int a, ll int b){
    return ( a / gcd(a,b) ) * b;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,steps=0;
        cin>>x>>y;
        int upbound = x*y;

        cout<<lcm(x,2*x)<<" "<<lcm(upbound-1,upbound)<<"\n";
    }
}