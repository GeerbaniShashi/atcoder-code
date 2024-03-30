#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	// your code goes here
    string s;
    cin>>s;
    set<string>st;
    ll n = s.length();
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<n; j++) {
            st.insert(s.substr(i,j));
        }
    }
    cout<<st.size()<<endl;
    
    return 0;
}
