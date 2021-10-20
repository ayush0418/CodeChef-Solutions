#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a[5];
        for(int i=0;i<5;i++){
            cin>>a[i];
        }
        int ind=0, eng=0, draw=0;
        for(int i=0;i<5;i++){
            if(a[i] == 0){
                draw++;
            }
            else if(a[i] == 1){
                ind++;
            }
            else{
                eng++;
            }
        }
        if(ind > eng){
            cout<<"INDIA"<<endl;
        }
        else if(eng > ind){
            cout<<"ENGLAND"<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
}