#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int sum = 0;
        int count = 0;

        for(int i=1;i<=n;i++){
            sum = sum + i;
            count++;
        }
        if(sum %2 == 0){
            cout<<count<<endl;
        }
        else{
            cout<<(count-1)<<endl;
        }
    }
}