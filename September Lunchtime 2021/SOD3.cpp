#include<bits/stdc++.h>
typedef unsigned int ui;
typedef unsigned long long int ul;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ui test;
    cin>>test;
    while(test--){
        ul l,r, ans = 0;
        cin>>l>>r;

        if(l%3)  {  l = l - l%3 + 3; }
        
        if(r%3)  {  r = r - r%3;     }

        if(l > r) cout<<ans<<"\n";
        else{
            l = l/3;
            r = r/3;
            ans = (r - l) + 1;
            cout<<ans<<endl;
        }
    }
    return 0;
}