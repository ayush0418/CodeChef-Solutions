#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }

        cout<<endl;
        
    }

}
/*

    *         --> i=1;j=4
   **         --> i=2;j=3
  ***         --> i=3;j=2
 ****         --> i=4;j=1
*****         --> i=5;j=0

*/