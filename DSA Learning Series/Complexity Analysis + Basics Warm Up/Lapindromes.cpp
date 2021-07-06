#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int len = s.size(), count = 0;
        int l[26],r[26];

        memset(l,0,sizeof(l));
        memset(r,0,sizeof(r));


        for(int i=0;i<len/2;i++){
            l[s[i]-97]++;
        }
        for(int i=(len+1)/2;i<len;i++){
            r[s[i]-97]++;
        }

        for(int i=0;i<26;i++)
        {
            if(l[i]!=r[i]){
                count = 1;
            }
        }

        if(count == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}