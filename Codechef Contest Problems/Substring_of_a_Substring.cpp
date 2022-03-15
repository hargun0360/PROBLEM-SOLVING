#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s,p,q; cin>>p;
        ll l = s.length()/2;
        for(ll i=1;i<l;i++){
            p=s.substr(0,i);
            q=s.substr(l-i,i);
        }
        cout<<p<<"\n"<<q;
    }
    return 0;
}