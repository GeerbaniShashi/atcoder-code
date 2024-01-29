#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  string s;
  cin>>s;
  string st="";
  ll n = s.length();
  for(ll i=0; i<n; i++){
    if(s[i]==s[i+1]) continue;
    else st+=s[i];
  }
  if(st=="ABC"||st=="A"||st=="B"||st=="C"||st=="AB"||st=="BC"||st=="AC")
  cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}