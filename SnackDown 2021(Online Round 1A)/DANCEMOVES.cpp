#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        int z = y - x;
        if(z>=0){
            if(z%2 == 0){
                cout<<z/2<<endl;
            }
            else{
                cout<<(z/2 + 2)<<endl;
            }
        }
        else{
            z = -z;
            cout<<z<<endl;
        }
    }
}