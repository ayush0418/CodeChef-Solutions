#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int R1,R2,W1,W2,C1,C2;
        cin >> R1 >> W1 >> C1;
        cin >> R2 >> W2 >> C2;

        int countA = 0, countB = 0;
        
        if(R1>R2){ countA++; }
        else{ countB++; }

        if(W1>W2){ countA++; }
        else{ countB++; }

        if(C1>C2){ countA++; }
        else{ countB++; }


        if(countA > countB){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }


    }
}