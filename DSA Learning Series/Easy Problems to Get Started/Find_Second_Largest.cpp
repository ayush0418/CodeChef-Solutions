#include<iostream>
using namespace std;

int main(){
    int A,B,C;
    cin>>A>>B>>C;

    if((A>B  && A<C) || (A>C && A<B)){
        cout<<A;
    }    
    if((B>A  && B<C) || (B>C && B<A)){
        cout<<B;
    }    
    if((C>B  && C<A) || (C>A && C<B)){
        cout<<C;
    }    

}