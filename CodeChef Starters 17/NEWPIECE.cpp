#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    int a,b,p,q;
    while(t--){
        
        cin>>a>>b>>p>>q;

        int x = a+b;
        int y = p+q;

        if(a == p && b == q){
            cout<<"0\n";
        }
        else if( (x%2 == 0 && y%2 !=0) || (x%2 != 0 && y%2 == 0) ){
            cout<<"1\n";
        }
        else if((x%2 == 0  && y%2 == 0) || x%2 != 0 && y%2 !=0){
            cout<<"2\n";
        }
    }
}