#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,fruits,veg,fish;
        cin>>n>>fruits>>veg>>fish;

        if((veg >= n) && (fruits+fish) >= n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}