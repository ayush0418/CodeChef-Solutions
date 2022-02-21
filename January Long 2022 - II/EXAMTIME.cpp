#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int d[3], s[3];
        int sumD=0, sumS=0;
        for(int i=0;i<3;i++){
            cin>>d[i];
            sumD = sumD + d[i];
        }
        for(int i=0;i<3;i++){
            cin>>s[i];
            sumS = sumS + s[i];
        }

        if(sumD > sumS){
            cout<<"DRAGON"<<endl;
        }
        else if(sumD < sumS){
            cout<<"SLOTH"<<endl;
        }
        else if(d[0] > s[0]) {
            cout<<"DRAGON"<<endl;
        }
        else if(d[0] < s[0]){
            cout<<"SLOTH"<<endl;
        }
        else if(d[1] > s[1]) {
            cout<<"DRAGON"<<endl;
        }
        else if(d[1] < s[1]){
            cout<<"SLOTH"<<endl;
        }
        else{
            cout<<"TIE"<<endl;
        }
    }
}