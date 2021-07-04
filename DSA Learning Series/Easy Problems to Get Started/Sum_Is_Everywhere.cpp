#include<iostream>
using namespace std;

int main(){
    long long n, even = 0, odd = 0;
    cin>>n;

    for(int i=1;i<=n;i++){
        even = even + 2*i;
        odd = odd + 2*i-1;
    }
    cout<<odd<<" "<<even;
}

/*

i=1     02   0+1 = 01
i=2     06   1+3 = 04
i=3     12   4+5 = 09
i=4     20   9+7 = 16

*/