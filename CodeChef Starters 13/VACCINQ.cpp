#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,p,x,y;
        int sum = 0;
        cin>>n>>p>>x>>y;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i= 0;i<p;i++){
            if(a[i] == 0){
                sum = sum + x;
            }
            else{
                sum = sum + y;
            }
        }

        cout<<sum<<"\n";
    }
}