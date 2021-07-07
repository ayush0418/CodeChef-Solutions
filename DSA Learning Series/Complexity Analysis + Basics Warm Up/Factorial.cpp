#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;

        while(n>=5){
            n = n/5;
            c = c + n;
        }
        cout<<c<<endl;
    }
}