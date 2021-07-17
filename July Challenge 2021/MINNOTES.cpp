#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll a[n], sum=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum = sum + a[i];
        }

        if(n==1){
            cout<<"1"<<endl;
            continue;
        }

        ll prefix[n],suffix[n];
        
        prefix[0] = a[0];
        for(int i=1;i<n;i++){
            prefix[i] = __gcd(prefix[i-1],a[i]);
        }

        suffix[n-1] = a[n-1];
        for(ll i=n-2;i>=0;i--){
            suffix[i] = __gcd(suffix[i+1],a[i]);
        }

        ll ans = sum /suffix[0];

        for(ll i=0;i<n;i++){
            int k = __gcd(  (i-1<0 ? 0:prefix[i-1]) , (i+1>=n ? 0:suffix[i+1])  );
            ans = min(ans, (sum - a[i])/k + 1);
        }

        cout<<ans<<endl;

    }
}