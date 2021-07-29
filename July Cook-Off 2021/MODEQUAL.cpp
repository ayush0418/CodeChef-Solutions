#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int min = *min_element(a.begin(),a.end()); 
        int cnt = count(a.begin(),a.end(),min);


        bool res = false;
        for(int i=0;i<n;i++){
            if(a[i] != min){
                if( a[i] <= 2*min ){
                    res = true;
                    break;
                }
            }
        }
        if(res){
            cout<<n<<endl;
        }
        else{
            cout<<n-cnt<<endl;
        }

    }
}