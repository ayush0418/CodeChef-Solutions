#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int A,B,C,D;
	    cin>>A>>B>>C>>D;
	    
	    if(A+C == 180 || B+D == 180){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}