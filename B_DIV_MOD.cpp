#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){

    ll t; cin>>t;
    while(t--){
        ll max=-1,s=0;
        ll l,r,a; cin>>l>>r>>a;
        ll p,q;
        for(ll i=l;i<=r;i++){
            if(i%a==0){
                p=i; 
            }
            q=i%a;
            if(q>max){
                max=q;
            }

            
            
            
        }
        cout<<max + p<<endl;
    }
 
 return 0;
}