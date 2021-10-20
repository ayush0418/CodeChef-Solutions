#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a, pair<int,int> &b){
    return (a.second < b.second);
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> a;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back({x,i});
        }
        sort(a.begin(),a.end());


        int k = 0;
        for(int i=0;i<n;i++){
            if(a[i].first > k){
                a[i].first = k;
                k++;
            }
        }

        sort(a.begin(),a.end(),cmp);

        for(int i=0;i<n;i++){
            cout<<a[i].first<<" ";
        }

        cout<<endl;
    }
}