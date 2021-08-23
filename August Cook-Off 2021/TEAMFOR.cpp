#include<iostream>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        string s,t;
        cin>>s>>t;

        int prog=0, eng=0, both=0, rem=0;
        
        for(int i=0;i<n;i++){
            if(s[i] == '1' && t[i] == '1'){
                both++;
            }
            else if(s[i] == '1'){
                prog++;
            }
            else if(t[i] == '1'){
                eng++;
            }
            else {
                rem++;
            }
        }
        
        int ans = min(prog,eng);

        rem += abs(prog - eng);
	    if (both >= rem) {
		    ans += (both + rem) / 2;
	    } else {
		    ans += both;
	    }
	    cout << ans << '\n'; 
    }
}