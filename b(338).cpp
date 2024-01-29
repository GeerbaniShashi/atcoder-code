#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  string s;
  cin>>s;
  ll n = s.length();
  char ch;
  sort(s.begin(), s.end());
  map<char,ll>mp;
  map<char,ll>::iterator it;
  for(ll i=0; i<n; i++) {
    mp[s[i]]++;
  }
  ll count = INT_MIN;
  char x;
  for(it = mp.begin(); it != mp.end(); it++) {
      if((*it).second > count) {
          count = (*it).second;
          x = (*it).first;
      }
  }
  cout<<x<<endl;
  return 0;
}