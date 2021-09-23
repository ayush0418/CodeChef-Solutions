#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[7];
        for(int i=0;i<7;i++){
            cin>>a[i];
        }

        int sunny = 0;
        int rainy = 0;

        for(int i=0;i<7;i++){
            if(a[i] == 1){
                sunny++;
            }
            else
                rainy++;
        }

        if(sunny > rainy){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}