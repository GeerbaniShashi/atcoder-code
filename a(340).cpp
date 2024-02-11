#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll a,b,d;
  cin>>a>>b>>d;
  for(ll i=a; i<=b; i+=d){
    cout<<i<<" ";
  }
  cout<<endl;
  return 0;
}