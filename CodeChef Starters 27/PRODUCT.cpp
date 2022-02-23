#include<bits/stdc++.h>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    ll t;
    cin>>t;

    while(t--){
        ll a,b;
        cin>>a>>b;

        
        ll c = (a*b)/__gcd(a,b);
        cout<<c/a<<endl;
    }
}