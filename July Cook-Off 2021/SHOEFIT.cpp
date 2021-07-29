#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int A,B,C;
        cin>>A>>B>>C;

        if((A == 0 && B == 0 && C==0) || (A == 1 && B==1 && C==1)){
            cout<<"0"<<endl;
        }
        else {
            cout<<"1"<<endl;
        }
    }
}