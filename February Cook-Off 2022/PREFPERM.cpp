#include<bits/stdc++.h>
using namespace std;

void solve(){
     int n,k;
        cin>>n>>k;
        int a[k];
        
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        
        sort(a,a+k);

        vector<int> vec;
        int prev = 0;
        
        for(int i=0;i<k;i++){
            for(int j=a[i];j>prev;j--){
                vec.push_back(j);
            }
            prev = a[i];
        }
        
        for(auto it = vec.begin();it != vec.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
}
int main(){
    int t;
    cin>>t;

    while(t--){
       solve();
    }
}