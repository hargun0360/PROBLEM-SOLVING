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
bool comp(pair<int,int> el1, pair<int,int> el2){
    if(el1.second<el2.second){
        return true;
    }
    else if(el1.second == el2.second) {
		if(el1.first > el2.first) {
			return true; 
		}else return false;
	}
    else return false;
}
int main(){
    fast_speed;
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        bool arr[11]={false};
        bool f=false;
        vector <pair<int,int>> v;
        for(int i=0;i<n;i++){
            ll x,y; cin>>x>>y;
            arr[y]=true;
            v.pb({x,y});
        }
        for(int i=1;i<11;i++){
            if(arr[i]==false){
                f=true;
                break;
            }
        }
        if(v.size()<10 || f){
            cout<<"MOREPROBLEMS\n";
        }else{
            ll sum=0,k=1;
            sort(v.begin(),v.end(),comp);
            for(int i=0;v.size();i++){
                if(v[i].second==k){
                    sum+=v[i].first;
                    k++;
                }
                if(k==11) break;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}