#include<iostream>
#include<algorithm>      //  --> sort function...
using namespace std;

void show(int a[], int array_size){
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
}

int main(){
    int n;
    cin>>n;
    int a[n];
    int m =__LONG_MAX__;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0;i<n;i++){
        a[i] = a[i]*(n-i);
    }
    sort(a,a+n);
    cout<<a[n-1]<<endl;

}