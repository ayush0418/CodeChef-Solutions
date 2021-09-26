#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        ll p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;

        ll AC = b + x*a;
        ll CC = c + y*a;

        if(AC <= CC){
            cout<<(p/AC) + (p%AC)/CC<<"\n";    
        }
        else{
            cout<<(p/CC) + (p%CC)/AC<<"\n";
        }
    }
}