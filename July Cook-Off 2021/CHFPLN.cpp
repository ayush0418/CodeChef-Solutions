#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        map<int, int>freq;
        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }

        int ans = 0;
        for(int i=1;i<=freq.size();i++){
            if(freq[i] != 0){
                ans = ans + min(freq[i] , i-1);
            }
        }

        cout<<ans<<'\n';
    }
}