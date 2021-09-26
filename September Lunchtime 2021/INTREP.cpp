#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n;

        if(n %2 == 0){
            cout<<(2 * n)<<" "<<n<<"\n";
        }
        else{
           vector<ll> prime = {3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73};
            for(auto x : prime){
                if(n%x){
                    cout<<(n * x)<<" "<<n*(x-1)<<"\n";
                    break;
                }
            } 
        }
    }
    return 0;
}