#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll n,k;
  cin>>n>>k;
  ll a[n];
  for(ll i=0; i<n; i++){
    cin>>a[i];
    if(a[i]%k==0) cout<<a[i]/k<<" ";
  }
  cout<<endl;
  return 0;
}