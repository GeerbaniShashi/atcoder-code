#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  string s;
  cin>>s;
  ll n = s.length(), count;
  for(ll i=n-1; i>=0; i--){
    if(s[i]=='.') {
      count = i;
      break;
    }
  }
  for(ll i=count+1; i<n; i++){
    cout<<s[i];
  }
  cout<<endl;
  return 0;
}