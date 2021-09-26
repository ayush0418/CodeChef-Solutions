#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int count = 0;
        if(s[0] == '0'){
            count = 1;
        }

        for(int i=0; i < (s.length()-1); i++){
            if((s[i] == '0') && (s[i+1] == '1')){
                count++;
            }
            else if((s[i] == '1') && (s[i+1] == '0')){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}