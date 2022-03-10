#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
ll y,x; cin>>y;
for(ll i=y+1;i<10000;i++){
    set <ll> s;
    ll k=i;
    while(k>0){
        ll r=k%10;
        s.insert(r);
        k/=10;
    }
    if(s.size()==4){
        x=i;
        break;
    }
}
cout<<x;
 return 0;
}