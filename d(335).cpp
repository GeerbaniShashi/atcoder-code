#include <bits/stdc++.h> 
#define ll long long int 
using namespace std; 
void solve(ll s ){ 
  ll mat[ s ][ s ] = {0}; 
  ll i, j, m, n, p, q, num; num = 1; 
  
  i = 0; j = 0; m = 0; 
  // row index lower limit 
  n = s - 1; 
  p = 0; 
  q = s - 1; 
  while ( num <= s * s ) { 
     for ( j = p; j <= q; j++ ) { 
       mat[ m ][ j ] = num; 
       num = num + 1; } 
       m = m + 1;
        for ( i = m; i <= n; i++ ) { 
          mat[ i ][ q ] = num;
           num = num + 1; } 
           q = q - 1; 
           for ( j = q; j >= p; j-- ) { 
             mat[ n ][ j ] = num; 
             num = num + 1; } 
             n = n - 1;  
              for ( i = n; i >= m; i-- ) { 
                mat[ i ][ p ] = num; 
                num++; } 
                p = p + 1; } 
               for ( i = 0; i < s; i++ ) {
                  for ( j = 0; j < s; j++ ) {
                     if(mat[i][j] == s*s) 
                     printf("T "); 
                     else printf("%lld ", mat[i][j]); 
                     }
                      printf("\n"); } 
                      } 
 int main(){ 
   ll n;
   cin>>n; 
   solve( n ); 
   }