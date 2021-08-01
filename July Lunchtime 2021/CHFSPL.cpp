#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int a,b,c;
        cin >> a >> b >> c;

        if((a+b >= b+c) && (a+b>= c+a)){
            cout<<(a+b)<<endl;
        }
        else if((b+c>= c+a) && (b+c>=a+b)){
            cout<<(b+c)<<endl;
        }
        else if((c+a>=a+b) && (c+a>=b+c)){
            cout<<(c+a)<<endl;
        }
        else{
            return 0;
        }
    }
}