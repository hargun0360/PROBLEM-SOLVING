// ਧੰਨੁ ਧੰਨੁ ਰਾਮਦਾਸ ਗੁਰੁ ਜਿਨਿ ਸਿਰਿਆ ਤਿਨੈ ਸਵਾਰਿਆ ॥ 
// ਪੂਰੀ ਹੋਈ ਕਰਾਮਾਤਿ ਆਪਿ ਸਿਰਜਣਹਾਰੈ ਧਾਰਿਆ ॥ 
// ਸਿਖੀ ਅਤੈ ਸੰਗਤੀ ਪਾਰਬ੍ਰਹਮੁ ਕਰਿ ਨਮਸਕਾਰਿਆ ॥ 
// ਅਟਲੁ ਅਥਾਹੁ ਅਤੋਲੁ ਤੂ ਤੇਰਾ ਅੰਤੁ ਨ ਪਾਰਾਵਾਰਿਆ ॥ 
// ਜਿਨੀ ਤੂੰ ਸੇਵਿਆ ਭਾਉ ਕਰਿ ਸੇ ਤੁਧੁ ਪਾਰਿ ਉਤਾਰਿਆ ॥ 
// ਲਬੁ ਲੋਭੁ ਕਾਮੁ ਕ੍ਰੋਧੁ ਮੋਹੁ ਮਾਰਿ ਕਢੇ ਤੁਧੁ ਸਪਰਵਾਰਿਆ ॥ 
// ਧੰਨੁ ਸੁ ਤੇਰਾ ਥਾਨੁ ਹੈ ਸਚੁ ਤੇਰਾ ਪੈਸਕਾਰਿਆ ॥ 
// ਨਾਨਕੁ ਤੂ ਲਹਣਾ ਤੂਹੈ ਗੁਰੁ ਅਮਰੁ ਤੂ ਵੀਚਾਰਿਆ ॥ 
// ਗੁਰੁ ਡਿਠਾ ਤਾਂ ਮਨੁ ਸਾਧਾਰਿਆ ॥ 
// ਧੰਨੁ ਧੰਨੁ ਰਾਮਦਾਸ ਗੁਰੁ ਜਿਨਿ ਸਿਰਿਆ ਤਿਨੈ ਸਵਾਰਿਆ ॥ 
// ਧੰਨੁ ਧੰਨੁ ਰਾਮਦਾਸ ਗੁਰੁ ਜਿਨਿ ਸਿਰਿਆ ਤਿਨੈ ਸਵਾਰਿਆ ॥ 
 
 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#define ll long long int
#define mpp make_pair
#define pb push_back
#define fast_speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
ll MOD = 998244353;
double eps = 1e-12;
using namespace std;
 
int main(){
    fast_speed;
    ll t; cin>>t;
    while(t--){
        vector <ll> v;
        ll s1,s2,s3,s4; cin>>s1>>s2>>s3>>s4;
        v.pb(s1);v.pb(s2);v.pb(s3);v.pb(s4);
        sort(v.begin(),v.end());
        ll m1=max(s1,s2);
        ll m2=max(s3,s4);
        if((m1==v[2] || m1==v[3]) and (m2==v[2] || m2==v[3])){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}