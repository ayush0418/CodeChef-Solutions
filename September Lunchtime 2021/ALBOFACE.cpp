#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--){
        ll n, count = 0;
        cin>>n;

        while(n != 0){
            count++;
            if(n%2 != 0){
                n = n-1;
            }
            else if(n%4 != 0){
                n = n/2;
            }
            else if(n%4 == 0){
                break;
            } 
        }
        
        if(count %2 == 0){
            cout<<"BOB"<<"\n";
        }
        else{
            cout<<"ALICE"<<"\n";
        }
    }
}