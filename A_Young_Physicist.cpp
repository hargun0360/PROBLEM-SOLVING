#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){

    ll n; cin>>n;
    ll sum=0;
    ll sx =0, sy=0 , sz=0;
    ll x,y,z;
    while(n--){
        cin>>x>>y>>z;
        sx+=x;
        sy+=y;
        sz+=z;
    }
    if(sx==0&& sy==0 && sz==0)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
 return 0;
}