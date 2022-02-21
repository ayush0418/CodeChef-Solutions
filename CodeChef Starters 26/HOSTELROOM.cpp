#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int sum = x;
        int max = x;
        for(int i=0;i<n;i++){
            sum = sum + a[i];
            if(sum > max){
                max = sum;
            }
        }
        cout<<max<<endl;
    }
}