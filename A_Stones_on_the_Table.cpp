#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 ll n; cin>>n;
 ll ct=0;
 char s[n];
 for(ll i=0;i<n;i++){
     cin>>s[i];
 }
 for(ll i=0;i<n;i++){
     if(s[i]==s[i+1]){
         ct++;
     }
 }
 cout<<ct;
 return 0;
}