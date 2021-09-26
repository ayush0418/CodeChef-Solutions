#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int n){
    vector<int>pfact;
    while(n%2==0){
        pfact.push_back(2);
        n = n/2;
    }
    for(int i=3; i*i <= n; i+2){
        while(n%i == 0){
            pfact.push_back(i);
            n = n/i;
        }
    }

    if(n>2) pfact.push_back(n);
    return pfact;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        vector<int> factors = primeFactors(a);
        bool flag = true;

        for(auto i:factors){
            if(b%i != 0)
                flag = false;
        }
        
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}