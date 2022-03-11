#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 ll t; cin>>t;
 while(t--){
     ll n,x; cin>>n>>x;
     ll a,b,c;
     if(x%3==0){
         a=x/3;
         b=0;
         if(a+b>n){
             cout<<"NO"<<endl;
         }else if(a+b == n){
             cout<<"YES"<<endl;
             c=0;
             cout<<a<<" "<<b<<" "<<c<<endl;
         }else{
             cout<<"YES"<<endl;
             c=n-(a+b);
             cout<<a<<" "<<b<<" "<<c<<endl;
         }
     }
     if(x%3==1){
         a=x/3+1;
         b=3*a-x;
         if(a+b>n){
             cout<<"NO"<<endl;
         }else if(a+b == n){
             cout<<"YES"<<endl;
             c=0;
             cout<<a<<" "<<b<<" "<<c<<endl;
         }else{
             c=n-(a+b);
             cout<<"YES"<<endl;
             cout<<a<<" "<<b<<" "<<c<<endl;
         }
     }
     if(x%3==2){
         a=x/3+1;
         b=3*a-x;
         if(a+b>n){
             cout<<"NO"<<endl;
         }else if(a+b == n){
             cout<<"YES"<<endl;
             c=0;
             cout<<a<<" "<<b<<" "<<c<<endl;
         }else{
             c=n-(a+b);
             cout<<"YES"<<endl;
             cout<<a<<" "<<b<<" "<<c<<endl;
         }
     }
 }
 return 0;
}