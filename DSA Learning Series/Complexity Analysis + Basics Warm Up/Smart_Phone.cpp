#include<iostream>
#include<algorithm>      //  --> sort function...
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0;i<n;i++){
        a[i] = a[i]*(n-i);
    }
    sort(a,a+n);
    cout<<a[n-1];
}