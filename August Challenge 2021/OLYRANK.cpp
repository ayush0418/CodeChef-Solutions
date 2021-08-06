#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,b1,c1,a2,b2,c2;
        cin>>a1>>b1>>c1>>a2>>b2>>c2;

        int sum1, sum2;
        sum1 = a1+b1+c1;
        sum2 = a2+b2+c2;

        if(sum1>sum2){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
}