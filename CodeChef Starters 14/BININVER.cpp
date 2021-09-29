#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        
        ll even = 0, odd = 0, a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];

            if(a[i] %2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }

        if(even == n){
            ll res = 1e9;

            for(int i=0;i<n;i++){
                
                ll ans = 0;

                while(a[i] %2 != 1){
                    a[i] = a[i] / 2;
                    ans++;
                }

                if(ans < res){
                    res = ans;
                }
            }
            cout<<res<<"\n";
        }
        else{
            cout<<"0\n";
        }

    }
}