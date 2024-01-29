#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  string s;
  cin>>s;
  ll n = s.length();
  s[n-1] = '4';
  cout<<s<<endl;
  return 0;
}