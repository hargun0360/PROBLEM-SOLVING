#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
 ll n,t; cin>>n>>t;
 char s[n];
for(ll i=0;i<n;i++)
cin>>s[i];
while (t--){
    for(ll i=0;i<n;i++){
        if(s[i]=='B' && s[i+1]=='G'){
            char temp;
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
            i++;
        }
    }
}
for(ll i=0;i<n;i++){
    cout<<s[i];
}
    return 0;
}