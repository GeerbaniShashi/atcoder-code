#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll n;
  cin>>n;
  ll a[n],b[n];
  ll sum1=0,sum2=0;
  for(ll i=0; i<n; i++){
    cin>>a[i]>>b[i];
    sum1+=a[i];
    sum2+=b[i];
  }
  if(sum1 > sum2) cout<<"Takahashi"<<endl;
  else if(sum1 < sum2) cout<<"Aoki"<<endl;
  else cout<<"Draw"<<endl;
}