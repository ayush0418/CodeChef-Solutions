#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;

        if(a1 == a2 && a2 == a3 && a3 == a4){
            cout<<"0"<<endl;
        }
        else if((a1 == a2 && a2 == a3)  || (a2==a3 && a3==a4) || (a1 == a2 && a2 == a4) || (a1 == a3 && a3 == a4)){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
        
    }
}