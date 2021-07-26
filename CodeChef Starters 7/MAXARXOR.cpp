#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k, res=0;
        cin >> n >> k;
        ll x,y;
        x = pow(2,n);

        if(k == 0){
            cout<< "0"<<endl;
            continue;
        }
        ll a = 0^(x-1);

        if(k>x/2){
            k = x/2;
        }
        ll ans = k*2*a;
        cout<<ans<<endl;
    }
}