#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll n;
  cin>>n;
  string s="";
  ll temp = n;
  while(temp != 0){
    ll rem = temp%2;
    s = s + to_string(rem);
    temp/=2;
  }
  ll count = 0;
  for(ll i=0; i<s.length(); i++){
    if(s[i]=='0') count++;
    else break;
  }
  cout<<count<<endl;
  return 0;
}