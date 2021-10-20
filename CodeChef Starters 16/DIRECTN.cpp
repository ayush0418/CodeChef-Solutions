#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag = 0;

        for(int i=0;i<s.size()-1;i++){
            if(s[i] == s[i+1]){
                cout<<"YES"<<endl;
                flag =1;
                break;
            }
        }

        if(!flag){
            cout<<"NO"<<endl;
        }
    }
}