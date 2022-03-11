#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 ll t; cin>>t;
 while(t--){
     ll n; cin>>n;
     if(n<6){
         cout<<0<<endl;
     }else{
         ll k = (n+1)/6;
         cout<<k<<endl;
     }
     
 }
 return 0;
}