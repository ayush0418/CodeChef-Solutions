#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MX = 100005;
const ll MOD = 1000000007;


ll mul(ll x, ll y) {
    ll res = x * y; 
    return (res >= MOD ? res % MOD : res);
}


ll power(ll x, ll y) {
    if (y < 0) return 1; 
    ll res = 1; 
    x %= MOD; 
    while (y) {
        if (y & 1){ res = mul(res, x); } 
        y >>= 1;    // y = y/2              // BITWISE OPERATOR
        x = mul(x, x);
    } 
    return res;
}


int main(){
    vector<ll> Chefora;
    Chefora.push_back(0);

    for(ll i=1;i<MX;i++){
        ll res = i, num = i;
        num /= 10;
        while(num != 0){
            res = res*10 + num%10;
            num /= 10;
        }
        Chefora.push_back(res);
    }

    vector<ll> pref;
    pref.push_back(0);
    ll sz = Chefora.size(), sum = 0;

    for(ll i=1;i<sz;i++){
        sum += Chefora[i];
        pref.push_back(sum);
    }

    ll q;
    cin>>q;
    while(q--){
        ll L,R;
        cin>> L>> R;

        cout<< power( Chefora[L], (pref[R]-pref[L]) ) << "\n";
    }
    return 0;
}