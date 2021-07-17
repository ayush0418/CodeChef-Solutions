#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ans = 0;
        for(int i=0;i<32;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(a[j]!=0){
                    if(a[j]&1){
                        count ++;
                    }
                    a[j] = a[j]/2;
                }
            }
            ans = ans + ((count + k - 1)/k);
        }
        cout<<ans<<endl;
    }
}