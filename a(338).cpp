#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
  string s;
  cin>>s;
  ll n = s.length();
  if(s[0]>='A' && s[0] <= 'Z') {
    ll count = 0;
    for(ll i=1; i<n; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') continue;
      else {
        count = 1;
        break;
      }
    }
    if(count == 0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  } else cout<<"No"<<endl;
  
  return 0;
}