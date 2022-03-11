#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 ll t; cin>>t;
 while(t--){
     char s[5],t[5];
     for(int i=0;i<5;i++){
         cin>>s[i];
     }
     for(int i=0;i<5;i++){
         cin>>t[i];
     }
     for(int i=0;i<5;i++){
         if(s[i]==t[i]){
             cout<<"G";
         }else{
             cout<<"B";
         }
     }
     cout<<"\n";
 }
return 0;
}