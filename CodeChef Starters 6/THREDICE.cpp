#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        double X, Y;
        cin >> X >> Y;
        int sum  = X+Y;

        int p = 6-sum;
        if(p<0) p = 0;

        float ans = p/6.0;

        cout<<ans<<endl;
    }
}