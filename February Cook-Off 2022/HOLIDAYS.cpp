#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,w;
        cin>>n>>w;

        int a[n];        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);

        int sum = 0;
        int count = n;
        int j = n-1;
        
        for(int i=j; i>=0; i--){
            if(sum < w ){
                sum = sum + a[i];
                count--;
            }     
        }
        cout<<count<<endl;
    }
}