#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;

        int time = 0;

        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                time = time + a;
            }
            else if(s[i] == '1'){
                time = time + b;
            }
        }
        cout<<time<<endl;
    }
}