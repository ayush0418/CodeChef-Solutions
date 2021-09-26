#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n%4 != 0 ){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            int x = n/2;
            
            for(int i=1;i<=x/2;i++){
                cout<<i<<" ";
            }
            for(int i=n; i > (3*x/2); i--){
                cout<<i<<" ";
            }

            cout<<"\n";

            for(int i = (x/2 + 1); i <= x; i++){
                cout<<i<<" ";
            }
            for(int i=x+1; i <= (3*x/2); i++){
                cout<<i<<" ";
            }
            cout<<"\n";
            
        }

    }       
}