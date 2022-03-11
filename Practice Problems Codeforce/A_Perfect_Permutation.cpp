#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 ll n; cin>>n;
 vector<ll> v;
 if(n%2==1){
     cout<<-1;
 }else{
     for(int i=1;i<=n;i++){
         v.push_back(i);
     }
     for(int i=0;i<n;i++){
         int temp;
         temp=v[i];
         v[i]=v[i+1];
         v[i+1]=temp;
         i++;
     }
     for(auto it:v){
         cout<<it<<" ";
     }
 }
 return 0;
}