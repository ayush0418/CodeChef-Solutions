#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double A,B;
        cin >> A >> B;
        int x;
        int ans = 0;
        
        if(A==B){
            x = (int)A;
        }
        else{
            x = (int)A+1;
        }

        double a = (B-x)/2;
        double b = (x-A)/2;
        ans = int(ceil(a)+ceil(b));
        cout<<ans<<endl;   
    }
}