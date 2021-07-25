#include<iostream>
#define endl '\n'
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int E,K;
        cin >> E >> K;
        int x = E;
        int count = 0;

        while(x!=0){
            x = x/K;
            count++;
        }
        cout<<count<<endl;
    }
}