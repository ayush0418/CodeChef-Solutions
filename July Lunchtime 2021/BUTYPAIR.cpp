#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >>n;

        ll x;
        map<ll,ll>freq;
        for(ll i=0;i<n;i++){
            cin>>x;
            freq[x]++;
        }
        
        ll count = 0;
        ll ans = 0 ;
        for(auto it: freq){
            ans = ans + ((n - it.second)*it.second); 
        }
        
        cout<<ans<<endl;
    }
}