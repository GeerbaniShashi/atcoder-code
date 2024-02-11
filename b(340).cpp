#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll q;
  cin>>q;
  vector<ll>v;
  while(q--){
    ll x;
    cin>>x;
    
    if(x == 1){
      ll y;
      cin>>y;
      v.push_back(y);
    } else if(x == 2){
      ll k;
      cin>>k;
      cout<<v[v.size()-k]<<endl;
    }
  }
  return 0;
}