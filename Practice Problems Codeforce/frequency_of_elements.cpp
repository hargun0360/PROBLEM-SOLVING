#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    
    ll n; cin>>n;
    vector<ll> v;
    ll max=0;
    for (auto i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    } 
    map <int,int> mpp;
    for(auto it:v){
        mpp[it]++; // mp[1]=1
        if(mpp[it] > max){
            max=mpp[it];
        }
    }
    cout<<max<<endl;


    return 0;
}