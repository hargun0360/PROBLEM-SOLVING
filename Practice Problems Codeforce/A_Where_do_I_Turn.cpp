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
        ll x1,y1,x2,y2,x3,y3; 
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        double y;
        if(x1==0 and x2==0){
            if(x3==0){
                cout<<"TOWARDS";
            }else if(x3>x1){
                cout<<"RIGHT";
            }else{
                cout<<"LEFT"; 
            }
        }else{
            ll m=(y2-y1)/(x2-x1);
            ll b=(x2-x1);
            y=m*(x3-x1)+y1;
            if(y==y3){
            cout<<"TOWARDS";
            return 0;
            }
            if(m>=0) y=-y;
            if((y>y3)){
            cout<<"RIGHT";
            }else{
            cout<<"LEFT"; 
            }
        }
        return 0;
    }