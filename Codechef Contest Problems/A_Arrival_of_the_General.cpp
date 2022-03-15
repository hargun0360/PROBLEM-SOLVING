#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n; cin>>n;
    vector<ll> v;
    for(int i=1;i<=n;i++){
        ll x; cin>>x;
        v.push_back(x);
    }

    vector <ll> v1(v);
    for(auto it:v1){
        cout<<it<<" ";
    }
    sort(v1.begin(),v1.end());
    ll max=v1[v1.size()-1];
    ll min=v1[0];
    ll g,h;
    for(int i=0;i<v.size();i++){
        if(v[v.size()-1-i]==max){
            g=i;
        }else if(v[i]==min){
            h=i;
        }
    }
    // cout<<g<<" "<<h;
    // if(n%2==0){
    //     cout<<(v.size()-1)-h + g;
    // }else{
    //     cout<<(v.size()-2)-h + g;
    // }

    return 0;
}