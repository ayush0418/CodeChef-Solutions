#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        if(n-k == 1){
            cout<<"-1\n";
        } 
        else if(n==k){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        else{
            for(int i=1;i<=k;i++){
                cout<<i<<" ";
            }
            for(int j=k+2;j<=n;j++){
                cout<<j<<" ";
            }
            
            int x = k+1;
            cout<<x<<"\n";
        }
    }
}