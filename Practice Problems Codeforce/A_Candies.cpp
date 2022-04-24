#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#define ll long long int
#define mpp make_pair
#define pb push_back
#define fast_speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
ll MOD = 998244353;
double eps = 1e-12;
using namespace std;
 
int main(){
    fast_speed;
    ll t; cin>>t;
    while(t--){
      ll n; cin>>n;
      for(int k=2; k<=10000000;k++){
          ll s=pow(2,k) - 1;
          if(n%s==0){
              ll x = n/s;
              cout<<x<<endl;
              break;
          }
      }
    }
    return 0;
}