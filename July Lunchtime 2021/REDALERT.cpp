#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,d;
        cin>>n >> d>> h;
        
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int sum  = 0;
        for(int i=0;i<n;i++){
            if(a[i] > 0){
                sum = sum + a[i];
            }
            else if(a[i] == 0 && sum >= d){
                sum  = sum - d;
            }
            else if(a[i] == 0 && sum < d){
                sum = 0;
            }
            if(sum > h){
                cout<<"YES"<<endl;
                break;
            }
        }

        if(sum <= h){
            cout<<"NO"<<endl;
        }
    }
}