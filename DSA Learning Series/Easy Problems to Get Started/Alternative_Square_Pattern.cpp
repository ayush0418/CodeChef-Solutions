#include<iostream>
using namespace std;

int main(){
    int n,z=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        
        if(i%2 != 0){
            
            for(int j=1;j<=5;j++){
                cout<<j + z*10<<" ";
            }
            z++;
        }

        else if(i%2 == 0){
            for(int k=10;k>5;k--){
                cout<<k+i*5 - 10<<" ";
            }
        }
        cout<<endl;
    }
}