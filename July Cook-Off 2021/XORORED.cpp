#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        vector<int>a(n);
        int min = INT_MIN;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        min = *max_element(a.begin(),a.end());
        
        int ans = 0;

        for(int i=0;i<n;i++){
            a[i] = a[i]^min;
            ans = ans|a[i];
        } 

        cout<< min <<" "<<ans<<endl;
    } 
}