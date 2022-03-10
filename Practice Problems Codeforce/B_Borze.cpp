#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 string s; cin>>s;
 for(ll i=0;i<s.length();i++){
     if(s[i]=='.'){
         cout<<0;
     }else if(s[i]=='-'){
         if(s[i+1]=='-')
         cout<<2;
         else cout<<1;
         i++;
     }
 }
 return 0;
}