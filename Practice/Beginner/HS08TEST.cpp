#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int w;
    double b;
    cin>>w>>b;

    if(w%5 == 0 && b>=(w+0.5)){
        std::cout << std::fixed << std::setprecision(2) << b-w-0.50 << endl;
    }
    else{
        std::cout << std::fixed << std::setprecision(2) << b << endl;
    }
}