#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;    
        cin>>a>>b>>c;

        if(c<a  && c<b){
            cout<<"Alice"<<endl;
        }
        else if(b<c && b<a){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }

}